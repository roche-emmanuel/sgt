local Class = require("classBuilder"){name="CanvasExtensions",bases="base.Object"}

local tools = require "osg.Tools"

-- This class is meant to be used as extension on a OSGCanvas instance.
function Class:loadModel(filename)
	local node = tools:loadModel(fs:getRootPath(true) .. filename)
	
	local mt = osg.MatrixTransform()
	mt:addChild(node)
	
	-- canvas methods:
	self:getRoot():addChild(mt)
	self:home()
	return mt
end

function Class:createCube(size)
	local cube = osg.Box(osg.Vec3f(0.0,0.0,0.0),size)
	local drawable = osg.ShapeDrawable(cube,nil)
	local geode = osg.Geode()
	geode:addDrawable(drawable)

	self:getRoot():addChild(geode)
	self:home()
	return geode	
end

function Class:createCircleAnimationPath(radius, duration )
	local path = osg.AnimationPath();
	path:setLoopMode(osg.AnimationPath.LOOP)
	    
    local numSamples = 32;
    local delta_yaw = 2.0 * math.pi/(numSamples - 1.0);
    local delta_time = duration / numSamples;
    for i=0,numSamples-1 do
        local yaw = delta_yaw * i;
        local pos = osg.Vec3d(math.sin(yaw)*radius, math.cos(yaw)*radius, 0.0);
        local rot = osg.Quat( -yaw, osg.ZAXIS );
        path:insert( delta_time * i, osg.AnimationPath_ControlPoint(pos, rot) );
    end
	
    return path;    
end

function Class:applyCircleAnimation(model, radius, dur)
	local apcb = osg.AnimationPathCallback();
	apcb:setAnimationPath( self:createCircleAnimationPath(radius, dur));
	model:setUpdateCallback( apcb );
end

function Class:createBase(options)
	local base = tools:createQuad(options)
	self:getRoot():addChild(base)
end

function Class:setupDefaultScene()
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local tools = require "osg.Tools"
	
	local sb = tools:createSkyBox{
		x_pos="skybox1/right.jpg",
		x_neg="skybox1/left.jpg",
		y_pos="skybox1/front.jpg",
		y_neg="skybox1/back.jpg",
		z_pos="skybox1/top.jpg",
		z_neg="skybox1/bottom.jpg",
	}
	
	self:getRoot():addChild(sb)
end

return Class
