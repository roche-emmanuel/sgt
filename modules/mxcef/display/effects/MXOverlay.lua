local Class = require("classBuilder"){name="AweOverlay",bases={"mx.overlays.BasicOverlay","mx.overlays.OverlayListener","mx.menus.MenuListener"}};
local awe = require "Awesomium"

local Enums = require "mx.Enums"
local Event = require "base.Event"

local dman = require "aw.DXWebManager"

--[[
Class: display.effects.AweOverlay

Simple implementation of an Awesomium based overlay system.

This class inherits from <display.Effect>.
]]

--[=[
--[[
Constructor: AweOverlay

Create a new instance of the class.
]]
function AweOverlay(options)
]=]
function Class:initialize(options)
	-- self:warn("Loading AWE Overlay!")
	
	local fx = self:addFilter{"AddLayer"}
	
	-- get the render size from the output channel itself:
	local output = self:getProcessor()
	
	-- Add the overlay texture on slot 1:
	-- local size = self:getTurret():getRenderSize()
	
	local res = output:getResolution()
	local size = self.overlayResolutionSizeMap[res] or self.resolutionSizeMap[res]
	
	self:info("Creating webview of size ",size:x(),"x",size:y())
	local tobj = require "aw.MXWebView" {turret = self:getTurret(), width = size:x(), height = size:y(), transparent=true}
	self:info("Setting up texture Object")
	
	tobj:getTextureObject():setLinearFiltering()	
	--tobj:getTextureObject():setPointFiltering()	
	
	fx:setTextureObject(tobj,1)
	self:info("Webview created.")
		
	self._webView = tobj
	
	-- assign a callback for overlay ready state:
	self._webView:onOverlayReady(function()
		--self:updateOverlayContent(true) -- force complete update.
		--self:showMessage("Overlay ready!")
		self:assignMenuMap()
		self:assignLayout()
		self:performFullRefresh()
	end)
	
	self._prevNorth = 0
	self._prevAz = 0
	self._prevElev = 0	
	
	-- local TextureObject = require "dx.TextureObject"	
	-- fx:setTextureObject(TextureObject{file="test_logo"},1)
	local Turret = require "mx.Turret"
	
	self:getTurret():addListener{Turret.EVT_RELEASE,function()
		self:notice("Releasing WebView for discarded turret...")
		fx:setTextureObject(nil,1) 
		self._webView:releaseWebView()
		
	end}	
	
	-- self:getTurret():addListener{Turret.EVT_POST_UPDATE,function()
	-- 	self:update()
	-- end}	
	

	local eman = require "base.EventManager"
	eman:addListener{Event.APP_CLOSING,function()
		self._webView:releaseWebView()
	end,front=true}
	
end

function Class:update()
	if not self._webView:validate() then
		return
	end
	
	self:updateSourceStream()
	--self:updateOverlayContent()
end

function Class:assignMenuMap()
	-- Now fill the array:
	-- if we have a valid turret at this point, then we should retrieve the menu map from it:				
	local mm = self._turret:getMenuManager():getMainMenu()
	local map = mm:getChildrenMap()

	self._webView:call("setMenuMap",map)
end

res_map = {
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
	self._webView:call("setLayout",otype,rname,flavor or "")
end

function Class:getOutputChannel()
	return self._processor
end

function Class:reload()
	self:check(self._webView,"Invalid webView for reload.")
	self._webView:reload()
end

function Class:updateSourceStream()
	local src = self:getOutputChannel():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname then
		self._currentStreamName = sname
		self:onCurrentStreamUpdated(sname)
	end 
end

--[[
Function: updateOverlayContent

Thie method is called in the turret post update to.
retrieve all the updated overlay values from the turret
for this cycle.
]]
function Class:updateOverlayContent(all)
	local src = self:getOutputChannel():getSource()
	
	local sname = src:getName()	
	
	if self._currentStreamName~=sname or all then
		self._currentStreamName = sname
		self._webView:setFields{current_stream=sname}
	end 
	
	local changes = all and self:getTurret():getOverlayFields() or self:getTurret():getUpdatedOverlayFields()
	
	-- if sname=="VIC" then
		-- self:warn("Setting overlay updates:",changes:getTable())
	-- end
	
	--changes:set("overlay_source","EOW")
	self._webView:setFields(changes:getTable());
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
	-- self:info("Updating Menus visibility to: ",visible)
	if visible then
		-- if the menus are not visible then we should restore the main overlays page
		self._webView:call("showPage","menu","done")
	-- else
	-- 	self._webView:call("showPage","main_overlays")
	end
end

function Class:onMenuSelectionUpdated(menu_name,item_name,sub_index)
	--self:info("Updating Menu selection to: ",menu_name,".",item_name," (sub=",sub_index,")")
	if self:getTurret():getMenuManager():isEnabled() then
		self._webView:call("showPage",menu_name,item_name,sub_index)
	end
end

function Class:onMenuFieldUpdated(menu_name,item_name,value)
	-- self:info("Updating Menu field: ",menu_name,".",item_name," to ", value)
	-- value = value:gsub("°","X") --&deg;") :gsub("%s","&nbsp;")
	self._webView:call("setTextValue",menu_name ..".".. item_name,value)
end

local unit_map = {
	[Enums.ANGLE_DEGREES] = "DD",
	[Enums.ANGLE_DMS] = "DMS",
	[Enums.ANGLE_DMF] = "DMF",
	[Enums.ANGLE_MGRS] = "MGRS",
}

function Class:onCurrentStreamUpdated(sname)
	-- TO RESTORE self._webView:call("setCurrentStream",sname)
	dman:update()
end

function Class:onPOILocationUnitUpdated(unit)
	local val = unit_map[unit]
	self:check(val,"Invalid mapping for POI location unit: ",unit)
	-- TO RESTORE self._webView:call("setPOILocationMode",val)
	dman:update()
end

function Class:onOverlayVisibilityUpdated(visible)
	-- self:info("Updating Overlay visibility to: ",visible)
	if visible then
		self._webView:call("showPage","main_overlays")
	end
	dman:update()
end

function Class:onFieldUpdated(item_name, value)
	self._webView:call("setTextValue",item_name, value)
	dman:update()
end

function Class:onHighlightUpdated(item_name, value, flashValue)
	-- flashValue = flashValue or false;
	self:check(flashValue~=nil,"Invalid flash value !")
	
	if type(flashValue)=="table" and type(value)=="table" then
		self:check(value[1]==flashValue[1] and value[2]==flashValue[2],"mismatch in highlight and flashing details.")
	end
	
	self._webView:call("setTextHighlight", item_name, value, flashValue and true or false)
	dman:update()
end

function Class:onFlashingUpdated(item_name, value)
	self._webView:call("setTextFlashing", item_name, value)
	dman:update()
end

function Class:onStreamFieldUpdated(sname, item_name, value)
	-- TO RESTORE self._webView:call("setStreamField",sname,item_name, value)
	dman:update()
end

function Class:onStreamHighlightUpdated(sname, item_name, value)
	-- TO RESTORE self._webView:call("setStreamHighlight",sname,item_name, value)
	dman:update()
end


function Class:onNorthIndicatorUpdated(value)
	if(self._prevNorth and math.abs(self._prevNorth - value) < 0.01) then return end
	self._prevNorth = value
	self._webView:call("setNorthIndicatorAngle",value)
	dman:update()
end

function Class:onMXPODBearingUpdated(value)
	self._webView:call("setMXPODAzimuthAngle",value)
end

local antenna_fov = {
	[Class.MX_POD_ANTENNA_AUTO] = 0.0,
	[Class.MX_POD_ANTENNA_HIGH] = 60.0,
	[Class.MX_POD_ANTENNA_OMNI] = 0.0,
	[Class.MX_POD_ANTENNA_COUPLED] = 0.0,
}

function Class:onMXPODAntennaModeUpdated(value)
	self._webView:call("setMXPODFOVAngle",antenna_fov[value])
end

function Class:onGimbalAzimuthUpdated(value)
	if(self._prevAz and math.abs(self._prevAz - value) < 0.01) then return end
	self._prevAz = value
	self._webView:call("setGimbalAzimuthAngle",value)
	dman:update()
end

function Class:onGimbalElevationUpdated(value)
	if(self._prevElev and math.abs(self._prevElev - value) < 0.01) then return end
	self._prevElev = value
	self._webView:call("setGimbalElevationAngle",-value)
	dman:update()
end

function Class:onPictoFOVUpdated(value)
	self._webView:call("setPictoFOVAngle",value)
	dman:update()
end

function Class:onDestabilizationStateUpdated(value)
	self._webView:call("enableWidget","destabilization",value)
	dman:update()
end

function Class:onTXEncryptionStateUpdated(value)
	self._webView:call("enableWidget","transmitter_key",value)
	dman:update()
end

function Class:doSetOverlayGroupStatus(gid,status)
	gid = gid:gsub("_group$","")
	self:info("Setting group ",gid," to ",status)
	self._webView:call("showGroup",gid,status)
	dman:update()
end

function Class:doSetReticleStatus(rid,enabled)
	-- self:warn("Calling do setReticleStatus with rid=",rid,", status=",enabled)
	self._webView:call("enableWidget",rid,enabled)
	dman:update()
end

function Class:doSetReticlePosition(rid,pos)
	self._webView:call("setReticlePosition",rid,pos:x(),pos:y())
	dman:update()
end

function Class:doSetReticleSize(rid,size)
	self._webView:call("setReticleSize",rid,size:x(),size:y())
	dman:update()
end

function Class:doSetAcquisitionWindowState(visible, size)
	self._webView:call("setAcquisitionWindowState",visible,size:x(),size:y())
	dman:update()
end

function Class:doSetAVTTargetState(visible,rect)
	self._webView:call("setAVTTargetState",visible,rect:x(),rect:y(),rect:z(),rect:w())
	dman:update()
end

function Class:doSetAVTAltTargetState(visible,index,rect)
	self._webView:call("setAVTAltTargetState",index,visible,rect:x(),rect:y(),rect:z(),rect:w())
	dman:update()
end

function Class:doSetGateState(visible, size)
	self._webView:call("setSensitivityGateState",visible,size:x(),size:y())
	dman:update()
end

function Class:doSetOutlineState(enabled)
	--self:debug("Calling setOutlineState to ",enabled)
	--self._webView:call("setOutlineState",enabled)
	dman:update()
end

function Class:doSetOverlayColor(cid)
	local col = self.overlayColorMap[cid]
	self:check(col,"Invalid color for index ", cid)
	local int = (self:getOverlayIntensity() or 100.0)/100.0

	self._webView:call("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
end

function Class:doSetOverlayIntensity(intensity)
	if self:useOverlayColor() then
		local cid = self:getOverlayColor() or Enums.OVERLAY_COLOR_WHITE
		local col = self.overlayColorMap[cid]
		self:check(col,"Invalid color for index ", cid)
		local int = intensity

		self._webView:call("setOverlayColor",col:x()*int, col:y()*int, col:z()*int, 1.0)
	else
		self:warn("old overlay intensity control not implemented")
	end
end

function Class:doSetOverlayReverseIntensity(intensity)
	self:warn("old overlay intensity control not implemented")
end

return Class
