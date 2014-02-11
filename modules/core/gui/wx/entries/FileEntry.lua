local Class = require("classBuilder"){name="FileEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    self:check(options.caption,"A valid caption is needed to build a file entry.")
    
    -- overrride some values:
    self._type = "string"
    self._defaultValue = self._defaultValue or ""
    self._message = options.message or "Select a file"
    self._wildcard = options.wildcard or "*.*"
    self._style = options.style or wx.wxFLP_OPEN+wx.wxFLP_FILE_MUST_EXIST+wx.wxFLP_USE_TEXTCTRL
    
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
    self._controls[2] = intf:addFilePickerCtrl{prop=1,handler=pickerHandler,
        style=self._style, message=self._message, wildcard = self._wildcard}
    intf:popSizer()  
end

return Class
