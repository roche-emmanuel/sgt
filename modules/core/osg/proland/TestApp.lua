local Class = require("classBuilder"){name="ProlandTestApp",bases="osg.OSGTestApp"};

local proland = require "proland"
local tools = require "osg.Tools"

function Class:initialize(options)

	options = options or {}
	local root = self:getRoot()
	local geode = osg.Geode()
	
	local archive = options.archive or "earth/earth-srtm.my.xml"
	local dataPath = options.dataPath or "data"
	
	local drawable = proland.ProlandDrawable(archive,dataPath)
	geode:addDrawable(drawable)
	root:addChild(geode)
	
	--geode:setCullingActive(false);
	
	self:home()
end

return Class 
