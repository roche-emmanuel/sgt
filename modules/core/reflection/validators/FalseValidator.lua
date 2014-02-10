local Class = require("classBuilder"){name="TrueValidator",bases="reflection.validators.BasicValidator"};

function Class:validate(object)	
	return false
end

return Class
