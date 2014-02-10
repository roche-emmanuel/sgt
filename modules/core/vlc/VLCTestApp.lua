local Class = require("classBuilder"){name="VLCTestApp",bases="osg.OSGTestApp"};

local vlc = require "vlc"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"
local gl = require "luagl"

function Class:initialize(options)
	options = options or {}
	
	local file = fs:getRootPath(true) .. options.file;
	
	-- wx.wxSetEnv("VLC_PLUGIN_PATH",fs:getRootPath(true) .. "bin/win32/vlcPlugins")
	--sgt.setEnv("VLC_PLUGIN_PATH",fs:getRootPath(true) .. "bin/win32/vlcPlugins")
			
	file = file:gsub("/","\\")
	
	local img = vlc.VLCImageStream();
		
	self:info("Loading movie from file: " .. file)
	img:open(file);
	--img:play();

	-- local geode = tools:createScreenQuad{image=tools:getImage("tests/data/wave.bmp")}
	local geode = tools:createScreenQuad{image=img,invertY=true}
	
	self:info("Adding geode to scenegraph...")
	self:getRoot():addChild(geode);
end

function Class:onStop()
	self:info("Releasing OSG resources...")
	self:getRoot():removeChildren(0,self:getRoot():getNumChildren())
	self:info("OSG resources released.")
end

return Class -- return class instance.
