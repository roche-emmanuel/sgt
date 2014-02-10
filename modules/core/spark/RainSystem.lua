local Class = require("classBuilder"){name="RainSystem",bases="base.Object"};

require "spark"
Class:generateWrapping(spark.SparkDrawable_BaseSystemCreator)

function Class:initialize(options)	
	self:debug2("Creating RainSystem");
	self._ratio = 0.9;
end

function Class:rain_param(mini,maxi)
	return mini + (maxi - mini)*self._ratio
end

function Class:op_call(obj,textureIDMap, screenWidth, screenHeight)

    local textureSplash = textureIDMap:get("waterdrops");
    
    -- Inits Particle Engine
    local gravity = spark.Vector3D(0.0,0.0,-2.0);

    -- Renderers
    -- the size ratio is used with renderers whose size are defined in pixels. This is to adapt to any resolution
    local sizeRatio = screenWidth / 1440;

    -- point renderer
    local dropRenderer = spark.GLPointRenderer.create();
    dropRenderer:setType(spark.POINT_CIRCLE);
    dropRenderer:asPointRendererInterface():setSize(2.0 * sizeRatio);
    dropRenderer:enableBlending(true);
    
    -- line renderer
    local rainRenderer = spark.GLLineRenderer.create();
    rainRenderer:asLineRendererInterface():setLength(-0.1);
    rainRenderer:enableBlending(true);

    -- quad renderer
    local splashRenderer = spark.GLQuadRenderer.create();
    splashRenderer:asQuadRendererInterface():setScale(0.05,0.05);
    splashRenderer:setTexturingMode(spark.TEXTURE_2D);
    splashRenderer:setTexture(textureSplash);
    splashRenderer:enableBlending(true);
    splashRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    
    -- Models
    -- rain model
    local rainModel = spark.Model.create(
        bit.bor(spark.FLAG_GREEN, spark.FLAG_RED, spark.FLAG_BLUE, spark.FLAG_ALPHA, spark.FLAG_MASS),
        0, spark.FLAG_MASS);
    rainModel:setParam(spark.PARAM_ALPHA,0.2);
    rainModel:setImmortal(true);

    -- drop model
    local dropModel = spark.Model.create(
        bit.bor(spark.FLAG_GREEN, spark.FLAG_RED, spark.FLAG_BLUE, spark.FLAG_ALPHA, spark.FLAG_MASS),
        0, spark.FLAG_MASS);
    dropModel:setParam(spark.PARAM_ALPHA,0.6);

    -- splash model
    local splashModel = spark.Model.create(
        bit.bor(spark.FLAG_GREEN, spark.FLAG_RED, spark.FLAG_BLUE,
        spark.FLAG_ALPHA, spark.FLAG_SIZE, spark.FLAG_ANGLE),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ANGLE));
    splashModel:setParam(spark.PARAM_ANGLE,0.0,2.0 * math.pi);
    splashModel:setParam(spark.PARAM_ALPHA,1.0,0.0);

    -- rain emitter
    local rainZone = spark.Ring.create(spark.Vector3D(0.0,0.0,5.0), spark.Vector3D(0.0,0.0,1.0));
    local rainEmitter = spark.SphericEmitter.create(spark.Vector3D(0.0,0.0,-1.0),0.0,0.03 * math.pi);
    rainEmitter:setZone(rainZone);

    -- drop emitter
    local dropEmitter = spark.SphericEmitter.create(spark.Vector3D(0.0,0.0,1.0),0.0,0.2 * math.pi);
    
    -- Groups
    -- rain group
    local rainGroup = spark.Group.create(rainModel,8000);
    rainGroup:setRenderer(rainRenderer);
    rainGroup:addEmitter(rainEmitter);
    rainGroup:setFriction(0.7);
    rainGroup:setGravity(gravity);

    -- drop group
    local dropGroup = spark.Group.create(dropModel,16000);
    dropGroup:setRenderer(dropRenderer);
    --dropGroup:addEmitter(dropEmitter);
    dropGroup:setFriction(0.7);
    dropGroup:setGravity(gravity);

    -- splash group
    local splashGroup = spark.Group.create(splashModel,2400);
    splashGroup:setRenderer(splashRenderer);

    -- System
    local particleSystem = spark.System.create();
    particleSystem:addGroup(splashGroup);
    particleSystem:addGroup(dropGroup);
    particleSystem:addGroup(rainGroup);
    
    -- Compute rain rain_parameters
    rainModel:setParam(spark.PARAM_RED,self:rain_param(1.0,0.40));
    rainModel:setParam(spark.PARAM_GREEN,self:rain_param(1.0,0.40));
    rainModel:setParam(spark.PARAM_BLUE,self:rain_param(1.0,0.42));
    rainModel:setParam(spark.PARAM_MASS,self:rain_param(0.4,0.8),self:rain_param(0.8,1.6));

    dropModel:setParam(spark.PARAM_RED,self:rain_param(1.0,0.40));
    dropModel:setParam(spark.PARAM_GREEN,self:rain_param(1.0,0.40));
    dropModel:setParam(spark.PARAM_BLUE,self:rain_param(1.0,0.42));
    dropModel:setParam(spark.PARAM_MASS,self:rain_param(0.4,0.8),self:rain_param(3.0,4.0));
    dropModel:setLifeTime(self:rain_param(0.05,0.3),self:rain_param(0.1,0.5));

    splashModel:setParam(spark.PARAM_RED,self:rain_param(1.0,0.40));
    splashModel:setParam(spark.PARAM_GREEN,self:rain_param(1.0,0.40));
    splashModel:setParam(spark.PARAM_BLUE,self:rain_param(1.0,0.42));
    splashModel:setParam(spark.PARAM_SIZE,0.0,0.0,self:rain_param(0.375,2.25),self:rain_param(0.75,3.78));
    splashModel:setLifeTime(self:rain_param(0.2,0.3),self:rain_param(0.4,0.5));

    rainEmitter:setFlow(self:rain_param(0.0,4800.0));
    rainEmitter:setForce(self:rain_param(3.0,5.0),self:rain_param(6.0,10.0));
    rainZone:setRadius(0.0,self:rain_param(20.0,5.0));

    dropEmitter:setForce(self:rain_param(0.1,1.0),self:rain_param(0.2,2.0));
    dropRenderer:asPointRendererInterface():setSize(self:rain_param(1.0,3.0) * sizeRatio);
    rainRenderer:asLineRendererInterface():setWidth(self:rain_param(1.0,4.0) * sizeRatio);
	
	-- WARNING : this part with an update callback is not working yet.
	--[[
	self._killFunc = spark.GroupCustomUpdate{op_call = function(tt, particle, deltaTime)
		self:info("Calling rain killer.")
		if ( particle:position():z() <= 0.0 ) then
			particle:position():set( particle:position():x(), particle:position():y(), 0.01 );
			splashGroup:addParticles( 1, particle.position(), spark.Vector3D() );
			dropGroup:addParticles( self:rain_param(2,8), particle:position(), dropEmitter );
			return true;
		end
		
		return false;	
	end}]]

	--self._killFunc = spark.GroupCustomUpdate()
	
	--rainGroup:setCustomUpdate(self._killFunc);
	
    return particleSystem:getSPKID();	
end

return Class
