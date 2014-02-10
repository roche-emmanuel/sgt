local Class = require("classBuilder"){name="FunctionArgumentWriter",bases="bindings.writers.BasicWriter"};

local tc = require "bindings.TypeConverter"
local tm = require "bindings.TypeManager"

function Class:setFunction(func)
	self._func = func;
end

function Class:setIndexOffset(offset)
	self._offset = offset
end

function Class:setDefaultOffset(offset)
	self._defaultOffset = offset
end

function Class:write(buf,param,index)
	local pt = param:getType()
	
	pt:parse() -- ensure the type fields are value.
	
	local bname = pt:getBaseName()
	local typename = pt:getName()
	
	local converter = tc:getFromLuaConverter(typename) or tc:getFromLuaConverter(bname)
	
	local argname = param:getName()
	if not argname or argname == "" then
		argname = "_arg"..index
	end
	
	if typename=="unsigned" and argname=="int" then
		typename ="unsigned int"
		bname = "unsigned int"
		argname = "_arg"..index
	end
	
	local isPointer = false
	local isConst = pt:isConst()
	
	local index = index+self._offset
	local noDef = (not self._defaultOffset or (index-1)<self._defaultOffset) and ""
	local defStrPre = noDef or "luatop>"..(index-1).." ? "
	local defStrAnd = noDef or "luatop>"..(index-1).." && "
	local constPre = isConst and "const " or "";

	-- local defStrPost = noDef or " : "..(pt:isClass() and pt:isPointer() and "("..constPre..bname.."*)" or "").. param:getDefaultValue():getName()
	local defStrPost = self._defaultOffset and ((index-1)<defaultOffset and "" or " : "..(pt:isClass() and pt:isPointer() and "("..constPre..bname.."*)" or "").. v:getDefaultValue():getName()) or ""
	local defStrPostNull = noDef or " : NULL"
	
	if converter then
		isPointer = converter(buf,index,pt,argname)
	elseif param:isLuaState() then
		isPointer = true;
		argname = "L";
	elseif pt:isLuaFunction() or pt:isLuaTable() or pt:isLuaAny() then
		-- check if we have a lua function or table reference.
		isPointer = true;
		argname = "NULL"
	elseif pt:isInteger() then
		-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
		buf:writeSubLine("${3} ${1}=${4}(${3})lua_tointeger(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isNumber() then
		-- check if we have a number:int _arg1=(int)lua_tonumber(L,2);
		buf:writeSubLine("${3} ${1}=${4}(${3})lua_tonumber(L,${2})${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isBoolean() then
		buf:writeSubLine("${3} ${1}=${4}(${3})(lua_toboolean(L,${2})==1)${5};",argname,index,bname,defStrPre,defStrPost)
	elseif pt:isString() then
		buf:writeSubLine("${3} ${1}=${4}(${3})lua_tostring(L,${2})${5};",argname,index,typename,defStrPre,defStrPost)
		isPointer=true
	elseif pt:isVoid() and pt:isPointer() then
		-- We may consider void as a base class:
		buf:writeSubLine("void* ${1}=${3}(Luna< void >::check(L,${2}))${4};",argname,index,defStrPre,defStrPost)
		isPointer=true			
	elseif pt:isClass() then
		-- get the class absolute parent hash:
		local fbname = tm:getBaseTypeMapping(pt:getAbsoluteBaseFullName())
		
		if pt:isPointer() then
			-- we just retrieve the pointer here:
			if bname == fbname then
				buf:writeSubLine("${7}${3}* ${1}=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)				
			else
				-- need to dynamic cast:
				buf:writeSubLine("${7}${3}* ${1}=${5}(Luna< ${4} >::checkSubType< ${3} >(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPost,constPre)
			end
			
			isPointer=true			
		else
			-- we retrieve the pointer but then try to dereference if if valid, and output an error otherwise:
			if bname == fbname then
				buf:writeSubLine("${7}${3}* ${1}_ptr=${5}(Luna< ${4} >::check(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
			
			else
				buf:writeSubLine("${7}${3}* ${1}_ptr=${5}(Luna< ${4} >::checkSubType< ${3} >(L,${2}))${6};",argname,index,bname,fbname,defStrPre,defStrPostNull,constPre)
			end
			buf:writeSubLine("if( ${2}!${1}_ptr ) {",argname,defStrAnd)
			buf:pushIndent()
			buf:writeSubLine('luaL_error(L, "Dereferencing NULL pointer for arg ${1} in ${2} function");',argname,self._func:getFullName())
			buf:popIndent()
			buf:writeLine("}")
			buf:writeSubLine("${2} ${1}=${3}*${1}_ptr${4};",argname,typename,defStrPre,defStrPost,constPre)
		end
	else
		buf:writeLine("////////////////////////////////////////////////////////////////////")
		buf:writeLine("// ERROR: Cannot decide the argument type for '".. typename .. "' baseTypeName is '".. pt:getBaseName(true).."'")
		buf:writeLine("////////////////////////////////////////////////////////////////////")
		self:error("Unsupported type : ".. typename .." in retrieveArguments() for function ".. self._func:getFullName()) --..". Type object:",pt)
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
		self:error("Invalid dereference of automatic NULL pointer in retrieveArguments() for function ".. self._func:getFullName()) --..". Type object:",pt)			
	end
	
	return argname
end

return Class