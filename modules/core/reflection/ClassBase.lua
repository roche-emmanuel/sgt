local Class = require("classBuilder"){name="ClassBase",bases="reflection.Entity"}

function Class:initialize(options)
	self._base = options.base
	self._spec = options.spec
	
	self:check(self._base,"Invalid base class for ClassBase object")
	self:check(self._spec,"Invalid spec for ClassBase object")
end

function Class:getSpecialization()
	return self._spec
end

function Class:getBase()
	return self._base
end

function Class:getName()
	return self._spec
end

function Class:getParent()
	return nil; -- no parent allowed.
end

function Class:setParent(parent)
	self:no_impl(); -- not supported.
end

function Class:isValidForWrapping()
	return self._base:isValidForWrapping()
end

return Class
