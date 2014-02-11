local Class = createClass{name="BasicInterface", bases={"base.EventHandler","gui.wx.HandlerConnector"}};

local wx = require "wx"

local evtman = require "base.EventManager"
local winman = require "gui.wx.WindowManager"

local Vector = require "std.Vector"
local LicensedItem = require "gui.wx.LicensedItem"
local prof = require "debugging.Profiler"

--[[
Class: gui.wx.BasicInterface

Basic interface manipulation class..

This class inherits from <base.EventHandler> and <gui.wx.HandlerConnector>.
]]
-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:info("Executing initialize for BasicInterface...")
	
	self._sizerStack = Vector() -- stack of sizers.
	self._parentStack = Vector() -- stack of parent windows.
	self._licensedObjects = Vector() 
	self._root =  options.root
	self._isToolbar = false;
	self._handler = options.handler
	
	if self._root then
		local sizer = self._root:GetSizer()
		if not sizer then
			self:info("Auto creating sizer for interface root.")
			sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
			self._root:SetSizer(sizer)
		end
		self:pushParent(self._root,sizer)
	end
	
	self._closingCb = evtman:addListener{event="AppClosing",object=self}
	self._licenseCb = evtman:addListener{event="LicenseChanged",object=self}
end

--[[
Function: setHandler

Assign a new handler to this interface.
This method will also return the previous handler is any.

Parameters:
	hd - The new handler object
  
Returns:
	The previous handler object.
]]
function Class:setHandler(hd)
	local prev = self._handler
	self._handler = hd
	return prev
end

function Class:getHandler()
	return self._handler
end

function Class:uninitialize()
	evtman:removeListener(self._closingCb)
	evtman:removeListener(self._licenseCb)
end

function Class:onAppClosing()
	self:close();
end

function Class:close()
	self:debug("Closing BasicInterface...")
	self:fireEvent("InterfaceClosing")
	self:disconnectHandlers()
	
	self:uninitialize()
end

-- Called to update the interface when the current license is changed.
function Class:onLicenseChanged()     
    for _,obj in self._licensedObjects:sequence() do
		obj:checkVisibility()
    end
end

function Class:show(enabled)
    --if(enabled) then
    --    self:updateProviders()
    --    self:updateEntries()
    --end
    winman:togglePane(self,enabled)
end

function Class:getPaneInfo()
	self:no_impl()
end

-- Retrieve the root window for this interface.
function Class:getRootWindow()
	self:no_impl();
	return nil;
end

function Class:setIsToolbar(istb)
	self._isToolbar = istb
end

-- should return true if this interface is built as a toolbar
function Class:isToolbar() 
	return self._isToolbar;
end

function Class:addLicensedItem(item,right)
    if item and right then
       self._licensedObjects:push_back(LicensedItem{item=item,sizer=self:getCurrentSizer(),visible=true,right=right})
    end
end

function Class:addLicensedPage(page,right)
	self:no_impl()
end

function Class:layout()
	self:check(self._sizerStack,"Invalid sizer stack.")
    for _, sizer in self._sizerStack:sequence() do
        sizer:Layout()
    end
    --for _, parent in self._parentStack:sequence() do
    --    parent:Layout()
    --end
end

-- Retrieve the current sizer on the top of the stack.
function Class:getCurrentSizer()
    self:check(self._sizerStack,"Invalid sizer stack.")
    local sizer = self._sizerStack:back()
    --self:info("Current sizer ", sizer)
    return sizer
end
    
function Class:getCurrentParent()
    if self:isToolbar() then
        return self:getRootWindow()
    end
	
    self:check(self._parentStack,"Invalid parent stack.")
    return self._parentStack:back()    
end

function Class:popSizer()
    local sizer = self._sizerStack:pop_back()  
    --self:info("Poping sizer ", sizer)
    return sizer
end

function Class:popParent(andSizer)
	local sizer = andSizer and self:popSizer()
    return self._parentStack:pop_back(), sizer  
end

-- helper function to push a new sizer on the stack:
function Class:pushSizer(options)
    --has no effect with toolbars:
    if self:isToolbar() then
        return;
    end
    
    local sizer;
    local orient = options.orient
    local prop = options.prop or 0
    local flags = options.flags or wx.wxALL
    local border = options.border or 2
    if options.text then
        self:check(options.orient,"Invalid orientation")
        -- create a statictext box sizer:
        sizer = wx.wxStaticBoxSizer:new(orient,self:getCurrentParent(),options.text);
    elseif options.nrows and options.ncols then
        sizer = wx.wxFlexGridSizer:new(options.nrows, options.ncols, options.vgap or 0, options.hgap or 0)
        if options.growables then
            for k,v in ipairs(options.growables) do
                sizer:AddGrowableCol(v[1],v[2])
            end
        end
    else
        self:check(options.orient,"Invalid orientation")
        sizer = wx.wxBoxSizer:new(orient)
    end
    
    self:addLicensedItem(sizer,options.right) -- it's OK to consider the sizer as a regular control here.

    self:getCurrentSizer():Add(sizer,prop,flags,border);
    self:pushSizerObject(sizer)
end

function Class:pushSizerH(options)
	self:check(options and type(options[1])=="function","Invalid sizer function.")
	options.orient = wx.wxHORIZONTAL
	self:pushSizer(options)
	options[1]()
	self:popSizer()
end

function Class:pushSizerV(options)
	self:check(options and type(options[1])=="function","Invalid sizer function.")
	options.orient = wx.wxVERTICAL
	self:pushSizer(options)
	options[1]()
	self:popSizer()
end

function Class:pushSizerObject(sizer)
    self:check(self._sizerStack,"Invalid sizer stack.")
    self:check(sizer,"Invalid sizer object.")
    --self:info("Pushing sizer ", sizer)
    self._sizerStack:push_back(sizer)
end

function Class:pushParent(parent,sizer)
    self:check(self._parentStack,"Invalid parent stack.")
    self:check(parent,"Invalid parent object.")
    self._parentStack:push_back(parent)
    
    if sizer then
        self:pushSizerObject(sizer)
    end
end

function Class:addSpacer(options)
    -- Has no effect on toolbars:
    if self:isToolbar() then
        return;
    end
    
    self:check(options and (options.size or options.prop),"A valid 'size' or 'prop' entry is needed to build a spacer.")
    if options.prop then
        self:getCurrentSizer():AddStretchSpacer(options.prop)
    else
        self:getCurrentSizer():AddSpacer(options.size)
    end
end

return Class
