local Class = require("classBuilder"){name="ChoiceEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    self:check(options and options.choiceBook,"A valid 'choiceBook' is needed to build a choice entry.");

    -- overrride some values:
    self._type="string"
    self._defaultValue = self._defaultValue or (self._choices and self._choices[1]) or "" -- empty string by default
    self._choiceBook = options.choiceBook
    self._choiceCtrl = self._choiceBook:GetChoiceCtrl()
    
    self:create()
end

function Class:create()
    -- prepare the handlers we will need here:
    function cbHandler(intf,event)            
        -- local val =  self._choiceCtrl:dynCast("wxChoice"):base_GetStringSelection()                            
        -- local val =  self._choiceCtrl:dynCast("wxControlWithItems"):dynCast("wxItemContainer"):GetStringSelection()                            
        local val =  self._choiceCtrl:aswxItemContainerImmutable():dynCast("wxItemContainer"):GetStringSelection()                            
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    
    -- connect this event handler:
    self._intf:connectHandler(self._choiceBook,wx.wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING,cbHandler);
    
    -- keep a link to this control:
    self._controls[1]  = self._choiceBook;
end

return Class
