local log = require "logger"

local libPath = root_path.."/libcef.dll"
-- The loadModuleFromFile method here is used to inject a reference on
-- a file module with a specific name that can be used afterwards b the module loader
-- as de valid dependency for additional in memory module.
-- Note that file modules cannot have any dependency on memory modules.
log:debug("Loading libcef library...")
core2.loadModuleFromFile("libcef.dll",libPath)

log:debug("Loading cef module...")
local cef = require "cef"

-- Now, to build the manager, we need the current DirectX device:
log:debug("Loading vbsDX module...")
local vbsDX = require "vbsDX"

log:debug("Retrieving DirectX device...")
local device = vbsDX.getDevice()

if not device then
	log:error("Invalid DirectX device!")
	return
end

-- Now we create the manager:
log:debug("Preparing new CEFManager traits.")
local traits = cef.CEFManager_Traits()

local processPath = root_path .."/cef_process.exe"
processPath = processPath:gsub("/","\\")

-- local processPath = "cef_process.exe"
log:debug("Setting CEF sub process path to ",processPath)
traits:processPath(processPath)

log:debug("Creating CEFManager for DirectX9...")
local cefman = cef.DX9CEFManager(traits,device)

log:debug("Starting CEFManager loop...")
cefman:startThread()

-- log:debug("Deleting CEFManager.")
-- cefman = nil
-- collectgarbage('collect')

log:debug("Done building CEF elements.")

return cefman
