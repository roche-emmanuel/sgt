local Class = require("classBuilder"){name="ValidValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

function Class:validate(object)	
	self:checkType(object,Function)
	return 	object:isOperator() 
			and object:getLuaName()
			and object:getParent():isClass()
			and object:isValidForWrapping()
end

return Class
