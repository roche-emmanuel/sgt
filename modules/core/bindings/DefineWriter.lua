local Class = require("classBuilder"){name="DefineWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local defs = rm:getDefines()

	local headers = Set();
	for _,def in defs:sequence() do
		header = def:getHeaderFile()
		
		if not def:isIgnored() then
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
	buf:writeSubLine("void register_defines(lua_State* L) {")
	buf:pushIndent()
		-- Assume the parent container is already on the stack.
		for _,v in defs:sequence() do
			if not v:isIgnored() then
				buf:writeSubLine('lua_pushnumber(L,${1}); lua_setfield(L,-2,"${2}");',v:getName(),v:getName()) --InitStr
			end
		end
	buf:popIndent()
	buf:writeLine("}")
	buf:newLine()
	buf:writeLine("#ifdef __cplusplus")
	buf:writeLine("}")
	buf:writeLine("#endif")
	
	rm:writeSource("register_definitions.cpp",buf)	
end

return Class