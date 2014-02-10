local Class = require("classBuilder"){name="ClassSkeletonExporter",bases="io.BufferWriter"};

local rm = require "bindings.ReflectionManager"
local im = require "bindings.IgnoreManager"

local Set = require "std.Set"

function Class:initialize()
	self._alreadyWritten = Set()
end

function Class:writeFile()
	
	self:writeLine("#ifndef _".. rm:getDefaultModuleName() .. "_SKELETONS_H_")
	self:writeLine("#define _".. rm:getDefaultModuleName() .. "_SKELETONS_H_")
	self:newLine()
	
	local rootns = rm:getRootNamespace();
	
	-- write the classes declaration on the buf:
	for _,scope in rootns:getSubScopes():sequence() do
		self:writeScope(scope)
	end
	
	
	self:newLine()
	self:writeLine("#endif")
	
	rm:writeDefaultFile("skeletons.h",self)
end

function Class:writeScope(scope)
	self:notice("Writing scope: ",scope:getFullName())
	
	if self._alreadyWritten:contains(scope) then
		self:warn("Already written scope: ",scope:getFullName())
		return;
	else
		self._alreadyWritten:push_back(scope)
	end
	
	if scope:isNamespace() then
		self:writeNamespace(scope)
	elseif scope:isClass() then
		self:writeClass(scope)
	else
		self:writeLine("// Cannot write unsupported scope type '".. scope:getFullName() .. "'")
		self:newLine()
	end
end

function Class:writeNamespace(ns)
	self:writeSubLine("namespace ${1} {",ns:getName())
	
	self:pushIndent()
	
	for _,scope in ns:getSubScopes():sequence() do
		self:writeScope(scope)
	end
	
	self:popIndent()
	self:writeLine("};")
	self:newLine()
end

function Class:writeClass(class)
	
	if class:isExternal() then
		return -- do not write this skeleton.
	end
	
	local ll = {}
	local bnames = {}
	for _,base in class:getBases():sequence() do
		table.insert(bnames,"public "..base:getFullName())
	end
	local allbnames = table.concat(bnames,", ")
	
	table.insert(ll,"class " .. class:getName())
	if allbnames~="" then
		table.insert(ll,": ".. allbnames)
	end	
	table.insert(ll," {")
	
	self:writeLine(table.concat(ll))

	if not class:getSubScopes():empty() then
		self:writeLine("public:")
	end
	
	self:pushIndent()
	
	for _,scope in class:getSubScopes():sequence() do
		self:writeScope(scope)
	end
	
	self:popIndent()
	self:writeLine("};")
	self:newLine()	
end

return Class