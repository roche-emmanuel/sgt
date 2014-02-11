local Class = require("classBuilder"){name="LicensedBase",bases="base.Object"};

local lman = require "security.LicenseManager"

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:check(options.right,"Invalid right in LicensedItem constructor")	
	self._visible = options.visible or false
end


-- This is the base method called to check if the visibility of this component should be updated.
-- this method will then decide if the updateVisibility method should be called.
function Class:checkVisibility()
    local show = lman:hasFeature(self._right);
    if show ~= self._visible then
        -- toggle the visibility status:
        self._sizer:Show(self._item,show,false);
        self._sizer:Layout()
        self:updadeVisibility(show)
        self._visible = show;
    end
end

-- This method is meant to be overriden by the sub classes.
function Class:updadeVisibility(enabled)
	self:no_impl()
end

return Class
