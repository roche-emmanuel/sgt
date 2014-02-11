local Class = require("classBuilder"){name="EntryInterface",
	bases={"gui.wx.ControlInterface","gui.ProviderHolder","gui.EntryHolder"}};

local im = require "gui.wx.ImageManager"
local utils = require "utils"
local wx = require "wx"
local winman = require "gui.wx.WindowManager"

--[[
Class: gui.wx.EntryInterface

Interface specialization supporting entry handling

This class inherits from <gui.wx.ControlInterface>, <gui.ProviderHolder> and <gui.EntryHolder>.
]]

--[=[
--[[
Constructor: EntryInterface

Create a new instance of the class.
]]
function EntryInterface(options)
]=]
function Class:initialize(options)
end

function Class:close()
	self:debug("Closing EntryInterface...")
	
	require("gui.wx.ControlInterface").close(self)
end

--[[
Function: addComboBoxSelector

Create a new comboBox control and specify it as a selector for the new default provider.

Parameters:
	options.caption - (optional) {string} The caption to display in front of the selector.
	options.choices - (optional) {table} The default options available in the combobox choices.
	options.tip - (optional) {string} The tip for the combobox.
	options.noProvider - (optional) {bool} If set to true the newly created provider will not be set as current 
default provider for this interface.
	options.actionHandler - (optional) {function} Function used to handle any action on the selector.
	options.actions - (optional) {table} List of actions to be assigned to this selector.
	options.cont - (optional) {table} data holder to use for the SelectorProvider container.
	options.contName - (optional) {string} The name of the data holder to use for the SelectorProvider 
container in case this is in a dynamic parent provider.
  
Returns:
	The wxComboBox control.
]]
function Class:addComboBoxSelector(options)
    options = options or {}
	-- self:check(options and (options.cont or options.contName),"A valid 'cont' or 'contname' entry is needed to build a ComboBox selector.");
      
    self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND}
    if options.caption then
        self:addStaticText{text=(options.caption=="") and "Show details for: " or options.caption}
    end
        
    local cb = self:addComboBox{prop=1, flags=wx.wxALL, choices=options.choices or {},tip=options.tip,size=options.cbsize}

 	options.selector = require "gui.wx.ComboBoxSelector" {ctrl=cb}
	
    local prov = self:createProvider(options)
    
    local selectHandler = function(self,event)
        -- if this provider has children then we should also update them ad this point:
        --prov:updateChildren()
        -- self:info("Updating entries...")
        self:updateEntries();
    end
    
    self:connectHandler(cb,wx.wxEVT_COMMAND_COMBOBOX_SELECTED,selectHandler)
    -- self:connectHandler(cb,wx.wxEVT_COMMAND_TEXT_UPDATED,selectHandler)
    
    if not options.noProvider then 
        self:setDefaultProvider(prov) -- use this combobox as the entries provider
    end
    
    local butHandler = function(intf,event,actionName)        
        -- prepare the data for the real event handler:
        local list = cb;
        
        local val = list:GetStringSelection()
        local selId = list:GetSelection()            
        
        local data = {
            id=selId, -- here we provide an additional id field to specify the item to be removed.
            value=val,
            provider=prov,
            item=prov:getCurrentItem(),
            action=actionName,
            intf=self
        }
        
        if options.actionHandler then
            options.actionHandler(data) 
        end       
    end
    
    -- the bitmap buttons for the available actions:
    if options.actionHandler then
        local actions = options.actions or {}
        for k,act in ipairs(actions) do
            local ctrl, istool = self:addBitmapButton{src=act.src or act.name,name=act.name,size=options.size,right=act.right,handler=butHandler,border=1,flags=wx.wxALIGN_CENTER_VERTICAL};
            if not istool then
                ctrl:SetName(act.name);
            end
        end
    end

    self:popSizer() 

    return cb;
end

function Class:addChoiceEntry(options)
    return self:addEntry(require"gui.wx.entries.ChoiceEntry",options);                   
end
    
function Class:addFileEntry(options)
    return self:addEntry(require"gui.wx.entries.FileEntry",options);       
end

function Class:addDirEntry(options)
    return self:addEntry(require"gui.wx.entries.DirEntry",options);  
end

function Class:addDummyEntry(options)
    return self:addEntry(require"gui.wx.entries.DummyEntry",options);        
end
 
function Class:addStringEntry(options)
    return self:addEntry(require"gui.wx.entries.StringEntry",options);        
end

function Class:addSingleChoiceEntry(options)
    return self:addEntry(require"gui.wx.entries.SingleChoiceEntry",options);        
end

function Class:addStateChoiceEntry(options)
    return self:addEntry(require"gui.wx.entries.StateChoiceEntry",options);        
end

function Class:addBoolEntry(options)
    return self:addEntry(require"gui.wx.entries.BoolEntry",options);        
end

function Class:addDoubleEntry(options)
    return self:addEntry(require"gui.wx.entries.NumericalEntry",options,{type="double"});        
end

function Class:addColorEntry(options)
    return self:addEntry(require"gui.wx.entries.NumericalEntry",options,{type="color"});        
end

function Class:addIntegerEntry(options)
    return self:addEntry(require"gui.wx.entries.NumericalEntry",options,{type="integer"});        
end

function Class:addVec3dEntry(options)
    return self:addEntry(require"gui.wx.entries.NumericalEntry",options,{type="vec3d"});        
end
 
function Class:addActionButtonEntry(options)
    return self:addEntry(require"gui.wx.entries.ActionButtonEntry",options);        
end
 
return Class
