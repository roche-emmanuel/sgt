local Class = require("classBuilder"){name="StringEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    self:check(options and options.caption,"A valid 'caption' is needed to build a String entry.");
    self:check(options and options.name,"A valid 'name' is needed to build a String entry.");

    -- overrride some values:
    self._type = "string"
    self._defaultValue = self._defaultValue or ""
    self._maxVal = options.maxVal
    self._numChar = options.numchar
    self._expanding = (options.expanding==nil and true) or option.expanding
    self._unit = options.unit
    
    self:create()
end

function Class:create()
   
    -- prepare the handlers we will need here:
    function textHandler(intf,event)            
        local val = event:GetString();
                        
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    
    local intf = self._intf
    
    --local maxValStr = self._maxVal or string.rep("a", self._numChar or 16); --string.format(entry.numFormat,entry.range[2]) .. (entry.unit or "")
    --local txt = wx.wxTextCtrl(intf:getCurrentParent(),wx.wxID_ANY,"",wx.wxDefaultPosition,wx.wxDefaultSize);
    --local x, y, descent, externalLeading = txt:GetTextExtent(maxValStr)
    --txt:Destroy();
    
    local txtsize = self._expanding and wx.wxSize(-1,-1) or wx.wxSize(x+5,-1)
    
    intf:pushSizer{right=self._right,orient=wx.wxHORIZONTAL,prop=self._prop or 0,flags=wx.wxEXPAND}
    self._controls[1] = intf:addStaticText{text=self._caption..": ",tip=self._tip};
    if not self._expanding then
        intf:addSpacer{prop=1}
    end
    self._controls[2] = intf:addTextCtrl{size=txtsize,prop=self._expanding and 1 or 0,handler=textHandler,flags=self._flags,text=self._defaultValue,style=self._style}
    if self._unit then
        self._controls[3] = intf:addStaticText{text=self._unit}
    end        
    intf:popSizer()
end

return Class
