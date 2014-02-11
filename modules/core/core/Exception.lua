local Class = createClass{name="Exception",bases="core.Object"}

--[[
Class: base.Exception

Base implementation for an Exception class..

This class inherits from <core.Object>.

Exception are meant to be thrown with the lua error method.
]]

--[=[
--[[
Constructor: Exception

Create a new instance of the class.

Parameters:
	options.name or options[1] - The message to store in the exception.
	options.stack - {string} (optional) The stacktrace to display for this exception. If missing the current
stacktrace will be generated.
]]
function Exception(options)
]=]
function Class:initialize(options)
	options = type(options)=="string" and {options} or options or {}
	
	self._message = options[1] or options.msg
	self.assert(self._message,"Invalid exception message.")
	self._stack = options.stack or debug.traceback("",4)
end

function Class:__tostring()
	return self._message .. self._stack
end

return Class
