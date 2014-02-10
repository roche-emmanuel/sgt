
sgt.INFINITY = sgt.getInfinity()

local osg = require "osg"

osg.Matrixd.extractFrustumPlanes = function(self, planes)
	planes = planes or osg.PlaneList()	
	sgt.getFrustumPlanes(sgt.mat4d(self),planes)
	return planes
end
