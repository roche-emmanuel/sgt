local Class = require("classBuilder"){name="Member",bases="reflection.Entity"}

-- Note that a member type might be nil for instance when this member describes
-- the type returned from a class constructor function.
function Class:getType()
	--self:check(self._type,"Invalid type for member ",self:getFullName())
	return self._type
end

function Class:setType(mtype)
	self:check(mtype,"Invalid type argument.")
	self._type = mtype
end

return Class


