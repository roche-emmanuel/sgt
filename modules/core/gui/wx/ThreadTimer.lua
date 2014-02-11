local Class = require("classBuilder"){name="ThreadTimer",bases="base.Object"}; 

local wx = require "wx"

local sgtEVT_THREAD_TIMER = wx.wxNewEventType()
local lastID = 0;

log:info("Created sgtEVT_THREAD_TIMER=",sgtEVT_THREAD_TIMER)

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:check(options and (options.frequency or options.delay), "Invalid inputs for Timer.")
	self:check(options.callback, "Invalid callback.")
		
	self._interval = options.delay or 1.0/options.frequency;
	self._callback = options.callback
	self._arg = options.arg
	self._oneShot = options.oneShot or false
	self._timerID = lastID
	lastID = lastID+1;
	
	self:info("Creating timer...")
	local win = wx.wxGetApp():GetTopWindow()
	self:check(win,"Invalid Top window.")
	self._handler = win:GetEventHandler()
	
	local Thread = require "base.Thread"
	
	self._thread = Thread{name="timer_thread",timeout=0.1,func=function(linda,h,id,interval)
		log:info("Entering timer thread...")
		
		log:info("Retrieving void pointer from ",tostring(h))
		local ptr = sgt.fromLightUserdata(h)
		if not ptr then
			log:error("Invalid void pointer in sub thread.")
		end
		
		log:info("Loading wx module...")
		local wx = require "wx"

		--log:info("Sending init flag...")
		--linda:send("wx_loaded",true);
		
		log:info("Retrieving handler object...")
		
		local win = wx.wxGetApp():GetTopWindow()
		if not win then	
			log:error("Invalid Top window.")
		end

		local handler = win:GetEventHandler()
		
		--local handler = wx.wxEvtHandler.fromVoid(ptr)
		if not handler then
			log:error("Invalid handler in sub thread.")
		end

		log:info("Handler object retrieved.")
		log:info("Starting timer loop with interval=",interval,", timerID=",id)
		--log:info("Handler name=",handler:GetName())
		
		while true do
			-- sgt.doLog(sgt.LogManager.INFO,"Performing timer cycle "..count)
			-- log:info("Performing timer cycle "..count)
			local key,v= linda:wait( interval)
			
			-- log:info("Creating new event...")
			local event = wx.wxCommandEvent:new(sgtEVT_THREAD_TIMER,id);
			--log:info("Queuing event...")
			handler:QueueEvent(event)
			--log:info("Done queuing event.")
		end 
		
		log:info("Exiting timer thread.")
	end}
	
	self:info("ThreadTimer created.")
end

function Class:Start(interval)
	interval = interval or self._interval
	
	self._handler:connect(self._timerID, sgtEVT_THREAD_TIMER,function(event)
		--self:info("Calling timer event handler...")
		self._callback(self._arg)
		--event:Skip()
	end)
	
	local ptr = self._handler:asVoid()
	self:check(ptr,"Invalid void pointer.")
	local h = sgt.toLightUserdata(ptr)
	self:check(h,"Invalid light userdata.")
	
	self:info("Starting timer thread with ID=",self._timerID," h=",tostring(h),", interval=",interval)
	self._thread(h,self._timerID,interval)
	--self:info("Waiting for timer thread init...")
	--self._linda:receive(10.0,"wx_loaded")
	--self:info("Done waiting for timer init.")
end

function Class:Stop()
	self:info("Stopping Timer thread with ID=",self._timerID)
	self._thread:cancel()
	self._handler:disconnect(self._timerID, sgtEVT_THREAD_TIMER)
end

return Class
