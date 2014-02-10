local Class = require("classBuilder"){name="WrapperValidator",bases="reflection.validators.BasicValidator"};

function Class:validate(object)	
	-- Check the protection status of the object:
	return object:isWrapper()
end

return Class
