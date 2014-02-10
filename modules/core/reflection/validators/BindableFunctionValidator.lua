local Class = require("classBuilder"){name="BindableFunctionValidator",bases="reflection.validators.BasicValidator"};

function Class:initialize(options)

end

function Class:validate(object)	
	self:no_impl()
end

return Class
