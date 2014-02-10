local Class = require("classBuilder"){name="VirtualValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:isAbstract()
end

return Class
