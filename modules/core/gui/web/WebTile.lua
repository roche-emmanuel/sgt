local Class = require("classBuilder"){name="WebTile",bases={"osg.BasicNode","gui.web.WebTexture"}};

local Event = require "base.Event"
local tools = require "osg.Tools"
local awe = require "Awesomium"

local buttonMap = {}
buttonMap[osgGA.GUIEventAdapter.LEFT_MOUSE_BUTTON] = awe.kMouseButton_Left
buttonMap[osgGA.GUIEventAdapter.MIDDLE_MOUSE_BUTTON] = awe.kMouseButton_Middle
buttonMap[osgGA.GUIEventAdapter.RIGHT_MOUSE_BUTTON] = awe.kMouseButton_Right

local scrollScale = 120.0;

local vScrollMap = {}
vScrollMap[osgGA.GUIEventAdapter.SCROLL_UP] = -scrollScale
vScrollMap[osgGA.GUIEventAdapter.SCROLL_DOWN] = scrollScale

local hScrollMap = {}
hScrollMap[osgGA.GUIEventAdapter.SCROLL_LEFT] = -scrollScale
hScrollMap[osgGA.GUIEventAdapter.SCROLL_RIGHT] = scrollScale

function Class:initialize(options)
	-- Also create the screen quad where to apply the image:
	self._quad = tools:createScreenQuad{texture=self:getOSGTexture(),invertY=true}
	
	-- Register the update callback for this WebTile:
	-- self:getEventManager():addListener{event=Event.FRAME,object=self}
	
	self:info("Done creating webtile.")
	
	self:buildEventHandler()
end

function Class:buildEventHandler()
	self._eventHandler = osgGA.GUIEventHandler{
		handle = function(tt,obj,ea,aa)
			local etype = ea:getEventType();
			local xratio = self:getWidth()/ea:getWindowWidth()
			local yratio = self:getHeight()/ea:getWindowHeight()
			
			local x = math.floor(ea:getX()*xratio + 0.5);
			local y = math.floor((ea:getWindowHeight() - ea:getY())*yratio + 0.5);
			
			self:focus();
			
			if etype == osgGA.GUIEventAdapter.MOVE or etype == osgGA.GUIEventAdapter.DRAG then
				self:injectMouseMove(x,y);
			elseif etype == osgGA.GUIEventAdapter.PUSH then
				self:injectMouseDown(buttonMap[ea:getButton()] or 0)
			elseif etype == osgGA.GUIEventAdapter.RELEASE then
				self:injectMouseUp(buttonMap[ea:getButton()] or 0)
			elseif etype == osgGA.GUIEventAdapter.SCROLL then
				local sm = ea:getScrollingMotion()
				self:injectMouseWheel(vScrollMap[sm] or 0,hScrollMap[sm] or 0)				
			elseif etype == osgGA.GUIEventAdapter.KEYDOWN or etype == osgGA.GUIEventAdapter.KEYUP then
				self:injectKeyboardEvent(self:createKeyEvent(ea));
			end
			
			return false;
		end
	};
end

function Class:release()
	self:info("Releasing WebTile...");
	self._eventHandler = nil;
end

function Class:buildInstance(obj)
	obj:setCullingActive(false);
end

function Class:getModifiers(modkey)
	local result = 0;
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_SHIFT)~=0 then
		result = bitbor(result,awe.kModShiftKey);
	end
	
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_ALT)~=0 then
		result = bitbor(result,awe.kModAltKey);
	end

	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_CTRL)~=0 then
		result = bitbor(result,awe.kModControlKey);
	end

	return result;
end

local keyMap = {}
keyMap[osgGA.GUIEventAdapter.KEY_Space] = awe.AK_SPACE;
keyMap[osgGA.GUIEventAdapter.KEY_BackSpace] = awe.AK_BACK;
keyMap[osgGA.GUIEventAdapter.KEY_Tab] = awe.AK_TAB;
keyMap[osgGA.GUIEventAdapter.KEY_Linefeed] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Clear] = awe.AK_CLEAR;
keyMap[osgGA.GUIEventAdapter.KEY_Return] = awe.AK_RETURN;
keyMap[osgGA.GUIEventAdapter.KEY_Pause] = awe.AK_PAUSE;
keyMap[osgGA.GUIEventAdapter.KEY_Scroll_Lock] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Sys_Req] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Escape] = awe.AK_ESCAPE;
keyMap[osgGA.GUIEventAdapter.KEY_Delete] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Home] = awe.AK_HOME;
keyMap[osgGA.GUIEventAdapter.KEY_Left] = awe.AK_LEFT;
keyMap[osgGA.GUIEventAdapter.KEY_Up] = awe.AK_UP;
keyMap[osgGA.GUIEventAdapter.KEY_Right] = awe.AK_RIGHT;
keyMap[osgGA.GUIEventAdapter.KEY_Down] = awe.AK_DOWN;
keyMap[osgGA.GUIEventAdapter.KEY_Prior] = awe.AK_PRIOR;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Up] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Next] = awe.AK_NEXT;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Down] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_End] = awe.AK_END;
keyMap[osgGA.GUIEventAdapter.KEY_Begin] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Select] = awe.AK_SELECT;
keyMap[osgGA.GUIEventAdapter.KEY_Print] = awe.AK_PRINT;
keyMap[osgGA.GUIEventAdapter.KEY_Execute] = awe.AK_EXECUTE;
keyMap[osgGA.GUIEventAdapter.KEY_Insert] = awe.AK_INSERT;
keyMap[osgGA.GUIEventAdapter.KEY_Undo] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Redo] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Menu] = awe.AK_MENU;
keyMap[osgGA.GUIEventAdapter.KEY_Find] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Cancel] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Help] = awe.AK_HELP;
keyMap[osgGA.GUIEventAdapter.KEY_Break] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Mode_switch] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Script_switch] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Num_Lock] = awe.AK_NUMLOCK;
	
function Class:getKeyCode(key)
	return keyMap[key] or key
end

local forcerCharMap = {}
forcerCharMap[osgGA.GUIEventAdapter.KEY_Space] = true

function Class:getKeyType(key)
	return keyMap[key] and not forcerCharMap[key] and awe.WebKeyboardEvent.kTypeKeyDown or awe.WebKeyboardEvent.kTypeChar
end

function Class:createKeyEvent(ea)
	local code = self:getKeyCode(ea:getKey())
	local event = awe.WebKeyboardEvent()
	--self:info("KeyType=", ea:getEventType()==osgGA.GUIEventAdapter.KEYDOWN and "DOWN" or "UP")
	
	local ktype = ea:getEventType()==osgGA.GUIEventAdapter.KEYDOWN and self:getKeyType(ea:getKey()) or awe.WebKeyboardEvent.kTypeKeyUp
	
	event:setType(ktype)
	event:setModifiers(self:getModifiers(ea:getModKeyMask()));
	
	event:setVirtualKeyCode(code);
	event:setNativeKeyCode(code);
	
	if ktype == awe.WebKeyboardEvent.kTypeChar then
		event:setText(code);
	end
	
	return event
end

function Class:getEventHandler()
	return self._eventHandler
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

-- definition of the needed methods to traverse this node a kind of group:
function Class:traverse(obj,nv)
	self._quad:accept(nv);
end

function Class:computeBound(obj)
	return self._quad:computeBound()
end

function Class:setThreadSafeRefUnref(obj,threadSafe)
    obj:base_setThreadSafeRefUnref(threadSafe);
	self._quad:setThreadSafeRefUnref(threadSafe);
end

function Class:resizeGLObjectBuffers(obj,maxSize)
    obj:base_resizeGLObjectBuffers(maxSize);
	self._quad:resizeGLObjectBuffers(maxSize);
end

function Class:releaseGLObjects(obj,state)
    obj:base_releaseGLObjects(state);
	self._quad:releaseGLObjects(state);
end

return Class
