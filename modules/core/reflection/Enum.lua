local Class = require("classBuilder"){name="Enum",bases="reflection.Scope"};

function Class:initialize()
	self._scopeType = require("reflection.Scope").ENUM
	self._values = require("reflection.ItemSet")()
end

--- Retrieve the values in this class.
-- @return Vector of EnumValue objects.
function Class:getValues(filters,args)
	return self._values:filterItems(filters,args)
end

--- Check if a given Enum already contains a value by name:
function Class:contains(value)
	self:check(value,"Invalid value argument");
	self:checkType(value,require "reflection.EnumValue")
	
	local vname = value:getName()
	for _,v in self._values:sequence() do
		if v:getName() == vname then
			return true;
		end
	end
	
	return false;
end

function Class:isEmpty()
	return self._values:empty()
end

function Class:addValue(value)
	self:check(value,"Invalid value argument");
	self:checkType(value,require "reflection.EnumValue")
	
	self:check(self:getParent(),"Invalid enum parent for enum '",self:getName(),"'")
	
	value:setParent(self)
	
	self._values:addItem(value);
end

return Class
