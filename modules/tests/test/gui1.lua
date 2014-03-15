#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

local App = require "gui.wx.SimpleApp"
local BasicInterface = require "gui.wx.BasicInterface"

local app = App()

local parent = app:getFrame()

local intf = BasicInterface{root=app:getFrame()}

local panel = wx.wxPanel(parent,wx.wxID_ANY);
local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

panel:SetSizer(sizer)
intf:pushParent(panel,sizer)

intf:popParent(true)

intf:addSpacer{size=30}

local panel = wx.wxPanel(parent,wx.wxID_ANY);
local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

panel:SetSizer(sizer)
intf:pushParent(panel,sizer)

intf:popParent(true)

parent:Layout()

app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
