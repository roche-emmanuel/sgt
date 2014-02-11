local Class = createClass{name="Entry",bases="core.Object"};

local utils = require "utils"
local Set = require "std.Set"

--[[
Class: wx.Entry

Simple representation of an interface Entry..

This class inherits from <core.Object>.
]]

--[=[
--[[
Constructor: Entry

Create a new instance of the class.
]]
function Entry(options)
]=]
function Class:initialize(options)
	self:check(options and options.intf,"A valid interface is needed to build an entry options=",options)
	self:check(options and options.name,"A valid name is needed to build an entry options=",options)
	self._intf = options.intf
	self._provider = options.provider
	self._children = Set()
	self._type = options.type
	self._name = options.name
	self._groupName = options.group
	self._tip = options.tip
	self._right = options.right
	self._caption = options.caption
	self._parent = options.parent
	self._value = options.value
	self._range = options.range
	self._defaultValue = options.defaultValue
	self._prop = options.prop or 0
	self._flags = options.flags or wx.wxALL
	self._border = options.border or 2
	self._style = options.style
	self._handler = options.handler
	self._actionHandler = options.actionHandler
	self._actions = options.actions
	self._numFormat = "%.6f"
	self._enabled = true
	self._validItemOnly = options.validItemOnly
	
	self.options = options
	self._controls = {}
	self._classes = {} -- classes for the controls.
	
	-- convert the handler to a function is required:
	if type(self._handler)=="string" then
		local obj = self._intf:getHandler()
		self:check(obj,"Invalid handler class for interface, cannot setup handler: ", self._handler)
		local func = obj[self._handler]
		self:check(func,"Invalid handler real handler function with name: ", self._handler)
		
		-- update the handler:
		self._handler = function(data) func(obj,data) end
	end
	
	if type(self._actionHandler)=="string" then
		local obj = self._intf:getHandler()
		self:check(obj,"Invalid handler class for interface, cannot setup handler: ", self._actionHandler)
		local func = obj[self._actionHandler]
		self:check(func,"Invalid handler real handler function with name: ", self._actionHandler)
		
		-- update the handler:
		self._actionHandler = function(data) func(obj,data) end
	end
	
	if self._parent then
		self._parent:addChild(self)
	end
end

function Class:getDefaultValue()
	return self._defaultValue
end

function Class:getGroupName()
	return self._groupName
end
  
function Class:getName()
	return self._name
end

function Class:setProvider(prov)
	self:check(prov,"Invalid provider")
	self._provider = prov
end
        
function Class:getProvider()
	return self._provider
end

function Class:addChild(child)
    self:check(child,"Invalid child entry")
    self._children:push_back(child)
end

function Class:updateValue()
    --self:info("Updating value for entry ",self:getName())
    if self._type == "void" or self._type == "dummy" then
        self._value = self._provider:getCurrentItem();
        return self._value;
    end
    
    self._value = self._provider:get(self) -- retrieve the current value for that entry.
	-- self:info("Updating entry ",self._name," value to: ",self._value)
	
    if self._states then
        -- if this entry is a state entry, then also update the currentState member:
        self._currentState = nil -- invalid the current state.
        for _,v in ipairs(self._states) do
            if v.id == self._value then
                self._currentState = v.value;
                break;
            end
        end
        if not self._currentState and self._value then
            self:error("Cannot find id ", self._value," in list")
        end
    end

    return self._value
end

function Class:getCurrentState()

end

function Class:getValue()
    return self:updateValue()
end      

function Class:handle(val)
    -- if there is an handler, then call it:
    if self._handler then
        local data = {
            value=val,
            item=self._provider:getCurrentItem(),
            name=self._name,
            entry=self,
            intf=self._provider:getInterface()}
		
		if self._validItemOnly and not data.item then
			return -- do not call the handler in that case.
		end
		
        self._handler(data)
    end        
end

function Class:updateChildrenDisplay()
    for _, child in self._children:sequence() do
        child:updateDisplay()
    end 
end

function Class:setValue(val)
    self._value = val;
    if val~=nil and self._provider:set(self,val) then
        -- self:info("Updating entry ",self._name," to value: ",val)
		self:handle(val);
        
        -- update the children if any:
		self:updateChildrenDisplay()               
    end
end

function Class:areChildrenEnabled() -- override this function for valid parent.
    return true;
end
   
function Class:isEnabled()
    if self._parent then
        -- Assume the parent is a valid entry;
        local ce = self._parent:areChildrenEnabled();
	    return (self._invertActivation and not ce) or ce
	end
    
    return self._enabled;
end
      
function Class:setEnabled(enabled)
    self._enabled = enabled;
end
	  
function Class:enable(enabled)
    self._enabled = enabled;
end

function Class:show(visible)
    for _, ctrl in ipairs(self._controls) do
        ctrl:Show(visible)
    end
end

function Class:updateDisplay()
    local val = self:updateValue()
    local activated = self:isEnabled()
 
    -- iterate on the entry controls, and update each of them:
    for _, ctrl in pairs(self._controls) do
        -- fix the TimeCtrl issue (cannot use Enable() on those objects);
        local className = self._classes[ctrl]
        local win = ctrl;
        className = className or ctrl:GetClassInfo():GetClassName()
        
        if val==nil then -- the value can still be "false"
            if className == "wxTreeCtrl" and self._type == "tree" then
                self._tree:setRoot{}
            end
            if (className=="wxAuiToolBarItem") then
                win:SetActive(false)
            else
                win:Enable(false)
            end
        else
            if (className=="wxAuiToolBarItem") then
                win:SetActive(false)
            else
                win:Enable(activated)
            end
            self:setControlValue(ctrl,self._classes[ctrl])
        end
    end
	
	-- update the display of the children too:
	self:updateChildrenDisplay()
end

function Class:setControlValue(ctrl,className)
    self:check(ctrl,"Invalid parameters in setEntryControlValue()");
    local type = self._type
    local val = self._value;
    local range = self._range;
    if type == "vec3d" then
        range = self._range[ctrl:GetId()+1]
    end
    
    local class = className or ctrl:GetClassInfo():GetClassName()
	-- self:info("Updating control of class: ",class)
	
    if class == "wxSlider" then
        if type == "color" then
            val = val:a() -- retrieve the alpha value of the color.
        end
        if type == "vec3d" then
            val = val[ctrl:GetId()]
        end
		--self:info("Setting slider value to: ",val, "with range=[",range[1],", ",range[2],"]")
		--self:warn(debug.traceback())
		--self:check(val >= range[1] and val <= range[2],"Out of range value")
		-- self:info("Setting slider value 2: ",val,", range=",range)
		if val < range[1] or val > range[2] then
			self:warn("Out of range value: ",val, "with range=[",range[1],", ",range[2],"]")
		end
		if range[1]==range[2] then
			val = 5000;
		else
			val = math.floor(0.5 + (val-range[1])/(range[2]-range[1])*10000)
		end
		-- self:info("Setting slider value: ",val)
		
        ctrl:SetValue(val);
    elseif class == "wxControl" or class == "wxPanel" then
        ctrl:Refresh()
    elseif class == "wxTextCtrl" then
        local unit = (self.unit or "")
        if type == "color" then
            ctrl:ChangeValue(string.format(self._numFormat,val:a()*100.0) .. unit);
        elseif type == "string" then
            ctrl:ChangeValue(val);
        elseif type == "vec3d" then
            ctrl:ChangeValue(string.format(self._numFormat,val[ctrl:GetId()]) .. unit);
        else
            -- self:info("Setting text value to ", val)
            ctrl:ChangeValue(string.format(self._numFormat,val) .. unit);
        end
    elseif class == "wxDatePickerCtrl" then
        if type == "datetime" then
            -- build a datetime object from the map details:
            local date = wx.wxDateTime();
            --wx.wxLogMessage(string.format("Setting date %d/%d/%d",val.year,val.month-1,val.day))
            date:SetToCurrent()
            date:SetYear(val.year);
            date:SetMonth(val.month-1); 
            date:SetDay(val.day);
            date:ResetTime()
            if not date:IsEqualTo(ctrl:GetValue()) then
                ctrl:SetValue(date)
            end
        end
    elseif class == "TimeCtrl" then
        if type == "datetime" then
            -- build a time string
            local time = string.format("%02d:%02d:%02d",val.hour,val.min,math.floor(val.sec))
            if platform~="win32" then ctrl:ChangeValue(time) else ctrl:SetValue(time) end
        end
    elseif class == "wxTreeCtrl" then
        if type == "tree" then
            self.tree:setRoot(val,project);
        end    
    elseif class == "wxSpinCtrl" then
        if type == "integer" then
            ctrl:SetValue(string.format("%.0f",val));
        end
    elseif class == "wxFilePickerCtrl" then
        if type == "string" then
            ctrl:SetPath(val);
        end
    elseif class == "wxFontPickerCtrl" then
        if type == "font" then
            ctrl:SetSelectedFont(general.tools.mapToFont(val));
        end
    elseif class == "wxComboBox" then
        if type == "string" then
            --wx.wxLogMessage("Should set the combo text: "..val)
            --ctrl:SetValue(val)
            if platform=="linux64" then ctrl:ChangeValue(val); else ctrl:SetValue(val) end;
            --wx.wxLogMessage("Text set.")
        elseif type == "nodepath" then
            -- display the scene in the combo box:
            --ctrl:SetValue(val.scene)
            if platform=="linux64" then ctrl:ChangeValue(val.scene) else ctrl:SetValue(val.scene) end;
        elseif type == "state" then
            local str = self:getStateCaption(val)

            -- display the scene in the combo box:
            --ctrl:SetValue(str)
            if platform=="linux64" then ctrl:ChangeValue(str) else ctrl:SetValue(str) end;
        end 
    elseif class == "wxChoicebook" then
        if type == "string" then
            -- retrieve the proper page in the choice book and select it:
            local count = ctrl:GetPageCount()
            for i=0,count-1 do
                if ctrl:GetPageText(i) == val then
                    ctrl:ChangeSelection(i)
                    return
                end
            end
            --wx.wxLogWarning("Could not find choicebook page named '"..val.."'");
            --wx.wxLogWarning(debug.traceback());
        end
    elseif class == "wxChoice" then
        if type == "string" then
            ctrl:SetStringSelection(val);
        end                  
    elseif class == "NodePathTreeCtrl" then
        if type == "nodepath" then
            -- retrieve the scene root object.
            -- select the object:
            --wx.wxLogMessage("Setting up Nodepath in nodepath control")
            
            if not val.nodepath:isValid() then
                wx.wxLogError("Invalid nodepath object in nodepath entry.");
                return;
            end
            --wx.wxLogMessage("Looking for scene ".. val.scene.." in project "..project:getName());
            local scene = project and project:getScene(val.scene)
            if not scene then
                --wx.wxLogMessage("Invalid scene in nodepath entry.");
                return
            end
            
            ctrl:setRoot(scene:getRoot(),project);
            if val.nodepath:getNumItems()~=0 then
                --wx.wxLogMessage("Assigning Nodepath in nodepath control")
                ctrl:setNodePath(val.nodepath:getNodePath())
            end
        end
    elseif class == "wxCheckListBox" then
        if type == "vector" then
            ctrl:Clear()
            self:refreshCheckList()
        end
    elseif class == "wxListBox" then
        if type == "vector" then
            ctrl:Clear()
            self:refreshList()
        end                
    elseif class == "wxListCtrl" then
        if type == "map" then
            self:refreshList()
        end
    elseif class == "wxDirPickerCtrl" then
        if type == "string" then
            ctrl:SetPath(val);
        end
    elseif class == "wxCheckBox" then
        if type == "bool" then
            ctrl:SetValue(val);
        end
    elseif class == "wxToggleButton" then
        if type == "bool" then
            ctrl:SetValue(val);
        end
	elseif class == "wxButton" then
        --wx.wxLogMessage("Updating button")
        if type == "statebutton" then
            --wx.wxLogMessage("Updated caption is:"..entry.states[entry.currentState+1].caption)
            ctrl:SetLabel(entry.states[entry.currentState+1].caption);
        end
    elseif class == "wxRadioBox" then
        --wx.wxLogMessage("Updating radiobox")
        if type == "stateradio" then
            ctrl:SetSelection(entry.currentState);
        end
    elseif class == "wxColourPickerCtrl" then
        --wx.wxLogMessage("Updating radiobox")
        if type == "color" then
            local col = wx.wxColour(math.floor(val:r()*255),math.floor(val:g()*255),math.floor(val:b()*255))
            ctrl:SetColour(col);
        end
    end
end

return Class
