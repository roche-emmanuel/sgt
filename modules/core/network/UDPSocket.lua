local Class = require("classBuilder"){name="UDPSocket",bases="base.Object"};

local socket = require "socket"

function Class:initialize(options)
	self:check(options,"Invalid options table")
	self:check(options.localPort,"Invalid localPort")
	--self:check(options.port,"Invalid remote port")
	--self:check(options.address,"Invalid remote address")
	
	-- create the socket object here:
	local res, msg = socket.udp()
	self:check(res,msg)
	self._socket = res
	
	-- Assign sockname:
	local localport = tonumber(options.localPort)
	self:check(localport,"Invalid localport value")
	local res, msg = self._socket:setsockname("*",localport)
	self:check(res==1,msg)
	
	-- Assign timeout:
	local timeout = options.timeout or 0
	self._socket:settimeout(timeout)

	-- connect to peer if address and port are provided:
	self._address = options.address
	self._port = options.port
	
	if options.address and options.port then
		local res, msg = self._socket:setpeername(options.address,options.port)
		self:check(res==1,msg)
		self._connected = true;
	end
end

function Class:setDestination(address,port)
	self._address = address
	self._port = tonumber(port)
end

function Class:receive()
	return self._socket:receive()
end

function Class:send(data)
	if self._connected then
		local res, msg = self._socket:send(data)
		self:check(res == #data,msg)
	else
		self:check(self._address,"Invalid address")
		self:check(self._port,"Invalid port")
	  	local res, msg = self._socket:sendto(data,self._address,self._port)
	  	self:check(res==1,msg)
	end
end

return Class
