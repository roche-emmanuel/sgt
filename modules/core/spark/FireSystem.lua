local Class = require("classBuilder"){name="FireSystem",bases="base.Object"};

require "spark"
Class:generateWrapping(spark.SparkDrawable_BaseSystemCreator)

function Class:initialize(options)	
	self:debug2("Creating FireSystem");
end

function Class:op_call(obj,textureIDMap, screenWidth, screenHeight)
    local textureFire = textureIDMap:get("fire");
    local textureSmoke = textureIDMap:get("explosion");
    
    -- Renderers
    local fireRenderer = spark.GLQuadRenderer.create();
    fireRenderer:asQuadRendererInterface():setScale(0.3,0.3);
    fireRenderer:setTexturingMode(spark.TEXTURE_2D);
    fireRenderer:setTexture(textureFire);
    fireRenderer:setTextureBlending(gl.MODULATE);
    fireRenderer:setBlending(spark.BLENDING_ADD);
    fireRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    fireRenderer:asQuadRendererInterface():setAtlasDimensions(2,2);

    local smokeRenderer = spark.GLQuadRenderer.create();
    smokeRenderer:asQuadRendererInterface():setScale(0.3,0.3);
    smokeRenderer:setTexturingMode(spark.TEXTURE_2D);
    smokeRenderer:setTexture(textureSmoke);
    smokeRenderer:setTextureBlending(gl.MODULATE);
    smokeRenderer:setBlending(spark.BLENDING_ALPHA);
    smokeRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    smokeRenderer:asQuadRendererInterface():setAtlasDimensions(2,2);

    -- Models
    local fireModel = spark.Model.create(
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA,
        spark.FLAG_SIZE, spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_ALPHA, spark.FLAG_ANGLE),
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_TEXTURE_INDEX, spark.FLAG_ANGLE),
        spark.FLAG_SIZE);
    fireModel:setParam(spark.PARAM_RED,0.8,0.9,0.8,0.9);
    fireModel:setParam(spark.PARAM_GREEN,0.5,0.6,0.5,0.6);
    fireModel:setParam(spark.PARAM_BLUE,0.3);
    fireModel:setParam(spark.PARAM_ALPHA,0.4,0.0);
    fireModel:setParam(spark.PARAM_ANGLE,0.0,2.0 * math.pi,0.0,2.0 * math.pi);
    fireModel:setParam(spark.PARAM_TEXTURE_INDEX,0.0,4.0);
    fireModel:setLifeTime(1.0,1.5);

    local interpolator = fireModel:getInterpolator(spark.PARAM_SIZE);
    interpolator:addEntry(0.5,2.0,5.0);
    interpolator:addEntry(1.0,0.0);

    local smokeModel = spark.Model.create(
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA,
        spark.FLAG_SIZE, spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_SIZE, spark.FLAG_ANGLE),
        bit.bor(spark.FLAG_TEXTURE_INDEX, spark.FLAG_ANGLE),
        spark.FLAG_ALPHA);
    smokeModel:setParam(spark.PARAM_RED,0.3,0.2);
    smokeModel:setParam(spark.PARAM_GREEN,0.25,0.2);
    smokeModel:setParam(spark.PARAM_BLUE,0.2);
    smokeModel:setParam(spark.PARAM_ALPHA,0.2,0.0);
    smokeModel:setParam(spark.PARAM_SIZE,5.0,10.0);
    smokeModel:setParam(spark.PARAM_TEXTURE_INDEX,0.0,4.0);
    smokeModel:setParam(spark.PARAM_ANGLE,0.0,2.0 * math.pi,0.0,2.0 * math.pi);
    smokeModel:setLifeTime(5.0,5.0);

    interpolator = smokeModel:getInterpolator(spark.PARAM_ALPHA);
    interpolator:addEntry(0.0,0.0);
    interpolator:addEntry(0.2,0.2);
    interpolator:addEntry(1.0,0.0);

    -- Emitters
    -- The emitters are arranged so that the fire looks realistic
    local fireEmitter1 = spark.StraightEmitter.create(spark.Vector3D(0.0,0.0,1.0));
    fireEmitter1:setZone(spark.Sphere.create(spark.Vector3D(0.0,0.0,-1.0),0.5));
    fireEmitter1:setFlow(40);
    fireEmitter1:setForce(1.0,2.5);

    local fireEmitter2 = spark.StraightEmitter.create(spark.Vector3D(1.0,0.0,0.6));
    fireEmitter2:setZone(spark.Sphere.create(spark.Vector3D(0.15,0.075,-1.2),0.1));
    fireEmitter2:setFlow(15);
    fireEmitter2:setForce(0.5,1.5);

    local fireEmitter3 = spark.StraightEmitter.create(spark.Vector3D(-0.6,-0.8,0.8));
    fireEmitter3:setZone(spark.Sphere.create(spark.Vector3D(-0.375,-0.375,-1.15),0.3));
    fireEmitter3:setFlow(15);
    fireEmitter3:setForce(0.5,1.5);

    local fireEmitter4 = spark.StraightEmitter.create(spark.Vector3D(-0.8,0.2,0.5));
    fireEmitter4:setZone(spark.Sphere.create(spark.Vector3D(-0.255,0.225,-1.2),0.2));
    fireEmitter4:setFlow(10);
    fireEmitter4:setForce(0.5,1.5);

    local fireEmitter5 = spark.StraightEmitter.create(spark.Vector3D(0.1,-1.0,0.8));
    fireEmitter5:setZone(spark.Sphere.create(spark.Vector3D(-0.075,-0.3,-1.2),0.2));
    fireEmitter5:setFlow(10);
    fireEmitter5:setForce(0.5,1.5);

    local smokeEmitter = spark.SphericEmitter.create(spark.Vector3D(0.0,0.0,1.0),0.0,0.5 * math.pi);
    smokeEmitter:setZone(spark.Sphere.create(spark.Vector3D(),1.2));
    smokeEmitter:setFlow(25);
    smokeEmitter:setForce(0.5,1.0);

    -- Groups
    local fireGroup = spark.Group.create(fireModel,135);
    fireGroup:addEmitter(fireEmitter1);
    fireGroup:addEmitter(fireEmitter2);
    fireGroup:addEmitter(fireEmitter3);
    fireGroup:addEmitter(fireEmitter4);
    fireGroup:addEmitter(fireEmitter5);
    fireGroup:setRenderer(fireRenderer);
    fireGroup:setGravity(spark.Vector3D(0.0,0.0,3.0));

    local smokeGroup = spark.Group.create(smokeModel,135);
    smokeGroup:addEmitter(smokeEmitter);
    smokeGroup:setRenderer(smokeRenderer);
    smokeGroup:setGravity(spark.Vector3D(0.0,0.0,0.4));
    
    -- System
    local particleSystem = spark.System.create();
    particleSystem:addGroup(smokeGroup);
    particleSystem:addGroup(fireGroup);
    return particleSystem:getSPKID();
end

return Class
