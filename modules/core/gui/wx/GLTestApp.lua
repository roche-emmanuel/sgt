local Class = require("classBuilder"){name="GLTestApp",bases={"gui.wx.SimpleApp"}};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	
	self:setupInterface(options)
	
	self:getFrame():Layout()
end

function Class:setupInterface(options)
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	options.prop = 3
	options.onFrame = function() self:onFrame() end
	options.onResize = function(x,y,e) self:onResize(x,y,e) end
	options.onMouseDown = function(b,x,y,e) self:onMouseDown(b,x,y,e) end
	options.onMouseUp	= function(b,x,y,e) self:onMouseUp(b,x,y,e) end
	options.onMouseMotion = function(x,y,e) self:onMouseMotion(x,y,e) end
	options.onMouseWheel = function(wheel,e) self:onMouseWheel(wheel,e) end

	local ctrl, canvas = intf:addGLCtrl(options)
	self._outputPanel = intf:addOutputPanel{}
	intf:popParent(true)
	self._canvas = canvas;
	
	local wman = require("gui.wx.WindowManager")
	wman:getMainFrame():SetSize(1280,720)
end

function Class:showOutputPanel(enabled)
	local sizer = self._outputPanel:GetParent():GetSizer()
	sizer:Show(self._outputPanel,enabled==nil or enabled)
	sizer:Layout()
end

function Class:getCanvas()
	return self._canvas
end

function Class:onFrame()

end

function Class:onResize(x,y)

end

function Class:onMouseDown(button,x,y)

end

function Class:onMouseUp(button,x,y)

end

function Class:onMouseMotion(x,y)

end

return Class -- return class instance.
