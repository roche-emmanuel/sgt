local Class = require("classBuilder"){name="WebOverlay",bases="gui.web.View"};

local osg = require "osg"
local Event = require "base.Event"

function Class:new(options)
	self:check(options and options.window,"Invalid windows for webOverlay.")
	
	self._window = options.window
	options.windowHandle = self._window:GetHandle()
end

function Class:initialize(options)	
	self:debug("Initializing WebOverlay.")
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}

	self:debug("WebOverlay initialization done.")
end

function Class:getManager()
	return require "gui.web.WebManager"
end

function Class:onAppClosing()
	self:info("Destroying webview...")
	self:destroy()
	-- self:info("Detaching from parent...")
	-- self._webView:remove_parent_window()
	self:info("Destroying children...")
	self._window:DestroyChildren()
	self:info("Destroying window...")
	self._window:Destroy()
	self:info("Done")
end



return Class
