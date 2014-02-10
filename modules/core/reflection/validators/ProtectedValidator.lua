local Class = require("classBuilder"){name="ProtectedValidator",bases="reflection.validators.BasicValidator"};

function Class:validate(object)	
	-- Check the protection status of the object:
	self:check(object.isProtected,"No isProtected method found.")	
	return object:isProtected()
end

return Class
