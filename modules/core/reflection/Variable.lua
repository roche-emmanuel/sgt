local Class = require("classBuilder"){name="Variable",bases="reflection.Member"}

function Class:initialize()
	self._argsString = ""
end

function Class:setArgsString(str)
	self._argsString = str
end

function Class:getArgsString()
	return self._argsString
end

function Class:isValidForWrapping()
	return not self:getArgsString():find("%[") and not self:getArgsString():find("%(")
end

return Class
