local Class = require("classBuilder"){name="StockRetrieverApp",bases={"gui.wx.SimpleApp","finance.StockRetrieverConsoleApp"}};

local Thread = require "base.Thread"

function Class:initialize(options)

	self:check(options,"Invalid options table.")
	self:info("Setting up StockRetriever.")

	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	-- Create a new thread to retrieve the quotes every minutes:
	
	self._thread = Thread{name="quote_thread",timeout=10.0,func=Class.main_loop}
	
	self:info("Starting quote thread.")
	self._thread() -- start the thread
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addOutputPanel{}
	intf:popParent(true)
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end


return Class -- return class instance.
