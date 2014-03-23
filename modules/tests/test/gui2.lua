#!/bin/sgt

local log = require "logger"
log:notice "Executing init script..."

local App = require "gui.wx.SimpleApp"
local Interface = require "gui.wx.ControlInterface"
local im = require "gui.wx.ImageManager"

local app = App()

local parent = app:getFrame()

local intf = Interface{root=app:getFrame()}

intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}

intf:addStaticText{text="Hello manu!"}
intf:addStaticLine{}
intf:addStaticBitmap{bitmap=im:getBitmap("folder@add")}
intf:addDatePickerCtrl{handler=intf.debugShowEvent}
intf:addTimePickerCtrl{handler=intf.debugShowEvent,flags=wx.wxALL}
intf:addFontPickerCtrl{handler=intf.debugShowEvent}
intf:addOSGCtrl{}
intf:addSTCCtrl{flags=wx.wxALL+wx.wxEXPAND,prop=1}


intf:popParent(true)

intf:addSpacer{size=30}

intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
intf:addSlider{}
intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND}
intf:addButton{text="My button",handler=intf.debugShowEvent}
intf:addBitmapButton{src="add",handler=intf.debugShowEvent}

intf:popParent(true)

parent:Layout()

app:run()

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Script execution done."
