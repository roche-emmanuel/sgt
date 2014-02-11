local Class = require("classBuilder"){name="FrequencyTestApp",bases="gui.wx.SimpleApp"};

local osg = require "osg"
local fs = require "base.FileSystem"

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("Frequency test app is running.")
		
	self._timer = osg.Timer.instance()
	self._durations = {}

	-- register a need timer event:
	self:getEventManager():addListener{event="Frame",object=self}	
end

function Class:buildInterface(intf, options)
	intf:addOutputPanel{}
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:onFrame()
	self._lastTick = self._lastTick or self._timer:tick()

	-- self:info("Executing frame event...")	
	local elapsed = self._timer:delta_s(self._lastTick,self._timer:tick())
	self._lastTick = self._timer:tick()
	
	table.insert(self._durations,elapsed)
	
	self:info(("Current frequency: %.2f Hz"):format(1.0/elapsed))
end

return Class
