local Class = require("classBuilder"){name="TypeWriter",bases="bindings.FunctionWriter"};

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
	local buf = self 
	
	local tname = self._class;
	
	buf:writeLine(snippets:getTypeCodeP1(tname))
	
	-- retrieve the type extension functions if any:
	local funcs = tm:getRegisteredMappedTypeFunctions(tname)
	if funcs then
		buf:pushIndent()
		self:writeForAll(funcs,self._typeChecker)
		buf:newLine()
		self:writeForAll(funcs,self._writeBind,self._writeOverloadBind)
		buf:popIndent()
	end
	
	buf:writeLine(snippets:getTypeCodeP2(tname))

	local wname = corr:correct("filename",tname)
	
	if funcs then
		buf:pushIndent()
		local writtenFuncs = {}
		for _,v in funcs:sequence() do
			local lname = v:getLuaName()
			if not writtenFuncs[lname] then
				buf:writeSubLine('{"${2}", &luna_wrapper_${1}::_bind_${2}},',wname,lname)
				writtenFuncs[lname] = true
			end
		end
		buf:popIndent()
	end
	
	buf:writeLine(snippets:getTypeCodeP3(tname))

	-- get the proper filename:
	local filename = wname 
	self:debug0_v("Writing file ","bind_".. filename ..".cpp")
	rm:writeSource("bind_".. filename ..".cpp",self)
end

return Class