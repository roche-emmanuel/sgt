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

if needPaks then
-- Before selecting the lua module source we may just load the external package anyway,
-- because developers are not supposed to update those frequently:
requirePackage "externals"

-- We may also load the asset package: internally we will then check if we should use the data
-- available for each category (fonts/images/shaders) or just rely on files:
requirePackage "mxassets"
end

-- core2.showMessageBox("Step 2","loading")

-- Now we should decide here if we should be using release packages or developer modules:
-- We use the VBSSIM2_MODULE_PATH environment variable for this.
-- When this variable is set, it should specify additional locations where to look for lua modules.
-- We assume that those locations will contain the mxcore modules at least, thus, in that case, 
-- we do not load the mxcore lua package:
local mpath = os.getenv("VBSSIM2_MODULE_PATH")
if mpath then
	-- just add the path:
	mpath = mpath:gsub("\\","/") ..";"
	mpath = mpath:gsub(";","/?.lua;")
	core2.doLog(level,"Adding module paths: '"..mpath.."'");
	package.path = package.path..";".. mpath
elseif needPaks then
	requirePackage "mxcore"
end

-- core2.showMessageBox("Step 3","loading")

-- After setting the module path, we may add additional common paths:
-- This is done to ensure that core modules will be given higher priority
-- than public modules (found in software/modules):
package.path = package.path..";" .. root_path .. "/?.cfg;" .. root_path .. "/modules/?.lua;"

local log = require "tracer" -- use the tracer as default logging system.

local enabled = os.getenv("VBSSIM2_ENABLED") or "true"

if enabled~="false" then
	local v = require "version"
	core2.doLog(level,("Starting VBSSim2 v%d.%d.%d build %d - %s"):format(v.major,v.minor,v.patch,v.build,v.date));

	-- core2.showMessageBox("Step 4","loading")
	require "engine.DefaultHandler"
	-- core2.showMessageBox("Step 5","loading")
	
	-- check if we have an extension available:
	local extension = os.getenv("VBSSIM2_EXTENSION")
	if extension then
		--log:debug("init","Loading extension from '",extension,"'")
		-- core2.showMessageBox("Step 5","loading")
		dofile(extension)
	end
	
	log:info("init","Lua engine initialization completed.")
else
	log:notice("init","VBSSim2 is DISABLED. Not starting the plugin.")
end

-- core2.showMessageBox("Step 6","loading")



