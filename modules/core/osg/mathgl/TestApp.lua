local Class = require("classBuilder"){name="MathGLTestApp",bases="osg.OSGTestApp"};

local mathgl = require "mathgl"
local tools = require "osg.Tools"

function Class:initialize(options)

	self._graph = mathgl.mglGraph()
	self._graph:FPlot("sin(pi*x)");
	self._graph:FPlot("cos(pi*x)");
	--gr:WriteFrame(fs:getRootPath(true).."tests/mathgl_test.png");
	
	self:info("Retrieving image from graph...")
	local img = self._graph:asImage()
		
	local geode = tools:createScreenQuad{image=img} --,invertY=true}
	
	self:info("Adding geode to scenegraph...")
	self:getRoot():addChild(geode);
end

return Class -- return class instance.
