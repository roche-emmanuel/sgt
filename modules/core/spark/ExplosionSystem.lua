local Class = require("classBuilder"){name="ExplosionSystem",bases="base.Object"};

require "spark"

Class:generateWrapping(spark.SparkDrawable_BaseSystemCreator)

function Class:initialize(options)	
	self:debug2("Creating ExplosionSystem");
end

function Class:op_call(obj,textureIDMap, screenWidth, screenHeight)
    local textureExplosion = textureIDMap:get("explosion");
    local textureFlash = textureIDMap:get("flash");
    local textureSpark1 = textureIDMap:get("spark1");
    local textureSpark2 = textureIDMap:get("spark2");
    local textureWave = textureIDMap:get( "wave");
    
    --
    -- Renderers
    --
    
    -- smoke renderer
    local smokeRenderer = spark.GLQuadRenderer.create();
    smokeRenderer:setTexturingMode(spark.TEXTURE_2D);
    smokeRenderer:setTexture(textureExplosion);
    smokeRenderer:setTextureBlending(gl.MODULATE);
    smokeRenderer:asQuadRendererInterface():setAtlasDimensions(2,2); -- uses 4 different patterns in the texture
    smokeRenderer:setBlending(spark.BLENDING_ALPHA);
    smokeRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    smokeRenderer:setShared(true);

    -- flame renderer
    local flameRenderer = spark.GLQuadRenderer.create();
    flameRenderer:setTexturingMode(spark.TEXTURE_2D);
    flameRenderer:setTexture(textureExplosion);
    flameRenderer:setTextureBlending(gl.MODULATE);
    flameRenderer:asQuadRendererInterface():setAtlasDimensions(2,2);
    flameRenderer:setBlending(spark.BLENDING_ADD);
    flameRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    flameRenderer:setShared(true);

    -- flash renderer
    local flashRenderer = spark.GLQuadRenderer.create();
    flashRenderer:setTexturingMode(spark.TEXTURE_2D);
    flashRenderer:setTexture(textureFlash);
    flashRenderer:setTextureBlending(gl.REPLACE);
    flashRenderer:setBlending(spark.BLENDING_ADD);
    flashRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    flashRenderer:setShared(true);

    -- spark 1 renderer
    local spark1Renderer = spark.GLQuadRenderer.create();
    spark1Renderer:setTexturingMode(spark.TEXTURE_2D);
    spark1Renderer:setTexture(textureSpark1);
    spark1Renderer:setTextureBlending(gl.REPLACE);
    spark1Renderer:setBlending(spark.BLENDING_ADD);
    spark1Renderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    spark1Renderer:asOriented3DRendererInterface():setOrientation(spark.DIRECTION_ALIGNED); -- sparks are oriented function o their velocity
    spark1Renderer:asQuadRendererInterface():setScale(0.05,1.0); -- thin rectangles
    spark1Renderer:setShared(true);

    -- spark 2 renderer
    local spark2Renderer = nil;
    if ( spark.GLPointRenderer.loadGLExtPointSprite() and spark.GLPointRenderer.loadGLExtPointParameter()) then-- uses point sprite if possible
        spark.GLPointRenderer.setPixelPerUnit(45.0 * math.pi / 180.0, screenHeight);
        local pointRenderer = spark.GLPointRenderer.create();
        pointRenderer:setType(spark.POINT_SPRITE);
        pointRenderer:setTexture(textureSpark2);
        pointRenderer:setTextureBlending(gl.MODULATE);
        pointRenderer:enableWorldSize(true);
        pointRenderer:asPointRendererInterface():setSize(0.02);
        spark2Renderer = pointRenderer;
    else
        local quadRenderer = spark.GLQuadRenderer.create();
        quadRenderer:setTexturingMode(spark.TEXTURE_2D);
        quadRenderer:setTexture(textureSpark2);
        quadRenderer:setTextureBlending(gl.MODULATE);
        quadRenderer:asQuadRendererInterface():setScale(0.02,0.02);
        spark2Renderer = quadRenderer;
    end
	
    spark2Renderer:setBlending(spark.BLENDING_ADD);
    spark2Renderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    spark2Renderer:setShared(true);

    -- wave renderer
    local waveRenderer = spark.GLQuadRenderer.create();
    waveRenderer:setTexturingMode(spark.TEXTURE_2D);
    waveRenderer:setTexture(textureWave);
    waveRenderer:setTextureBlending(gl.MODULATE);
    waveRenderer:setBlending(spark.BLENDING_ALPHA);
    waveRenderer:enableRenderingHint(spark.DEPTH_WRITE,false);
    waveRenderer:enableRenderingHint(spark.ALPHA_TEST,true); -- uses the alpha test
    waveRenderer:setAlphaTestThreshold(0.0);
    waveRenderer:asOriented3DRendererInterface():setOrientation(spark.FIXED_ORIENTATION); -- the orientatin is fixed
    waveRenderer:asOriented3DRendererInterface():setLookVector(spark.Vector3D(0.0,1.0,0.0));
    waveRenderer:asOriented3DRendererInterface():setUpVector(spark.Vector3D(1.0,0.0,0.0)); -- we dont really care about the up axis
    waveRenderer:setShared(true);
    
    --
    -- Models
    --
    local interpolator = nil; -- pointer to an interpolator that is used to retrieve interpolators    

    -- smoke model
    local smokeModel = spark.Model.create(
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA,
        spark.FLAG_SIZE, spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ANGLE),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        spark.FLAG_ALPHA);
    smokeModel:setParam(spark.PARAM_RED,0.2);
    smokeModel:setParam(spark.PARAM_GREEN,0.2);
    smokeModel:setParam(spark.PARAM_BLUE,0.2);
    smokeModel:setParam(spark.PARAM_SIZE,0.6,0.8,1.0,1.4);
    smokeModel:setParam(spark.PARAM_TEXTURE_INDEX,0.0,4.0);
    smokeModel:setParam(spark.PARAM_ANGLE,0.0,math.pi * 0.5,0.0,math.pi * 0.5);
    smokeModel:setLifeTime(2.5,3.0);
    smokeModel:setShared(true);

    interpolator = smokeModel:getInterpolator(spark.PARAM_ALPHA);
    interpolator:addEntry(0.0,0.0);
    interpolator:addEntry(0.4,0.4,0.6);
    interpolator:addEntry(0.6,0.4,0.6);
    interpolator:addEntry(1.0,0.0);

    -- flame model
    local flameModel = spark.Model.create(
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA,
        spark.FLAG_SIZE, spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        bit.bor( spark.FLAG_ANGLE, spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE),
        bit.bor(spark.FLAG_ANGLE, spark.FLAG_TEXTURE_INDEX),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA));
    flameModel:setParam(spark.PARAM_RED,1.0,0.2);
    flameModel:setParam(spark.PARAM_GREEN,0.5,0.2);
    flameModel:setParam(spark.PARAM_BLUE,0.2,0.2);
    flameModel:setParam(spark.PARAM_TEXTURE_INDEX,0.0,4.0);
    flameModel:setParam(spark.PARAM_ANGLE,0.0,math.pi * 0.5,0.0,math.pi * 0.5);
    flameModel:setLifeTime(1.5,2.0);
    flameModel:setShared(true);

    interpolator = flameModel:getInterpolator(spark.PARAM_SIZE);
    interpolator:addEntry(0.0,0.25);
    interpolator:addEntry(0.02,0.6,0.8);
    interpolator:addEntry(1.0,1.0,1.4);

    interpolator = flameModel:getInterpolator(spark.PARAM_ALPHA);
    interpolator:addEntry(0.5,1.0);
    interpolator:addEntry(1.0,0.0);

    -- flash model
    local flashModel = spark.Model.create(
        bit.bor(spark.FLAG_ALPHA, spark.FLAG_SIZE, spark.FLAG_ANGLE),
        spark.FLAG_NONE,
        spark.FLAG_ANGLE,
        bit.bor(spark.FLAG_ALPHA, spark.FLAG_SIZE));
    flashModel:setParam(spark.PARAM_ANGLE,0.0,2.0 * math.pi);
    flashModel:setLifeTime(0.5,0.5);
    flashModel:setShared(true);

    interpolator = flashModel:getInterpolator(spark.PARAM_SIZE);
    interpolator:addEntry(0.0,0.25);
    interpolator:addEntry(0.1,1.0,2.0);

    interpolator = flashModel:getInterpolator(spark.PARAM_ALPHA);
    interpolator:addEntry(0.0,1.0);
    interpolator:addEntry(0.4,0.0);

    -- spark 1 model
    local spark1Model = spark.Model.create(
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA),
        spark.FLAG_ALPHA,
        spark.FLAG_SIZE);
    spark1Model:setParam(spark.PARAM_ALPHA,1.0,0.0);
    spark1Model:setParam(spark.PARAM_SIZE,0.2,0.4);
    spark1Model:setLifeTime(0.2,1.0);
    spark1Model:setShared(true);

    -- spark 2 model
    local spark2Model = spark.Model.create(
        bit.bor(spark.FLAG_RED, spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA),
        bit.bor(spark.FLAG_GREEN, spark.FLAG_BLUE, spark.FLAG_ALPHA),
        spark.FLAG_GREEN);
    spark2Model:setParam(spark.PARAM_ALPHA,1.0,0.0);
    spark2Model:setParam(spark.PARAM_RED,1.0);
    spark2Model:setParam(spark.PARAM_GREEN,1.0,1.0,0.3,1.0);
    spark2Model:setParam(spark.PARAM_BLUE,0.7,0.3);
    spark2Model:setLifeTime(1.0,3.0);
    spark2Model:setShared(true);

    -- wave model
    local waveModel = spark.Model.create(
        bit.bor(spark.FLAG_ALPHA, spark.FLAG_SIZE),
        bit.bor(spark.FLAG_SIZE, spark.FLAG_ALPHA));
    waveModel:setParam(spark.PARAM_SIZE,0.0,4.0);
    waveModel:setParam(spark.PARAM_ALPHA,0.2,0.0);
    waveModel:setLifeTime(0.8,0.8);
    waveModel:setShared(true);
    
    --
    -- Emitters
    --
    local explosionSphere = spark.Sphere.create(spark.Vector3D(0.0,0.0,0.0),0.4);

    -- smoke emitter
    local smokeEmitter = spark.RandomEmitter.create();
    smokeEmitter:setZone(spark.Sphere.create(spark.Vector3D(0.0,0.0,0.0),0.6),false);
    smokeEmitter:setFlow(-1);
    smokeEmitter:setTank(15);
    smokeEmitter:setForce(0.02,0.04);

    -- flame emitter
    local flameEmitter = spark.NormalEmitter.create();
    flameEmitter:setZone(explosionSphere);
    flameEmitter:setFlow(-1);
    flameEmitter:setTank(15);
    flameEmitter:setForce(0.06,0.1);

    -- flash emitter
    local flashEmitter = spark.StaticEmitter.create();
    flashEmitter:setZone(spark.Sphere.create(spark.Vector3D(0.0,0.0,0.0),0.1));
    flashEmitter:setFlow(-1);
    flashEmitter:setTank(3);

    -- spark 1 emitter
    local spark1Emitter = spark.NormalEmitter.create();
    spark1Emitter:setZone(explosionSphere);
    spark1Emitter:setFlow(-1);
    spark1Emitter:setTank(20);
    spark1Emitter:setForce(2.0,3.0);

    -- spark 2 emitter
    local spark2Emitter = spark.NormalEmitter.create();
    spark2Emitter:setZone(explosionSphere);
    spark2Emitter:setFlow(-1);
    spark2Emitter:setTank(400);
    spark2Emitter:setForce(0.4,0.8);

    -- wave emitter
    local waveEmitter = spark.StaticEmitter.create();
    waveEmitter:setZone(spark.Point.create());
    waveEmitter:setFlow(-1);
    waveEmitter:setTank(1);
    
    --
    -- Groups
    --
    
    -- smoke group
    local smokeGroup = spark.Group.create(smokeModel,15);
    smokeGroup:addEmitter(smokeEmitter);
    smokeGroup:setRenderer(smokeRenderer);
    smokeGroup:setGravity(spark.Vector3D(0.0,0.0,0.05));

    -- flame group
    local flameGroup = spark.Group.create(flameModel,15);
    flameGroup:addEmitter(flameEmitter);
    flameGroup:setRenderer(flameRenderer);

    -- flash group
    local flashGroup = spark.Group.create(flashModel,3);
    flashGroup:addEmitter(flashEmitter);
    flashGroup:setRenderer(flashRenderer);

    -- spark 1 group
    local spark1Group = spark.Group.create(spark1Model,20);
    spark1Group:addEmitter(spark1Emitter);
    spark1Group:setRenderer(spark1Renderer);
    spark1Group:setGravity(spark.Vector3D(0.0,0.0,-1.5));

    -- spark 2 group
    local spark2Group = spark.Group.create(spark2Model,400);
    spark2Group:addEmitter(spark2Emitter);
    spark2Group:setRenderer(spark2Renderer);
    spark2Group:setGravity(spark.Vector3D(0.0,0.0,-0.3));
    spark2Group:setFriction(0.4);

    -- wave group
    local waveGroup = spark.Group.create(waveModel,1);
    waveGroup:addEmitter(waveEmitter);
    waveGroup:setRenderer(waveRenderer);
    
    --
    -- System
    --
    local system = spark.System.create();
    system:addGroup(waveGroup);
    system:addGroup(smokeGroup);
    system:addGroup(flameGroup);
    system:addGroup(flashGroup);
    system:addGroup(spark1Group);
    system:addGroup(spark2Group);
    return system:getSPKID();
end

return Class
