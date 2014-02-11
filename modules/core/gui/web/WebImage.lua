local Class = require("classBuilder"){name="WebImage",bases="base.Object"};

local Event = require "base.Event"
local webman = require "gui.web.WebManager"
local osg = require "osg"
local gl = require "luagl"
local prof = require "debugging.Profiler"

function Class:initialize(options)	
	options = options or {}
	local ww = options.width or 1280
	local hh = options.height or 800;
	
	-- create a webview for this tile:
	self._webView = options.webView or webman:createWebView{width=ww,height=hh};
	self._webView:Resize(ww,hh)
	
	-- create the corresponding image:
	self._image = osg.Image();
	self._image:setAllocationMode(osg.Image.USE_NEW_DELETE)
	self._image:allocateImage(ww, hh, 1, gl.RGBA, gl.UNSIGNED_BYTE)
	--self:getEventManager():addListener(Event.FRAME,self)	
end

function Class:getWidth()
	return self._image:s()
end

function Class:getHeight()
	return self._image:t()
end

function Class:getWebView()
	return self._webView;
end

function Class:getImage()
	return self._image;
end

function Class:update()
	-- retrieve the surface from the webview:
	prof:start("Bitmap surface copy")
	local surface = self._webView:surface()
	
	if not surface then
		self:warn("Invalid surface...");
		prof:stop()
		return;
	end
	
	surface = surface:dynCast("Awesomium::BitmapSurface");
	self:check(surface,"Invalid surface for WebImage");
	
    if not surface:is_dirty() then
		prof:stop()
		return
	end

	--[[
	if self._copiedOnce then
		return
	end
	
	self._copiedOnce = true;
	]]
	
	--self:info("Updating image from webview...")
    surface:copyTo(self._image);
	prof:stop()
end

return Class
