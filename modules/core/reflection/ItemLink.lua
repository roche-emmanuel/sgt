local Class = require("classBuilder"){name="ItemLink",bases="base.Object"};

Class.STRING = 0
Class.OBJECT = 1

function Class:initialize(content)
	self:check(content,"Invalid content for ItemLink.");
	self._content = content;
	self._type = (type(self._content)=="string" and Class.STRING) 
				or (type(self._content)=="table" and Class.OBJECT)
	self:check(self._type,"Invalid ItemLink type.");
end

--- Retrieve the type of that object.
function Class:getType()
    return self._type
end

--- Retrieve the content of that object.
function Class:getContent()
	return self._content
end

return Class
