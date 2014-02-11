module(..., package.seeall)

local log = require "tracer"
local cfg = require "config"

require "core"

function test_timemanager()
	log:info("Tests","Retrieving TimeManager instance.")	
	
	local man = sgt.TimeManager.instance()
	
	assert_equal(false,not man,"Invalid TimeManager object");

	local ctime = man.getTime(nil,false)
	log:info("Tests","Current time is: ",ctime)
	 
	log:info("Tests","TimeManager test done.")	
end
