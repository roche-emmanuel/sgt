local Class = require("classBuilder"){name="BasicWrapper",bases="base.Object"};

require "osg"

local SimpleSerializer = require "serialization.SimpleSerializer"

function Class.createInstance(options)

end

function Class:create(options)	
	--self:info("Creating BasicWrapper for ", options.class)
	local proto = options.proto or require(options.class).createInstance();
	local name = options.name or proto:libraryName().."::"..proto:className()
	local associates = "osg::Object " .. options.associates .. " " .. name	
	self._wrapper = osgDB.ObjectWrapper(proto,name,associates)
end

function Class:getWrapper()
	return self._wrapper;
end

function Class:addDouble(name,defValue)
	local ss = SimpleSerializer.createInstance{type="Double",name=name,defValue=defValue}	
	self._wrapper:addSerializer(ss)
end

function Class:addBool(name,defValue)
	local ss = SimpleSerializer.createInstance{type="Bool",name=name,defValue=defValue}	
	self._wrapper:addSerializer(ss)
end

return Class
