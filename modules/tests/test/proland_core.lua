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

  self:createBase()

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
  manager:setCameraNode("camera")
  manager:setCameraMethod("draw")

  self._manager = manager

  self:debug("Creating terrain view controller.")
  self._controller = proland.TerrainViewController(manager:getCameraNode(), 2500.0);

  self:debug("Creating proland drawable:")
  local pdraw = land.ProlandDrawable(manager, self._controller)

  self:debug("Creating render geode:")
  -- prepare the render geode:
  local geode = osg.Geode();
  geode:addDrawable( pdraw );
  geode:setCullingActive(false); -- just disable culling here.
  self:getRoot():addChild(geode)

  self:buildEventHandler()

  self:getViewer():addEventHandler( self._eventHandler );

  self:debug("App initialized.")
end

function Class:resize(x,y)
  self:debug("Updating frame buffer viewport to ",x,"x",y)
  local fb = ork.FrameBuffer.getDefault();
  fb:setDepthTest(true, land.LESS);
  fb:setViewport(ork.vec4i(0, 0, x, y));
end

function Class:buildEventHandler()
  self._eventHandler = osgGA.GUIEventHandler{
    handle = function(tt,obj,ea,aa)
      local etype = ea:getEventType();
      -- local xratio = self:getWidth()/ea:getWindowWidth()
      -- local yratio = self:getHeight()/ea:getWindowHeight()
      
      -- local x = math.floor(ea:getX()*xratio + 0.5);
      -- local y = math.floor((ea:getWindowHeight() - ea:getY())*yratio + 0.5);
      
      -- self:focus();
      
      -- if etype == osgGA.GUIEventAdapter.MOVE or etype == osgGA.GUIEventAdapter.DRAG then
      --   self:injectMouseMove(x,y);
      -- elseif etype == osgGA.GUIEventAdapter.PUSH then
      --   self:injectMouseDown(buttonMap[ea:getButton()] or 0)
      -- elseif etype == osgGA.GUIEventAdapter.RELEASE then
      --   self:injectMouseUp(buttonMap[ea:getButton()] or 0)
      -- elseif etype == osgGA.GUIEventAdapter.SCROLL then
      --   local sm = ea:getScrollingMotion()
      --   self:injectMouseWheel(vScrollMap[sm] or 0,hScrollMap[sm] or 0)        
      -- elseif etype == osgGA.GUIEventAdapter.KEYDOWN or etype == osgGA.GUIEventAdapter.KEYUP then
      --   self:injectKeyboardEvent(self:createKeyEvent(ea));
      -- end
      if etype == osgGA.GUIEventAdapter.RESIZE then
        self:debug("Should handle resize event here.")
        self:resize(ea:getWindowWidth(),ea:getWindowHeight())
      end

      return false;
    end
  };
end

local app = Class{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "Proland core test done."
