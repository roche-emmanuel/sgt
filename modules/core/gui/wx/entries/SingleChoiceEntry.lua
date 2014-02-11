local Class = require("classBuilder"){name="SingleChoiceEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
	self:check(options and options.caption,"A valid 'caption' is needed to build a SingleChoice entry.");
	self:check(options and options.name,"A valid 'name' is needed to build a SingleChoice entry.");

	options.choices = options.choices or {}
	
    -- overrride some values:
    self._type = "string"
    self._defaultValue = self._defaultValue or options.choices[1] or "" -- empty string in the worst case.
    
    self:create(options)
end

function Class:create(options)    		
	-- prepare the handlers we will need here:
	function cbHandler(intf,event)            
		local val = event:GetString();
						
		-- update the new value sending this to the provider:
		self:setValue(val);
	end
	
	function butHandler(intf,event,actionName)
		--local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
		
		-- prepare the data for the real event handler:
		local list = self._controls[2];
		
		local val = list:GetStringSelection()
		local selId = list:GetSelection()            
		
		local data = {
			id=selId, -- here we provide an additional id field to specify the item to be removed.
			value=val,
			item=self._provider:getCurrentItem(),
			name=self._name,
			entry=self,
			action=actionName,
			intf=intf
		}
		
		if self._actionHandler then
			self._actionHandler(data) 
		end       
	end
	
	local intf = self._intf
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxALL+wx.wxEXPAND}
	self._controls[1] = intf:addStaticText{text=options.caption..": "};
	self._controls[2] = intf:addComboBox{prop=1,
										 handler=cbHandler,
										 defaultValue=self._defaultValue,
										 choices=options.choices,
										 style=options.style,
										 eventType=wx.wxEVT_COMMAND_TEXT_UPDATED}
	
	-- the bitmap buttons for the available actions:
	if self._actionHandler then
		for k,act in ipairs(self._actions or {}) do
			act = type(act)=="string" and {name=act} or act
			self._controls[k+2] = intf:addBitmapButton{name=act.name, src=act.src or act.name,size=options.size,handler=butHandler,flags=wx.wxALIGN_CENTER_VERTICAL};
		end
	end
	
	intf:popSizer() 
end

return Class
