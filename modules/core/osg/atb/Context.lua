local Class = require("classBuilder"){name="ATBContext",bases="base.Object"};

require "osg"
local atb = require "atb"

local requestedEvents = {}
requestedEvents[osgGA.GUIEventAdapter.PUSH] = true;
requestedEvents[osgGA.GUIEventAdapter.RELEASE] = true;
requestedEvents[osgGA.GUIEventAdapter.DRAG] = true;
requestedEvents[osgGA.GUIEventAdapter.MOVE] = true;
requestedEvents[osgGA.GUIEventAdapter.KEYDOWN] = true;
requestedEvents[osgGA.GUIEventAdapter.KEYUP] = true;

function Class:initialize(options)	
	self:debug2("Creating ATBHandler");
	
	local manager = require "osg.atb.Manager"
	
	self._events = require("std.Vector")()
	self._contextID = manager:getNewContextID();
	self._windows = require("std.Set")()
	
	self._eventHandler = osgGA.GUIEventHandler{
		handle = function(tt,obj,ea,aa)
			-- self:info("I'm in the event handler.")
			local etype = ea:getEventType()
			if requestedEvents[etype] then
				self._events:push_back(ea);
			end
			
			if (etype==osgGA.GUIEventAdapter.PUSH or etype==osgGA.GUIEventAdapter.KEYDOWN) then
				local x = ea:getX();
				local y = ea:getWindowHeight() - ea:getY();
				-- self:info("Checking position: x=",x,", y=",y)
				
				self._currentWindow = self:getWindowUnderMouse(x,y)
			end
			
			if (etype==osgGA.GUIEventAdapter.RELEASE or etype==osgGA.GUIEventAdapter.KEYUP) then
				self._currentWindow = nil
			end
			
			-- self:info("Leaving the event handler.")
			return self._currentWindow~=nil;
		end
	};
	
	self._drawCallback = osg.Camera_DrawCallback{
		op_call = function(tt,obj,renderInfo)
			-- self:info("I'm in the draw callback.")
			local viewport = renderInfo:getCurrentCamera():getViewport();
			if ( viewport ) then
				atb.TwWindowSize( viewport:width(), viewport:height() );
			end
			
			-- self:info("Handling events")
			self:handleEvents();
			-- self:info("Events handled.")
			atb.TwDraw();			
			-- self:info("Leaving draw callback.")
		end
	};
end

function Class:getEventHandler()
	return self._eventHandler
end

function Class:getDrawCallback()
	return self._drawCallback
end

function Class:createWindow(wname)
	local Window = require "osg.atb.Window"
	local win = Window{name=wname}
	self._windows:push_front(win)
	return win;
end

function Class:getWindowUnderMouse(x,y)
	-- check if there is a window under the given mouse location:
	for _,win in self._windows:sequence() do
		if (win:getRect():Contains(x,y)) then
			--self:info("Found window!")
			return win
		end
	end
end

function Class:handleEvents()
	for _,ea in self._events:sequence() do
		local x = ea:getX();
		local y = ea:getWindowHeight() - ea:getY();
		
		local etype = ea:getEventType();
		
		if etype == osgGA.GUIEventAdapter.PUSH then
			atb.TwMouseMotion( x, y );
			atb.TwMouseButton( atb.TW_MOUSE_PRESSED, self:getTwButton(ea:getButton()) );
		elseif etype == osgGA.GUIEventAdapter.RELEASE then
			atb.TwMouseMotion( x, y );
			atb.TwMouseButton( atb.TW_MOUSE_RELEASED, self:getTwButton(ea:getButton()) );
		elseif etype == osgGA.GUIEventAdapter.DRAG or etype == osgGA.GUIEventAdapter.MOVE then
			atb.TwMouseMotion( x, y );
		elseif etype == osgGA.GUIEventAdapter.KEYDOWN then
			--bool useCtrl = false;
			--if ( ea.getModKeyMask()&osgGA::GUIEventAdapter::MODKEY_CTRL ) useCtrl = true;
			atb.TwKeyPressed( self:getTwKey(ea:getKey()), self:getTwModKeyMask(ea:getModKeyMask()) );
		end	
	end
	
	self._events:clear()
end

local buttonMap = {}
buttonMap[osgGA.GUIEventAdapter.LEFT_MOUSE_BUTTON] = atb.TW_MOUSE_LEFT
buttonMap[osgGA.GUIEventAdapter.MIDDLE_MOUSE_BUTTON] = atb.TW_MOUSE_MIDDLE
buttonMap[osgGA.GUIEventAdapter.RIGHT_MOUSE_BUTTON] = atb.TW_MOUSE_RIGHT

function Class:getTwButton(button)
	return buttonMap[button] or 0
end

local keyMap = {}
keyMap[osgGA.GUIEventAdapter.KEY_BackSpace] = atb.TW_KEY_BACKSPACE;
keyMap[osgGA.GUIEventAdapter.KEY_Tab] = atb.TW_KEY_TAB;
keyMap[osgGA.GUIEventAdapter.KEY_Return] = atb.TW_KEY_RETURN;
keyMap[osgGA.GUIEventAdapter.KEY_Escape] = atb.TW_KEY_ESCAPE;
keyMap[osgGA.GUIEventAdapter.KEY_Left] = atb.TW_KEY_LEFT;
keyMap[osgGA.GUIEventAdapter.KEY_Right] = atb.TW_KEY_RIGHT;
keyMap[osgGA.GUIEventAdapter.KEY_Up] = atb.TW_KEY_UP;
keyMap[osgGA.GUIEventAdapter.KEY_Down] = atb.TW_KEY_DOWN;
keyMap[osgGA.GUIEventAdapter.KEY_Home] = atb.TW_KEY_HOME;
keyMap[osgGA.GUIEventAdapter.KEY_End] = atb.TW_KEY_END;
keyMap[osgGA.GUIEventAdapter.KEY_Insert] = atb.TW_KEY_INSERT;
keyMap[osgGA.GUIEventAdapter.KEY_Delete] = atb.TW_KEY_DELETE;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Up] = atb.TW_KEY_PAGE_UP;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Down] = atb.TW_KEY_PAGE_DOWN;
keyMap[osgGA.GUIEventAdapter.KEY_F1] = atb.TW_KEY_F1;
keyMap[osgGA.GUIEventAdapter.KEY_F2] = atb.TW_KEY_F2;
keyMap[osgGA.GUIEventAdapter.KEY_F3] = atb.TW_KEY_F3;
keyMap[osgGA.GUIEventAdapter.KEY_F4] = atb.TW_KEY_F4;
keyMap[osgGA.GUIEventAdapter.KEY_F5] = atb.TW_KEY_F5;
keyMap[osgGA.GUIEventAdapter.KEY_F6] = atb.TW_KEY_F6;
keyMap[osgGA.GUIEventAdapter.KEY_F7] = atb.TW_KEY_F7;
keyMap[osgGA.GUIEventAdapter.KEY_F8] = atb.TW_KEY_F8;
keyMap[osgGA.GUIEventAdapter.KEY_F9] = atb.TW_KEY_F9;
keyMap[osgGA.GUIEventAdapter.KEY_F10] = atb.TW_KEY_F10;
keyMap[osgGA.GUIEventAdapter.KEY_F11] = atb.TW_KEY_F11;
keyMap[osgGA.GUIEventAdapter.KEY_F12] = atb.TW_KEY_F12;

function Class:getTwKey(key)
	return keyMap[key] or key;
end

function Class:getTwModKeyMask(modkey)
	local twModkey = 0;
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_SHIFT)~=0 then
		twModkey = bitbor(twModkey,atb.TW_KMOD_SHIFT);
	end
	
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_ALT)~=0 then
		twModkey = bitbor(twModkey,atb.TW_KMOD_ALT);
	end

	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_CTRL)~=0 then
		twModkey = bitbor(twModkey,atb.TW_KMOD_CTRL);
	end

	return twModkey;
end

return Class
