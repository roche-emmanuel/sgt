local Class = require("classBuilder"){name="LicensedItem",bases="gui.wx.LicensedBase"};

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:check(options.item,"Invalid item in LicensedItem constructor")
	self:check(options.sizer,"Invalid sizer in LicensedItem constructor")
	
	self._item = options.item
	self._sizer = options.sizer
end

function Class:updateVisibility(show)
    -- toggle the visibility status:
    self._sizer:Show(self._item,show,false);
    self._sizer:Layout()
end
    
return Class
