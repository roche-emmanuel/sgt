local Class = require("classBuilder"){name="wxValueFinder",bases="helpers.wxFinder"};

local Set = require "std.Set"

function Class:initialize(options)
	self:check(options.destFile,"A valid destFile entry is needed to write the event types found.");
	
	self._destFile = options.destFile -- where to write the event types.
	self._values = Set()
	self._ignorePatterns = Set()
	for _,v in ipairs(options.ignorePatterns or {}) do
		self._ignorePatterns:push_back(v)
	end
end

function Class:processLineElement(line)
	-- parse what's left of the line for wxEvent type definition:
	local elem = self:extractElement(line)
	
	if not elem then
		return;
	end
	
	for _,pat in self._ignorePatterns:sequence() do
		if elem:find(pat) then
			return
		end
	end
	
	self:info("Found element: ",elem)
	self._values:push_back(elem)
end

function Class:finalize()
	local file = io.open(self._destFile,"w")
	
	self:info("Writing ".. self._values:size() .. " elements.")
	for _,elem in self._values:sequence() do
		file:write(self:writeElement(elem))
	end
	
	file:close()
end

return Class
