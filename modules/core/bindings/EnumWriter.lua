local Class = require("classBuilder"){name="EnumWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local classes = rm:getClasses();

	-- buf:writeLine("#include <plug_common.h>")
	-- buf:newLine()
	
	local enums = rm:getEnums()
	
	local headers = Set();
	for _,enum in enums:sequence() do
		local header = enum:getHeaderFile()
		if header and not im:ignoreHeader(header) and enum:getParent():isNamespace() and not enum:isEmpty() then
			headers:push_back(header)
		end		
	end
	
	for _,v in headers:sequence() do
		buf:writeLine("#include <"..v..">")
	end
	buf:newLine()
	
	--- retrieve the list of defines from the reflection map:

	buf:writeLine("#ifdef __cplusplus")	
	buf:writeLine('extern "C" {')
	buf:writeLine("#endif")
	buf:newLine()
	buf:writeSubLine("void register_enums(lua_State* L) {")
	buf:pushIndent()
		local writtenValues = Set();
		
		for _,v in enums:sequence() do
			-- write the ennumeration content here:
			
			if v:getParent():isNamespace() and not v:isEmpty() then
			 
				-- write a new table:
				buf:writeSubLine("lua_newtable(L); // enum ${1}",v:getName())
				buf:newLine()
				-- Assume the parent container is already on the stack.
				for _,val in v:getValues():sequence() do
					if not im:ignore(val:getFullName(),"enum_value") then
						buf:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',val:getFullName(),val:getName())
					end
				end
				
				--buf:writeForeach(v:getValues(),
				buf:newLine()
				-- push the table in the module:
				buf:writeSubLine('lua_setfield(L,-2,"${1}");',v:getName());
				buf:newLine()
				
				-- Now write the enum values again but in the module table directly:
				for _,val in v:getValues():sequence() do
					if not im:ignore(val:getFullName(),"enum_value") then
						if writtenValues:contains(val:getFullName()) then
							self:warn("Overriding enum value ",val:getFullName(), " in module context.")
						end
						
						writtenValues:push_back(val:getFullName())
						buf:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',val:getFullName(),val:getName())
					end
				end
				
				buf:newLine()
				buf:newLine()
			end
		end
	buf:popIndent()
	buf:writeLine("}")
	buf:newLine()
	buf:writeLine("#ifdef __cplusplus")
	buf:writeLine("}")
	buf:writeLine("#endif")
	buf:newLine()
	
	rm:writeSource("register_enums.cpp",buf)
end

return Class