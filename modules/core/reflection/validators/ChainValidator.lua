local Class = require("classBuilder"){name="ChainValidator",bases="reflection.validators.BasicValidator"};

local Set = require "std.Set"

function Class:initialize(options)
	self:check(options and options.validators,"Invalid 'validators' entry in ChainValidator constructor.")
	self._subs = Set()
	local args = options.args or {}
	for id,va in ipairs(options.validators) do
		if type(va)=="string" then
			va = require("reflection.validators." .. va .. "Validator")(args[id])
		end
		
		if va then
			-- add this as a validator directly:
			self._subs:push_back(va)
		end
	end
end

function Class:validate(object)	
	for _,va in self._subs:sequence() do
		if not va(object) then
			return false;
		end
	end
	
	return true
end

return Class
