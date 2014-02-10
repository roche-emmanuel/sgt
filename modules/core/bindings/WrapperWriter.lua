local Class = require("classBuilder"){name="WrapperWriter",bases="bindings.FunctionWriter"};

local rm = require "bindings.ReflectionManager"
local corr = require "bindings.TextCorrector"
local snippets = require "bindings.SnippetManager"
local tm = require "bindings.TypeManager"
local tc = require "bindings.TypeConverter"

local utils = require "utils"

local Vector = require "std.Vector"
local Set = require "std.Set"

function Class:initialize(options)
	self._class = options and options.class;
	self:check(self._class,"Invalid class object.")
end

function Class:writeConstructor(cons)
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	
	if cons:getNumParameters()>0 then
		buf:writeSubLine([[wrapper_${1}(lua_State* L, lua_Table* dum, ${3}) 
		: ${2}(${4}), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((${2}*)this);
			_obj.callFunction<void>();
		}
	};]],wname,cname,cons:getArgumentsPrototype(true),cons:getArgumentNames())
	else
		buf:writeSubLine([[wrapper_${1}(lua_State* L, lua_Table* dum) 
		: ${2}(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((${2}*)this);
			_obj.callFunction<void>();
		}
	};]],wname,cname)			
	end	
end

function Class:pushParam(param,k)
	local rt = param:getType()
	local name = param:getName()
	name = name=="" and "arg"..k or name
	local rtname = rt:getName()
	local external = tm:getExternalBase(rt:getBaseName(true))
	
	local conv = tc:getWrapperConverter(rt:getBaseName())
	
	if conv then
		name = conv(rt,name)
	elseif rt:isString() then
		-- do nothing.
	elseif rtname == "unsigned char *" 
		or rtname == "const unsigned char *" 
		or rtname == "const unsigned short *" 
		or rtname == "const unsigned int *" 
		then
		name = "(void*)"..name
	elseif rtname:find("osg::ref_ptr") then
		-- do nothing.
	elseif rt:isEnum() then
		name = (rt:isPointer() and "(int*)" or "(int)") .. name
	else
		-- name = (rt:isReference() and (rt:isClass() or external) and not rt:isPointer() and "&" or "") .. name
		name = ((rt:isClass() or external) and not rt:isPointer() and "&" or "") .. name
	end
	
	self:writeSubLine("_obj.pushArg(${1});",name)
end

function Class:writeFunctionCall2(func)
	local params = func:getParameters()
	
	-- push this wrapper:
	self:writeSubLine("_obj.pushArg((${1}*)this);",self._class:getFullName())
	
	for k,param in params:sequence() do
		self:pushParam(param,k)
	end
	
	local rt = func:getReturnType()
	self:check(rt,"Invalid return type for function: ",func:getFullName())
	
	local conv = tc:getWrapperConverter(rt:getBaseName())
	if conv then
		self:writeSubLine(conv(rt))
		return;
	end
	
	local external = tm:getExternalBase(rt:getBaseName(true))
	
	local rtype = rt:getBaseName() .. ((rt:isPointer() or rt:isClass()) and "*" or "")
	local conv = (rt:isEnum() or rtype=="char" or rtype=="unsigned char*") and "("..rtype..")" or ""
	
	rtype = rt:isConst() and rtype=="char*" and "const "..rtype or rtype
	
	-- specific conversions:
	rtype = rt:isEnum() and "int" or rtype
	rtype = rtype=="char" and "int" or rtype
	rtype = rtype=="unsigned char*" and "void*" or rtype
	
	self:writeSubLine("return ${3}${2}(_obj.callFunction<${1}>());",rtype,(rt:isClass() and not rt:isPointer()) and "*" or "",conv);
end

function Class:writeFunctionBody(func)
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)

	local fname = func:getLuaName() or func:getName()
	
	if func:isAbstract() or func:isPrivate() then
		buf:writeSubLine('THROW_IF(!_obj.pushFunction("${1}"),"No implementation for abstract function ${2}");',fname,func:getFullName())
		self:writeFunctionCall2(func)
	else
		buf:writeSubLine('if(_obj.pushFunction("${1}")) {',fname)
		buf:pushIndent()
		self:writeFunctionCall2(func)
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
		buf:writeSubLine("return ${3}::${1}(${2});",func:getName(),func:getArgumentNames(),class:getName());
	end
end

function Class:writeFunction(func)
	local buf = self;
	
	buf:writeLine(func:getPrototype(true,false,true).." {");
	buf:pushIndent()
	self:writeFunctionBody(func)
	buf:popIndent();
	buf:writeLine("};")
	buf:newLine()
end

function Class:writeProtectedFunction(func)
	local buf = self;
	
	if not func:getLuaName() then
		return
	end
	
	local name = func:getName()
	func:setName("public_".. func:getLuaName())
	buf:writeLine(func:getPrototype(true,false,true).." {");
	func:setName(name)
	
	buf:pushIndent()
		buf:writeSubLine("return ${3}::${1}(${2});",func:getName(),func:getArgumentNames(),func:getParent():getFullName());
	buf:popIndent();
	buf:writeLine("};")
	buf:newLine()
end

function Class:writeInvalidFunction(func)
	local buf = self;
	
	buf:writeLine(func:getPrototype(false,false,true).." {");
	buf:pushIndent()
	-- return only the default value:
	buf:writeLine("THROW_IF(true,\"The function call " .. func:getPrototype(false,true,true) .. " is not implemented in wrapper.\");");
	local rt = func:getReturnType()
	if not rt:isVoid() then
		if rt:isPointer() then
			buf:writeLine("return NULL;");
		elseif rt:isNumber() then
			buf:writeLine("return (".. rt:getName() ..")0;");
		else
			buf:writeLine("return ".. rt:getName() .."();");		
		end
	end
	buf:popIndent();
	buf:writeLine("};")
	buf:newLine()
end

function Class:writeHeader()
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	
	buf:clearContent();
	
	-- Add the default constructor if needed.
	if rm:getConfig().wrapper_default_constructor then
		class:addDefaultConstructor()
	end
	
	local funcs = self._class:getVirtualFunctions():filterItems({"ValidWrapper"},{self._class})
	local allConstructors = self._class:getFunctions{"Constructor","Public"} + self._class:getFunctions{"Constructor","Protected"}
	
	local constructors = allConstructors:filterItems{"Valid"}
	
	-- buf:writeLine("// virtual functions:")
	-- buf:newLine();
	
	buf:writeLine(snippets:getWrapperStartCode(self._class))
	
	buf:pushIndent()
	
	local str = [[~wrapper_${1}() {
		logDEBUG3("Calling delete function for wrapper ${1}");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((${2}*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	]]
	local destructor = class:getDestructor()
	if not destructor or not destructor:isPrivate() then
		buf:writeSubLine(str,wname,self._class:getFullName())
	end
	
	for _,cons in constructors:sequence() do
		if not cons:isWrapper() then
			self:writeConstructor(cons)
		end
	end

	buf:popIndent();
	buf:newLine();
	
	local publicFuncs = funcs:filterItems{"Public"}
	local protectedFuncs = funcs:filterItems{"Protected"}
	local privateFuncs = funcs:filterItems{"Private"}
	
	buf:writeLine(privateFuncs:empty() and "" or "private:") -- not needed if empty.
	buf:pushIndent()
	buf:writeLine("// Private virtual methods:")
	for _,func in privateFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeFunction(func)
	end
	buf:popIndent()
	
	buf:writeLine(protectedFuncs:empty() and "" or "protected:") -- not needed if empty.
	buf:pushIndent()
	buf:writeLine("// Protected virtual methods:")
	for _,func in protectedFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeFunction(func)
	end
	buf:popIndent()

	
	buf:writeLine((not protectedFuncs:empty() or not privateFuncs:empty()) and "public:" or "")
	buf:pushIndent()
	buf:writeLine("// Public virtual methods:")
	for _,func in publicFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeFunction(func)
	end
	buf:popIndent()
	buf:newLine();
	
	
	-- write the public wrapping for the protected non virtual functions:
	local notVirtualFuncs = class:getProtectedFunctions():filterItems{"Valid"}
	buf:pushIndent()
	buf:writeLine("// Protected non-virtual methods:")
	for _,func in notVirtualFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeProtectedFunction(func)
	end
	buf:newLine()
	
	local origNames = Vector();
	for _,func in notVirtualFuncs:sequence() do
		origNames:push_back(func:getName());
		func:setName("public_" .. func:getLuaName())
	end
	
	buf:writeLine("// Protected non-virtual checkers:")
	buf:writeForAll(notVirtualFuncs,self._typeChecker)
	buf:newLine()
	
	buf:writeLine("// Protected non-virtual function binds:")
	buf:writeForAll(notVirtualFuncs,self._writeBind,self._writeOverloadBind)
	buf:newLine()
	
	for k,func in notVirtualFuncs:sequence() do
		-- func:setName(func:getName():sub(8))
		func:setName(origNames[k])
	end
	
	-- Now write the registeration table:
	buf:writeSubLine("void register_protected_methods(lua_State* L) {")
	buf:pushIndent()
	if not notVirtualFuncs:empty() then
		buf:writeSubLine("static const luaL_Reg wrapper_lib[] = {")
		for _,func in notVirtualFuncs:sequence() do
			buf:writeSubLine('{"${1}",_bind_public_${1}},',func:getLuaName())
		end
		buf:writeSubLine("{NULL,NULL}")
		buf:writeSubLine("};")
		buf:newLine()
		
		-- Push the object on the stack:
		buf:writeSubLine("pushTable();")
		buf:writeSubLine("luaL_register(L, NULL, wrapper_lib);");
		buf:writeSubLine("lua_pop(L, 1);");
	end
	buf:popIndent()
	buf:writeSubLine("};")
	buf:newLine();
	
	buf:popIndent()
	
	
	buf:newLine();

	-- Now we write the invalid functions wrappers:
	local invalidFuncs = self._class:getVirtualFunctions():filterItems({"InvalidWrapper","Abstract"},{self._class})
	for _,func in invalidFuncs:sequence() do
		buf:writeLine(func:isPublic() and "public:" or "protected:");
		buf:writeLine("// ".. func:getPrototype(true,true,true))
		self:writeInvalidFunction(func)
	end
	
	buf:writeLine(snippets:getWrapperEndCode(class))
	
	buf:newLine();
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".h")
	rm:writeHeader("wrappers/wrapper_".. filename ..".h",self)
end

function Class:writeSource()
	local buf = self;
	local class = self._class;
	
	buf:clearContent();
	
	local wname = corr:correct("filename",class:getFullName())
	buf:writeLine("#include <luna/wrappers/wrapper_".. wname ..".h>")
	buf:newLine();
	
	local funcs = self._class:getVirtualFunctions():filterItems{"Valid"}
	
	for _,func in funcs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
	end
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".cpp")
	rm:writeSource("wrappers/wrapper_".. filename ..".cpp",self)
end

function Class:writeFile()
	self:writeHeader()
	-- self:writeSource() -- no need to write any source file.
end

return Class