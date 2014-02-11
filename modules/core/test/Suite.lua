local Class = require("buildclass"){name="TestSuite",bases="core.Object"}

local Map = require "std.Map"

--[[
Class: test.Suite

Class representing a Test suite with its internal tests.

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Suite

Create a new <test.Suite> object.
]]
function Suite(options)
]=]
function Class:initialize(options)
	-- Create the list of tests.
	self.assert(options and options.name)
	
	self._name = options.name
	self._tests = Map()
	self._env = {}
end

--[[
Function: addTest

Added a new test to the suite. This test will have its environment replaced
with the lua global environment, plus minor additions like the assert package
and the log package.

Parameters:
	name - The name of test
	func - The function to execute for the test.
]]
function Class:addTest(name,func)
	self.assert.nonEmptyString(name)
	self.assert.Function(func)
	
	self.assert.False(self._tests:has(name),"The suite already contains a test with the name ",name)

	-- update the environment for the test function.
	-- we perform this operation here to ensure it is done only once.
	-- local env = getfenv(func);
	local man = require "test.Manager"
	local newenv = {} -- new environment
	setmetatable(newenv, {__index = man:getTestEnv()}) -- discard access to the previous function env.
	setfenv(func, newenv)
	newenv.assert = require "utils.assert"
	newenv.log = require "log"
	
	-- remove the upvalues for this function:
	-- local index = 1
	-- local uname = true
	-- while uname do
		-- uname = debug.getupvalue(func,index)		
		-- replace the upvalue with anything matching in the new environment of nil.
		-- uname = debug.setupvalue(func,index,uname and newenv[uname])
		-- self:info("Removed upvalue: ",uname)
		-- index=index+1
	-- end
	
	self._tests:set(name,func)
	
	return self -- for chaining calls.
end

--[=[
--[[
Function: Test

Alias for <addTest>
Convinient alias for the <addTest> method.
]]
function Class:Test()
]=]
Class.Test = Class.addTest

--[[
Function: run

Run the tests contain in this suite.
]]
function Class:run()
	
	local man = require "test.Manager"
	
	self:info("Entering test suite '",self._name,"'...")
	
	local total = man:getNumTests()
	
	for name,test in self._tests:sequence() do
		-- execute the test in a protected function call:
		
		local index = man:getCurrentTestIndex()
		local res = {}
		res.index = index
		res.name = name .. " (in ".. self._name..")"
		
		-- self:info_f("  Test %d/%d: %s starting...",index,total,name)

		-- update the function environment to include some default objects:
		
		-- we pass the asser library as a first argument.
		local status, msg = pcall(test) 
		if not status then
			res.status = man.STATUS_FAILED
			res.message = msg
			-- self:error("Message is: ", msg)
		else
			res.status = man.STATUS_PASSED
		end
		
		self:info_f("  Test %d/%d: %s => %s",index,total,name,res.status==man.STATUS_PASSED and "OK" or "FAILED")
		
		man:addResult(res)
	end
	
	self:info("Leaving test suite '",self._name,"'.")

end

--[[
Function: getNumTests

Retrieve the number of tests contained in this suite.
  
Returns:
	The number of tests in this <test.Suite>.
]]
function Class:getNumTests()
	return self._tests:size()
end

return Class
