local Class = require("classBuilder"){name="DummyEntry",bases="gui.wx.Entry"};

function Class:initialize(options)
    -- overrride some values:
    self._type = "dummy"
    
    self:create()
end

function Class:onEntriesUpdated()
    self:handle(self._provider:getCurrentItem());
end

function Class:create()    
    self._intf:addListener("EntriesUpdated",self); 
end

return Class
