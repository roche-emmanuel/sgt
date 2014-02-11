local Class = require("classBuilder"){name="BasicGroup",bases="osg.BasicObject"};

require "osg"
	
function Class.createInstance()
	return osg.Group(Class())
end

function Class:initialize(options)	
	self:debug2("Creating BasicGroup object");
	
	self:addAssociate("osg::Node")
	self:addAssociate("osg::Group")
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to save.
end

return Class
