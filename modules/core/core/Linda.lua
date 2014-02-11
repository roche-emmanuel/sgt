local Class = createClass{name="Linda",bases="core.Object"}

--[[
Class: core.Linda

Encapsulation for a lane linda object to support object passing.

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Linda

Create a new instance of the class.

Parameters:
	options.linda - the base linda object.
]]
function Linda(options)
]=]
function Class:initialize(options)
	self._linda = options.linda or options[1]
	self:check(self._linda,"Invalid linda object!")
end

function Class:wait(interval)
	self._linda:receive(interval, "dummy_key")
end

function Class:getObject(key,class)
	local lptr = self._linda:get(key)
	if lptr~= nil then
		local ptr = sgt.fromLightUserdata(lptr)
		return class.fromVoid(ptr)
	end
end

return Class
