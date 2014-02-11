local Class = require("classBuilder"){name="BasicObject",bases="base.Object"};

function Class.createInstance()
	return osg.Object(Class())
end

function Class:initialize(options)	
	local Vector = require "std.Vector"
	self._associates = Vector()
end

function Class:addAssociate(className)
	className = className or (self:libraryName() .. "::" .. self:className())
	self._associates:push_back(className)
end

function Class:registerObjectWrapper()	
	local wrapper = require("serialization.BasicWrapper")()
	wrapper:create{proto=self.createInstance(),associates=self._associates:concat(" ")}
	
	self:buildObjectWrapper(wrapper)
	
	osgDB.Registry.instance():getObjectWrapperManager():addWrapper(wrapper:getWrapper())
	return wrapper
end

function Class:buildObjectWrapper(wrapper)
end

function Class:cloneType(obj)
	self:info("in cloneType")
	
	return self:getClassOf().createInstance()
end

function Class:clone(obj,copyop)
	self:info("in clone")
	return self:getClassOf().createInstance()
end

function Class:libraryName()
	self:info("in libraryName")
	return self._LIBRARYNAME_;
end

function Class:className()
	self:info("in className")
	return self._CLASSNAME_;
end

function Class:isSameKindAs(obj,rhs)
	self:info("in isSameKingAs")
	return self:isInstanceOf(self:getClassOf(),rhs:getTable())
end

return Class
