local Class = require("classBuilder"){name="OSGTestApp",bases={"gui.wx.SimpleApp","osg.CanvasExtensions"}};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	
	self:setupInterface(options)
	
	self:getFrame():Layout()

	self:setupEventHandlers()
end

function Class:setupInterface(options)
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	local ctrl, canvas = intf:addOSGCtrl{prop=3,handlers=options.handlers}
	self._outputPanel = intf:addOutputPanel{}
	intf:popParent(true)
	self._canvas = canvas;
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:showOutputPanel(enabled)
	local sizer = self._outputPanel:GetParent():GetSizer()
	sizer:Show(self._outputPanel,enabled==nil or enabled)
	sizer:Layout()
end

function Class:home()
	self._canvas:home()
end

function Class:getRoot()
	return self._canvas:getRoot()
end

function Class:getViewer()
	return self._canvas:getViewer()
end

function Class:getCanvas()
	return self._canvas
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from OSG app.")
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class -- return class instance.
