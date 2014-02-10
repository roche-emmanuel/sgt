local Class = require("classBuilder"){name="TUIOTestApp",bases="osg.OSGTestApp"};

local tuio = require "tuio"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)

	
	self:getViewer():addEventHandler( tuio.TUIOClientHandler(3333) );
    self:getViewer():setCameraManipulator( osgGA.MultiTouchTrackballManipulator() );
	
	self:home()
end

return Class -- return class instance.
