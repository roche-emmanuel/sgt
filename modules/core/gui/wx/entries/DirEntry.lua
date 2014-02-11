local Class = require("classBuilder"){name="DirEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    self:check(options and options.caption,"A valid 'caption' is needed to build a Dir entry.");
    self:check(options and options.name,"A valid 'name' is needed to build a Dir entry.");
    
    -- overrride some values:
    self._type = "string"
    self._defaultValue = self._defaultValue or ""
    self._style = options.style or wx.wxDIRP_DIR_MUST_EXIST+wx.wxDIRP_USE_TEXTCTRL
    self._message = options.message or "Select a folder"
    
    self:create()
end

function Class:create()
    -- prepare the handlers we will need here:
    function pickerHandler(intf,event)            
        local val = event:GetPath();
                        
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    
    local intf = self._intf
    
    intf:pushSizer{orient=wx.wxHORIZONTAL,prop=self._prop or 0,flags=wx.wxEXPAND}
    self._controls[1] = intf:addStaticText{text=self._caption..": "};
    self._controls[2] = intf:addDirPickerCtrl{prop=1,handler=pickerHandler,
        style=self._style, message= self._message}
    intf:popSizer()
end

return Class
