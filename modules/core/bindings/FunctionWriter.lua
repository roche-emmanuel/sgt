local Class = require("classBuilder"){name="FunctionWriter",bases="io.BufferWriter"};

local rm = require "bindings.ReflectionManager"
local tc = require "bindings.TypeConverter"
local tm = require "bindings.TypeManager"

local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"
local corr = require "bindings.TextCorrector"

local Set = require "std.Set"

function Class:initialize()
	self._typeChecker = require("bindings.TypeCheckerBase")()
	self._writeOverloadBind = require("bindings.OverloadBinderBase")()
	self._writeBind = require("bindings.BinderBase")()
end

function Class:writeForAll(list,handler,finalHandler)
	local overloads_handled = Set();
	
	for _,v in list:sequence() do
		if not v:isExternal() then
			local overloaded, overloads = v:isOverloaded()
			local name = (v:isConstructor() and "ctor") or v:getLuaName()
	
			if overloaded then
				if not overloads_handled:contains(name) then
					-- iterate on the overloads found:
					for k, ov in overloads:sequence() do
						handler:handle(self,ov,name.."_overload_"..k,true) -- force complete check.
					end
					if finalHandler then
						finalHandler:handle(self,v,overloads)
					end
					overloads_handled:push_back(name)
				end
			else
				handler:handle(self,v,name)
			end
		end
	end
end

function Class:writeArgTypeError(pt)
	self:writeLine("////////////////////////////////////////////////////////////////////")
	self:writeLine("// ERROR: Cannot decide the argument type for '".. pt:getName() .. "' baseTypeName is '".. pt:getBaseName(true).."'")
	self:writeLine("////////////////////////////////////////////////////////////////////")
	self:error("Unsupported type : ".. pt:getName() .." in retrieveArguments() for function ".. self._funcName) --..". Type object:",pt)
end

function Class:writeArgument(v,k)
	local pt = v:getType()
	
	pt:parse() -- ensure the type fields are value.
	
	local bname = pt:getBaseName()
	local typename = pt:getName()
	
	local converter = tc:getFromLuaConverter(typename) or tc:getFromLuaConverter(bname)
	
	local argname = v:getName()
	if not argname or argname == "" then
		argname = "_arg"..k
	end
	
	if typename=="unsigned" and argname=="int" then
		typename ="unsigned int"
		bname = "unsigned int"
		argname = "_arg"..k
	end
	
	local isPointer = false
	local isConst = pt:isConst()
	
	local index = k+self._indexOffset
	
	local defStrPre = self._defaultOffset and ((k-1)<self._defaultOffset and "" or "luatop>"..(index-1).." ? ") or ""
	local defStrAnd = self._defaultOffset and ((k-1)<self._defaultOffset and "" or "luatop>"..(index-1).." && ") or ""
	local constPre = isConst and "const " or "";
	local ptrSym = pt:isPointer() and "*" or ""
	local refSym = pt:isReference() and "&" or ""

	local defStrPost = self._defaultOffset and ((k-1)<self._defaultOffset and "" or " : ".. "("..constPre..bname..ptrSym..refSym..")" .. v:getDefaultValue():getName()) or ""
	local defStrPostNull = self._defaultOffset and ((k-1)<self._defaultOffset and "" or " : NULL") or ""
	
	local ptrOverride = pt:isPointer() and "Luna< void >::check"
	
	if (pt:isNumber() or pt:isBoolean() or pt:isString()) and pt:isReference() and not pt:isConst() and not pt:isPointer() then
		local ret = {
			name=argname,
			rtype=pt,
		}
		self:debug("Inserting return val ", ret, " for function ",self._funcName)
		table.insert(self._returns,ret)
	end
	
	
	if converter then
		isPointer = converter(self,index,pt,argname)
	elseif v:isLuaState() then
		isPointer = true;
		argname = "L";
	elseif pt:isLuaFunction() or pt:isLuaTable() or pt:isLuaAny() then
		-- check if we have a lua function or table reference.
		isPointer = true;
		argname = "NULL"
	elseif pt:isInteger() then
		-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
		self:writeSubLine("${3} ${1}=${4}(${3})${6}(L,${2})${5};",argname,index,constPre..bname..ptrSym,defStrPre,defStrPost,ptrOverride or "lua_tointeger")
		isPointer=pt:isPointer()
		-- self:writeSubLine("${3} ${1}=${4}(${3})(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isNumber() then
		-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
		self:writeSubLine("${3} ${1}=${4}(${3})${6}(L,${2})${5};",argname,index,constPre..bname..ptrSym,defStrPre,defStrPost,ptrOverride or "lua_tonumber")
		isPointer=pt:isPointer()
		-- self:writeSubLine("${3} ${1}=${4}(${3})lua_tointeger(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isBoolean() then
		self:writeSubLine("${3} ${1}=${4}(${3})(${6}(L,${2})${7})${5};",argname,index,constPre..bname..ptrSym,defStrPre,defStrPost,ptrOverride or "lua_toboolean",pt:isPointer() and "" or "==1")	
		isPointer=pt:isPointer()
		-- self:writeSubLine("${3} ${1}=${4}(${3})(lua_toboolean(L,${2})==1)${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isString() then
		self:writeSubLine("${3} ${1}=${4}(${3})lua_tostring(L,${2})${5};",argname,index,typename,defStrPre,defStrPost)
		isPointer=true
	elseif pt:isVoid() and pt:isPointer() then
		-- We may consider void as a base class:
		--local bhash = utils.getHash("void")
		self:writeSubLine("${5}void* ${1}=${3}(Luna< void >::check(L,${2}))${4};",argname,index,defStrPre,defStrPost,constPre)
		isPointer=true			
	else
		
		-- get the class absolute parent hash:
		local fbname =  pt:isClass() and tm:getBaseTypeMapping(pt:getAbsoluteBaseFullName())
		fbname = tm:getExternalBase(fbname or pt:getBaseName(true)) or fbname
		
		if not fbname then
			self:writeArgTypeError(pt)
		else		
			isPointer = pt:isPointer()
			local strPost = isPointer and defStrPost or defStrPostNull
			local strPtr = isPointer and "" or "_ptr"
			
			if fbname:find("<") then
				tm:registerMappedType(fbname)			
			end
			
			local syntax = bname == fbname and "${7}${3}* ${1}${8}=${5}(Luna< ${4} >::check(L,${2}))${6};"
				or "${7}${3}* ${1}${8}=${5}(Luna< ${4} >::checkSubType< ${3} >(L,${2}))${6};"
			
			self:writeSubLine(syntax,argname,index,bname,fbname,defStrPre,strPost,constPre,strPtr)

			if not isPointer then
				self:writeSubLine("if( ${2}!${1}_ptr ) {",argname,defStrAnd)
				self:pushIndent()
				self:writeSubLine('luaL_error(L, "Dereferencing NULL pointer for arg ${1} in ${2} function");',argname,self._funcName)
				self:popIndent()
				self:writeLine("}")
				self:writeSubLine("${2} ${1}=${3}*${1}_ptr${4};",argname,typename,defStrPre,defStrPost,constPre)
			end
		end
	end
	
	-- for each argument we have to check what is the except type modifier:
	-- "regular" arguments are on the stack by default
	-- "class" arguments are on the heap.
	-- we check the isPointer variable for precise results.
	if isPointer and not pt:isPointer() then
		argname = "*"..argname
	elseif not isPointer and pt:isPointer() then
		argname = "&"..argname
	end
	
	if argname == "*NULL" or argname == "&NULL" then
		self:error("Invalid dereference of automatic NULL pointer in retrieveArguments() for function ".. self._funcName) --..". Type object:",pt)			
	end
	
	table.insert(self._args,argname)
end

function Class:retrieveArguments(func)
	-- retrieve all the arguments:
	self._indexOffset = (func:isGlobal() or func:isConstructor() or func:isStatic() or func:isExtension()) and 0 or 1
	self._defaultOffset = func:getDefaultOffset()
	self._funcName = func:getFullName()
	
	self._args = {}
	
	-- list of additional return values that were passed as non const references:
	self._returns = {}
	
	if(self._defaultOffset) then
		self:writeLine("int luatop = lua_gettop(L);")
		self:newLine()		
	end
	
	for k,v in func:getParameters():sequence() do
		self:writeArgument(v,k)
	end
	
	self:newLine()
	
	return table.concat(self._args,", ")
end

function Class:writeFunctionCall(cname,func,args)
	-- retrieve the object:
	local rt = func:getReturnType()
	
	if not rt then
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Invalid return type object for function '" .. func:getFullName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("return 0;");
		self:warn("Invalid return type object for function '" .. func:getFullName() .. "'")
		return
	end
	
	local isProtectedAccessor = false
	
	if func:isProtected() and func:getName():sub(1,7)=="public_" then
		local wname = corr:correct("filename",self._class:getFullName())
		cname = "wrapper_" .. wname
		isProtectedAccessor = true
	end
	
	rt:parse() -- ensure the type fields are value.

	local rname = rt:getBaseName()
	local converter = tc:getToLuaConverter(rt:getName()) or tc:getToLuaConverter(rname)
	local argname = "lret"
	
	local useself = isProtectedAccessor or not (func:isGlobal() or func:isStatic() or func:isExtension())
	
	if useself then
		local bname = nil
		if func:getParent():isExternal() then
			-- retrieve the base name from the type manager:
			bname = tm:getAbsoluteBaseName(func:getParent())
			self:info("Retrieving absolute base name=", bname," for external=",func:getParent():getTypeName())
		else
			bname = func:getParent():isType() and func:getParent():getName() or func:getParent():getFirstAbsoluteBase():getFullName();
		end
		
		bname = tm:getBaseTypeMapping(bname)
		bname = tm:getExternalBase(bname) or bname
		
		-- the function is a class method, retrieve the object:
		if cname == bname then
			self:writeSubLine("${1}* self=(Luna< ${2} >::check(L,1));",cname, bname);
		else
			-- need to dynamic cast:
			self:writeSubLine("${1}* self=Luna< ${2} >::checkSubType< ${1} >(L,1);",cname, bname);
		end
		
		self:writeLine("if(!self) {")
		self:pushIndent()
		self:writeSubLine('luaL_error(L, "Invalid object in function call ${1}. Got : \'%s\'\\n%s",typeid(Luna< ${2} >::check(L,1)).name(),luna_dumpStack(L).c_str());',func:getPrototype(false,true,true),bname)
		self:popIndent()
		self:writeLine("}")
	end
	
	local force_gc = false;
	local prefix = (useself and "self->") or (func:isExtension() and "") or (func:getParent():getFullName().."::")
	--local useBase =  --func:getName():sub(1,5)=="base_"; --func:getUseBase()
	
	local fname = func:getUseBase() and (func:getParent():getName() .. "::" ..func:getName():sub(6)) or func:getName()
	
	fname = func:isSetter() and fname .. " = " or fname
	args = (func:isGetter() and "") or (func:isSetter() and args) or "("..args..")"
	
	if rt:isInteger() and func:hasLuaState() then
		-- assume this function is just returning its number of results as a regular lua cfunction;
		self:writeSubLine("return ${3}${1}${2};",fname,args,prefix);
		-- No need to proceed in that case:
		return;
	elseif rt:isVoid() and not rt:isPointer() then
		self:writeSubLine("${3}${1}${2};",fname,args,prefix);
	else
		-- in case we return an object this object can only be pushed on the lua stack if we use a pointer to it.
		-- we cannot use a pointer to temporary memory so if the result is on the stack we need to create
		-- the corresponding heap ressource and use a copy constructor.
		-- if there is a converter, it is responsible for performing the proper convertion.
		if not rt:isPointer() and not rt:isInteger() and not rt:isString() and not rt:isNumber() and not rt:isBoolean() and not converter then  -- rt:isClass()
			if rt:isReference() or func:isGetter() then
				self:writeSubLine("const ${1}* ${4} = &${5}${2}${3};",rt:getBaseName(),fname,args,argname,prefix);		
			else
				self:writeSubLine("${1} stack_${4} = ${5}${2}${3};",rt:getName(),fname,args,argname,prefix);
				self:writeSubLine("${1}* ${2} = new ${1}(stack_${2});",rt:getName(),argname);
				force_gc = true
			end
		else
			self:writeSubLine("${1} ${4} = ${5}${2}${3};",rt:getName(),fname,args,argname,prefix);
		end
	end
	
	local result_count = 1
	
	local deref = rt:isPointer() and "*" or ""
	
	if converter then
		converter(self,rt,argname)
	elseif rt:isNumber() then
		self:writeSubLine("lua_pushnumber(L,${2}${1});",argname,deref)
	elseif rt:isBoolean() then
		self:writeSubLine("lua_pushboolean(L,${2}${1}?1:0);",argname,deref)
	elseif rt:isString() then
		self:writeSubLine("lua_pushstring(L,${1});",argname)
	elseif rt:isVoid() then
		if rt:isPointer() then
			-- We may consider void as a base class:
			--self:writeSubLine('Luna< ${1} >::push(L,${2},false,"${3}");',"void",argname,"void")
			self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
			self:newLine()
			self:writeSubLine('Luna< ${1} >::push(L,${2},false);',"void",argname)
		else
			result_count = 0
		end			
	else	
		if (not rt:isClass()) or rname:find("<") then
			if not tm:registerMappedType(rname) then
				self:error("Could not regiter type in function call: ",func:getFullName())
			end
		end
		
		tm:getExternalBase(rt:getBaseName(true))
	
		-- get the class absolute parent hash:
		self:writeSubLine("if(!${1}) return 0; // Do not write NULL pointers.",argname)
		self:newLine()
		
		self:writeSubLine('Luna< ${1} >::push(L,${2},${3});',rname,argname,force_gc and "true" or "false")			
		
	--[[else
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:writeLine("// ERROR: Cannot decide the argument type for '".. rt:getName() .. "'")
		self:writeLine("////////////////////////////////////////////////////////////////////")
		self:error("Unsupported type : ".. rt:getName().. " in functionCall for function ".. func:getFullName())]]
	end	
	self:newLine()
	
	-- inject the additional results here:
	for _,ret in ipairs(self._returns) do
		local rt = ret.rtype
		local argname = ret.name
		
		local rname = rt:getBaseName()
		local converter = tc:getToLuaConverter(rt:getName()) or tc:getToLuaConverter(rname)
	
		if converter then
			converter(self,rt,argname)
		elseif rt:isNumber() then
			self:writeSubLine('lua_pushnumber(L,${1});',argname)			
		elseif rt:isBoolean() then
			self:writeSubLine('lua_pushboolean(L,${1}?1:0);',argname)					
		elseif rt:isString() then
			self:check(false,"This should not happen ? strings should be handled with a converter in this case.")
		end
	end
	
	-- now write the number of results:
	self:writeSubLine("return ${1};",result_count + #self._returns);
end

return Class