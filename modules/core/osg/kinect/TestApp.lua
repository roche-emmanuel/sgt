local Class = require("classBuilder"){name="KinectTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
		
	local kinect = require "kinect"
	
	self._kinectHandler = kinect.KinectDataDrawer();
    local res = self._kinectHandler:initialize( 0 );
    self:check(res,"Cannot connect to Knect device.")
	
    -- Display the depth image
    local quad = tools:createScreenQuad{image=self._kinectHandler:getImage()}
    
    local camera = osg.Camera();
    camera:setReferenceFrame( osg.Transform.ABSOLUTE_RF );
    camera:setRenderOrder( osg.Camera.POST_RENDER );
    camera:setAllowEventFocus( false );
    camera:setViewport( 0, 0, 320, 240 );
    camera:setProjectionMatrix( osg.Matrixd.ortho2D(0.0, 1.0, 1.0, 0.0) );
    camera:addChild( quad );
    
    -- Display the skeleton geometry
    local skeleton = osg.Geode();
    skeleton:setInitialBound( osg.BoundingSphere(osg.Vec3d(0.0,0.0,0.0), 1.0) );
    skeleton:addDrawable( self._kinectHandler:getSkeleton() );
    skeleton:getOrCreateStateSet():setAttributeAndModes( osg.Point(5.0) );
		
    -- The scene graph and viewer
    local root = osg.MatrixTransform();
    root:addChild( camera );
    root:addChild( skeleton );
    root:getOrCreateStateSet():setMode( gl.LIGHTING, osg.StateAttribute.OFF );
    
    local trackball = osgGA.TrackballManipulator();
    trackball:setHomePosition( osg.Vec3d(0.5, 0.5,-2.0), osg.Vec3d(0.5, 0.5, 0.5), osg.Vec3d(0.0,-1.0, 0.0) );
    
    self:getViewer():addEventHandler( self._kinectHandler );
    self:getViewer():setCameraManipulator( trackball );
	
    self:getRoot():addChild(root);

	self:home()
end

function Class:onStop()
	self:info("Stopping kinect handler.")
	self:getViewer():removeEventHandler( self._kinectHandler );
    self._kinectHandler:quit();
	self._kinectHandler = nil;
end

return Class 
