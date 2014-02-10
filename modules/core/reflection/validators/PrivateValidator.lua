local Class = require("classBuilder"){name="ProtectedValidator",bases="reflection.validators.BasicValidator"};

function Class:validate(object)	
	-- Check the protection status of the object:
	return object:isPrivate()
end

return Class
