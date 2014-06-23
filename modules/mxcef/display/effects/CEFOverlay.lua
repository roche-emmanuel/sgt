local Class = require("classBuilder"){name="CEFOverlay",bases={"mx.overlays.BasicOverlay","mx.overlays.OverlayListener","mx.menus.MenuListener"}};

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


--[[
Class: display.effects.CEFOverlay

MX Overlay implementation based on the CEF rendering system.
All the overlay content is rendered on a Web texture which is overlayed
on top of the imagery.

This class inherits from <display.Effect>.
]]

--local cef = require "cef"

--[=[
--[[
Constructor: CEFOverlay

Create a new instance of the class.
]]
function CEFOverlay(options)
]=]
function Class:initialize(options)
	self:debug("Loading CEF Overlay!")

	-- when creating the overlay, we need to build a new CEFViewBase:

	-- first we prepare the traits for the view:
	local traits = cef.CEFViewBase_Traits()

	-- Retrieve the appropriate dimensions for the rendering of this view:
	-- The dimensions can be retrieved from the parent OutputChannel.
	-- Note that the OutputChannel is actually the processor for this effect:
	local output = self:getProcessor()	
	local res = output:getResolution()
	local size = self.overlayResolutionSizeMap[res] or self.resolutionSizeMap[res]
	
	self:info("Creating CEFView of size ",size:x(),"x",size:y())

	traits:size(size:x(),size:y());

	-- Also set the target URL for the view:
	-- traits:url("http://www.google.fr")
	traits:url("W:/Cloud/Projects/mxjs/app/index.html")

	-- Now we may create the web view from those traits:
	self._view = cefman:CreateView(traits);
	self:check(self._view,"Invalid view created.");

	-- Now we prepare the TextureObject to hold the DirectX texture for this CEFView:
	local TextureObject = require "cef.ViewTextureObject"
	local tobj = TextureObject{manager=cefman,view=self._view}

	-- Now we build the effect pipeline by just merging the Overlay on top of the background imagery:
	local fx = self:addFilter{"AddLayer"}

	-- tobj:setLinearFiltering()
	tobj:setPointFiltering()	
	
	fx:setTextureObject(tobj,1)
end

function Class:update()
	-- does nothing for the moment.
	-- self:debug("Performing CEF update...")
	-- cefman:Update()
end

return Class
