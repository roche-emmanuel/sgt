#!/bin/sgt

log:notice "Executing init script..."

local App = require "gui.wx.SimpleApp"
local BasicInterface = require "gui.wx.BasicInterface"

local app = App()

local parent = app:getFrame()

local intf = BasicInterface{root=app:getFrame()}

local panel = wx.wxPanel:new(parent,wx.wxID_ANY);
local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

panel:SetSizer(sizer)
intf:pushParent(panel,sizer)

intf:popParent(true)

intf:addSpacer{size=30}

local panel = wx.wxPanel:new(parent,wx.wxID_ANY);
local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)

panel:SetSizer(sizer)
intf:pushParent(panel,sizer)

intf:popParent(true)

parent:Layout()

app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
