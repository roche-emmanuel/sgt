local Class = require("buildclass"){name="TestManager",bases="core.Object"}

local Set = require "std.Set"
	
--[[
Class: test.Manager

Singleton class used to manage a list of test suites..

This class inherits from <core.Object>.
]]

Class.STATUS_PASSED = 0
Class.STATUS_FAILED = 1

Class._testEnv = _G

--[=[
--[[
Constructor: Manager

Create a new instance of the class. This constructor should not be called by the
user. The <test.Manager> is created and returned as a singleton object.

This constructor initialize the internal list of <test.Suites> that will be executed
to perform the tests.

]]
function Manager(options)
]=]
function Class:initialize(options)	
	-- Create the TestManager data.
	-- It mainly contain a list of test suites:
	self._suites = Set()
	
	-- List of results from the tests:
	self._results = Set()
end

--[[
Function: getTestEnv

Retrieve the default test environment to use
for not local test functions.

Returns:
	The environment table.
]]
function Class:getTestEnv()
	return Class._testEnv
end

--[[
Function: addSuite

Add a new <test.Suite> to the TestManager.

Parameters:
	name - {string} The name to use for the suite
  
Returns:
	The newly created <test.Suite> object.
]]
function Class:addSuite(name,func)
	self.assert.nonEmptyString(name,"A valid name is required for a test suite.")
	local Suite = require "test.Suite"
	local suite = Suite{name=name}
	self._suites:push_back(suite)

	if func then
		self.assert.Function(func)

		-- prepare the populate of this suite by setting up the func environment properly:
		local env = getfenv(func);
		local newenv = {} -- new environment
		setmetatable(newenv, {__index = env}) -- keep access to the previous function env.
		setfenv(func, newenv)
		newenv.Test = function(name,func)
			suite:addTest(name,func)
		end
		
		-- populate suite:
		func()
	end
	
	-- return the newly created suite.
	return suite
end

--[[
Function: runTests

Run all the <test.Suites> previously added to this instance.

Parameters:
	options - The first argument  
]]
function Class:runTests(options)
	self:info_f("Running %d tests.",self:getNumTests())
	for _,suite in self._suites:sequence() do
		suite:run()
	end
	self:info("Done running all suites.")
end

--[[
Function: run

Perform a run cycle for this test manager.
This method will first load all the suites from the given input folders, then run them
and retrieve  the statistics.

Parameters:
	options - {table}
]]
function Class:run(options)
	-- run all the tests loaded:
	self:runTests(options)
	
	-- report the stats:
	self:writeReport()
end

--[[
Function: getNumTests

Retrieve the total number of tests from all <test.Suites>.
  
Returns:
	The total number of tests contained in all suites.
]]
function Class:getNumTests()
	local num = 0
	self._suites:foreach(function(suite)
		num = num + suite:getNumTests()
	end)
	
	return num
end

--[[
Function: reset

Reset the state of the test manager.
This method will remove all the results retrieved from the tests to prepare for
a new test session.
]]
function Class:reset()
	self._results:clear()
end

--[[
Function: addResult

Add a new result to the list.

Parameters:
	res - The result to add.
]]
function Class:addResult(res)
	self._results:push_back(res)
end

--[[
Function: getCurrentTestIndex

Retrieve the index to use for the next test to be executed.
This method retrieves the test index using the number of results
gathered so far. It assumes that each test, on completion, will
add a new result to the list and thus increment this index value.
  
Returns:
	Index to use for the current test.
]]
function Class:getCurrentTestIndex()
	return self._results:size()+1
end


--[[
Function: writeReport

Write the report from this test session.
This method will first write a single stats line with the number
of tests passed/failed/with errors or skipped.

Then it will call <writeIssues> to display all the retrieved issues.
]]
function Class:writeReport()
	-- Get total number of tests:
	local num = self:getNumTests()
	
	-- Helper to retrieve number of tests by status
	local getStatusCount = function(status)
		local n = 0
		self._results:foreach(function(res)
			if res.status==status then
				n = n+1
			end
		end)
		return n
	end
	
	-- get number of failed:
	local nFailed = getStatusCount(Class.STATUS_FAILED)

	-- get number of passed:
	local nPassed = getStatusCount(Class.STATUS_PASSED)
	
	-- report the stats:
	self:info(string.rep("#",80))
	self:info_f("%d passed, %d failed.",nPassed,nFailed)
	
	-- report the errors:
	if nPassed~=num then
		self:writeIssues()
	end
	
	-- now finish :
	self:info("Test session done.")
end

--[[
Function: writeIssues

Write all the issues reported by the tests

]]
function Class:writeIssues()
	self:info(string.rep("#",80))
	self:info("Issues:")
	
	local num = self:getNumTests()
	
	for _,res in self._results:sequence() do
		if res.status == Class.STATUS_FAILED then
			self:info("Test ",res.index,"/",num,": ",res.name,". FAILED:")
			self:info(res.message)
		end
	end
	self:info(string.rep("#",80))
end

-- return an instance of the test manager:
return Class()
