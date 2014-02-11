local Class = require("classBuilder"){name="LogPanel",bases="gui.wx.InterfaceComponent"};

local im = require "gui.wx.ImageManager"
local freezeBmp = im:getBitmap("freeze")
local unfreezeBmp = im:getBitmap("unfreeze")

function Class:new(options)
	self._prop = options.prop or 0
end

function Class:buildComponent(intf)
	
	intf:pushSizer{text="Logging",orient=wx.wxHORIZONTAL,prop=self._prop,flags=wx.wxEXPAND}
		intf:pushSizer{orient=wx.wxVERTICAL,prop=2,flags=wx.wxEXPAND}
			local owin
			owin, self._outputPanel = intf:addOutputPanel{prop=2,flags=wx.wxALL+wx.wxEXPAND}
			intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
				intf:addBitmapButton{src="delete",tip="Clear the log console",
							 handler="clearLogConsole"}
				intf:addBitmapButton{src="freeze",tip="Freeze/unfreeze the log console content",
							 handler="freezeLogConsole"}							 
				-- intf:addSpacer{size=5}						 
				intf:addSingleChoiceEntry{name="logging.log_level",prop=1,caption="Log level",
								choices={"Fatal","Error","Warning","Notice","Info","Debug0",
										 "Debug1","Debug2","Debug3","Debug4","Debug5"},
								defaultValue="Debug0",
								handler="changeLogLevel"}
				intf:addSpacer{size=10}
				intf:addBoolEntry{name="logging.verbose_state",caption="Verbose",style=0,
								  flags=wx.wxALIGN_CENTER_VERTICAL,
								  tip="Toggle verbose outputs", handler="toggleVerbose"}
			intf:popSizer()
		intf:popSizer()
		
		intf:pushSizer{orient=wx.wxVERTICAL,prop=1,flags=wx.wxEXPAND}
			self._execTc = intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND,
											style=bit.bor(wx.wxTE_MULTILINE,wx.wxTE_BESTWRAP,wx.wxTE_RICH2)}
			intf:addBitmapButton{src="execute", flags=wx.wxALL+wx.wxALIGN_RIGHT,
								 tip="Execute the content of the script console",
								 handler="executeScript"}
		intf:popSizer()
	intf:popSizer()
end

function Class:toggleVerbose(data)
	self:info("Toggling verbose outputs to : ",data.value)
	sgt.LogManager.instance():setVerbose(data.value)
end

function Class:clearLogConsole()
	self:info("Clearing log outputs...")
	self._outputPanel:clear()
end

function Class:freezeLogConsole(intf,event)
	local freezed = not self._outputPanel:getFreezed()
	self:debug2_v("Toggling log outputs freeze to: ",freezed)
	self._outputPanel:setFreezed(freezed)
	
	-- toggle the button image:
	local ctrl = event:GetEventObject():dynCast("wxBitmapButton")
	self:check(ctrl,"Invalid bitmap button object.")
	ctrl:SetBitmap(freezed and unfreezeBmp or freezeBmp)
end

function Class:changeLogLevel(data)
	self:info("Changing log level to : ",data.value)
	local lvl = sgt.LogManager[data.value:upper()]
	sgt.LogManager.instance():setNotifyLevel(lvl)
end

function Class:executeScript()
	-- execute the content of the script console:
	local content = self._execTc:GetValue()
	if content == "" then
		return -- nothing to do.
	end
	
	local f, msg = loadstring(content)
	if not f then
		self:error("Error while compiling lua chunk: ",msg)
		return
	end
	
	-- The chunk was compiled successfully, now execute it:
	local status, msg = pcall(f)
	if not status then
		self:error("Error while executing lua chunk: ",msg)
	end
end

return Class 
