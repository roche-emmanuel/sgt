local Class = require("classBuilder"){name="Thread",bases="base.Object"};

local loaders = {}

-- local lanes = require "lanes"
if lanes.configure then
	lanes.configure({protect_allocator=true, with_timers=false})
end

-- local local_env = _G.environment 

loaders.high_level = function(data) 
	_G.flavor = data.flavor
	_G.root_path = data.root_path
	
	_G.environment = data.env
	if data.env then
		-- initialize the lua environment for this thread.
		data.env:init()
	end
	
	
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
	
	-- Now provide the wrapper for the main linda:
	local wrapper = require "core.Linda" {data.linda}
	
	log:info("Starting thread ", data.threadName,"...")
	
	-- local status, res = pcall(data.threadFunc,unpack(data.args))
	-- if not status then
		-- log:error("Error in thread execution: ",res)
	-- end
	
	-- local res = #data.args >0 and data.threadFunc(unpack(data.args)) or data.threadFunc()
	local res = data.threadFunc(wrapper,unpack(data.args))
	
	log:info("Finishing thread ",data.threadName,".")
	return res~=nil and res or true; -- do not send nil result.
	
	--return true
	--return loaders.low_level(data)
end

loaders.low_level = function(data)
	-- log:info("Starting thread ", data.threadName,"...")
	_G.environment = data.env
	_G.flavor = data.flavor
	_G.root_path = data.root_path
	
	if data.env then
		-- initialize the lua environment for this thread.
		data.env:init()
	end
	
	-- local res = #data.args >0 and data.threadFunc(wrapper,unpack(data.args)) or data.threadFunc(wrapper)
	local res = data.threadFunc(unpack(data.args))
	
	-- log:info("Finishing thread ",data.threadName,".")
	return res~=nil and res or true; -- do not send nil result.
end

-- options should contain at least a function to create the lane.
-- options.func = mandatory function.
-- options.name = thread name
-- options.loader [="high_level"] = loader implementation to use.
-- options.libraries  [="*"] = lua libs to load.
function Class:initialize(options)
	self:check(options,"Invalid options table.")
	self:check(options.func,"Invalid thread function.")
		
	local glb = {}
	glb.cancelstep = options.cancelstep
	glb.priority = options.priority
	
	local libs = options.libraries or "*"
	local loader = options.loader or "high_level"
	
	self._func = options.func;
	self._name = options.name or "[unnamed]"
	self._timeout = options.timeout or 1.0

	self._lane = lanes.gen( libs, glb, loaders[loader]);
	
	self._linda = lanes.linda()
end

function Class:__call(...)
	-- start the lane and return the handle:
	self:check(self._lane,"Invalid lane");
	self:check(not self._handle,"Thread already started.")
	
	if not _G.environment then
		self:notice("Creating Lua state environment...")
		_G.environment = createEnv()
		_G.environment:init()
	end
	
	local data = {}
	data.root_path = sgt_root or root_path
	data.flavor = flavor
	data.threadName = self._name
	data.threadFunc = self._func
	data.linda = self._linda
	data.args = {...}
	data.env = _G.environment
	
	self:check(data.env,"Invalid environment for thread creation.")
	
	local tman = require "base.ThreadManager"
	tman:registerThread(self)
	
	log:info("Starting thread lane for ",self._name)
	self._handle = self._lane(data)
	log:info("lane started.")
	return self._handle
end

function Class:join(timeout)
	self:check(self._handle,"Invalid handle in Thread:join()")
	
	local res, err, stack = self._handle:join(timeout);
	if res==nil and err~=nil then
		-- there was an error:
		log:error("Error in thread ", self._name, ": ", tostring(err), "\nThread stack: ", table.concat(stack or {},"\n"))
	end
	
	return res
end

function Class:getStatus()
	if not self._handle then
		return "none"
	end
	
	return self._handle.status
end

function Class:getName()
	return self._name
end

function Class:cancel(timeout, kill)
	if not self._handle then
		return -- nothing to do.
	end
	
	-- self:check(self._handle,"No lane handle to cancel.")
	
	self:info("Cancelling thread ", self._name)
	
	-- if there is an error in the thread, try to join it:
	if self:getStatus() == "error" then
		self:join() -- this will display the errors.
	end
	
	timeout = timeout or self._timeout
	
	local res, msg = self._handle:cancel(timeout, kill)
	-- res = self:join(timeout) -- try to join to retrieve errors.

	if not res then
		self:warn("Could not stop thread ", self._name," gracefully, msg='",msg,"'. Now trying to kill it...")
		self._handle:cancel(0.0, true);
		local stat = self:getStatus()
		self:check(stat=="killed" or stat=="cancelled","Invalid thread status after kill: ", stat)
		--self:check(res,"Could not kill the thread ", self._name)
	end
	
	local tman = require "base.ThreadManager"
	tman:unregisterThread(self)
	
	self:info("Thread ",self._name," stopped properly.")
	
	-- remove the handle:
	self._handle = nil;
end

function Class.newLinda()
	return lanes.linda()
end

function Class.getTime()
	return lanes.now_secs()
end

function Class:setObject(key,obj)
	if obj == nil then
		self._linda:set(key,nil)
		return
	end
	
	local ptr = obj:asVoid()
	local lptr = sgt.toLightUserdata(ptr)
	self._linda:set(key,lptr)
end

return Class
