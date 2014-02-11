module(..., package.seeall)

local lanes = require "lanes"
lanes.configure({with_timers=false})

local max_count = 50
local delay = 0.001

function test_lane_computation()
	log:info("Starting lane computation test.")
		
	local f= lanes.gen( function(n) return 2*n end )
	local a= f(1)
	local b= f(2)

	log:info("Tests","Lane results are, a=",a[1],", b=",b[1] )
	
	log:info("Lane computation test done.")
end

function test_timemanager_seconds()
	log:info("Testing lua timemanager seconds.")

	local tm = require "base.TimeManager"
	
	local secs = tm:getSeconds()
	local lsecs = lanes.now_secs();
	
	log:info("Manager time=",secs, " lanes time=",lsecs)
	
	assert_equal(secs,math.floor(lsecs),"Time values do not match.")
	
	log:info("Done testing timemanager seconds.")
end

function test_lane_loop()
	log:info("Stating lane loop test.")
		
	local linda= lanes.linda()
	
	--local dolog = function(msg)
	--	log:info(msg)
	--end
	
	local f= lanes.gen( "*", function(root_path, flavor)
		_G.flavor = flavor
		_G.root_path = root_path
		
		local sgt = require "core"
		local modName = "StartModule"
		local content = sgt.ModuleManager.instance().getModule(modName);
		
		local func, msg = loadstring(content,modName)
		if not func then
			sgt.doLog(sgt.LogManager.ERROR,"Cannot load content for module ", modName,": ",msg)
			return
		end
		
		-- the function is loaded properly, now call it:
		local res = func()
		package.loaded[modName] = package.loaded[modName] or res or true
		
		log:info("Lane loop is now ready for action!")
		
		log:info("Loading wx module.")
		local wx = require "wx"
		
		log:info("Starting actual lane loop.")
		
		local count = 0;
		while count < max_count do
		  local key,v= linda:receive( delay, "dummy_key")
		  log:info("Loop timer : ".. lanes.now_secs() )
		  count = count+1
		end 
		
		log:info("Done with lane loop.")
		return true;
	end )
		
	log:info("Requesting loop start.")
	local handle = f(root_path, flavor);
	
	--log:info("Joining loop.")
	--local res, err, stack = handle:join()
	--if not res then
	--	log:error("Lane error: ", tostring(err)) --, ", stack: ", table.concat(stack or {},"\n"))
	--end
	
	log:info("Lane loop test done.")
end

function test_thread1()
	log:info("Stating thread test1.")
	
	local Thread = require "base.Thread"
	local linda= lanes.linda()
	
	local th = Thread{name="mythread1",timeout=0.1,func=function()
		log:info("Entering test thread...")
		while true do
			log:info("Performing test thread 1 cycle...")
			local key,v= linda:receive( 0.02, "test_key")
		end 
		log:info("Exiting test thread.")
	end}
	
	-- start the thread:
	th();
	
	-- wait a little bit:
	linda:receive(0.3,"nothing")
	
	-- stop all threads:
	local tman = require "base.ThreadManager"
	tman:cancelAll();
	
	log:info("Thread test1 done.")
end

function test_thread_kill()
	log:info("Stating thread test2.")
	
	local Thread = require "base.Thread"
	local linda= lanes.linda()
	
	local th = Thread{name="mythread2",timeout=0.1,func=function()	
		log:info("Entering test thread 2...")
		
		local osg = require "osg"
		
		local node = osg.Node{
			delete = function()
				log:warn("Deleting Node in test 2. This is not expected.")
			end
		};
		
		local apr = require "apr"
		while true do
			log:info("Performing test thread 2 cycle...")
			apr.sleep(0.02)
		end
		log:info("Exiting test thread 2.")
	end}
	
	-- start the thread:
	th();
	
	-- wait a little bit:
	linda:receive(0.3,"nothing")
	
	-- stop all threads:
	local tman = require "base.ThreadManager"
	tman:cancelAll();
	
	log:info("Thread test2 done.")
end

function test_thread_cancelstep()
	log:info("Stating thread test3.")
	
	local Thread = require "base.Thread"
	local linda= lanes.linda()
	
	local th = Thread{name="mythread3",timeout=3.0,cancelstep=20,func=function()	
		log:info("Entering test thread 3...")
		
		local osg = require "osg"
		
		local node = osg.Node{
			delete = function()
				log:info("Deleting Node in test 3. This is expected.")
			end
		};
		
		local apr = require "apr"
		while true do
			log:info("Performing test thread 3 cycle...")
			apr.sleep(0.01)
		end
		log:info("Exiting test thread 3.")
	end}
	
	-- start the thread:
	th();
	
	-- wait a little bit:
	linda:receive(0.3,"nothing")
	
	-- stop all threads:
	local tman = require "base.ThreadManager"
	tman:cancelAll();
	
	log:info("Thread test3 done.")
end


--[[
function test_linda_sleep()
	log:info("Performing linda sleep test.")

	local linda= lanes.linda()
	
	local count = 0
	while true and count < max_count do
	  local key,v= linda:receive( delay, "dummy_key")

	  log:info("Timer : ".. lanes.now_secs() )
	  count = count+1
	end
end
]]

function test_lane_timer()
	log:info("Performing lane timer test.")
	
	local linda= lanes.linda()

	local count = 0
	while true and count < max_count do
	  local key,v= linda:receive( delay, "dummy_key")
	  log:info("Timer : ".. lanes.now_secs() )
	  count = count+1
	end
	
	log:info("Done with lane timer test.")
end

function test_apr_sleep()
	log:info("Tests","Testing APR sleep");
	
	local apr = require "apr"

	local count = 0
	while true and count < max_count do
	  apr.sleep(delay)
	  
	  log:info("Timer : ".. lanes.now_secs() )
	  count = count+1
	end

	--[[
	-- First timer once a second, not synchronized to wall clock
    --
	lanes.timer( linda, "sec", 1, 1 )
	
	
	-- Timer to a future event (next even minute); wall clock synchronized 
	--
	local t= os.date( "*t", os.time()+60 )    -- now + 1min
	t.sec= 0
	
	lanes.timer( linda, "min", t, 60 )   -- reoccur every minute (sharp)
	count = 0
	
	while true and count < 10 do
	  local v,key= linda:receive( "sec", "min" )
	  log:info("Tests","Timer "..key..": "..v )
	  count = count+1
	end

	lanes.timer( linda, "sec", 0 )
	lanes.timer( linda, "min", 0 )
	]]
	
	log:info("Tests","Done testing Lane timer.")
end

