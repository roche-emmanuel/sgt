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
	end)

	self._view:addListener('logInfo',function(msg)
		log:info("JavaScript",msg)
	end)
end

function Class:addListener(ename,func)
	self._view:addListener(ename,func)
end

function Class:postMessage(...)
	self._view:postMessage(...)
end

function Class:reload(nocache)
	self._view:reload(nocache)
end

function Class:update()
	-- self:debug("Performing CEF update...")
	self._view:collectMessages()
end

return Class
