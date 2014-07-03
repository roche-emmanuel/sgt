local Class = require("classBuilder"){name="MovingMap",bases={"display.View","mx.Enums"}};

--[[
Class: display.effects.MovingMap

Implementation of the MovingMap in CEF.

This class inherits from <display.View>.
]]

--[=[
--[[
Constructor: MovingMap

Create a new instance of the class.
]]
function MovingMap(options)
]=]
function Class:initialize(options)
	self:debug("Creating CEF MovingMap")

	local size = osg.Vec2f(1280,720)

	-- Now we prepare the TextureObject to hold the DirectX texture for this CEFView:
	-- self._view = require "cef.View" {size=size,url="http://www.google.fr"}

	-- self:setTextureObject(self._view)


	-- self:getTurret():addListener{Class.EVT_PRE_UPDATE,function()
	-- 	self._view:collectMessages()
	-- end}

	-- self._overlayReady = false;
	-- self._view:addListener('overlay_ready',function()
	-- 	-- core2.showMessageBox("Received ready message!","Debug");
	-- 	self._overlayReady = true		
	-- end)
end

function Class:addListener(ename,func)
	self._view:addListener(ename,func)
end

function Class:supportsEvents()
	return true;
end

-- function Class:postMessage(...)
-- 	if not self._overlayReady then
-- 		self:debug("Overlay not ready yet, discarding message :",...)
-- 		return
-- 	end

-- 	self._view:postMessage(...)
-- end

-- function Class:postCommand(...)
-- 	self:postMessage("mxcmd",...)
-- end

-- function Class:reload(nocache)
-- 	self._view:reload(nocache)
-- end

return Class
