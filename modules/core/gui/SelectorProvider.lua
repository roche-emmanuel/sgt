local Class = createClass{name="SelectorProvider",bases="gui.Provider"};

local ItemContainer = require "gui.ItemContainer"
local ItemNameContainer = require "gui.ItemNameContainer"

--[[
Class: gui.SelectorProvider

Simple provider based on a selector to retrieve the current item.

This class inherits from <gui.Provider>.
]]

--[=[
--[[
Constructor: SelectorProvider

Create a new instance of the class.

Parameters:
	options.selector - The <gui.Selector> object to use inthis provider.
	options.autoCreate - (optional) automatically create an item referenced by ID if missing. Default is false.
	options.contName - (optional) The name of the container table in the parent provider container.
	options.cont - (optional) The container table to use directly.
	
If a contName entry is provided, then it ise used to create a <gui.ItemNameContainer>. Otherwise a <gui.ItemContainer> is
created either on the options.cnt table if provided or on an emtpy table otherwise.
]]
function SelectorProvider(options)
]=]
function Class:initialize(options)
	self:check(options and options.selector,"Invalid selector object")
	self._selector = options.selector
	self._autoCreate = options.autoCreate
	self._container = (options.contName and ItemNameContainer{dataName=options.contName})
		or (options.cont and ItemContainer{data=options.cont})
		or ItemContainer()
end

--[[
Function: getCurrentItem

Re-implementation of <gui.Provider.getCurrentItem>.
This method will use the selector to retrieve the current item by ID.
  
Returns:
	The ID of the item currently selected.
]]
function Class:getCurrentItem()
    -- Retrieve the item ID from the selector:
    local itemId = self._selector:getSelectedItemID();
    
	-- Retrieve the item table from the container:
    local cont = self:getContainer()
    local item = self._autoCreate and cont:getOrCreateItem(itemId) or cont:getItem(itemId)    
        
	if not item then
		-- return nothing in case there is no current item.
		return
	end
	
    return ItemContainer{data=item}
end

--[[
Function: update

Update the content of the display.

Parameters:
	name - (optional) THe ID of the item to select. If missing, the system
will try to retrieve the previous item ID if available.
]]
function Class:update(name)  
    local cont = self:getContainer()
    
    -- try to keep the previous selection:
    name = name or self._selector:getSelectedItemID()
    self._selector:clear()

    local ids = cont:getItemIDs()
	self._selector:setItemList(ids)
	
    self._selector:setSelectedItemID(name)
end
        
return Class
