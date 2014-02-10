local Class = require("classBuilder"){name="BasicSerializer",bases="base.Object"};

require "osg"

function Class.createInstance(options)
	return osgDB.BaseSerializer(Class(options))
end

function Class:initialize(options)
	self:check(options,"Invalid options table when creating serializer.");
	self:check(options.name,"Invalid options.name in BasicSerializer.");
	
	self._name = options.name
end

function Class:read(wrapper, is, obj)
	self:no_impl()
	return true;
end

function Class:write(wrapper, out, obj)
	self:no_impl()
	return true;
end

function Class:getName()
	return self._name
end


return Class
