local Class = require("classBuilder"){name="CEFOverlay",bases={"mx.overlays.BasicOverlay","mx.overlays.OverlayListener","mx.menus.MenuListener"}};

local log = require "tracer"

--[[
Class: display.effects.CEFOverlay

MX Overlay implementation based on the CEF rendering system.
All the overlay content is rendered on a Web texture which is overlayed
on top of the imagery.

This class inherits from <display.Effect>.
]]

--[=[
--[[
Constructor: CEFOverlay

Create a new instance of the class.
]]
function CEFOverlay(options)
]=]
function Class:initialize(options)
	self:debug("Loading CEF Overlay!")

	-- when creating the overlay, we need to build a new CEFViewBase:

	-- Retrieve the appropriate dimensions for the rendering of this view:
	-- The dimensions can be retrieved from the parent OutputChannel.
	-- Note that the OutputChannel is actually the processor for this effect:
	local output = self:getProcessor()	
	local res = output:getResolution()
	local size = self.overlayResolutionSizeMap[res] or self.resolutionSizeMap[res]

	-- Now we prepare the TextureObject to hold the DirectX texture for this CEFView:
	self._view = require "cef.View" {size=size,url="W:/Cloud/Projects/mxjs/app/index.html"}

	-- Now we build the effect pipeline by just merging the Overlay on top of the background imagery:
	local fx = self:addFilter{"AddLayer"}

	-- tobj:setLinearFiltering()
	self._view:setPointFiltering()
	fx:setTextureObject(self._view,1)

	self._overlayReady = false;

	-- values that should be displayed per stream will be saved here:
	self._streamFields = {}
	self._streamHighlights = {}
	self._currentStreamName = nil -- start uninitialized.

	-- Add a listener on the output channel to always get the current stream in use:
	self:getTurret():addListener{Class.EVT_OUTPUT_SOURCE_UPDATED,function(output)
  	if output == self:getProcessor() then
	  	self:updateSourceStream()
	  end
  end}

	self._view:addListener('overlay_ready',function()
		-- core2.showMessageBox("Received ready message!","Debug");
		self._overlayReady = true		
		self:assignMenuMap()
		self:assignLayout()
		self:performFullRefresh()
	end)

	-- self._view:addListener('logInfo',function(msg)
	-- 	log:info("JavaScript",msg)
	-- end)
end

function Class:addListener(ename,func)
	self._view:addListener(ename,func)
end

function Class:postMessage(...)
	if not self._overlayReady then
		self:debug("Overlay not ready yet, discarding message :",...)
		return
	end

	self._view:postMessage(...)
end

function Class:postCommand(...)
	self:postMessage("mxcmd",...)
end

function Class:reload(nocache)
	self._view:reload(nocache)
end

function Class:update()
	-- self:debug("Performing CEF update...")
	self._view:collectMessages()
end

function Class:assignMenuMap()
	self:debug("Assigning menu map to CEFView...")
	
	-- Now fill the array:
	-- if we have a valid turret at this point, then we should retrieve the menu map from it:				
	local mm = self._turret:getMenuManager():getMainMenu()
	local map = mm:getChildrenMap()

	self:postCommand("setMenuMap",map)
end

local res_map = {
	[Class.RESOLUTION_1080P] = "HD",
	[Class.RESOLUTION_720P] = "HD",
	[Class.RESOLUTION_576I] = "SD",
	[Class.RESOLUTION_480I] = "SD",
	[Class.RESOLUTION_NTSC] = "NTSC",
	[Class.RESOLUTION_PAL] = "PAL",
}

function Class:assignLayout()
	-- Now fill the array:
	local otype = self:getOverlayType()
	local res = self:getProcessor():getResolution()
	local rname = res_map[res]
	self:check(rname,"Invalid resolution name for index: ",res)

	local flavor = self:getConfig():get("Overlay.flavor")

	self:debug("Setting layout to type=",otype,", res=",rname,", flavor=",flavor)
	self:postCommand("setLayout",otype,rname,flavor or "")
end

function Class:performFullRefresh() 
	

	-- update current stream:
	self:onCurrentStreamUpdated(self._currentStreamName or "EOW")
	
	local mm = self:getTurret():getMenuManager()
	local om = self:getTurret():getMainOverlayManager()
	
	-- update visibility:
	self:onMenuVisibilityUpdated(mm:isEnabled())
	self:onOverlayVisibilityUpdated(om:isEnabled())
	
	-- update menu selection:
	local sel = mm:getMenuSelection()
	self:onMenuSelectionUpdated(sel[1],sel[2],sel[3])
	
	-- update menu fields:
	local fields = mm:getMenuFieldValues()
	for mname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onMenuFieldUpdated(mname,iname,value)
		end
	end
	
	fields = om:getFields()
	for iname, value in pairs(fields) do
		self:onFieldUpdated(iname,value)
	end	

	fields = om:getHighlights()
	local flashes = om:getFlashes()
	for iname, value in pairs(fields) do
		self:onHighlightUpdated(iname,value,flashes[iname] or false)
	end	

	fields = om:getStreamFields()
	-- self:warn("Updating stream fields:",fields)
	
	for sname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onStreamFieldUpdated(sname,iname,value)
		end
	end
	
	fields = om:getStreamHighlights()
	for sname, items in pairs(fields) do
		for iname, value in pairs(items) do
			self:onStreamHighlightUpdated(sname,iname,value)
		end
	end
	
	self:onPOILocationUnitUpdated(mm:getPOILocationUnit())
	
	self:onNorthIndicatorUpdated(om:getNorthIndicatorAngle())
	self:onGimbalAzimuthUpdated(om:getGimbalAzimuthAngle())
	self:onGimbalElevationUpdated(om:getGimbalElevationAngle())
	self:onPictoFOVUpdated(om:getPictoFOVAngle())
	self:onDestabilizationStateUpdated(om:getDestabilizationEnabled())
	self:onTXEncryptionStateUpdated(om:getTXEncryptionEnabled())
	self:onMXPODBearingUpdated(om:getMXPODBearing())
	self:onMXPODAntennaModeUpdated(om:getMXPODAntennaMode())
	
	local gstatus = self:getOverlayGroupStatus()
	for gid,status in pairs(gstatus) do
		self:doSetOverlayGroupStatus(gid,status)
	end
	
	local rstatus = self:getReticleStatus()
	for rid,status in pairs(rstatus) do
		self:doSetReticleStatus(rid,status)
	end
	
	local rpos = self:getReticlePosition()
	for rid,pos in pairs(rpos) do
		self:doSetReticlePosition(rid,pos)
	end

	local rsize = self:getReticleSize()
	for rid,size in pairs(rsize) do
		self:doSetReticleSize(rid,size)
	end

	self:doSetAcquisitionWindowState(self:getAcquisitionWindowState())
	self:doSetAVTTargetState(self:getAVTTargetState())
	self:doSetGateState(self:getGateState())

	for i=1,4 do
		local visible, rect = self:getAVTAltTargetState(i)
		self:doSetAVTAltTargetState(visible,i,rect)
	end

	self:doSetOutlineState(self:getOutlineState())

	self:doSetOverlayColor(self:getOverlayColor())
end

function Class:onMenuVisibilityUpdated(visible)
	-- self:debug("Updating Menus visibility to: ",visible)
	if visible then
		self:postCommand("showPage","menu","done")
	end
end

function Class:onOverlayVisibilityUpdated(visible)
	-- self:debug("Updating Overlay visibility to: ",visible)
	if visible then
		self:postCommand("showPage","main_overlays")
	end
end

function Class:onMenuSelectionUpdated(menu_name,item_name,sub_index)
	--self:debug("Updating Menu selection to: ",menu_name,".",item_name," (sub=",sub_index,")")
	if self:getTurret():getMenuManager():isEnabled() then
		self:postCommand("showPage",menu_name,item_name,sub_index)
	end
end

function Class:onMenuFieldUpdated(menu_name,item_name,value)
	-- self:debug("Updating Menu field: ",menu_name,".",item_name," to ", value)
	-- value = value:gsub("°","X") --&deg;") :gsub("%s","&nbsp;")
	self:postCommand("setTextValue",menu_name ..".".. item_name,value)
end

function Class:onNorthIndicatorUpdated(value)
	if(self._prevNorth and math.abs(self._prevNorth - value) < 0.01) then return end

	self._prevNorth = value
	self:postCommand("setNorthIndicatorAngle",value)
end

function Class:onFieldUpdated(item_name, value)
	self:postCommand("setTextValue",item_name, value)
end

function Class:onHighlightUpdated(item_name, value, flashValue)
	-- flashValue = flashValue or false;
	self:check(flashValue~=nil,"Invalid flash value !")
	
	if type(flashValue)=="table" and type(value)=="table" then
		self:check(value[1]==flashValue[1] and value[2]==flashValue[2],"mismatch in highlight and flashing details.")
	end
	
	self:postCommand("setTextHighlight", item_name, value, flashValue and true or false)
end

function Class:onFlashingUpdated(item_name, value)
	self:postCommand("setTextFlashing", item_name, value)
end

function Class:onMXPODBearingUpdated(value)
	self:postCommand("setMXPODAzimuthAngle",value)
end

local antenna_fov = {
	[Class.MX_POD_ANTENNA_AUTO] = 0.0,
	[Class.MX_POD_ANTENNA_HIGH] = 60.0,
	[Class.MX_POD_ANTENNA_OMNI] = 0.0,
	[Class.MX_POD_ANTENNA_COUPLED] = 0.0,
}

function Class:onMXPODAntennaModeUpdated(value)
	self:postCommand("setMXPODFOVAngle",antenna_fov[value])
end

function Class:onGimbalAzimuthUpdated(value)
	if(self._prevAz and math.abs(self._prevAz - value) < 0.01) then return end
	self._prevAz = value
	self:postCommand("setGimbalAzimuthAngle",value)
end

function Class:onGimbalElevationUpdated(value)
	if(self._prevElev and math.abs(self._prevElev - value) < 0.01) then return end
	self._prevElev = value
	self:postCommand("setGimbalElevationAngle",-value)
end

function Class:onPictoFOVUpdated(value)
	self:postCommand("setPictoFOVAngle",value)
end

function Class:onDestabilizationStateUpdated(value)
	self:postCommand("enableWidget","destabilization",value)
end

function Class:onTXEncryptionStateUpdated(value)
	self:postCommand("enableWidget","transmitter_key",value)
end

function Class:doSetOverlayGroupStatus(gid,status)
	gid = gid:gsub("_group$","")
	self:debug("Setting group ",gid," to ",status)
	self:postCommand("showGroup",gid,status)
end

function Class:doSetReticleStatus(rid,enabled)
	-- self:warn("Calling do setReticleStatus with rid=",rid,", status=",enabled)
	self:postCommand("enableWidget",rid,enabled)
end

function Class:doSetReticlePosition(rid,pos)
	self:postCommand("setReticlePosition",rid,pos:x(),pos:y())
end

function Class:doSetReticleSize(rid,size)
	self:postCommand("setReticleSize",rid,size:x(),size:y())
end

function Class:updateSourceStream()
	local src = self:getProcessor():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname then
		self._currentStreamName = sname
		self:onCurrentStreamUpdated(sname)
	end 
end

function Class:onCurrentStreamUpdated(sname)
	-- When this method is called it means we should update all the stream dependent text slots:
	local list = self._streamFields[sname] or {}
	
	-- Note that instead of sending multiple commands, we can send a single command pack:
	local cmds = {}

	for fname,val in pairs(list) do
		table.insert(cmds,{"setTextValue", fname, val})
		-- self:onFieldUpdated(fname,val)
	end

	local list = self._streamHighlights[sname] or {}
	for fname,val in pairs(list) do
		table.insert(cmds,{"setTextHighlight", fname, val, false})
		-- self:onHighlightUpdated(fname,val,false)
	end

	-- now send the pack of commands:
	self:postMessage("mxcmdpack",cmds)
end

function Class:onStreamFieldUpdated(sname, item_name, value)
	local list = self._streamFields[sname]
	if not list then
		list = {}
		self._streamFields[sname] = list
	end

	-- Save the value for later use:
	list[item_name] = value;

	-- Update on the overlay if this is the current stream:
	if self._currentStreamName == sname then
		self:onFieldUpdated(item_name,value)
	end
end

function Class:onStreamHighlightUpdated(sname, item_name, value)
	local list = self._streamHighlights[sname]
	if not list then
		list = {}
		self._streamHighlights[sname] = list
	end

	-- Save the value for later use:
	list[item_name] = value;

	-- Update on the overlay if this is the current stream:
	if self._currentStreamName == sname then
		self:onHighlightUpdated(item_name,value,false)
	end
end

local unit_map = {
	[Class.ANGLE_DEGREES] = "DD",
	[Class.ANGLE_DMS] = "DMS",
	[Class.ANGLE_DMF] = "DMF",
	[Class.ANGLE_MGRS] = "MGRS",
}

function Class:onPOILocationUnitUpdated(unit)
	local val = unit_map[unit]
	self:check(val,"Invalid mapping for POI location unit: ",unit)
	-- TODO: implement support for this.
	self:warn("onPOILocationUnitUpdated not supported for now.")
	-- self:postCommand("setPOILocationMode",val)
end

function Class:doSetAcquisitionWindowState(visible, size)
	self:postCommand("setAcquisitionWindowState",visible,size:x(),size:y())
end

function Class:doSetAVTTargetState(visible,rect)
	self:postCommand("setAVTTargetState",visible,rect:x(),rect:y(),rect:z(),rect:w())
end

function Class:doSetAVTAltTargetState(visible,index,rect)
	self:postCommand("setAVTAltTargetState",index,visible,rect:x(),rect:y(),rect:z(),rect:w())
end

function Class:doSetGateState(visible, size)
	self:postCommand("setSensitivityGateState",visible,size:x(),size:y())
end

function Class:doSetOutlineState(enabled)
	--self:debug("Calling setOutlineState to ",enabled)
	--self:postCommand("setOutlineState",enabled)
end

function Class:doSetOverlayColor(cid)
	local col = self.overlayColorMap[cid]
	self:check(col,"Invalid color for index ", cid)
	local int = (self:getOverlayIntensity() or 100.0)/100.0

	self:postCommand("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
end

function Class:doSetOverlayIntensity(intensity)
	if self:useOverlayColor() then
		local cid = self:getOverlayColor() or Class.OVERLAY_COLOR_WHITE
		local col = self.overlayColorMap[cid]
		self:check(col,"Invalid color for index ", cid)
		local int = intensity

		self:postCommand("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
	else
		self:warn("old overlay intensity control not implemented")
	end
end

function Class:doSetOverlayReverseIntensity(intensity)
	self:warn("old overlay intensity control not implemented")
end

return Class
