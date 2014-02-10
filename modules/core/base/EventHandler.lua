local Class = createClass{name="EventHandler",bases="core.Object"};

local Map = require "std.Map"
local Set = require "std.Set"
local Vector = require "std.Vector"
local EventCallback = require "base.EventCallback"
local assert = require "utils.assert"

--[[
Class: base.EventHandler

Base event handler class. This class is used to fire events and register listeners.

This class inherits from <core.Object>.
]]
function Class:initialize(options)
	-- The listeners are saved in a Map of vectors per category.
	self._listeners = Map();
	self._markedForRemoval = Set();
end

function Class:addListener(desc,cb,oneShot)
	
	if type(desc)~="table" then
		--self:deprecated("Should call addListener with an option table argument.")
		local func = type(cb)=="function" and cb
		local obj = type(cb)=="table" and cb
		return self:addListener{event=desc,func=func,object=obj,oneShot=oneShot}
	end
	
	desc.event = desc.event or desc[1]
	desc.func = desc.func or (type(desc[2])=="function" and desc[2])
	desc.object = desc.object or (type(desc[2])=="table" and desc[2])
	
	local cb = EventCallback(desc);
	
	local front = desc.front; -- or Event.isFront(desc.event)
	
	-- register a callback into the current mapping:
	if front then
		self._listeners:getOrCreate(desc.event,Set):push_front(cb)	
	else
		self._listeners:getOrCreate(desc.event,Set):push_back(cb)
	end
	return cb
end

function Class:removeListener(cb)
	self:check(cb,"Invalid callback object.")
	assert.InstanceOf(EventCallback,cb)
	
	if self._currentEvent == cb._event then
		-- we should not remove a callback from the callback event process itself.
		-- so we just mask this callback for removal:
		self._markedForRemoval:push_back(cb)
		return
	end
	
	local list = self._listeners:get(cb._event)
	if not list then
		return false-- nothing to do.
	end
	
	local rem = list:eraseValue(cb)
	self:check(rem==nil or rem==cb,"Invalid removed callback.")
	return rem
end

function Class:removeAllListeners(eventName)
	if eventName then
		self:check(not (self._currentEvent==eventName),"Trying to remove all event callback while in event process.")
		-- Remove all the listeners for this category only:
		self:info("Removing all listener for event: ",eventName)
		self._listeners:erase(eventName)
	else
		self:check(self._currentEvent==nil,"Trying to remove all event callback while in event process.")
		self:info("Removing all listeners")
		self._listeners:clear();
	end
end

function Class:fireEvent(eventName,...)
	local list = self._listeners:get(eventName)

	if not list then
		return; -- nothing to do.
	end
	
	self._currentEvent = eventName

	-- add support for result retrieval.
	-- Since we execute multiple listener, we have to gather multiple results.
	-- and let the caller decide what to do with them.
	local results = nil
	local res = nil
	
	profiler:start("fireEvent")
	for _, cb in list:sequence() do
		--if cb._name then
		--	self:info("Calling cb: ",cb._name)
		--end
		
		-- call the callback:
		--cb{handler=self,event=eventName,args={...}};
		res = cb(self,eventName,...);
		
		if res then
			-- need to store this result:
			results = results or std.Vector()
			results:push_back(res)
		end
		
		if cb:isOneShot() then
			self._markedForRemoval:push_back(cb)
		end
	end
	profiler:stop()
	
	-- clear the once methods:
	profiler:start("clearing once methods")
	for _,cb in self._markedForRemoval:sequence() do
		list:eraseValue(cb)
	end
	self._markedForRemoval:clear();
	profiler:stop()
	
	self._currentEvent = nil
	
	return results -- this may be nil or a vector of values.
end

return Class
