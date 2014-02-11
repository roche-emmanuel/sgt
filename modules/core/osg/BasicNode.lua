local Class = require("classBuilder"){name="BasicNode",bases="osg.BasicObject"};

require "osg"

function Class.createInstance()
	return osg.Node(Class())
end

function Class:initialize(options)	
	self:debug2("Creating BasicNode object");
	self:addAssociate("osg::Node")
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

return Class
