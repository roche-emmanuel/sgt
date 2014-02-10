local Class = require("classBuilder"){name="SerializationManager",bases="base.Object"};

local Event = require "base.Event"

function Class:initialize(options)
	-- Load all the available wrappers:
	local Set = require "std.Set"
	self._wrapperList = Set();

	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	
	self:registerWrappers();
	--[[
	local fs = require "base.FileSystem"
	
	local owm = osgDB.Registry.instance():getObjectWrapperManager()
	local func = function(data) 
		local wrapperClassName = "serialization.wrappers.".. data.file:gsub("(.-)%.lua$","%1")
		self:info("Loading wrapper ", wrapperClassName)
		local wrapper = require(wrapperClassName)()
		self._wrapperList:push_back(wrapper);
		
		-- Also add the wrapper to the ObjectWrapper manager:
		owm:addWrapper( wrapper:getWrapper() );
	end
	
	fs:traverse{path=fs:getRootPath(true).."lua/modules/serialization/wrappers",
		func=func,
		pattern="%.lua$"}
	]]
		
end

function Class:onAppClosing()
	self:uninitialize()
end

function Class:registerWrappers()
	local list = {
		"osg.BasicObject",
		"osg.BasicNode",
		"osg.BasicNodeTest",
	};
	
	self:info("Loading wrappers...")
	for _,className in ipairs(list) do
		local obj = require(className)()
		self._wrapperList:push_back(obj:registerObjectWrapper())
	end
end

function Class:uninitialize()
	self:info("Releasing all wrappers...")
	-- remove all the wrappers from the Object WrapperManager:
	local owm = osgDB.Registry.instance():getObjectWrapperManager()
	for _,wrapper in self._wrapperList:sequence() do
		owm:removeWrapper( wrapper:getWrapper() );
	end
end

return Class() -- return instance of the class.
