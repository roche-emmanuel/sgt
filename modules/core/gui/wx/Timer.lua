local Class = require("classBuilder"){name="Timer",bases="base.Object"}; 

local wx = require "wx"

--- The Scheduler is used to register timers.
function Class:initialize(options)
	self:check(options and (options.frequency or options.delay), "Invalid inputs for Timer.")
	self:check(options.callback, "Invalid callback.")
		
	self._interval = math.floor((options.delay or 1.0/options.frequency)*1000.0 + 0.5);
	self._callback = options.callback
	self._arg = options.arg
	self._oneShot = options.oneShot or false
	
	self:info("Creating timer...")
	self._instance = wx.wxTimer{
		Notify = function(tt)
			--self:info("Calling notify on extended timer.")
			self._callback(self._arg)
		end
	};
	self:info("Timer created...")
end

function Class:Start(interval)
	interval = interval or self._interval
	--self:info("Calling base Start on derived timer.")
	self._instance:Start(interval, self._oneShot)
end

function Class:Stop()
	return self._instance:Stop()
end

return Class
