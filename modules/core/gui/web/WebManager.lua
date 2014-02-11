local Class = require("classBuilder"){name="WebManager",bases="gui.web.BasicWebManager"};

local awe = require "Awesomium"

function Class:initialize(options)
	
end

function Class:createSurfaceFactory()
	self:info("Creating OSG surface factory");
	return awe.OSGSurfaceFactory()
end

function Class:releaseAllSurfaces()
	self:info("Releasing OSG surface factory");
	self._surfaceFactory:releaseAllSurfaces();
	self._surfaceFactory = nil;
end

function Class:createWebImage(options)
	local WebImage = require "gui.web.WebImage"
	local res = WebImage(options)
	return res;
end
 
function Class:createWebTexture(options)
	local WebTexture = require "gui.web.WebTexture"
	local res = WebTexture(options)
	return res;
end

return Class() -- return instance of the class.
