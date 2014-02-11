local Class = require("classBuilder"){name="RedBirdApp",bases="gui.wx.SimpleApp"};

local osg = require "osg"
local fs = require "base.FileSystem"

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("RedBird app is running.")
	
	local ip ="singularityworld.info.tm"
	-- local ip ="217.92.39.17"
	self:info("Using target IP: ", ip)
	
	-- self._socket = require("network.UDPSocket"){localPort=31001,port=31000,address="192.168.0.17"}
	self._socket = require("network.UDPSocket"){localPort=31001,port=31000,address=ip}
	
	self._startTick = osg.Timer.instance():tick()
	self._packetID = 0;
	self._absPacketID = 0;
	
	self._timer = osg.Timer.instance()
	self._durations = {}
	
	-- register a need timer event:
	self:getEventManager():addListener{event="Frame",object=self}
	
	self:loadDataDump(fs:getRootPath(true).."tests/data/emarss_data.log")
end

function Class:loadDataDump(file)
	self:info("Reading file ",file)
	local f = io.open(file,"r")
	local str = f:read("*a")
	f:close()
	
	-- Now parse each packet
	local number = "(%-?%d*%.?%d+)"
	local keys = {"SEQ","DELAY","ACFT_LAT","ACFT_LON","ACFT_ALT","ACFT_HDG","ACFT_PITCH","ACFT_ROLL","ACFT_TAS"}
	
	local pattern = ""
	
	for _,v in ipairs(keys) do
		pattern=pattern.. v .."="..number.."%s*%c*"
	end

	self._packets = {}
	
	for seq,delay,lat,lon,alt,yaw,pitch,roll,tas in str:gmatch(pattern) do
		local packet = {}
		packet.seq = seq
		packet.delay = delay
		packet.lat = lat
		packet.lon = lon
		packet.alt = alt
		packet.yaw = yaw
		packet.pitch = pitch
		packet.roll = roll
		packet.tas = tas
		
		--self:info("Found packet: ",packet)
		table.insert(self._packets,packet)
	end
	
	self:info("Done parsing ", #self._packets, " packets.")
end

function Class:buildInterface(intf, options)
	intf:addOutputPanel{}
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

local bc = require "byteconverter"

function Class:resetBuffer()
	self._buf = ""
end

function Class:append(str)
	self._buf = self._buf .. str
end

function Class:getBuffer()
	return self._buf;
end

function Class:writeMessage()
	self._lastTick = self._lastTick or self._timer:tick()
	
	self:resetBuffer()
	
	self._packetID = self._packetID+1
	self._absPacketID = self._absPacketID+1
	
	if self._packetID > #self._packets then
		self._packetID = 1
		self:info("Restarting sequence...")
		
		local elapsed = 0.0
		for _,v in ipairs(self._durations) do
			elapsed = elapsed + v
		end
		
		elapsed = elapsed/#self._durations
		
		-- compute variance:
		local sigma = 0.0
		for _,v in ipairs(self._durations) do
			sigma = sigma + (v-elapsed)*(v-elapsed)
		end
		
		sigma = sigma/#self._durations
		sigma = math.sqrt(sigma)
		self:info("Mean frequency: ",1.0/elapsed," Hz, variation: ",sigma," secs.")
		
		self._durations = {}
	end
	
	local packet = self._packets[self._packetID]
	
	-- official packet structure:
	local str = [[SEQ=%d
DELAY=40
ACFT_LAT=%f
ACFT_LON=%f
ACFT_ALT=%f
ACFT_HDG=%f
ACFT_PITCH=%f
ACFT_ROLL=%f
ACFT_TAS=90]]

	-- str = str:format(packet.seq,packet.lat,packet.lon,packet.alt,packet.yaw,packet.pitch,packet.roll);
	str = str:format(self._absPacketID,packet.lat,packet.lon,packet.alt,packet.yaw,packet.pitch,packet.roll);
	
	-- self:info("Sending packet:\n",str)
	self:append(str)
	
	local elapsed = self._timer:delta_s(self._lastTick,self._timer:tick())
	self._lastTick = self._timer:tick()
	table.insert(self._durations,elapsed)
end

function Class:onFrame()
	-- self:info("Executing frame event...")	
	self:writeMessage();
	self._socket:send(self:getBuffer())
end

return Class -- return class instance.
