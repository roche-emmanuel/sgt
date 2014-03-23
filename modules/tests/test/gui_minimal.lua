#!/bin/sgt

log:notice "Starting Minimal test."

-- local core = require "core"

local App = require "gui.wx.SimpleApp"
local BasicInterface = require "gui.wx.BasicInterface"

local app = App()

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "Minimal test done."
