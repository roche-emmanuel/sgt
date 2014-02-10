
local oo = require "loop.base"
 
local OverloadBinderBase = oo.class{}

OverloadBinderBase.CLASS_NAME = "bindings.OverloadBinderBase"

function OverloadBinderBase:__init()
    local object = oo.rawnew(self,{})  
	object._TRACE_ = "OverloadBinderBase"
    return object
end

function OverloadBinderBase:handle(writer,func,overloads)
	local isconstruct = func:isConstructor()
	local fname = func:getName() 
	local lname = func:getLuaName()
	local name = isconstruct and "ctor" or lname
	local cname = func:getParent():getName()
	
	-- now write the constructor bind function:
	writer:writeSubLine("// Overload binder for "..func:getFullName())	
	writer:writeSubLine("static ${1} _bind_${2}(lua_State *L) {",isconstruct and func:getParent():getFullName().."*" or "int",name)
	writer:pushIndent()
		local sigs = ""
		for k,v in overloads:sequence() do
			writer:writeSubLine("if (_lg_typecheck_${2}_overload_${1}(L)) return _bind_${2}_overload_${1}(L);",k,name)
			sigs = sigs .. "  ".. fname .. "(".. v:getArgumentsPrototype() .. ")\\n"
		end
		writer:newLine()
		-- error handling:
		writer:writeSubLine('luaL_error(L, "error in function ${1}, cannot match any of the overloads for function ${1}:\\n${2}");',fname,sigs);
		writer:writeSubLine("return ${1};",isconstruct and "NULL" or "0")
	writer:popIndent()
	writer:writeLine("}")			
	writer:newLine()
end

return OverloadBinderBase
