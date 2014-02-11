local Class = require("classBuilder"){name="OSGCanvas",bases={"gui.wx.BasicWindow","base.EventHandler"}};

local wx = require "wx"

local osg = require "osg"
local osgwx = require "osgWX"
local i18n = require "i18n"
local cfg = require "config"
local gl = require "luagl"
local Event = require "base.Event"
local prof = require "debugging.Profiler"
local tools = require "osg.Tools"
local fs = require "base.FileSystem"


--- Create an OSG Canvas:
function Class:initialize(options)
	self:debug4("Initializing OSG Canvas.")
	
	self._root = options.root or osg.Group()
	 
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	self:check(gl.COLOR_BUFFER_BIT,"Invalid value COLOR_BUFFER_BIT")
	self:check(gl.DEPTH_BUFFER_BIT,"Invalid value DEPTH_BUFFER_BIT")
	
	self._attribs = options.attribs or {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
	
	self:buildInstance()
	
	self:debug4("OSG Canvas initialization done.")
end

function Class:getWindow()
	return self._panel;
end

local forcedKeyDownMap = {}
forcedKeyDownMap[wx.WXK_CONTROL] = osgGA.GUIEventAdapter.KEY_Control_L;
forcedKeyDownMap[wx.WXK_SHIFT] = osgGA.GUIEventAdapter.KEY_Shift_L;
forcedKeyDownMap[wx.WXK_ALT] = osgGA.GUIEventAdapter.KEY_Alt_L;

function Class:getGLCanvas()
	return self._window
end

function Class:buildInstance()
	self:info("Building OSGCanvas instance...")
	
	-- We need an intermediate panel to assign it a custom deleter here  and release the eventHandlers properly:
	self._panel = self:createPanel{parent=self._parent,wrapper={
		delete = function()
			self:info("Deleting OSGCanvas panel.")
			self:release()
		end
	}};
	
	self._window = osgWX.createGLCanvas(self._panel,wx.wxID_ANY,self._attribs)
	self:check(self._window,"Invalid wxGLCanvas")
	self._panel:GetSizer():Add(self._window,1,wx.wxEXPAND,0);
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._window)
	self:check(self._context,"Invalid wxGLContext")

	-- create a viewer:
	self._viewer = osgViewer.Viewer()
	self._viewer:setCameraManipulator(osgGA.TrackballManipulator())

	-- create graphicswindow:
	self._gw = osgWX.GraphicsWindowWX(self._window,self._context) -- instance owned by lua	

	
	self._viewer:setSceneData(self._root);
	self._viewer:getCamera():setGraphicsContext(self._gw)
	self._viewer:getCamera():setClearMask(bit.bor(gl.COLOR_BUFFER_BIT,gl.DEPTH_BUFFER_BIT))
	self._viewer:getCamera():setClearColor(osg.Vec4f(1.0,0.0,0.0,1.0))
	self._viewer:getCamera():setViewport(0,0,1,1);
	
	-- Need to render one frame here to avoid the NODE_VISITOR initial traversal with unreferenced object.
	self:debug("Rendering first frame...")
	self:getViewer():frame()
	self:debug("First frame rendered.")
	
	--	self._viewer:setThreadingModel(osgViewer.ViewerBase.SingleThreaded);

	local win = self._window
	
	-- connect the event handlers for the canvas:
	self:connectHandler(win,wx.wxEVT_SIZE,function(intf,event)
    	local size = event:GetSize()
    	local ww = size:GetWidth()
    	local hh = size:GetHeight()
		self:debug4("Resizing OSGCanvas to ",ww,"x",hh);
		 
		self._gw:getEventQueue():windowResize(0, 0, ww, hh);
        self._gw:resized(0,0,ww,hh);
		self._viewer:getCamera():setViewport(0,0,ww,hh);
		
		self:fireEvent("onResize",ww,hh)
	end)
	
	local mouseDownHandler = function(intf,event)
    	--self:info("Sending mouse down event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		self._gw:getEventQueue():mouseButtonPress(event:GetX(), event:GetY(), event:GetButton())
		event:Skip();
	end
	
	local mouseUpHandler = function(intf,event)
    	--self:info("Sending mouse up event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		self._gw:getEventQueue():mouseButtonRelease(event:GetX(), event:GetY(), event:GetButton())
		event:Skip();
	end
	
	local mouseWheelHandler = function(intf,event)
    	--self:info("Sending mouse wheel event: ",event:GetWheelRotation()>0.0 and "DOWN" or "UP")
		self._gw:getEventQueue():mouseScroll(event:GetWheelRotation()>0.0 and osgGA.GUIEventAdapter.SCROLL_DOWN or osgGA.GUIEventAdapter.SCROLL_UP);
		event:Skip();
	end

	local mouseMotionHandler = function(intf,event)
    	--self:info("Sending mouse motion event: X=",event:GetX(),", Y=",event:GetY())
		self._gw:getEventQueue():mouseMotion(event:GetX(), event:GetY());
		event:Skip();
	end

	local keyUpHandler = function(intf,event)
		self._gw:getEventQueue():keyRelease(self:adaptKeyCode(event:GetKeyCode()));
		event:Skip();
	end
	
	local keyDownHandler = function(intf,event)
		if forcedKeyDownMap[event:GetKeyCode()] then
			-- self:info("Sending keydown:",event:GetKeyCode())
			self._gw:getEventQueue():keyPress(self:adaptKeyCode(event:GetKeyCode()));
		else
			event:Skip();
		end
	end

	local charHandler = function(intf,event)
		-- self:info("Sending char:",event:GetKeyCode())
		self._gw:getEventQueue():keyPress(self:adaptKeyCode(event:GetKeyCode()));
		event:Skip();
	end
	
	self:connectHandler(win,wx.wxEVT_LEFT_DOWN,mouseDownHandler)
	self:connectHandler(win,wx.wxEVT_MIDDLE_DOWN,mouseDownHandler)
	self:connectHandler(win,wx.wxEVT_RIGHT_DOWN,mouseDownHandler)
	self:connectHandler(win,wx.wxEVT_LEFT_UP,mouseUpHandler)
	self:connectHandler(win,wx.wxEVT_MIDDLE_UP,mouseUpHandler)
	self:connectHandler(win,wx.wxEVT_RIGHT_UP,mouseUpHandler)
	self:connectHandler(win,wx.wxEVT_MOUSEWHEEL,mouseWheelHandler)
	self:connectHandler(win,wx.wxEVT_MOTION,mouseMotionHandler)
	
	self:connectHandler(win,wx.wxEVT_KEY_UP,keyUpHandler)
	self:connectHandler(win,wx.wxEVT_KEY_DOWN,keyDownHandler)
	self:connectHandler(win,wx.wxEVT_CHAR,charHandler)
	
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	
	--self:getEventManager():addListener{event=Event.APP_CLOSING,func=function()
	--end}
end

local keyMap = {}
keyMap[wx.WXK_CONTROL] = osgGA.GUIEventAdapter.KEY_Control_L;
keyMap[wx.WXK_SHIFT] = osgGA.GUIEventAdapter.KEY_Shift_L;
keyMap[wx.WXK_ALT] = osgGA.GUIEventAdapter.KEY_Alt_L;
keyMap[wx.WXK_UP] = osgGA.GUIEventAdapter.KEY_Up;
keyMap[wx.WXK_DOWN] = osgGA.GUIEventAdapter.KEY_Down;
keyMap[wx.WXK_LEFT] = osgGA.GUIEventAdapter.KEY_Left;
keyMap[wx.WXK_RIGHT] = osgGA.GUIEventAdapter.KEY_Right;
keyMap[wx.WXK_BACK] = osgGA.GUIEventAdapter.KEY_BackSpace;
keyMap[wx.WXK_TAB] = osgGA.GUIEventAdapter.KEY_Tab;
keyMap[wx.WXK_RETURN] = osgGA.GUIEventAdapter.KEY_Return;
keyMap[wx.WXK_ESCAPE] = osgGA.GUIEventAdapter.KEY_Escape 
keyMap[wx.WXK_SPACE] = osgGA.GUIEventAdapter.KEY_Space
keyMap[wx.WXK_DELETE] = osgGA.GUIEventAdapter.KEY_Delete
keyMap[wx.WXK_START] = osgGA.GUIEventAdapter.KEY_Start 
keyMap[wx.WXK_CANCEL] = osgGA.GUIEventAdapter.KEY_Cancel
keyMap[wx.WXK_CLEAR] = osgGA.GUIEventAdapter.KEY_Clear
keyMap[wx.WXK_MENU] = osgGA.GUIEventAdapter.KEY_Menu
keyMap[wx.WXK_PAUSE] = osgGA.GUIEventAdapter.KEY_Pause
keyMap[wx.WXK_END] = osgGA.GUIEventAdapter.KEY_End
keyMap[wx.WXK_HOME] = osgGA.GUIEventAdapter.KEY_Home
keyMap[wx.WXK_SELECT] = osgGA.GUIEventAdapter.KEY_Select
keyMap[wx.WXK_PRINT] = osgGA.GUIEventAdapter.KEY_Print
keyMap[wx.WXK_EXECUTE] = osgGA.GUIEventAdapter.KEY_Execute
keyMap[wx.WXK_SNAPSHOT] = osgGA.GUIEventAdapter.KEY_Snapshot
keyMap[wx.WXK_INSERT] = osgGA.GUIEventAdapter.KEY_Insert
keyMap[wx.WXK_HELP] = osgGA.GUIEventAdapter.KEY_Help

function Class:release()
	self:info("Releasing OSGCanvas...")
	self:disconnectHandlers()
	if self._gw then
		self._gw:invalidate()
	end
	self._gw = nil;		
	if self._viewer then
		self._viewer:getCamera():setGraphicsContext(nil); -- this is needed to avoid wxWidgets resource access after deletion ?
	end
	if self._root then
		self._root:removeChildren(0,self._root:getNumChildren())
	end	
	self:fireEvent("onClose")
	
	self._viewer = nil;
	
	if self._context then
		self._context:delete()
		self._context=nil
	end

	self:debug3("Done releasing scene.")
end

function Class:adaptKeyCode(key)
	return keyMap[key] or key
end

function Class:onFrame()
	--self:info("Rendering frame...")
	if not self._window:IsShownOnScreen() or not self._viewer or not self._gw then
		return
	end
	
	prof:start("OSG frame")
	if not self._initialized then
		-- Need to change the start tick for the event queue here:
		self._gw:getEventQueue():setStartTick(osg.Timer.instance():tick());
		self._initialized = true
	end
	
	self._viewer:frame();
	prof:stop()
	--self:info("Done rendering frame.")
end

function Class:home()
	self._viewer:getCameraManipulator():home(0.0)
end

function Class:getRoot()
	return self._root
end

function Class:getViewer()
	return self._viewer
end

return Class
