local Class = require("classBuilder"){name="GlobalFunctionWriter",bases="bindings.FunctionWriter"};

local rm = require "bindings.ReflectionManager"
local tm = require "bindings.TypeManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"

local Set = require "std.Set"

function Class:writeNamespaceFunctions(ns)
	-- write all the global functions found in the given namespace:
	local funcs = ns:getValidPublicFunctions()
	local buf = self
	
	-- start with the type checkers:
	buf:writeLine("// Function checkers:")
	self:writeForAll(funcs, self._typeChecker)
	buf:newLine()
	
	buf:writeLine("// Function binds:")
	self:writeForAll(funcs,self._writeBind,self._writeOverloadBind)
	buf:newLine()
end

function Class:writeFile()
	-- register all the global functions here:
	-- just write all the namespaces with content:
	local namespaces = rm:getNamespaces()
	local buf = self
	
	local headers = Set();
	for _,ns in namespaces:sequence() do
		local functions = ns:getValidPublicFunctions()
		for _,func in functions:sequence() do
			local header = func:getHeaderFile()
			if header and func:isValidForWrapping() and not im:ignoreHeader(header) and not func:isExternal() then
				headers:push_back(header)
			end		
		end
	end
	
	for _,v in headers:sequence() do
		buf:writeLine("#include <"..v..">")
	end
	buf:newLine()
	
	for _,v in namespaces:sequence() do
		self:writeNamespaceFunctions(v,buf)
	end
	
	
	buf:writeLine("#ifdef __cplusplus")	
	buf:writeLine('extern "C" {')
	buf:writeLine("#endif")
	buf:newLine()
	buf:writeSubLine("void register_global_functions(lua_State* L) {")
	buf:pushIndent()
	
	local currentModule = nil;
		
	-- Assume the parent container is already on the stack.
	for _,v in namespaces:sequence() do
		local funcs = v:getFunctions{"Method"}
		local visited = Set();
		
		for _,func in funcs:sequence() do
			local fname = func:getLuaName()
			if not visited:contains(fname) and func:isValidForWrapping() and not func:isExternal() then
				local rns = func:getRootNamespace()
				local modName = rns and rns:getName() or rm:getDefaultModuleName()
				modName = tm:getMappedModule(modName)
				
				if currentModule ~= modName then
					if currentModule then
						buf:writeSubLine("luna_popModule(L);")
					end
					
					currentModule = modName;
					buf:writeSubLine('luna_pushModule(L,"${1}");',modName)
				end
				
				buf:writeSubLine('lua_pushcfunction(L, _bind_${1}); lua_setfield(L,-2,"${1}");',fname)
				visited:push_back(fname)
			end
		end			 
	end
	
	buf:writeSubLine("luna_popModule(L);")
	buf:popIndent()
	buf:writeLine("}")
	buf:newLine()
	buf:writeLine("#ifdef __cplusplus")
	buf:writeLine("}")
	buf:writeLine("#endif")
	
	rm:writeSource("register_global_functions.cpp",buf)		
end

return Class