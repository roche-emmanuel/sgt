local Class = require("classBuilder"){name="RegExMap",bases="std.Set"};

local Set = require "std.Set"

function Class:push_back(pattern)
	self:checkNonEmptyString(pattern,"Invalid pattern.");
	-- ensure we don't already have this key matched by a previous entry in the map:
	local matched = self:match(pattern)
	if matched then
		self:error("Regex ",pattern," is already matched by previous regex ",matched);
	end
	
	Set.push_back(self,pattern)
end

function Class:match(txt)
	for _,pattern in self:sequence() do
		if txt:find(pattern) then
			return pattern
		end
	end
end

function Class:__index(field)
    return Class[field] or Set.__index(self,field)
end

return Class
