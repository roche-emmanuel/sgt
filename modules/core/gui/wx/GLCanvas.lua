local Class = require("classBuilder"){name="GLCanvas",bases={"gui.wx.BasicWindow","base.EventHandler"}};

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
	self:debug4("Initializing GL Canvas.")
		 
	-- create the canvas:
	self:check(wx.WX_GL_RGBA,"Invalid value WX_GL_RGBA")
	self:check(wx.WX_GL_DOUBLEBUFFER,"Invalid value WX_GL_DOUBLEBUFFER")
	self:check(gl.COLOR_BUFFER_BIT,"Invalid value COLOR_BUFFER_BIT")
	self:check(gl.DEPTH_BUFFER_BIT,"Invalid value DEPTH_BUFFER_BIT")
	
	self._attribs = options.attribs or {wx.WX_GL_RGBA,wx.WX_GL_DOUBLEBUFFER}
	
	self._onResize = options.onResize
	self._onFrame = options.onFrame
	self._onMouseDown = options.onMouseDown
	self._onMouseUp = options.onMouseUp
	self._onMouseWheel = options.onMouseWheel
	self._onMouseMotion	= options.onMouseMotion
	self._onKeyUp = options.onKeyUp
	self._onKeyDown = options.onKeyDown
	self._onChar = options.onChar

	self:buildInstance()
	
	self:debug4("GL Canvas initialization done.")
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
	self:info("Building GLCanvas instance...")
	
	-- We need an intermediate panel to assign it a custom deleter here  and release the eventHandlers properly:
	self._panel = self:createPanel{parent=self._parent,wrapper={
		delete = function()
			self:info("Deleting GLCanvas panel.")
			self:release()
		end
	}};
	
	self._window = osgWX.createGLCanvas(self._panel,wx.wxID_ANY,self._attribs)
	self:check(self._window,"Invalid wxGLCanvas")
	self._panel:GetSizer():Add(self._window,1,wx.wxEXPAND,0);
	
	-- Create the glcontext:
	self._context = wx.wxGLContext:new(self._window)
	self:check(self._context,"Invalid wxGLContext")
	
	--	self._viewer:setThreadingModel(osgViewer.ViewerBase.SingleThreaded);
	local win = self._window
	
	-- connect the event handlers for the canvas:
	self:connectHandler(win,wx.wxEVT_SIZE,function(intf,event)
    	local size = event:GetSize()
    	local ww = size:GetWidth()
    	local hh = size:GetHeight()
		self:debug4("Resizing OSGCanvas to ",ww,"x",hh);
		
		if self._onResize then
			self._onResize(ww,hh)
		end		 
	end)
	
	local mouseDownHandler = function(intf,event)
    	--self:info("Sending mouse down event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		if self._onMouseDown then
			self._onMouseDown(event:GetButton(),event:GetX(), event:GetY())
		end
		event:Skip();
	end
	
	local mouseUpHandler = function(intf,event)
    	--self:info("Sending mouse up event: X=",event:GetX(),", Y=",event:GetY(),", button=",event:GetButton())
		if self._onMouseUp then
			self._onMouseUp(event:GetButton(),event:GetX(), event:GetY())
		end
		event:Skip();
	end
	
	local mouseWheelHandler = function(intf,event)
    	--self:info("Sending mouse wheel event: ",event:GetWheelRotation()>0.0 and "DOWN" or "UP")
		if self._onMouseWheel then
			self._onMouseWheel(event:GetWheelRotation())
		end
		event:Skip();
	end

	local mouseMotionHandler = function(intf,event)
    	--self:info("Sending mouse motion event: X=",event:GetX(),", Y=",event:GetY())
		if self._onMouseMotion then
			self._onMouseMotion(event:GetX(), event:GetY())
		end
		event:Skip();
	end

	local keyUpHandler = function(intf,event)
		if self._onKeyUp then
			self._onKeyUp(self:adaptKeyCode(event:GetKeyCode()))
		end
		event:Skip();
	end
	
	local keyDownHandler = function(intf,event)
		if self._onKeyDown and forcedKeyDownMap[event:GetKeyCode()] then
			-- self:info("Sending keydown:",event:GetKeyCode())
			self._onKeyDown(self:adaptKeyCode(event:GetKeyCode()))
		else
			event:Skip();
		end
	end

	local charHandler = function(intf,event)
		-- self:info("Sending char:",event:GetKeyCode())
		if self._onChar then
			-- self:info("Sending keydown:",event:GetKeyCode())
			self._onChar(self:adaptKeyCode(event:GetKeyCode()))
		else
			event:Skip();
		end
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
	self:info("Releasing GLCanvas...")
	self:disconnectHandlers()

	self:fireEvent("onClose")
		
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
	if not self._window:IsShownOnScreen() then
		return
	end
	
	self:check(self._context:SetCurrent(self._window),"Cannot set current context.")

	if self._onFrame then
		self._onFrame()
	end

	self:check(self._window:SwapBuffers(),"Cannot Swap buffers.")
end

return Class
