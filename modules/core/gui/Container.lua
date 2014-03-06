local Class = createClass{name="Container",bases="utils.DataMap"};

--[[
Class: gui.Container

Basic container for provider usage.

This class inherits from <utils.DataMap>.
]]

--[=[
--[[
Constructor: Container

Create a new instance of the class.
By default a container will create its own table as data Holder 
if not provided another value in its constructor
]]
function Container(options)
]=]
function Class:initialize(options)
	
end

--[[
Function: setDataHolder

This method is a facade for the <utils.DataMap.setTable> method.
]]
function Class:setDataHolder(holder)
	self:setTable(holder)
end

--[[
Function: getDataHolder

This method is a facade for the <utils.DataMap.getTable> method.
]]
function Class:getDataHolder()
	return self:getTable();
end

return Class
