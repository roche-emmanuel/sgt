local Class = require("classBuilder"){name="CEFOverlay",bases={"mx.overlays.BasicOverlay","mx.overlays.OverlayListener","mx.menus.MenuListener"}};

local log = require "tracer"

--[[
Class: display.effects.CEFOverlay

MX Overlay implementation based on the CEF rendering system.
All the overlay content is rendered on a Web texture which is overlayed
on top of the imagery.

This class inherits from <display.Effect>.
]]

--[=[
--[[
Constructor: CEFOverlay

Create a new instance of the class.
]]
function CEFOverlay(options)
]=]
function Class:initialize(options)
	self:debug("Loading CEF Overlay!")

	-- when creating the overlay, we need to build a new CEFViewBase:

	-- Retrieve the appropriate dimensions for the rendering of this view:
	-- The dimensions can be retrieved from the parent OutputChannel.
	-- Note that the OutputChannel is actually the processor for this effect:
	local output = self:getProcessor()	
	local res = output:getResolution()
	local size = self.overlayResolutionSizeMap[res] or self.resolutionSizeMap[res]

	-- Now we prepare the TextureObject to hold the DirectX texture for this CEFView:
	self._view = require "cef.View" {size=size,url="W:/Cloud/Projects/mxjs/app/index.html"}

	-- Now we build the effect pipeline by just merging the Overlay on top of the background imagery:
	local fx = self:addFilter{"AddLayer"}

	-- tobj:setLinearFiltering()
	self._view:setPointFiltering()
	fx:setTextureObject(self._view,1)

	self._view:addListener('overlay_ready',function()
		-- core2.showMessageBox("Received ready message!","Debug");
		
		self:assignMenuMap()
		self:assignLayout()
		self._overlayReady = true
	end)

	-- self._view:addListener('logInfo',function(msg)
	-- 	log:info("JavaScript",msg)
	-- end)
end

function Class:addListener(ename,func)
	self._view:addListener(ename,func)
end

function Class:postMessage(...)
	if not self._overlayReady then
		self:debug("Overlay not ready yet, discarding message :",...)
		return
	end

	self._view:postMessage(...)
end

function Class:postCommand(...)
	self._view:postMessage("mxcmd",...)
end

function Class:reload(nocache)
	self._view:reload(nocache)
end

function Class:update()
	-- self:debug("Performing CEF update...")
	self._view:collectMessages()
end

function Class:assignMenuMap()
	self:debug("Assigning menu map to CEFView...")
	
	-- Now fill the array:
	-- if we have a valid turret at this point, then we should retrieve the menu map from it:				
	local mm = self._turret:getMenuManager():getMainMenu()
	local map = mm:getChildrenMap()

	self:postCommand("setMenuMap",map)
end

local res_map = {
	[Class.RESOLUTION_1080P] = "HD",
	[Class.RESOLUTION_720P] = "HD",
	[Class.RESOLUTION_576I] = "SD",
	[Class.RESOLUTION_480I] = "SD",
	[Class.RESOLUTION_NTSC] = "NTSC",
	[Class.RESOLUTION_PAL] = "PAL",
}

function Class:assignLayout()
	-- Now fill the array:
	local otype = self:getOverlayType()
	local res = self:getProcessor():getResolution()
	local rname = res_map[res]
	self:check(rname,"Invalid resolution name for index: ",res)

	local flavor = self:getConfig():get("Overlay.flavor")

	self:debug("Setting layout to type=",otype,", res=",rname,", flavor=",flavor)
	self:postCommand("setLayout",otype,rname,flavor or "")
end

function Class:onNorthIndicatorUpdated(value)
	if(self._prevNorth and math.abs(self._prevNorth - value) < 0.01) then return end

	self._prevNorth = value
	self:postCommand("setNorthIndicatorAngle",value)
end

return Class
