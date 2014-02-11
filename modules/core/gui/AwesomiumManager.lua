local Class = require("classBuilder"){name="AwesomiumManager",bases="base.EventHandler"};

-- This is the singleton class that will be used to manage
-- Awesomium shared ressources.
local evtman = require "base.EventManager"

local awe = require "Awesomium"

function Class:initialize(options)
	
	self._core = awe.WebCore()
	
	evtman:addListener("AppClosing",self)	
end

function Class:uninitialize()
	evtman:removeListener(self)
		
end

function Class:onAppClosing()
	self:uninitialize();
end

return Class()
