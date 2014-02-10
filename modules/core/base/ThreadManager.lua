local Class = require("classBuilder"){name="ThreadManager",bases="base.Object"};

local Set = require "std.Set"
local Event = require "base.Event"

-- Main class to manager all the subthreads/lanes.
function Class:initialize(options)
	self._threads = Set();
	
	local eman = require "base.EventManager"
	eman:addListener{event=Event.APP_CLOSING,object=self}
end

function Class:registerThread(thread)
	self:check(thread,"Invalid thread object")
	self:checkType(thread,require("base.Thread"))
	self:check(not self._threads:contains(thread),"Thread ",thread:getName()," already registered.");
	
	self._threads:push_back(thread);
end

function Class:unregisterThread(thread)
	self:check(thread,"Invalid thread object")
	self:checkType(thread,require("base.Thread"))
	
	local res = self._threads:eraseValue(thread)
	self:check(res,"Thread ",thread:getName()," was not registered.");
end

function Class:cancelAll()
	-- Stop all the registered threads:
	self:info("Stopping all threads...")
	while(not self._threads:empty()) do
		local th = self._threads:back()
		th:cancel()
	end
	
	self:info("All threads stopped.")
end

function Class:onAppClosing()
	self:cancelAll()
end

return Class()
