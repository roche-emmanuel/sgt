local Class = require("classBuilder"){name="ItemSet",bases="std.Set"};

local ChainValidator = require "reflection.validators.ChainValidator"
local Set = require "std.Set"

function Class:initialize(options)
end

function Class:__index(field)
   return (type(field)~="number" and Class[field]) or Set.__index(self,field)
end

function Class:filterItems(filters,args)
	if not filters then
		return self;
	end
	
	local va = ChainValidator{validators=filters,args=args}
	return self:getItems(va)
end

function Class:getItems(validator)
	if not validator then
		return self
	end
	
	-- use the validator for item validation
	local result = Class()
	for _,item in self:sequence() do
		if validator(item) then
			result:push_back(item)
		end
	end
	
	return result;
end

function Class:addItem(item)
	self:check(item,"Invalid item argument.")
	return self:push_back(item)
end

return Class
