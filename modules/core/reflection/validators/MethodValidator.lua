local Class = require("classBuilder"){name="MethodValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:isMethod()
end

return Class
