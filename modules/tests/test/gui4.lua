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

local onMissionChanged = function(data)
	log:info("Mission was changed.")
end

function main()
	local App = require "gui.wx.SimpleApp"
	local Interface = require "gui.wx.EntryInterface"
	local im = require "gui.wx.ImageManager"

	local app = App()

	local parent = app:getFrame()

	local intf = Interface{root=app:getFrame()}

	local panel = intf:pushPanel{prop=1,flags=wx.wxEXPAND}
	
	intf:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND}
		intf:pushBookPage{caption="Mission"}
			intf:pushChoicebook{prop=1,flags=wx.wxALL+wx.wxEXPAND,
								name="mission_type",
								defaultValue="TestTurret4",
								handler=onMissionChanged}
								
			intf:pushBookPage{caption="TestTurret"}
				intf:addStaticText{text="This type of mission has no parameter."}
			intf:popParent(true)
			
			intf:pushBookPage{caption="TestTurret2"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)
			
			intf:pushBookPage{caption="TestTurret3"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)

			intf:pushBookPage{caption="TestTurret4"}
				intf:addStaticText{text="This type of mission has no parameter."}			
			intf:popParent(true)
			
			intf:pushBookPage{caption="SingleTurret"}
				intf:addSingleChoiceEntry{name="t0_turret_model",caption="Turret model",
					choices={"basic_turret"},
					defaultValue="basic_turret",
					handler=function(data)
						log:info("Updating turret model to: ",data.value)
					end}
				intf:addSingleChoiceEntry{name="t0_platform_model",caption="Platform model",
					choices={"basic_platform"},
					defaultValue="basic_platform",
					handler=function(data)
						log:info("Updating platform model to: ",data.value)
					end}
				intf:addSingleChoiceEntry{name="t0_output_model",caption="Output model",
					choices={"debug_sources","debug_streams","debug_outputs"},
					defaultValue="debug_outputs",
					handler=function(data)
						log:info("Updating output model to: ",data.value)
					end}
				intf:addSingleChoiceEntry{name="t0_network_model",caption="Network model",
					choices={"no_network"},
					defaultValue="no_network",
					handler=function(data)
						log:info("Updating network model to: ",data.value)
					end}
			intf:popParent(true)
			
			intf:popParent() -- choicebook.
		intf:popParent(true) -- mission page
		
		intf:pushBookPage{caption="Controls"}
		intf:popParent(true) -- controls page
		
		intf:pushBookPage{caption="Turrets"}
		intf:popParent(true) -- turrets page

		intf:pushBookPage{caption="Outputs"}
		intf:popParent(true) -- outputs page
		
		intf:pushBookPage{caption="Network"}
		intf:popParent(true) -- Network page
	intf:popParent()
	intf:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALIGN_RIGHT}
		intf:addBitmapButton{src="check",tip="Perform mission level unit tests",
							 -- flags=wx.wxALIGN_RIGHT,
							 -- handler="performMissionUnitTests"
							 }
		intf:addBitmapButton{src="check@earth",tip="Perform global level unit tests",
							 -- flags=wx.wxALIGN_RIGHT,
							 -- handler="performGlobalUnitTests"
							 }
	intf:popSizer()
	
	intf:addOutputPanel{}
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
