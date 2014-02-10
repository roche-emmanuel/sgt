local Class = require("classBuilder"){name="InvalidWrapperValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"
local im = require "bindings.IgnoreManager"

function Class:initialize(class)
	self._class = class;
end

function Class:validate(object)	
	self:checkType(object,Function)
	return not object:isValidForWrapping() or im:ignoreWrapper(self._class,object)
end

return Class
