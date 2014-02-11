-- requirePackage "seed"

local osg = require "osg"

local suite = {}

function suite.test_lua_ID()
	log:info("Testing lua ID")
	
	local t1 = {}
	local id = sgt.getLuaID(t1)
	
	log:info("Retrieved id is: '",id,"'")
	log:info("Done testing lua ID.")
end

function suite.test_loop_performance()
	local list = require("std.Set")()

	for i=1,1000 do -- should increase this value for appropriate tests.
		list:push_back(i)
	end
	
	local timer = osg.Timer.instance()
	local startTick = timer:tick()
	
	local res = 0.0
	for _,v1 in list:sequence() do 
		for k,v in list:sequence() do
			res = res + math.cos(math.pi*v*v1/100);
		end
	end
	
	local elapsed1 = timer:delta_s(startTick,timer:tick())
	log:info("Sequence: computed value: ",res, " in ", elapsed1, " seconds.")
	
	local startTick = timer:tick()
	
	local res = 0.0
	list:foreach(function(v1)
		list:foreach(function(v)
			res = res + math.cos(math.pi*v*v1/100);
		end)
	end)
	
	local elapsed2 = timer:delta_s(startTick,timer:tick())
	log:info("Foreach: computed value: ",res, " in ", elapsed2, " seconds.")
end

function suite.test_writeString()

	local toString = require "utils.tostring"
	local res = toString(1,2,true,"hello")
	
	assert_equal(res,"12truehello","Values do not match.")
	
	local t = { 1, 2, 3 }
	local res = toString("Coucou ",t)
	log:info(res)
	
	t.val = {"hello manu!", function() return 1 end, true, test1=math.cos,test2=t}
	t.val2 = {sub1 = {true, val3={ final = { "one", "two"}}, func=nil}, sub2="me" }
	local res = toString("Coucou ",nil," and result: ",t)
	log:info(res)
	
end

function suite.test_object_log()
	local Object = require "core.Object"
	local obj = Object()
	local log = require "log"
	
	log.info_t("base.Object","This is a faked message from base.Object.")
	obj:info("This is a log message from core.Object")
	
	log.debug("Writing object class: ", obj)
end

function suite.test_classbuilder()
	local builder = require "utils.buildClass"
	local log = require "log"
	
	log.info("builder is:", builder)
	
	local Class = builder{name="MyClass",bases="core.Object"}
	
	local obj = Class()
	
	assert_equal("MyClass",obj._TRACE_,"Invalid trace value.")
	
	obj:debug("This is a message from my class.")
	
	log.info("Just created the object: ",obj)
end

function suite.test_assert()
	local assert = require "utils.assert"
	
	assert.True(true,"This test should pass.")
	assert.False(false,"This test should fail.")
	
	assert.isString("hello")
	-- assert.isString(12)
end

function suite.test_stacktrace()
	local base = require "utils.base"
	local log = require "log"
	
	local res = base.stacktrace()
	log.info("stacktrace result: ",res)
	
	base.printStacktrace()
end

function suite.test_throw()
	local base = require "utils.base"
	local log = require "log"
	
	-- base.throw("This is en error message.")
end

function suite.test_testmanager()
	local tman = require "test.Manager"
	local assert = require "utils.assert"
	
	local suite = tman:addSuite("My suite")
	suite:addTest("Testing basic functions",function()
		assert.True(true)
	end)

	suite:addTest("Testing Something else",function()
		-- assert.True(false)
	end)
	tman:run(options)
end

return suite
