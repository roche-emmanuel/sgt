local Class = createClass{name="Selector",bases="core.Object"};

--[[
Class: gui.Selector

Base class to use for implementation of gui selectors

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Selector

Create a new instance of the class.
]]
function Selector(options)
]=]
function Class:initialize(options)
	
end

--[[
Function: getSelectedItemID

Method used to retrieve the currently selected Item by ID.
  
Returns:
	The current item ID or empty string.
]]
function Class:getSelectedItemID()
	
end

--[[
Function: clear

Clear the content of the item list.
Will just call <setItemList> internally.
]]
function Class:clear()
	self:setItemList()
end

--[[
Function: setItemList

Assign the new list of items to the selector display.

Parameters:
	items - (optional) {table} the list of items to display. Empty table by default.
]]
function Class:setItemList(items)

end

--[[
Function: setSelectedItemID

Set the currently selected item by ID.

Parameters:
	name - The ID of the item to make current.
]]
function Class:setSelectedItemID(name)

end

return Class
