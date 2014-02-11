local Class = require("classBuilder"){name="ItemContainer",bases="gui.Container"};

local base = require "utils.base"
local Vector = require "std.Vector"

--[[
Class: gui.ITemContainer

Specific container implementation describing multiple items in
a table. The items are stored under integer keys to maintain a
proper ordering.

This class inherits from <gui.Container>.
]]

--[=[
--[[
Constructor: ItemContainer

Create a new instance of the class.
]]
function ItemContainer(options)
]=]
function Class:initialize(options)
	self._idFunc = function(item)
		self:check(item,"Invalid item")
		self:check(item.name,"Invalid item name")
		return item.name
	end
	
	self._createFunc = function(id)
		self:check(item,"Invalid item")
		return {name=id}
	end
end

--[[
Function: setCreateFunction

Set the function to use to create a new item when necessary with a given item ID.

Parameters:
	func - The new create function to use.  
]]
function Class:setCreateFunction(func)
	self.assert.Function(func)
	self._createFunc = func
end

--[[
Function: setIDFunction

Set the function to use to retrieve an ID from a given item.
By default, the function used will simply retrieve the name of
the item from the "name" element of the item table.

Parameters:
	func - The funciton to use to retrieve the item ID. The function
prototype should be ID func(item);  
]]
function Class:setIDFunction(func)
	self.assert.Function(func)
	self._idFunc = func
end

--[[
Function: getNumItems

Retrieve the number of items stored in this container.
]]
function Class:getNumItems()
	-- retrieve the number of items in table:
	-- since this is an array indexed table, we can just return the array size:
	return #self:getTable()
end

--[[
Function: getItemID

Retrieve the id of a given item by name.

Parameters:
	index - The one based index of the item to consider.
  
Returns:
	The ID of the item at the given index. An error is triggered if the index is not appropriate.
]]
function Class:getItemID(index)
	self:check(index<=self:getNumItems(),"Out of range index: ", index)
	return self._idFunc(self:getTable()[index])
end

--[[
Function: getItemIDs

Retrieve all the IDs from all items in this container.
  
Returns:
	Return a lua table containing all the IDs for all the items
]]
function Class:getItemIDs()
	local res = {}
	
	local items = self:getTable()
	for _,item in ipairs(items) do
		table.insert(res,self._idFunc(item))
	end
	
	return res
end

--[[
Function: getItem

Retrieve an item by ID.

Parameters:
	id - The ID to use to find the desired item.
  
Returns:
	The desired item table or nil if not found.
]]
function Class:getItem(id)
	local items = self:getTable()
	for _,item in ipairs(items) do
		if self._idFunc(item)==id then
			return item
		end
	end
end

--[[
Function: getOrCreateItem

Get or create an item with a given ID.

Parameters:
	id - The id of the item.
  
Returns:
	The item corresponding to the requested ID.
]]
function Class:getOrCreateItem(id)
	local item = self:getItem(id)
	if not item then
		item = self._createFunc(id)
		table.insert(self:getTable(),item)
	end
		
	return item
end

return Class
