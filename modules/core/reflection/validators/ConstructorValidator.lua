local Class = require("classBuilder"){name="ConstructorValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:isConstructor()
end

return Class
