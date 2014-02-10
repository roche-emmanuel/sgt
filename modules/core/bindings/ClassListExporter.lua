local Class = require("classBuilder"){name="ClassListExporter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local tm = require "bindings.TypeManager"
local im = require "bindings.IgnoreManager"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()

	local writtenTypes = Set();
	
	local currentModule = nil
	local classes = rm:getClasses();
	
	-- write the classes declaration on the buf:
	for _,v in classes:sequence() do
		local classname = v:getTypeName()

		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") and not v:isExternal() then
			self:debug0_v("Writing class export for ", v:getFullName(), " (typename=",classname,")")
			local mod = v:getModule() or rm:getDefaultModuleName()
			if currentModule ~= mod then
				buf:writeLine("module=".. mod)
				currentModule = mod
			end
			
			local bname = v:getFirstAbsoluteBase():getTypeName();
			buf:writeSubLine("${1} => ${2}",classname,bname)
		else
			self:notice("Ignoring class export for ", v:getFullName(), " (typename=",classname,")")
		end
	end
	
	local classes = tm:getRegisteredMappedTypes()
	for _,classname in classes:sequence() do

		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class export for ",classname)
			local mod = rm:getDefaultModuleName()
			if currentModule ~= mod then
				buf:writeLine("module=".. mod)
				currentModule = mod
			end
			
			buf:writeSubLine("${1} => ${1}",classname,bname)
		else
			self:notice("Ignoring class export for ", classname)
		end
	end	
	
	rm:writeFile("classes.luna",buf)
end

return Class