local Class = require("classBuilder"){name="NoOverloadsValidator",bases="reflection.validators.BasicValidator"};

local Function = require "reflection.Function"

-- this class will only retrieve one instance of each function for a given name.
-- thus overloads are not included.

function Class:initialize(options)
	self._found = Set()
end

function Class:validate(object)	
	self:checkType(object,Function)
	return self._found:push_back(object:getName()); -- _foundNames is a Set so this will return false when expected.
end

return Class
