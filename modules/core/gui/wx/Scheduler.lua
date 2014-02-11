local Class = require("classBuilder"){name="Scheduler",bases="base.Object"};

local wx = require "wx"

local i18n = require "i18n"
local evtman = require "base.EventManager"
local Event = require "base.Event"
local Set = require "std.Set"
local Timer = require "gui.wx.ThreadTimer"

local prof = require "debugging.Profiler"

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:debug4("Initializing scheduler.")

	self._timers = Set();
	
	evtman:addListener{event=Event.APP_CLOSING,object=self}
	
	self:addTimer{frequency=config.master_framerate,callback=function(event) 
		--self:info("Handing frame timer event...");
		prof:start("Frame event")
		evtman:fireEvent(Event.FRAME) 
		--wx.wxGetApp():Yield(); -- useless ?
		
		prof:start("garbage step")
		collectgarbage('step')
		prof:stop()
		if config.monitor_lua_memory then
			local mem = collectgarbage("count")
			self:info("Memory usage: ", mem, " KBs")
		end
		prof:stop()
	end}
end

-- Should disable all the timers here.
function Class:onAppClosing()
	-- release all the images:
	self:info("Stopping registered timers.")
	for _,timer in self._timers:sequence() do
		timer:Stop();
	end
	self._timers:clear();
end

-- Add a new timer using the provided options.
-- options.frequency (optional) should in in Hz.
-- options.delay (optional) should be in seconds.
function Class:addTimer(options)
	-- add a new timer to the list:
	local timer = Timer(options);
	self._timers:push_back(timer);
	
	timer:Start()
	return timer;
end

return Class() -- return class instance.
