local Class = require("classBuilder"){name="DestructorValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:isDestructor()
end

return Class
