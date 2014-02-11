local Class = createClass{name="Provider",bases="core.Object"};

local cfg = require "config"
local utils = require "utils"
local Set = require "std.Set"
local Container = require "gui.Container"

--[[
Class: gui.Provider

Basic implementation of gui provider concept.

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Provider

Create a new instance of the class.

Parameters:
	options.parent - (optional) Another <gui.Provider> object used as parent for this provider.
]]
function Provider(options)
]=]
function Class:initialize(options)
	self._container = Container();
	self._children = Set(); -- list of sub providers.
	self._parent = options.parent
	if self._parent then
		self._parent:addChild(self)
	end
end

function Class:getDataHolder()
	return self:getContainer():getDataHolder()
end

function Class:addChild(provider)
	self:check(provider,"Invalid provider object.")
	self._children:push_back(provider)
end

function Class:updateChildren()
    for _,child in self._children:sequence() do
        child:update();
    end
end

function Class:setInterface(intf)
	self._interface = intf;
end

function Class:getInterface()
	return self._interface;
end

function Class:setContainer(cont)
	self._container = cont
end

function Class:getContainer()
	return self._container;
end

function Class:getCurrentItem()
	-- return a dummy item as this may be used for some entries 
	-- to change the enable status (for instance ActionButton entries)            
    --return "dummy";
    return self:getContainer()
end

function Class:get(entry)
    local item = self:getCurrentItem()
    if not item then
        return nil;
    end
    
	local val = item:get(entry:getName())
	if val==nil then
		-- there is no value in the container yet, so we force calling the handler if
		-- applicable by having the entry itself set its value.
		val = entry:getDefaultValue()
		entry:setValue(val)
	end
	
	return val
end

function Class:set(entry,val)
    local item = self:getCurrentItem()
    if not item then
        return false;
    end
    
	return item:set(entry:getName(),val)
end

function Class:update(name)
 	-- doing nothing if there is no selector.
	-- just update the children:
	self:updateChildren()
end
        
return Class
