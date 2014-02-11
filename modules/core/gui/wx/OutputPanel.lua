local Class = require("classBuilder"){name="OutputPanel",bases="gui.wx.BasicWindow"};

local wx = require "wx"

local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Create an Output panel:
function Class:initialize(options)
	self:debug4("Initializing OutputPanel.")

	self._freezed = false;
	
	self._sink = sgt.LogSink{
		output = function(tt,obj,level,trace,msg)
			if self._freezed then
				return -- do not write anything in that case.
			end
			
			self._tc:SetDefaultStyle(self._styles[level] or self._defaultStyle);

			self._tc:AppendText(msg);
			self._tc:ShowPosition(self._tc:GetLastPosition());
		end	
	};
		
	self._sink:setName("wx_log_panel_sink")
	
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	
	self:create()

	self:info("Installing wx log handler...")
	local win = wx.wxGetApp():GetTopWindow()
	self._prevLogHandler = sgt.LogManager.instance():getLogHandler()
	sgt.LogManager.instance():setLogHandler(wx.createWxLogHandler(self._tc:GetEventHandler())) --win:GetEventHandler()))
	
	sgt.LogManager.instance():addSink(self._sink)
	self:debug4("OutputPanel initialization done.")
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Removing OutputPanel Sink.")
	sgt.LogManager.instance():removeSink(self._sink);

	self:info("Removing wx log handler...")
	sgt.LogManager.instance():setLogHandler(self._prevLogHandler)
	self._prevLogHandler = nil;		
end

function Class:create()
	local Interface = require "gui.wx.ControlInterface"
	self._window = self:createPanel{parent=self._parent}

	local intf = Interface{root=self._window}	
	self._tc = intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND,style=bit.bor(wx.wxTE_MULTILINE,wx.wxTE_READONLY,wx.wxTE_BESTWRAP,wx.wxTE_RICH2)}
	
	self._styles = {}
	self._styles[sgt.LogManager.INFO] = wx.wxTextAttr(wx.wxBLUE, wx.wxWHITE)
	self._styles[sgt.LogManager.NOTICE] = wx.wxTextAttr(wx.wxColour(0,127,0), wx.wxWHITE)
	self._styles[sgt.LogManager.WARNING] = wx.wxTextAttr(wx.wxORANGE, wx.wxWHITE)
	self._styles[sgt.LogManager.ERROR] = wx.wxTextAttr(wx.wxRED, wx.wxWHITE)
	self._styles[sgt.LogManager.FATAL] = wx.wxTextAttr(wx.wxPURPLE, wx.wxWHITE)
	
	self._defaultStyle = wx.wxTextAttr(wx.wxBLACK, wx.wxWHITE)
end

function Class:getFreezed()
	return self._freezed
end

function Class:setFreezed(enabled)
	self._freezed = enabled
end

function Class:clear()
	self._tc:Clear()
end

return Class
