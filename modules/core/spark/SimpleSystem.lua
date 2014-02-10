local Class = require("classBuilder"){name="SimpleSystem",bases="base.Object"};

require "spark"
Class:generateWrapping(spark.SparkDrawable_BaseSystemCreator)

function Class:initialize(options)	
	self:debug2("Creating SimpleSystem");
end

function Class:op_call(obj,textureIDMap, screenWidth, screenHeight)
    local flareTexID = textureIDMap:get("flare") --1;
	--self:info("Retrieved flare ID=",flareTexID)
	
    -- Create the model	
    local model = spark.Model.create(
        bit.bor(spark.FLAG_RED,spark.FLAG_GREEN,spark.FLAG_BLUE,spark.FLAG_ALPHA),
		bit.bor(spark.FLAG_ALPHA,spark.FLAG_RED,spark.FLAG_GREEN,spark.FLAG_BLUE));
    model:setParam( spark.PARAM_ALPHA, 1.0, 0.0 );
    model:setLifeTime( 1.0, 2.0 );
    
    -- Create the renderer
    local renderer = nil;
    if ( spark.GLPointRenderer.loadGLExtPointSprite() and spark.GLPointRenderer.loadGLExtPointParameter()) then
        local pointRenderer = spark.GLPointRenderer.create();
        pointRenderer:setType( spark.POINT_SPRITE );
        pointRenderer:enableWorldSize( true );
        spark.GLPointRenderer.setPixelPerUnit( 45.0 * 3.14159 / 180.0, screenHeight );
        pointRenderer:asPointRendererInterface():setSize( 0.1 );
        pointRenderer:setTexture( flareTexID );
        renderer = pointRenderer;
    else
        local quadRenderer = spark.GLQuadRenderer.create();
        quadRenderer:setTexturingMode( spark.TEXTURE_2D );
        quadRenderer:asQuadRendererInterface():setScale( 0.1, 0.1 );
        quadRenderer:setTexture( flareTexID );
        renderer = quadRenderer;
    end
    
    renderer:enableBlending( true );
    renderer:setBlendingFunctions( gl.SRC_ALPHA, gl.ONE );
    renderer:setTextureBlending( gl.MODULATE );
    renderer:enableRenderingHint( spark.DEPTH_TEST, false );
    
    -- Create the zone
    local source = spark.Point.create();
    
    -- Creates the emitter
    local emitter = spark.RandomEmitter.create();
    emitter:setZone( source );
    emitter:setForce( 2.8, 3.2 );
    emitter:setTank( 500 );
    emitter:setFlow( -1.0 );
    
    -- Creates the Group
    local group = spark.Group.create( model, 500 );
    group:addEmitter( emitter );
    group:setRenderer( renderer );
    group:setGravity( spark.Vector3D(0.0, 0.0, -1.0) );
    group:setFriction( 2.0 );
    group:enableAABBComputing( true );
    
    -- Creates the System
    local system = spark.System.create();
    system:addGroup( group );
    system:enableAABBComputing( true );
    
    -- Creates the base and gets a pointer to the base
    model:setShared( true );
    renderer:setShared( true );
    return system:getSPKID();	
end

return Class
