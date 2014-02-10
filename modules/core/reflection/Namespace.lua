local Class = require("classBuilder"){name="Namespace",bases="reflection.Holder"};

function Class:initialize()
	self._scopeType = require("reflection.Scope").NAMESPACE
end

return Class
