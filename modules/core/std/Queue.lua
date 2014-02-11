local Class = require("classBuilder"){name="Queue",bases="std.Vector"};

function Class:push(obj)
	return self:push_back(obj)
end

function Class:pop()
	return self:pop_front()
end

return Class
