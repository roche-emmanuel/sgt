local Class = require("classBuilder"){name="RegExMap",bases="std.OrderedMap"};

local OrderedMap = require "std.OrderedMap"

function Class:set(key,item)
	self:checkNonEmptyString(key,"Invalid key.");
	-- ensure we don't already have this key matched by a previous entry in the map:
	local val, matched = self:match(key)
	if val then
		self:error("Regex ",key," is already matched by previous regex ",matched, " and mapped to ",val);
	end
	
	OrderedMap.set(self,key,item)
end

function Class:match(txt)
	for pattern,val in self:sequence() do
		if txt:find(pattern) then
			return val, pattern
		end
	end
end

function Class:__index(field)
    return Class[field] or OrderedMap.__index(self,field)
end

return Class
