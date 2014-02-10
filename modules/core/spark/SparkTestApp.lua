local Class = require("classBuilder"){name="SparkTestApp",bases="osg.OSGTestApp"};

local spark = require "spark"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	--self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)

	local spark = require "spark"

	--local handler = spark.SparkUpdatingHandler();
	--handler:removeSpark(1)

	local gl = require "luagl"
	local tools = require "osg.Tools"

	spark.System.setClampStep( true, 0.1 );
	spark.System.useAdaptiveStep( 0.001, 0.01 );
		
	local sdraw = spark.SparkDrawable();
	local tracking = false;
	
	if options.system == "simple" then
		sdraw:addImage( "flare", tools:loadImage(fs:getRootPath("tests/data/flare.bmp")), gl.ALPHA );
		
		local SimpleSystem = require "spark.SimpleSystem"
		sdraw:setBaseSystemCreator( SimpleSystem.createInstance() );
		sdraw:addParticleSystem();
	elseif options.system == "smoke" then		
		sdraw:addImage( "smoke", tools:loadImage(fs:getRootPath("tests/data/smoke.png")), gl.RGBA );
		
		local System = require "spark.SmokeSystem"
		sdraw:setBaseSystemCreator( System.createInstance() );
		sdraw:addParticleSystem();
		tracking = true
	elseif options.system == "fire" then		
		sdraw:addImage( "fire", tools:loadImage(fs:getRootPath("tests/data/fire2.bmp")), gl.RGBA );
		sdraw:addImage( "explosion", tools:loadImage(fs:getRootPath("tests/data/explosion.bmp")), gl.ALPHA );
		
		local System = require "spark.FireSystem"
		sdraw:setBaseSystemCreator( System.createInstance() );
		sdraw:addParticleSystem();
	elseif options.system == "rain" then		
		sdraw:addImage( "waterdrops", tools:loadImage(fs:getRootPath("tests/data/waterdrops.bmp")), gl.ALPHA);
		
		local System = require "spark.RainSystem"
		sdraw:setBaseSystemCreator( System.createInstance(), true );
	elseif options.system == "explosion" then		
		sdraw:addImage( "explosion", tools:loadImage(fs:getRootPath("tests/data/explosion.bmp")), gl.ALPHA );
		sdraw:addImage( "flash", tools:loadImage(fs:getRootPath("tests/data/flash.bmp")), gl.RGB );
		sdraw:addImage( "spark1", tools:loadImage(fs:getRootPath("tests/data/spark1.bmp")), gl.RGB );
		sdraw:addImage( "spark2", tools:loadImage(fs:getRootPath("tests/data/point.bmp")), gl.ALPHA );
		sdraw:addImage( "wave", tools:loadImage(fs:getRootPath("tests/data/wave.bmp")), gl.RGBA );
		
		local System = require "spark.ExplosionSystem"
		sdraw:setBaseSystemCreator( System.createInstance() );
		sdraw:addParticleSystem();
		sdraw:setSortParticles( true );
	else
		self:error("Invalid system for SPARK test.")
	end

	local geode = osg.Geode();
	geode:addDrawable( sdraw );
	geode:getOrCreateStateSet():setRenderingHint( osg.StateSet.TRANSPARENT_BIN );
	geode:getOrCreateStateSet():setMode( gl.LIGHTING, osg.StateAttribute.OFF );

	local handler = spark.SparkUpdatingHandler();
	handler:addSpark( sdraw );
	if tracking then
		handler:setTrackee( 0, mt );
	end
	
	--self._handler = handler;
	
	self:getRoot():addChild(geode)
	self:getViewer():addEventHandler( handler );

	self:home()
end

return Class -- return class instance.
