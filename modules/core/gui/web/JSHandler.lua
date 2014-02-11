local Class = require("classBuilder"){name="JSHander",bases="base.Object"};

local awe = require "Awesomium"

function Class:initialize(options)
	self:info("Creating new JSHandler object.")
	
	self._handler = awe.JSMethodHandler{
		OnMethodCall = function(tt, obj, caller, objectId, method_name, args)
			--self:info("Calling JS handler with self=",tostring(self),", handler=",tostring(self._handler))
			self(caller,objectId, method_name, args)
		end,
		
		OnMethodCallWithReturnValue = function(tt, obj, caller, objectId, method_name, args)
			return self(caller,objectId, method_name, args) or awe.JSValue.Null()
		end,
	}
end

function Class:__call(caller, objectId, methodName, argsArray)
	-- check if we have a method with the given name:
	if not self[methodName] then
		self:warn("No method named ",methodName, " in JSMethodHandler.");
		return awe.JSValue.Undefined()
	end

	-- create a table for the args:
	local args = argsArray:asTable()
	
	-- Try retrieving the global object:
	--self:info("Retrieving object with id=",objectId, ", view=",PTR(caller))
	local obj = self:getWebManager():getObject(caller,objectId)
	
	if obj then
		--self:info("Object with id=",objectId," was found!")
		self:check(obj[methodName],"Invalid methodName '",methodName,"' on global JS object ",tostring(obj))
		return obj[methodName](obj,unpack(args))
	elseif self[methodName] then
		-- call the internal method with those arguments:
		--self:info("Object with id=",objectId," was NOT found!")
		return self[methodName](self,objectId,unpack(args))		
	else
		self:error("Could not find method named '", methodName,"' for remote object with id=",objectId)
	end	
end

function Class:getHandler()
	return self._handler;
end

return Class
