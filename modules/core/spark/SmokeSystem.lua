local Class = require("classBuilder"){name="SmokeSystem",bases="base.Object"};

require "spark"
Class:generateWrapping(spark.SparkDrawable_BaseSystemCreator)

function Class:initialize(options)	
	self:debug2("Creating SimpleSystem");
end

function Class:op_call(obj,textureIDMap, screenWidth, screenHeight)
    local textureParticle = textureIDMap:get("smoke");
    
    local particleRenderer = spark.GLQuadRenderer.create();
    particleRenderer:setTexturingMode( spark.TEXTURE_2D );
    particleRenderer:asQuadRendererInterface():setAtlasDimensions( 2, 2 );
    particleRenderer:setTexture( textureParticle );
    particleRenderer:setTextureBlending( gl.MODULATE );
    particleRenderer:asQuadRendererInterface():setScale( 0.05, 0.05 );
    particleRenderer:setBlending( spark.BLENDING_ADD );
    particleRenderer:enableRenderingHint( spark.DEPTH_WRITE, false );
    
    -- Model
    local particleModel = spark.Model.create(
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA, spark.FLAG_TEXTURE_INDEX, spark.FLAG_ANGLE),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_TEXTURE_INDEX, spark.FLAG_ANGLE) );
    particleModel:setParam( spark.PARAM_SIZE, 0.5, 1.0, 10.0, 20.0 );
    particleModel:setParam( spark.PARAM_ALPHA, 1.0, 0.0 );
    particleModel:setParam( spark.PARAM_ANGLE, 0.0, 2.0 * math.pi );
    particleModel:setParam( spark.PARAM_TEXTURE_INDEX, 0.0, 4.0 );
    particleModel:setLifeTime( 2.0, 5.0 );
    
    -- Emitter
    local particleEmitter = spark.SphericEmitter.create(
        spark.Vector3D(-1.0, 0.0, 0.0), 0.0, 0.1 * math.pi );
    particleEmitter:setZone( spark.Point.create(spark.Vector3D(0.0, 0.015, 0.0)) );
    particleEmitter:setFlow( 250.0 );
    particleEmitter:setForce( 1.5, 1.5 );
    
    -- Group
    local particleGroup = spark.Group.create( particleModel, 500 );
    particleGroup:addEmitter( particleEmitter );
    particleGroup:setRenderer( particleRenderer );
    particleGroup:setGravity( spark.Vector3D(0.0, 0.0, 0.05) );
    particleGroup:enableAABBComputing( true );
    
    local  particleSystem = spark.System.create();
    particleSystem:addGroup( particleGroup );
    particleSystem:enableAABBComputing( true );
    return particleSystem:getSPKID();
end

return Class
