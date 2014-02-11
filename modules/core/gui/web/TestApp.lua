local Class = require("classBuilder"){name="WebTestApp",bases="osg.OSGTestApp"};

function Class:new(options)
	self:info("Calling new for WebTestApp.")
	local WebTile = require "gui.web.WebTile"
	self._obj = WebTile()
end

function Class:initialize(options)
	self:getRoot():addChild(self._obj:getWrapper())
	self._obj:loadURL("http://www.google.fr")
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	-- obj:loadURL("http://oos.moxiecode.com/js_webgl/woods_xmas/")
	-- obj:loadURL("http://www.asterank.com/3d/")
	-- obj:loadURL("http://asmallgame.com/labsopen/webgl_impact/")
	-- obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from Web app.")
	
	self:getViewer():addEventHandler( self._obj:getEventHandler() )	
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
