local Class = require("classBuilder"){name="LuaNameValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return object:getLuaName()
end

return Class
