local Class = require("classBuilder"){name="LunaWriter",bases="base.Object"};

local Set = require "std.Set"
local im = require "bindings.IgnoreManager"
local rm = require "bindings.ReflectionManager"
local tm = require "bindings.TypeManager"

function Class:writeClassSources()
	local ClassWriter = require "bindings.ClassWriter"
	
	local written = Set();
	local classes = rm:getClasses();
	
	for _,v in classes:sequence() do
		local tname = v:getTypeName()
		
		if not v:getMappedType() then
			-- Only write if this is not a mapped type: otherwise we will use the mapping itself.
			if not im:ignore(tname,"class_declaration") and not written:contains(tname) and not v:isExternal() then
				written:push_back(tname)
				self:debug0_v("writing reflection for class ", v:getFullName(), " with Typename: ", tname)
				local writer = ClassWriter{class=v}
				writer:writeFile()
			else
				self:notice("Discarding reflection generation for class ", v:getFullName(), " with Typename: ", tname)
			end
		end
	end
end

function Class:writeRegisteredTypes()
	local TypeWriter = require "bindings.TypeWriter"
	
	local written = Set();
	local classes = tm:getRegisteredMappedTypes()
	
	for _,tname in classes:sequence() do
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) then
			written:push_back(tname)
			self:debug0_v("writing reflection for type ", tname)
			local writer = TypeWriter{class=tname}
			writer:writeFile()
		else
			self:notice("Discarding reflection generation for type ", tname)
		end
	end
end

function Class:writeClassWrappers()
	local WrapperWriter = require "bindings.WrapperWriter"
	
	local written = Set();
	local classes = rm:getClasses();
	
	for _,v in classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) and not v:isExternal() and v:isVirtual() then
			written:push_back(tname)
			self:debug0_v("writing wrapper for class ", v:getFullName(), " with Typename: ", tname)
			local writer = WrapperWriter{class=v}
			writer:writeFile()
		else
			self:notice("Discarding reflection generation for class ", v:getFullName(), " with Typename: ", tname)
		end
	end
end

--- Write the complete reflection
function Class:writeBindings()
	local ClassExporter = require "bindings.ClassListExporter"
	local FunctionExporter = require "bindings.FunctionListExporter"
	local MainHeaderWriter = require "bindings.MainHeaderWriter"
	local CasterWriter = require "bindings.CasterWriter"
	local ExternalWriter = require "bindings.ExternalWriter"
	local EnumWriter = require "bindings.EnumWriter"
	local DefineWriter = require "bindings.DefineWriter"
	local ModuleWriter = require "bindings.ModuleWriter"
	local GlobalFunctionWriter = require "bindings.GlobalFunctionWriter"
	local ClassSkeletonExporter = require "bindings.ClassSkeletonExporter"
	
	self:writeClassWrappers()
    self:writeClassSources()
	
	local gfuncWriter = GlobalFunctionWriter()
	gfuncWriter:writeFile();
	
	self:writeRegisteredTypes()
	
	local classExp = ClassExporter();
	classExp:writeFile()
	
	local funcExp = FunctionExporter()
	funcExp:writeFile()
	
	local mainWriter = MainHeaderWriter();
	mainWriter:writeFile();
	
	local casterWriter = CasterWriter();
	casterWriter:writeFile();
	
	local enumWriter = EnumWriter();
	enumWriter:writeFile();
	
	local defWriter = DefineWriter();
	defWriter:writeFile();
	
	local modWriter = ModuleWriter();
	modWriter:writeFile();
		
	local skeWriter = ClassSkeletonExporter();
	skeWriter:writeFile();
	
	local extWriter = ExternalWriter();
	extWriter:writeFile();	
end

return Class

