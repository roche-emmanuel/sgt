local Class = require("classBuilder"){name="JoystickBehavior",bases="core.Object"};

Class.BUTTON_PRESSED 	= 1
Class.BUTTON_RELEASED 	= 2
Class.HAT_PRESSED 		= 3
Class.HAT_RELEASED 		= 4
Class.AXIS_MOVED 		= 5
Class.BALL_MOVED		= 6


function Class:initialize(options)
	self._actions = {}
end

function Class:addAction(options)
	local atype = options.type or options[1]
	local target = options.target or options[2]
	local modifier = options.modifier or function() return true end
	local action = options.action
	local dir = options.dir
	
	-- Prepare the action list:
	self._actions[atype] = self._actions[atype] or {}
	local alist = self._actions[atype]
	
	-- Prepare the target list:
	alist[target] = alist[target] or {}
	local tlist = alist[target]
	
	-- now register an action on this target list:
	local handler = action;

	if atype == Class.HAT_PRESSED then
		-- this is an Hat press action, so we need to check the hat direction value
		handler = function(joy,hdir,id)
			if (not dir or hdir==dir) then
				return action(joy,hdir,id)
			end
		end
	end

	table.insert(tlist,function(joy,...) 
		if modifier(joy) then
			return handler(joy,...)
		end
	end)
end

function Class:getActions(cat,id)
	local list = self._actions[cat]
	if not list then return end
	
	local tlist = list[id]
	return tlist
end

function Class:onButtonPressed(joy,id)
	local list = self:getActions(Class.BUTTON_PRESSED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,id) then
			break
		end
	end
end

function Class:onButtonReleased(joy,id)
	local list = self:getActions(Class.BUTTON_RELEASED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,id) then
			break
		end
	end
end

function Class:onHatPressed(joy,id,dir)
	local list = self:getActions(Class.HAT_PRESSED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,dir,id) then
			break;
		end
	end
end

function Class:onHatReleased(joy,id)
	local list = self:getActions(Class.HAT_RELEASED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,id) then
			break;
		end
	end
end

function Class:onAxisMoved(joy,id,pos)
	local list = self:getActions(Class.AXIS_MOVED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,pos,id) then
			break;
		end
	end
end

function Class:onBallMoved(joy,id,dx,dy)
	local list = self:getActions(Class.BALL_MOVED,id)
	if not list then return end
	
	for _,action in ipairs(list) do
		if action(joy,dx,dy,id) then
			break;
		end
	end
end

return Class 
