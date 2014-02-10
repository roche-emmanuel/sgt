local Class = require("classBuilder"){name="SimpleSerializer",bases="serialization.BasicSerializer"};

function Class.createInstance(options)
	return osgDB.BaseSerializer(Class(options))
end

function Class:initialize(options)
	self:check(options and options.type,"Invalid SimpleSerializer type.");
	
	self._type = options.type
	self._useHex = options.useHex
	self._defValue = options.defValue 
		or (options.type=="Double" and 0.0)
		or (options.type=="String" and "")
		or (options.type=="Int" and 0)
		or (options.type=="Bool" and false) -- this should be the last one in this listing.
end

function Class:read(wrapper, is, obj)
	local instance = obj:getTable() --dynCast(self._className)
	self:check(instance,"Invalid instance for ",self._name);
	local value;
	
	if is:isBinary() then
		value = is["read".. self._type](is)
	elseif is:matchString(self._name) then
		if self._useHex then
			is:useHexMode()
		end
		value = is["read".. self._type](is)
		if self._useHex then
			is:useDecMode()
		end
	end
	
	if value ~= self._defValue then
		instance["set".. self._name](instance,value)
	end
	
	return true;
end

function Class:write(wrapper, out, obj)
	local instance = obj:getTable()
	self:check(instance,"Invalid instance for ",self._name);
	
	local value = instance["get".. self._name](instance);
	if value == nil then
		value = self._defValue
	end
	
	if out:isBinary() then
		out["write".. self._type](out,value);
	elseif value ~= self._defValue then
		out:writeProperty(self._name)
		if self._useHex then
			out:useHexMode()
		end
		out["write".. self._type](out,value)
		if self._useHex then
			out:useDecMode()
		end	
		out:endl();
	end
	return true;
end

return Class
