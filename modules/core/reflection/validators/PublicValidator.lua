local Class = require("classBuilder"){name="PublicValidator",bases="reflection.validators.BasicValidator"};

function Class:validate(object)	
	-- Check the protection status of the object:
	self:check(object.isPublic,"No isPublic method found.")	
	return object:isPublic()
end

return Class
