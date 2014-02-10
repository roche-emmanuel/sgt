local Class = require("classBuilder"){name="NameValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:initialize(options)
	self:checkNonEmptyString(options,"Invalid name for NameValidator.")
	self._funcName = options
end

function Class:validate(object)	
	self:checkType(object,Function)
	return object:getName()==self._funcName
end

return Class
