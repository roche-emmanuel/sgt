local Class = require("classBuilder"){name="SingleChoiceEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
	self:check(options and options.caption,"A valid 'caption' is needed to build a StateChoice entry.");
	self:check(options and options.name,"A valid 'name' is needed to build a StateChoice entry.");

	options.choices = options.choices or {}
	
    -- overrride some values:
    self._type = "state"
	self.choices = options.choices
	
    self.defaultValue = self.defaultValue or (#self.choices>0 and self.choices[1][1]) or ""
	
    self:create(options)
end

function Class:getState(str)
	for k,v in ipairs(self.choices) do
		if str == v[1] then
			return v[2]
		end
	end

	self:throw("Could not fint state for caption=",str)
end

function Class:getStateCaption(id)
	for k,v in ipairs(self.choices) do
		if id == v[2] then
			return v[1]
		end
	end
	
	self:throw("Could not fint state caption for id=",id)
end

function Class:create(options)    		
	-- prepare the handlers we will need here:
	function cbHandler(intf,event)            
		local valstr = event:GetString();

		local val = self:getState(valstr);
			
		-- update the new value sending this to the provider:
		self:setValue(val);
	end
	
	function butHandler(intf,event,actionName)
		--local actionName = event:GetEventObject():DynamicCast("wxWindow"):GetName();
		
		-- prepare the data for the real event handler:
		local list = self._controls[2];
				
		local valstr = list:GetStringSelection()
		local val = self:getState(valstr)

		local selId = list:GetSelection()            
		
		local data = {
			id=selId, -- here we provide an additional id field to specify the item to be removed.
			value=val,
			valueCaption=valstr,
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

	-- prepare the choice list:
	local list = {}
	for k,v in ipairs(self.choices) do
		table.insert(list,v[1])
	end
	
	local intf = self._intf
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=options.prop or 0,flags=wx.wxALL+wx.wxEXPAND}
	self._controls[1] = intf:addStaticText{text=options.caption..": "};
	self._controls[2] = intf:addComboBox{prop=1,
										 handler=cbHandler,
										 defaultValue=self._defaultValue,
										 choices=list,
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
