local Class = require("classBuilder"){name="EventCallback",bases="base.Object"};


function Class:initialize(desc)
	self:check(desc,"Invalid callback description.")
	self:check(desc.event,"Invalid event name for callback description.")
	
	self:check(desc.func or desc.object,"Invalid event callback function or object.")
	
	if not desc.func then
		self:check(desc.object,"Invalid object in unnamed callback description.")
		desc.func = desc.object["on".. desc.event]
	end
	
	self:check(desc.func,"Invalid callback function for event with desc=",desc)
	
	if type(desc.func)=="string" then
		self:check(desc.object,"Invalid object in unnamed callback description.")
		desc.func = desc.object[desc.func]	
	end
	
	self._event = desc.event
	self._name = desc.name
	self._func = desc.func
	self._object = desc.object
	self._args = desc.args or {}
	self._oneShot = desc.oneShot
	self._isValid = true;
	
	if not self._name and self._object then
		self._name = self._object._CLASSNAME_
	end
	
	--if not self._name then
	--	self:warn("No name provided for registered event callback.")
	--	self:backtrace("warn");
	--end
	
	-- insert the object as first argument is available:
	if self._object then
		table.insert(self._args,1,self._object)
	end
end

function Class:setValid(valid)
	self._isValid = valid
end

function Class:isValid()
	return self._isValid
end

function Class:invalidate()
	self._isValid = false;
end

function Class:validate()
	self._isValid = true;
end

function Class:__call(handler,eventName,...)
	if self._isValid then
		profiler:start("EventCB - ".. eventName .. " - " .. (self._name or "[unnamed cb]"))
		local res;
		if #self._args > 0 then
			-- res = self._func(unpack(self._args),handler,eventName,...)		
			res = self._func(unpack(self._args),...)		
		else
			-- res = self._func(handler,eventName,...)		
			res = self._func(...)		
		end
		profiler:stop()
		return res;
	end
end

--function Class:__eq(rhs)
--	self:info("Checking EventCallback equality...")
--	return (self._object == rhs._object and self._func == rhs._func and self._event == rhs._event)
--end

function Class:isOneShot()
	return self._oneShot
end

function Class:getName()
	return self._name
end

return Class
