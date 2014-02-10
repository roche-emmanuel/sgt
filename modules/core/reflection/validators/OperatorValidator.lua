local Class = require("classBuilder"){name="OperatorValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:isOperator()
end

return Class
