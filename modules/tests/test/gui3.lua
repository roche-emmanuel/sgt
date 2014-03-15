#!/bin/sgt

require "luna"
 -- needed for the core module.
local log = require "logger"
log:notice "Executing init script..."

-- retrieve config:
local cfg = require "config"
local core = require "core"
local wx = require "wx"

core.LogManager.instance():setNotifyLevel(core.LogManager.DEBUG2)

function main()
	local App = require "gui.wx.SimpleApp"
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local app = App()

	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame()}

	local panel = intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	--intf:addStaticText{text="Hello manu!"}
	--intf:addStaticLine{}
	intf:addFileEntry{name="my_file", caption="My file"}
	intf:addDirEntry{name="my_dir", caption="My dir"}
	intf:addDummyEntry{name="my_dummy"}
	intf:addStringEntry{name="my_string",caption="My string"}
	intf:addBoolEntry{name="my_bool",caption="My bool"}
	intf:addDoubleEntry{name="my_double",caption="My double"}
	intf:addColorEntry{name="my_color",caption="My color"}
	intf:addIntegerEntry{name="my_int",caption="My integer"}
	intf:addVec3dEntry{name="my_data.my_vec3d",caption="My vec3d"}
	intf:addSingleChoiceEntry{name="mission",caption="Mission",
		choices={"TestTurret","TestTurret2","TestTurret3","TestTurret4"},
		defaultValue="TestTurret4"}
		
	--intf:addStaticBitmap{bitmap=im:getBitmap("folder@add")}
	intf:popParent(true)

	intf:addSpacer{size=30}

	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addSlider{}
	intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addButton{text="My button"}
	intf:popParent(true)

	parent:Layout()

	app:run()

	local data = intf:getDefaultProvider():getDataHolder()

	log:info("Interface data map=",data)
end


main()

log:notice "Cleaning up."

--wx.wxEntryCleanup()

collectgarbage("collect")
	
log:notice "Script execution done."
