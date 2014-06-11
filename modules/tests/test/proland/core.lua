log:notice "Starting Proland core test."

log:debug "Loading proland module..."
local land = require "land"
local proland = proland
local ork = ork

log:debug "Proland module loaded."

local Class = createClass{"ProlandCoreTest","osg.OSGTestApp"}

function Class:initialize()
	self:check(proland and ork,"Invalid proland or ork module")

  -- self:createBase()
  self._t = 0
  self._dt = 0
  self._timer = ork.Timer()
  self._timer:start()

	self:debug("Using root path: ",root_path)
	self:debug("Creating XMLResourceLoader...")
	local resLoader = ork.XMLResourceLoader()
  resLoader:addPath(root_path.."/proland_samples/core");
  resLoader:addArchive(root_path.."/proland_samples/core/helloworld.xml");
	-- resLoader:addPath(root_path.."/proland_samples/terrain/terrain3");
 --  resLoader:addArchive(root_path.."/proland_samples/terrain/terrain3/helloworld.xml");

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

  local size=self:getCanvas():getGLCanvas():GetSize()
  self:onResize(size:GetWidth(),size:GetHeight())

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

  self._drawable = osg.Drawable{
    drawImplementation = function(tt,obj,renderinfo)
      -- self:debug("Calling draw implementation.")
      local state = renderinfo:getState()
      -- state:applyModelViewMatrix(osg.Matrixd.rotate(-math.pi/2.0,osg.ZAXIS))
      -- state:disableAllVertexArrays()
      state:popAllStateSets()
      self:onFrame()
    end
  }


  self._drawable:setUseDisplayList(false);
  self._drawable:setUseVertexBufferObjects(false);

  -- local pdraw = land.ProlandDrawable(manager, self._controller)
  -- self._drawable = pdraw

  self:debug("Creating render geode:")
  -- prepare the render geode:
  local geode = osg.Geode();
  geode:addDrawable( self._drawable );
  geode:setCullingActive(false); -- just disable culling here.
  self:getRoot():addChild(geode)

  self:buildEventHandler()

  self:getViewer():addEventHandler( self._eventHandler );

  resManager:updateResources();

  -- self:home()

  self:debug("App initialized.")
end

function Class:buildEventHandler()
  self._eventHandler = osgGA.GUIEventHandler{
    handle = function(tt,obj,ea,aa)
      local etype = ea:getEventType();
      -- local xratio = self:getWidth()/ea:getWindowWidth()
      -- local yratio = self:getHeight()/ea:getWindowHeight()
      
      -- local x = math.floor(ea:getX()*xratio + 0.5);
      -- local y = math.floor(()*yratio + 0.5);
      
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
      local x = ea:getX()
      local y = ea:getWindowHeight() - ea:getY()

      if etype == osgGA.GUIEventAdapter.RESIZE then
        -- self:debug("Should handle resize event here.")
        self:onResize(ea:getWindowWidth(),ea:getWindowHeight())
        -- self._manager:getResourceManager():updateResources()
      elseif etype == osgGA.GUIEventAdapter.SCROLL then
        local sm = ea:getScrollingMotion()
        if sm == osgGA.GUIEventAdapter.SCROLL_UP then
          -- self:debug("Scrolling up...")
          -- self._controller:setD(self._controller:getD()/1.1)
          -- self._drawable:mouseWheel(0,0,x,y)
          self._controller:setD(self._controller:getD()/1.1)
        elseif sm == osgGA.GUIEventAdapter.SCROLL_DOWN then
          -- self:debug("Scrolling down...")
          -- self._controller:setD(self._controller:getD()*1.1)
          -- self._drawable:mouseWheel(1,0,x,y)
          self._controller:setD(self._controller:getD()*1.1)
        end
      elseif etype == osgGA.GUIEventAdapter.PUSH then
        self._mouseX = x;
        self._mouseY = y;
        self._rotate = (bit.band(ea:getModKeyMask(),osgGA.GUIEventAdapter.MODKEY_CTRL)>0)
      elseif etype == osgGA.GUIEventAdapter.DRAG then
        -- self:debug("Mouse move")
        if self._rotate then
          -- self:debug("Handling rotate")
          self._controller:setPhi(self._controller:getPhi() + (self._mouseX - x)/500.0)
          self._controller:setTheta(self._controller:getTheta() + (self._mouseY - y)/500.0)
        else
          -- self:debug("Handling move")
          local oldp = self._manager:getWorldCoordinates(self._mouseX,self._mouseY)
          local p = self._manager:getWorldCoordinates(x,y)
          if self:validPos(oldp) and self:validPos(p) then
            self._controller:move(oldp, p)
          end
        end
        self._mouseX = x
        self._mouseY = y
      end

      return false;
    end
  };
end

function Class:validPos(pos)
  return math.abs(pos:getX()) < 1000.0 and math.abs(pos:getY()) < 1000.0 and math.abs(pos:getZ()) < 1000.0;
end

function Class:onFrame()
  -- self:debug("Rendering frame.")
  local newT = self._timer:elapsed();
  self._dt = newT - self._t;
  self._t = newT;

  self._controller:update();
  self._controller:setProjection();

  local fb = ork.FrameBuffer.getDefault();
  fb:clear(true, false, true);

  self._manager:update(self._t, self._dt);
  self._manager:draw();
end

function Class:onResize(x,y)
  self:debug("Rescaling to ",x,"x",y)
  local fb = ork.FrameBuffer.getDefault()
  fb:setViewport(ork.vec4i(0, 0, x, y));
end

function Class:onMouseDown(b,x,y)

end

local app = Class{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "Proland core test done."
