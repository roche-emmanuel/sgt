local arg={...}

-- configure lanes:
if lanes.configure then
	lanes.configure({protect_allocator=true, with_timers=false})
end

local env = createEnv()
env:init()

_G.environment = env -- ensure that we store the environment in the global scope

-----------------------------------------------------------------------------------
-- Entry point of the application:
log:info("Lua engine initialization completed.")
log:info("Called with arguments: ",arg)

local loader = require "MainLoader" {arg}

-- exit code:
return loader:execute()

