local Class = createClass{"TestLoader",bases="loaders.LoaderBase"}

--[[
Class: loaders.test

Loader used to execute the internal tests. This loader should be passed the name of the test to execute as parameter.

All the tests are stored in the test package which contains the corresponding test.lpak file. This loader will take
care of loading the needed lua package.

This class inherits from <loaders.LoaderBase>.
]]

--[=[
--[[
Constructor: TestLoader

Create a new instance of the class. See <loaders.LoaderBase.LoaderBase> for details.
]]
function TestLoader(options)
]=]
function Class:initialize(options)
	-- require the test package:
	requirePackage 'tests'

	_G.profiler = require "debugging.Profiler"	
end

--[[
Function: execute

Re-implementation of <loaders.LoaderBase.execute>.
]]
function Class:execute()
	self:debug("Entering test mode...")
	--  Here we should have receive a parameter, and this parameter should be considered as a file to execute to perform 
	-- the binding generation process:
	self:check(#self._params==1,"Should receive 1 parameter for test mode: params=",self._params)

	-- the parameter received should be the name of the test to perform:
	self:debug("Executing test ",self._params[1])

	require("test." .. self._params[1])

	return 0
end

return Class
