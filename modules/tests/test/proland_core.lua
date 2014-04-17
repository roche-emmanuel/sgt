#!/bin/sgt

log:notice "Starting Proland core test."

log:debug "Loading proland module..."
local land = require "land"
local proland = proland
local ork = ork

log:debug "Proland module loaded."

local Class = createClass{"ProlandCoreTest","osg.OSGTestApp"}

function Class:initialize()
	self:check(proland and ork,"Invalid proland or ork module")

	self:debug("Using root path: ",root_path)
	self:debug("Creating XMLResourceLoader...")
	local resLoader = ork.XMLResourceLoader()
	resLoader:addPath(root_path.."/proland_samples/core");
  resLoader:addArchive(root_path.."/proland_samples/core/helloworld.xml");

  self:debug("Creating ResourceManager...")
  local resManager = ork.ResourceManager(resLoader, 8)

  local manager = ork.SceneManager()
  manager:setResourceManager(resManager)

  self:debug("Making graphics context current.")
  local gw = self:getCanvas():getGraphicsWindow()
  -- gw:realize()
  self:check(gw:makeCurrent(),"Could not make current!")

	self:debug("Initializing glew...")
	land.initGlew()

	self:debug("assigning scheduler")
  local obj = resManager:loadResource("defaultScheduler")
  self:check(obj,"Invalid loadResource result")
  local sch = obj:dynCast("ork::Scheduler")
  self:check(sch,"Invalid scheduler")

  manager:setScheduler(sch)
  local obj = resManager:loadResource("scene")
  manager:setRoot(obj:dynCast("ork::SceneNode"))
  -- manager:setCameraNode("camera")
  -- manager:setCameraMethod("draw")

  self:debug("App initialized.")
end


local app = Class{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "Proland core test done."
