module(..., package.seeall)

local SimpleDebugger = require "debugging.SimpleDebugger"

local dbg = require "debugger"
local log = require "tracer"

function test_assert()
	assert_not_equal(SimpleDebugger.assert,nil,"The class function is nil.")
	
	local obj = SimpleDebugger()
	obj:assert(true,"Invalid assert result")
	
	--dbg:assert(false,"Invalid assert result!")
end

function test_profiler()
	log:info("Tests","Testing profiler.")	
	local prof = require "debugging.Profiler"
	
	prof:begin()
	
	prof:start("My section")
	local val = 0.0
	for i=1,100000 do
		val = val + math.cos(i*math.pi/100000)
	end
	prof:stop()

	prof:start("My section 2")
	for i=1,100000 do
		prof:start("Operation")
		val = val + math.cos(i*math.pi/100000)
		prof:switch("Operation2")
		local val3 = math.min(val,val+2)
		prof:switch("Operation3")
		val = val + math.max(val,val3)
		prof:switch("Operation4")
		local val2 = math.sin(i*math.pi/100000)
		for j=1,10 do
			val2 = val2 + math.sin(j*math.pi/100)
		end
		prof:stop()
	end
	prof:stop()
	
	prof:finish()
	
	prof:writeReport("test_profile.log")
	
	log:info("Tests","Done testing profiler.")	
end
