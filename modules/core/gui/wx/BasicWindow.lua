local Class = require("classBuilder"){name="BasicWindow",bases={"base.Object","gui.wx.HandlerConnector"}};

local wx = require "wx"
local tools = require "gui.wx.Tools"

--- Create an OSG Canvas:
function Class:initialize(options)
	self:check(options and options.parent, "A valid parent is needed to build a basic window.")
	self._parent = options.parent
end

function Class:createPanel(options)
	return tools:createPanel(options)
end

function Class:getOrCreateSizer(window)
	return tools:getOrCreateSizer(window)
end

function Class:getWindow()
	return self._window;
end

function Class:delete()
	self:info("Deleting ", self._CLASSNAME_, " object. Disconnecting handlers.")
	self:disconnectHandlers()
end

function Class:attachTo(options)
	self:warn("This method is not tested.")
	-- attach this window to the given parent.
	-- The parent is given as the first entry in the options table.
	self:check(options and options[1],"Invalid parent for attachment.")
	
	-- prepare the parent:
	local parent = options[1]
	local prop = options.prop or 1
	local flags = options.flags or wx.wxEXPAND
	
	-- Retrieve the previous parent if any:
	local prevParent = self:getWindow():GetParent()
	self:getWindow():Reparent(parent)
end

return Class
