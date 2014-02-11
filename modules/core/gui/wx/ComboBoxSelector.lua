local Class = createClass{name="ComboBoxSelector",bases="gui.Selector"};

--[[
Class: gui.wx.ComboBoxSelector

Class representing a gui selector built on top of a wx ComboBox control.
This class inherits from <gui.Selector>.
]]

--[=[
--[[
Constructor: ComboBoxSelector

Create a new instance of the class.

Parameters:
	options.ctrl - The wxComboBox control to use.
]]
function ComboBoxSelector(options)
]=]
function Class:initialize(options)
	self:check(options and options.ctrl,"Invalid combobox control in ComboBoxSelector construction.");
	self._ctrl = options.ctrl:aswxItemContainerImmutable():dynCast("wxItemContainer")
	self._win = options.ctrl
end

--[[
Function: getSelectedItemID

Re-implementation of <gui.Selector.getSelectedItemID>
]]
function Class:getSelectedItemID()
	return self._ctrl:GetStringSelection()
end

--[[
Function: setItemList

Re-implementation of <gui.Selector.setItemList>
]]
function Class:setItemList(items)
	self._ctrl:Clear()
	
	items = items or {}
	
	if #items > 0 then
		local arr = wx.wxArrayString();
		
		for _,id in ipairs(items) do
			arr:Add(id)
		end
		
		self._ctrl:Append(arr)
	end
end

--[[
Function: setSelectedItemID

Re-implementation of <gui.Selector.setItemList>
]]
function Class:setSelectedItemID(name)
	name = name or ""
    if self._ctrl:GetCount() ~= 0 then
        if name~="" then
            self._ctrl:SetStringSelection(name);
        else
            self._ctrl:SetSelection(0)
        end
    end
end

return Class
