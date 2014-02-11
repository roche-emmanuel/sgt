local Class = require("classBuilder"){name="Joystick",bases="core.Object"};

local sdl = require "SDL"

Class.RELEASED = 0
Class.PRESSED  = 1

function Class:initialize(options)
	self._index = type(options)=="number" and options or options.index or options[1]
	
	local jnum = sdl.SDL_NumJoysticks()
	self:check(self._index < jnum,"Invalid joystick index ",self._index," found only ",jnum," joysticks.")
	
	sdl.SDL_JoystickEventState(sdl.SDL_IGNORE)
	
	self._behaviors = require "std.Set" ()
	
	-- Open the joystick:
	self:open()
end

function Class:pushBehavior(bhvr)
	self._behaviors:push_back(bhvr)
end

function Class:popBehavior()
	self._behaviors:pop_back()
end

function Class:open()
	if not self._joy then
		self._name = sdl.SDL_JoystickName(self._index)
		self:debug("Opening joystick ",self._index," with name '",self._name,"'") 
		
		self._joy = sdl.SDL_JoystickOpen(self._index)
		
		self._nButtons = sdl.SDL_JoystickNumButtons(self._joy)
		self._nAxis = sdl.SDL_JoystickNumAxes(self._joy)
		self._nHats = sdl.SDL_JoystickNumHats(self._joy)
		self._nBalls = sdl.SDL_JoystickNumBalls(self._joy)

		self:debug("Joystick ",self._index," has ",self._nButtons," buttons, ",self._nAxis," axis, ",self._nHats," hats, ",self._nBalls," trackballs.")

		-- prepare the state of the joystick:
		self._buttons = {}
		self._axis = {}
		self._hats = {}
		self._balls_x = {}
		self._balls_y = {}
		
		for i=1,self._nButtons do
			self._buttons[i] = Class.RELEASED -- button is not pressed.
		end
		for i=1,self._nAxis do
			self._axis[i] = 0.0 -- origin position.
		end
		for i=1,self._nHats do
			self._hats[i] = sdl.SDL_HAT_CENTERED -- origin position.
		end
		for i=1,self._nBalls do
			self._balls_x[i] = 0 -- origin position.
			self._balls_y[i] = 0 -- origin position.
		end
	end
end

function Class:getButton(id)
	return self._buttons[id]
end

function Class:isButtonPressed(id)
	return self:getButton(id)==Class.PRESSED
end

function Class:getAxis(id)
	return self._axis[id]
end

function Class:getHat(id)
	return self._hats[id]
end

function Class:getBall(id)
	return self._balls_x[id], self._balls_y[id]
end

function Class:close()
	if self._joy then
		self:debug("Closing joystick ",self._index)
		sdl.SDL_JoystickClose(self._joy);
	end
	self._joy = nil
end

function clamp(val,mini,maxi)
	return (val < mini and mini) or (val > maxi and maxi) or val;
end

function Class:update()
	-- update the state of the joystick:
	self:check(self._joy,"Joystick is not opened.")
	
	-- self:info("Updating Joystick ",self._index)
	
	sdl.SDL_JoystickUpdate()
	
	local val 
	for i=1,self._nButtons do
		val = sdl.SDL_JoystickGetButton(self._joy, i-1)
		if val ~= self._buttons[i] then
			self._buttons[i] = val
			if val == 1 then
				self:onButtonPressed(i)
			else
				self:onButtonReleased(i)
			end
		end
	end
	
	for i=1,self._nAxis do
		val = clamp(sdl.SDL_JoystickGetAxis(self._joy, i-1)/32767.0,-1,1)
		
		if val ~= self._axis[i] then
			self._axis[i] = val
			self:onAxisMoved(i,val)
		end
	end

	for i=1,self._nHats do
		val = sdl.SDL_JoystickGetHat(self._joy, i-1)
		if val ~= self._hats[i] then
			self._hats[i] = val
			if val == sdl.SDL_HAT_CENTERED then
				self:onHatReleased(i)
			else
				self:onHatPressed(i,val)
			end
		end
	end
	
	local dx, dy;
	for i=1,self._nBalls do
		dx, dy = sdl.joystickGetBall(self._joy, i-1)
		if dx ~= self._balls_x[i] or dy ~= self._balls_y[i] then
			self._balls_x[i] = dx
			self._balls_y[i] = dy
			self:onBallMoved(i,dx,dy)
		end
	end
end

function Class:onButtonPressed(id)
	-- self:info("Button pressed: ",id)
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onButtonPressed(self,id)
	end
end

function Class:onButtonReleased(id)
	-- self:info("Button released: ",id)
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onButtonReleased(self,id)
	end
end

function Class:onAxisMoved(id,val)
	-- self:info("Axis ",id," moved to: ",val)
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onAxisMoved(self,id,val)
	end	
end

function Class:onHatReleased(id)
	-- self:info("Hat ",id," released.")
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onHatReleased(self,id)
	end	
end

function Class:onHatPressed(id,val)
	-- self:info("Hat ",id," in direction: ",val)
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onHatPressed(self,id,val)
	end	
end

function Class:onBallMoved(id,dx,dy)
	-- self:info("Ball ",id," moved with dx=",dx,", dy=",dy)
	local bhvr = self._behaviors:back()
	if bhvr then
		bhvr:onBallMoved(self,id,dx,dy)
	end	
end

return Class 
