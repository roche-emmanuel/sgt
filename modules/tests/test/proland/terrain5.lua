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
  resLoader:addPath(root_path.."/proland_samples/terrain/terrain5");
  resLoader:addArchive(root_path.."/proland_samples/terrain/terrain5/helloworld.xml");

  self:debug("Creating ResourceManager...")
  local resManager = ork.ResourceManager(resLoader, 8)

  local manager = ork.SceneManager()
  manager:setResourceManager(resManager)

  self:debug("Making graphics context current.")
  local gw = self:getCanvas():getGraphicsWindow()
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
  self._controller = proland.TerrainViewController(manager:getCameraNode(), 50000.0);

  local NAN = math.sqrt(-1.0)

  self._viewManager = proland.ViewManager{
    getScene = function() return self._manager end,
    getViewController = function() return self._controller end,
    getWorldCoordinates = function(obj, tt, x, y)
      local p = self._manager:getWorldCoordinates(x, y)
      if (math.abs(p:getX()) > 100000.0 or math.abs(p:getY()) > 100000.0 or math.abs(p:getZ()) > 100000.0) then
        p = ork.vec3d(NAN, NAN, NAN);
      end
      -- //trDEBUG("Proland","Got point ("<<p.x<<", "<<p.y<<", "<<p.z<<") for input ("<<x<<", "<<y<<")");

      return p;
    end
  }

  self._view = land.createBasicViewHandler(true,self._viewManager)

  self._ui = resManager:loadResource("ui"):dynCast("proland::TweakBarManager")
  self._ui:setNext(self._view)

  local size=self:getCanvas():getGLCanvas():GetSize()
  self:onResize(size:GetWidth(),size:GetHeight())

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

local wheel_map = {}
wheel_map[osgGA.GUIEventAdapter.SCROLL_UP] = 0
wheel_map[osgGA.GUIEventAdapter.SCROLL_DOWN] = 1

local button_map = {}
button_map[osgGA.GUIEventAdapter.LEFT_MOUSE_BUTTON] = 0
button_map[osgGA.GUIEventAdapter.MIDDLE_MOUSE_BUTTON] = 1
button_map[osgGA.GUIEventAdapter.RIGHT_MOUSE_BUTTON] = 2


function Class:getModifier(ea)
  local m = 0
  if (bit.band(ea:getModKeyMask(),osgGA.GUIEventAdapter.MODKEY_SHIFT)>0) then
    m = m + 1
  end
  if (bit.band(ea:getModKeyMask(),osgGA.GUIEventAdapter.MODKEY_CTRL)>0) then
    m = m + 2
  end
  if (bit.band(ea:getModKeyMask(),osgGA.GUIEventAdapter.MODKEY_ALT)>0) then
    m = m + 4
  end

  return m
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
      local m = self:getModifier(ea)

      if etype == osgGA.GUIEventAdapter.RESIZE then
        -- self:debug("Should handle resize event here.")
        self:onResize(ea:getWindowWidth(),ea:getWindowHeight())
        -- self._manager:getResourceManager():updateResources()
      elseif etype == osgGA.GUIEventAdapter.SCROLL then
        local sm = ea:getScrollingMotion()
        self._ui:mouseWheel(wheel_map[sm], m, x, y);
      elseif etype == osgGA.GUIEventAdapter.PUSH then
        self._ui:mouseClick(button_map[ea:getButton()],0,m,x,y)
      elseif etype == osgGA.GUIEventAdapter.RELEASE then
        self._ui:mouseClick(button_map[ea:getButton()],1,m,x,y)
      elseif etype == osgGA.GUIEventAdapter.DRAG then
        self._ui:mouseMotion(x,y)
      elseif etype == osgGA.GUIEventAdapter.MOVE then
        self._ui:mousePassiveMotion(x,y)
      end

      return false;
    end
  };
end

function Class:onFrame()
  -- self:debug("Rendering frame.")
  local newT = self._timer:elapsed();
  self._dt = newT - self._t;
  self._t = newT;

  self._ui:redisplay(self._t,self._dt)
end

function Class:onResize(x,y)
  self:debug("Rescaling to ",x,"x",y)
  local fb = ork.FrameBuffer.getDefault()
  fb:setViewport(ork.vec4i(0, 0, x, y));
  self._ui:reshape(x,y)
end

local app = Class{}

app:run()

app = nil
log:info "Cleaning up"
collectgarbage('collect')

-- collect proland garbages:
-- log:info "Calling ork::Object::exit()"
ork.Object.exit()

log:notice "Proland core test done."
