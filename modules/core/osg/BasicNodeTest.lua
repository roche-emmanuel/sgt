local Class = require("classBuilder"){name="BasicNodeTest",bases="osg.BasicNode"};

function Class.createInstance()
	return osg.Node(Class())
end

function Class:initialize(options)		
	self:defineMember{name="doubleValue",defVal=5.3}
	self:defineMember{name="boolValue"}
end

function Class:buildObjectWrapper(wrapper)
	wrapper:addDouble("DoubleValue",5.3)
	wrapper:addBool("BoolValue")
end

return Class
