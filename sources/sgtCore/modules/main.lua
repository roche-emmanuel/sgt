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

-- core2.showMessageBox("Step 1","loading")
local level = sgt.LogManager.INFO

-- core2.showMessageBox("Step 2","loading")

-- Now we should decide here if we should be using release packages or developer modules:
-- We use the VBSSIM2_MODULE_PATH environment variable for this.
-- When this variable is set, it should specify additional locations where to look for lua modules.
-- We assume that those locations will contain the mxcore modules at least, thus, in that case, 
-- we do not load the mxcore lua package:
local mpath = os.getenv("SGT_MODULE_PATH")
if mpath then
	-- just add the path:
	mpath = mpath:gsub("\\","/") ..";"
	mpath = mpath:gsub(";","/?.lua;")
	sgt.doLog(level,"Adding module paths: '"..mpath.."'");
	package.path = package.path..";".. mpath
else
	requirePackage "core"
end

-- core2.showMessageBox("Step 3","loading")

-- After setting the module path, we may add additional common paths:
-- This is done to ensure that core modules will be given higher priority
-- than public modules (found in software/modules):
package.path = package.path..";" .. root_path .. "/?.cfg;" .. root_path .. "/modules/?.lua;"

require "utils.buildclass" -- load the new class builder system.

local log = require "tracer" -- use the tracer as default logging system.
	
log:info("init","Lua engine initialization completed.")
log:info("init","Called with arguments: ",arg)

local loader = require "MainLoader" {arg}

-- exit code:
return loader:execute()
