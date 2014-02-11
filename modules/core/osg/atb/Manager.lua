local Class = require("classBuilder"){name="ATBManager",bases="base.Object"};

local atb = require "atb"
local Event = require "base.Event"

function Class:initialize(options)
	self:info("Initializing ATB.")
	atb.TwInit( atb.TW_OPENGL, nil );
	
	atb.setupErrorHandler();
	
	self._contexts = require("std.Map")()
	self._nextID = 0
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
end

function Class:getNewContextID()
	local res = self._nextID 
	self._nextID = self._nextID+1
	return res;
end

function Class:onAppClosing()
	self:info("Uninitializing ATB.")
	atb.TwTerminate();
end

function Class:getContext(cname)
	cname = cname or "default"
	
	local Context = require "osg.atb.Context"
	return self._contexts:getOrCreate(cname,Context)
end

return Class()
