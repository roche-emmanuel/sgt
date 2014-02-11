local Class = require("classBuilder"){name="JoystickPanel",bases="gui.wx.InterfaceComponent"};

local Event = require "base.Event"

function Class:buildComponent(intf)

	self._panel = intf:pushPanel{flags=0,prop=0}
	intf:popParent(true)
	
	self:info("Building joystick panel.")
	
	-- load SDL:
	local sdl = require "SDL"
	
	self:debug("Initializing SDL for joystick support.")
	local res = sdl.SDL_Init(sdl.SDL_INIT_JOYSTICK)  --SDL_INIT_VIDEO | 
	self:check(res>=0,"Could not initialize SDL");
	
	local jnum = sdl.SDL_NumJoysticks()
	self:info("Found ",jnum," joystick(s).")
	
	local Joystick = require "gui.sdl.Joystick"
	
	local joysticks = {}
	self._joysticks = joysticks
	
	for i=0,jnum-1 do	
		local joy = Joystick(i)
		table.insert(joysticks,joy)
	end
	
	
	-- add a timer to update the joysticks state:
	local scheduler = require "gui.wx.Scheduler"
	scheduler:addTimer{frequency=30,callback=function(event) 
		for _,joy in ipairs(joysticks) do
			joy:update();
		end
	
	end}	
	
	-- add a close callback:
	self:getEventManager():addListener{Event.APP_CLOSING,function()
		for _,joy in ipairs(joysticks) do
			joy:close();
		end
		
		self:debug("Closing SDL.")
		sdl.SDL_Quit()
		
		self:debug("Done.")
	end}	
end

function Class:getNumJoysticks()
	return #self._joysticks
end

function Class:getJoystick(id)
	return self._joysticks[id]
end

return Class 
