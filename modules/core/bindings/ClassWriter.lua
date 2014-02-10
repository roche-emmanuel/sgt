local Class = require("classBuilder"){name="ClassWriter",bases="bindings.FunctionWriter"};

local rm = require "bindings.ReflectionManager"
local tm = require "bindings.TypeManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

local Set = require "std.Set"

function Class:initialize(options)
	self._class = options and options.class;
	self:check(self._class,"Invalid class object.")
end

function Class:writeFile()
	local buf = self;
	local class = self._class;
	
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	local cshortname = class:getName()
	local external = class:isExternal()
	local isVirtual = class:isVirtual()
	
	self:info_v("Writing file for ",not external and "NOT" or ""," external class ",cname)

	-- Check if an equality operator is provided:	
	local equalityOperatorProvided=false
	for _,v in class:getValidPublicFunctions():sequence() do
		local lname = v:getLuaName()
		if lname == "__eq" then
			equalityOperatorProvided=true
			break;
		end
	end
	
	-- self:info_v("Passed valid public functions...")
	
	for _,v in class:getValidPublicOperators():sequence() do
		local lname = v:getLuaName()
		if lname == "__eq" then
			equalityOperatorProvided=true
			break;
		end
	end

	-- we enforce NOT creating the equality metamethod if this is not a base class:
	if class:getNumBases() > 0 then
		equalityOperatorProvided=true -- the equality metamethod is provided in the parent base.
	end
	
	local absoluteBases = Set()
	
	if not external then
		-- self:info_v("Testing virtual class...")
		local bclass = class:getNumBases()==0 and class or class:getFirstAbsoluteBase()
		local bname = tm:getExternalBase(bclass:getFullName()) or tm:getBaseTypeMapping(bclass:getFullName())
		local hash = utils.getHash(bname)
		
		class:addVariableGetters()
		class:addVariableSetters()
		
		if isVirtual then 
			buf:writeLine("#include <luna/wrappers/wrapper_".. wname ..".h>")
			buf:newLine()
			-- self:info_v("Adding wrapper constructors...")
			class:addWrapperConstructors()
			
			class:addDefaultVirtuals();
		end
		
		-- self:info_v("Virtual class tested for: ",cname)
		
		buf:writeSubLine("class luna_wrapper_${1} {",wname) --cshortname)
		buf:writeLine("public:")
		buf:pushIndent()
		buf:writeSubLine("typedef Luna< ${1} > luna_t;",cname)
		buf:newLine()
		
		if isVirtual then
			buf:writeLine(snippets:getTableAccessCode(bname,hash))
		end
		
		if not equalityOperatorProvided then
			-- provide our own equalityOperator:
			buf:writeLine(snippets:getEqualityCode(bname,hash))
		end
		
		buf:writeLine(snippets:getVoidCastingCode(cname,bname,hash))

		if class:getNumBases()==0 then
			-- No parents for this class:
			buf:writeLine("// Base class dynamic cast support:")
			-- buf:writeSubLine(dynamic_caster_template,cname)
			buf:writeLine(snippets:getDynamicCasterCode(class))
		else
			buf:writeLine("// Derived class converters:")
			for k,bclass in class:getAbsoluteBases():sequence() do
				if not im:ignoreConverter(bclass) then
					buf:writeSubLine(snippets:getConverterCode(class,bclass));
				end
			end
		end
		buf:newLine()
		
		local typeChecker = self._typeChecker
		local writeBind = self._writeBind
		local writeOverloadBind = self._writeOverloadBind

		local cons = class:getValidPublicConstructors();
		
		if class:isAbstract() then
			-- remove non wrapper constructors:
			local list = Set();
			for _,func in cons:sequence() do
				if not func:isWrapper() then
					list:push_back(func)
				end
			end
			
			for _,func in list:sequence() do
				class:removeFunction(func)
			end
		end

		cons = class:getValidPublicConstructors();
		
		buf:writeLine("// Constructor checkers:")
		buf:writeForAll(cons,typeChecker)
		buf:newLine()
		
		buf:writeLine("// Function checkers:")
		buf:writeForAll(class:getValidPublicFunctions(),typeChecker)
		buf:newLine()
		
		buf:writeLine("// Operator checkers:")
		buf:writeLine("// (found " .. class:getValidPublicOperators():size() .." valid operators)")
		buf:writeForAll(class:getValidPublicOperators(),typeChecker)
		buf:newLine()
		
		buf:writeLine("// Constructor binds:")
		buf:writeForAll(cons,writeBind,writeOverloadBind)
		buf:newLine()
		
		buf:writeLine("// Function binds:")
		buf:writeForAll(class:getValidPublicFunctions(),writeBind,writeOverloadBind)
		buf:newLine()
		
		buf:writeLine("// Operator binds:")
		buf:writeForAll(class:getValidPublicOperators(),writeBind,writeOverloadBind)
		buf:newLine()
	
		-- Write the multi base converters if applicable:
		local fbname = class:getFirstAbsoluteBase():getFullName()	
		
		if class:getNumBases() > 1 then
			for _,base in class:getBases():sequence() do
				if fbname ~= base:getFirstAbsoluteBase():getFullName() and base:isValidForWrapping() then
					absoluteBases:push_back{base:getFirstAbsoluteBase():getFullName(),base:getFirstAbsoluteBase():getName()}
				end
			end
		end

		for _,val in absoluteBases:sequence() do
			buf:writeLine(snippets:getBaseCasterCode(fbname,val[1]))
		end
		
		-- Write list of public variables:
		--[[buf:writeLine("// public variables:")
		local vars = class:getVariables{"Public"}
		for _,var in vars:sequence() do
			if var:getType() then
				self:writeSubLine("// ${1} ${2};",var:getType():getName(),var:getName());
			end
		end	
		buf:newLine()
		]]
		
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
	

		
		-- implement the lunatraits constructor:
		buf:writeSubLine("${1}* LunaTraits< ${1} >::_bind_ctor(lua_State *L) {",cname)
		buf:pushIndent()
		--if not class:isAbstract() then
			if class:getValidPublicConstructors():empty() then
				buf:writeLine("return NULL; // No valid default constructor.")
				--buf:writeSubLine("return new ${1}(); // No default constructor:",cname)
			elseif class:onStackOnly() then
				buf:writeLine("return NULL; // On stack only class.")	
			else
				buf:writeSubLine("return luna_wrapper_${1}::_bind_ctor(L);",wname) --cshortname)
			end
		--else
			
			-- write the abstract methods:
			local funcs = class:getAbstractFunctions()

			if not funcs:empty() then
				buf:writeLine("// Note that this class is abstract (only lua wrappers can be created).")
				buf:writeLine("// Abstract methods:")
				for _,func in funcs:sequence() do
					buf:writeLine("// ".. func:getPrototype(true,true,true))
				end
			end
		--end
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
		
		-- implement the lunatraits destructor:
		buf:writeSubLine("void LunaTraits< ${1} >::_bind_dtor(${1}* obj) {",cname)
		buf:pushIndent()
		local realclass = class
		if class:getMappedType() then
			realclass = class:getMappedType():getFirstBase() or realclass
		end
		
		local deleter = class:getDeleter() -- only check for deleters on the class, not on the mapped types.
		if type(deleter)=="string" then
			buf:writeSubLine(deleter,"obj");
		elseif realclass:onStackOnly() then
			buf:writeLine("//delete obj; // stack only class.")	
		elseif not realclass:getDestructor() or realclass:getDestructor():isPublic() then
			buf:writeLine("delete obj;")
		else
			buf:writeLine("//delete obj; // destructor protected.")	
		end
	
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
	end
	
	-- self:info_v("Done testing external status.")
	
	local mname = rm:getDefaultModuleName()
	
	-- build the parent list:
	local parentList = ""
	for k,v in class:getBases():sequence() do
		if v:isValidForWrapping() then
			parentList = parentList .. '"'.. v:getFullLuaName(true) .. '", '; --v:getFullName():gsub("::",".")
		end
	end
	
	-- Write the lunatraits properties:
	local tname = class:getMappedType() and class:getTypeName() or class:getFullLuaName()
	
	buf:writeSubLine('const char LunaTraits< ${1} >::className[] = "${2}";',cname,corr:correct("filename",tname));
	buf:writeSubLine('const char LunaTraits< ${1} >::fullName[] = "${1}";',class:getTypeName());
	buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname,class:getModule() or mname);
	buf:writeSubLine('const char* LunaTraits< ${1} >::parents[] = {${2}0};',cname,parentList);
	buf:writeSubLine('const int LunaTraits< ${1} >::hash = ${2};',cname,utils.getHash(class:getFullName()));
	buf:writeSubLine('const int LunaTraits< ${1} >::uniqueIDs[] = {${2},0};',cname,table.concat(class:getAllAbsoluteBaseHashes(),", "));
	buf:newLine()
	
	if not external then
		-- Write the method table:
		buf:writeSubLine("luna_RegType LunaTraits< ${1} >::methods[] = {",cname)
		buf:pushIndent()
			-- write all the methods available here with no overloads:
			local funcs = {}
			for _,v in class:getValidPublicFunctions():sequence() do
				local lname = v:getLuaName()
				if not funcs[lname] then
					buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,lname)
					funcs[lname] = true
				end
			end
			local funcs = {}
			for _,v in class:getValidPublicOperators():sequence() do
				local lname = v:getLuaName()
				if not funcs[lname] then
					buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,lname)
					funcs[lname] = true
				end
			end	
			
			if class:getNumBases()==0 then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"dynCast")
			end
			
			if not equalityOperatorProvided then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"__eq")			
			end
			
			buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"fromVoid")
			buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"asVoid")
			
			if isVirtual then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,"getTable")			
			end
			
			for _,val in absoluteBases:sequence() do
				local wname2 = corr:correct("filename",val[1])
				buf:writeSubLine('{"as${3}", &luna_wrapper_${1}::_bind_baseCast_${2}},',wname,wname2,val[2])
			end
			
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
		
		-- write the converter table:
		buf:writeSubLine("luna_ConverterType LunaTraits< ${1} >::converters[] = {",cname)
		buf:pushIndent()
	
			-- Write the absolute base converters:
			if class:getNumBases() > 0 then
				for k,bclass in class:getAbsoluteBases():sequence() do
					if not im:ignoreConverter(bclass) then
						buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_cast_from_${3}},',wname,bclass:getFullName(),bclass:getName())
					end
				end
			end
			
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
		
		-- Write the enum table:
		buf:writeSubLine("luna_RegEnumType LunaTraits< ${1} >::enumValues[] = {",cname)
		buf:pushIndent()
			-- write all the methods available here with no overloads:
			local vals = {}
			for k1,enum in class:getEnums():sequence() do
				self:checkType(enum,require"reflection.Enum")
			
				local values = enum:getValues();
				
				for k2,enumval in values:sequence() do
					local vname = enumval:getName()
					if vals[vname] then
						log:warn("Adding duplicated enum value ".. vname .. " in class " .. class:getFullName())
					end
					
					buf:writeSubLine('{"${1}", ${2}},',vname,enumval:getFullName())
					vals[vname] = true
				end			
			end
		buf:writeSubLine("{0,0}")
		buf:popIndent()
		buf:writeLine("};")
		buf:newLine()
	end
	
	-- get the proper filename:
	local filename = wname 
	self:debug0_v("Writing file ","bind_".. filename ..".cpp")
	rm:writeSource("bind_".. filename ..".cpp",self)
end

return Class