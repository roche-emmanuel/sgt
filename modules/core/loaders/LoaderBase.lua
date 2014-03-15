local Class = createClass{"LoaderBase"}

--[[
Class: loaders.LoaderBase

Basic class for execution mode loader implementation. When the <MainLoader> selects an specific
<LoaderBase> for execution, an instance of this class is created and its <execute> method is called.
]]

--[=[
--[[
Constructor: LoaderBase

Create an instance of the class.

Parameters:
	 options.flags or options[1] - list of flags passed to the process.
	 options.params or options[2] - list of params passed to the process.
]]
function MainLoader(options)
]=]
function Class:initialize(options)
	self._flags = options.flags or options[1] or {}
	self._params = options.params or options[2] or {}
end

--[[
Function: execute

Main method called to execute the process. Should return the application exit code.
Should be re-implemented by derived classes.
]]
function Class:execute()
	self:no_impl()
end

return Class
