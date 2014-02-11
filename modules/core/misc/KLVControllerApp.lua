local Class = require("classBuilder"){name="KLVControllerApp",bases="gui.wx.SimpleApp"};

local osg = require "osg"

Class.LAT_TAG = 67
Class.LON_TAG = 68
Class.ALT_TAG = 69

Class.YAW_TAG = 105
Class.PITCH_TAG = 106
Class.ROLL_TAG = 107

Class.TYPE_STRING 	= 0
Class.TYPE_UINT8 	= 1
Class.TYPE_INT8 	= 2
Class.TYPE_UINT16	= 3
Class.TYPE_INT16	= 4
Class.TYPE_UINT32	= 5
Class.TYPE_INT32	= 6
Class.TYPE_UINT64	= 7
Class.TYPE_INT64	= 8

local bc = require "byteconverter"

local writers = { 
	[Class.TYPE_UINT8] = {bc.uint8ToBytes, 1},
	[Class.TYPE_INT8] = {bc.int8ToBytes, 1},
	[Class.TYPE_UINT16] = {bc.uint16ToBytes, 2},
	[Class.TYPE_INT16] = {bc.int16ToBytes, 2},
	[Class.TYPE_UINT32] = {bc.uint32ToBytes, 4},
	[Class.TYPE_INT32] = {bc.int32ToBytes, 4},
	[Class.TYPE_UINT64] = {bc.uint64ToBytes, 8},
	[Class.TYPE_INT64] = {bc.int64ToBytes, 8},
}

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("KLVController app is running.")
	
	self._socket = require("network.UDPSocket"){localPort=50011,port=50010,address="192.168.0.17"}
	
	self._startTime = osg.Timer.instance():tick()
	self._packetID = 0;
	self._bigendian = true
	
	-- register a need timer event:
	self:getEventManager():addListener{event="Frame",object=self}
end

function Class:buildInterface(intf, options)
	intf:addOutputPanel{}
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:resetBuffer()
	self._buf = ""
end

function Class:append(str)
	self._buf = self._buf .. str
end

function Class:prepend(str)
	self._buf = str .. self._buf
end

function Class:getBuffer()
	return self._buf;
end

function Class:writeBERValue(ll)
	if ll <= 127 then
		return bc.uint8ToBytes(ll)
	elseif ll <= 255 then
		return bc.uint8ToBytes(bit.lshit(1,8)+1) .. bs.uint8ToBytes(ll)	
	else
		self:check(ll <=65535, "Invalid BER value: ", ll)
		-- use 2 bytes to write the BER value
		return bc.uint8ToBytes(bit.lshit(1,8)+2) .. bs.uint16ToBytes(ll)
	end
end

function Class:appendBER(ll)
	self:append(self:writeBERValue(ll))
end

function Class:prependBER(ll)
	self:prepend(self:writeBERValue(ll))
end

local ranges = { 
	[Class.TYPE_UINT8] = {0,math.pow(2,8)-1},
	[Class.TYPE_INT8] = {-math.pow(2,7),math.pow(2,7)-1},
	[Class.TYPE_UINT16] = {0,math.pow(2,16)-1},
	[Class.TYPE_INT16] = {-math.pow(2,15),math.pow(2,15)-1},
	[Class.TYPE_UINT32] = {0,math.pow(2,32)-1},
	[Class.TYPE_INT32] = {-math.pow(2,31),math.pow(2,31)-1},
}

function Class:writeTag(tag,type,val,minv,maxv)
	self:appendBER(tag)
	self:appendBER(writers[type][2])

	local writer = writers[type][1]
	
	if minv and maxv then
		local range = ranges[type]
		local coeff = (val - minv)/(maxv - minv)
		val = range[1] + coeff * (range[2] - range[1])
	end
	
	self:append(writer(val,self._bigendian))
end

function Class:writeLLA(lat,lon,alt)
	self:writeTag(Class.LAT_TAG,Class.TYPE_INT32,lat,-90,90)
	self:writeTag(Class.LON_TAG,Class.TYPE_INT32,lon,-180,180)
	self:writeTag(Class.ALT_TAG,Class.TYPE_UINT16,alt,-900.0,19000.0)
end

function Class:writeYPR(yaw,pitch,roll)
	self:writeTag(Class.YAW_TAG,Class.TYPE_UINT32,yaw,0.0,360)
	self:writeTag(Class.PITCH_TAG,Class.TYPE_INT32,pitch,-180,180)
	self:writeTag(Class.ROLL_TAG,Class.TYPE_INT32,roll,-180.0,180.0)
end

function Class:writeMessage()
	self:resetBuffer()
	
	local elapsed = osg.Timer.instance():delta_s(self._startTime,osg.Timer.instance():tick());
	local angle = 2.0*math.pi* elapsed/300.0
	
	-- self:info("Elapsed= ",elapsed, " angle=",angle)
	local dlat = 0.01 * math.sin(angle)
	local dlon = 0.01 * math.cos(angle)
	
	local roll = 20.0 * math.cos(2.0*math.pi*elapsed/10)
	local pitch = 20.0 * math.sin(2.0*math.pi*elapsed/20)
	local yaw = 0.0
	
	if true then
		-- simple test packet structure:
		-- KLV format:
		-- 1. The pack should contain the universal key written on 16 bytes:
		
		
		-- Start by writting the tag 2 value:
		self:appendBER(2)
		self:appendBER(8)
		
		--self:append(bc.int64ToBytes(osg.Timer.instance():tick(),self._bigendian))
		-- self:append(bc.int64ToBytes(self._startTime,self._bigendian))
		self:append(bc.int32ToBytes(0,self._bigendian))
		self:append(bc.int32ToBytes(0,self._bigendian))

		-- we should write the data here:
		-- self:writeLLA(39.582354 + dlat,-40.135323 + dlon,200)
		-- self:writeYPR(yaw,pitch,roll)
				
		-- now write the checksum tag:
		self:appendBER(1)
		self:appendBER(2)
		-- Will append the checksum value once the complete message is ready to compute it.
		
		
		-- We add the message header here:
		local key = '1234567890123456'
		-- local key = ""
		-- for i=1,16 do
		-- 	key = key .. string.char(0)
		-- end

		local len = #self._buf + 16 + 2
		if len <= 126 then 
			-- the length will be encoded on one byte.
			len = len + 1
		elseif len <= 253 then
			len = len + 2
		else
			self:check(len <= 65532, "Invalid message length: ",len)
			len = len +3
		end
		
		-- Now prepend the length:
		self:prependBER(len)
		self:prepend(key)
		
		-- Now we can compute the checksum for that data:
		local data = self._buf
		local res = 0
		-- self:info("Computing checksum on ",#data, " bytes")

		for i=1, #data do
			res = res + bit.lshift(string.byte(data:sub(i,i)),8*(i%2))
		end
		
		-- now keep only the 16 bits on the right side:
		mask = 0
		for i=0,15 do
			mask = mask+bit.lshift(1,i)
		end
		
		res = bit.band(res,mask)
		
		-- now write the checksum we found:
		self:info("Computed checksum: ",res)
		self:append(bc.uint16ToBytes(res,self._bigendian))
		self:info("Hex message: ",self:toHexString(self._buf))
		self:info("Byte message: ",self:toByteString(self._buf))
	end
end

function Class:onFrame()
	-- self:info("Executing frame event...")	
	self:writeMessage();
	-- self:info("Sending packet of size: ", #self:getBuffer())
	
	self._socket:send(self:getBuffer())
end

function Class:toHexString(msg)
	local hex = {}
	for i=1,#msg do
		table.insert(hex,bit.tohex(string.byte(msg:sub(i,i)), -2))
	end
	
	return table.concat(hex)
end

function Class:toByteString(msg)   	
	local str = {};
	for i=1,msg:len() do
       	table.insert(str,string.byte(msg:sub(i,i)))
	end
	return "| " .. table.concat(str," | ") .. " |";
end

return Class -- return class instance.
