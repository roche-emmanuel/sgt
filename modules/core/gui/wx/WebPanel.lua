local Class = require("classBuilder"){name="WebPanel",bases={"gui.wx.BasicWindow","gui.web.View"}};

local wx = require "wx"

local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Create an Output panel:
function Class:initialize(options)
	self:debug("Initializing WebPanel.")
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	self:create(options)

	self:debug("WebPanel initialization done.")
end

function Class:getParentWindowHandle()
	return self._window:GetHandle()
end

function Class:createSurface(options)
	-- do nothing by default.
end

function Class:getManager()
	return require "gui.web.WebManager"
end

function Class:createWebView(options)
	-- do nothing in this function.
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

function Class:create(options)
	local Interface = require "gui.wx.ControlInterface"
	self._window = self:createPanel{parent=self._parent}

	local handle = self:getParentWindowHandle()
	self:info("Window handle is: ", handle)
	
	-- create the webview here:
	self:doCreateWebView(options)	
end

return Class
