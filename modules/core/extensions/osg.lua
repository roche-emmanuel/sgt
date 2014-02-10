
osg.PlaneList = osg.Polytope_PlaneList

osg.Plane.__tostring = function(self)
	return tostring(self:asVec4())
end

-- Matrixd extensions:
osg.Matrixd.__tostring = function(self)
	local str = "{\n"
	str = str .. "  " .. self:op_call(0,0) ..", ".. self:op_call(0,1) ..", ".. self:op_call(0,2)..", ".. self:op_call(0,3) .. ",\n"
	str = str .. "  " .. self:op_call(1,0) ..", ".. self:op_call(1,1) ..", ".. self:op_call(1,2)..", ".. self:op_call(1,3) .. ",\n"
	str = str .. "  " .. self:op_call(2,0) ..", ".. self:op_call(2,1) ..", ".. self:op_call(2,2)..", ".. self:op_call(2,3) .. ",\n"
	str = str .. "  " .. self:op_call(3,0) ..", ".. self:op_call(3,1) ..", ".. self:op_call(3,2)..", ".. self:op_call(3,3) .. "\n}"
	return str
end

osg.Matrixd.toMatrix3 = function(self)
	return osg.Matrix3(self:op_call(0,0),self:op_call(0,1),self:op_call(0,2),
					   self:op_call(1,0),self:op_call(1,1),self:op_call(1,2),
					   self:op_call(2,0),self:op_call(2,1),self:op_call(2,2))
end

osg.Matrixd.getRow3 = function(self,row)
	return osg.Vec3d(self:op_call(row,0),self:op_call(row,1),self:op_call(row,2))
end

osg.Matrixd.getRow = function(self,row)
	return osg.Vec4d(self:op_call(row,0),self:op_call(row,1),self:op_call(row,2),self:op_call(row,3))
end

osg.Matrix3.__tostring = function(self)
	local str = "{\n"
	str = str .. "  " .. self:op_index(0) ..", ".. self:op_index(1) ..", ".. self:op_index(2)..",\n"
	str = str .. "  " .. self:op_index(3) ..", ".. self:op_index(4) ..", ".. self:op_index(5)..",\n"
	str = str .. "  " .. self:op_index(6) ..", ".. self:op_index(7) ..", ".. self:op_index(8).."\n}"
	return str
end

osg.Matrixd.toMatrixf = function(mat)
	return osg.Matrixf(mat:op_call(0,0),mat:op_call(0,1),mat:op_call(0,2),mat:op_call(0,3),
		mat:op_call(1,0),mat:op_call(1,1),mat:op_call(1,2),mat:op_call(1,3),
		mat:op_call(2,0),mat:op_call(2,1),mat:op_call(2,2),mat:op_call(2,3),
		mat:op_call(3,0),mat:op_call(3,1),mat:op_call(3,2),mat:op_call(3,3))
end

osg.Matrixf.toMatrixd = function(mat)
	return osg.Matrixd(mat:op_call(0,0),mat:op_call(0,1),mat:op_call(0,2),mat:op_call(0,3),
		mat:op_call(1,0),mat:op_call(1,1),mat:op_call(1,2),mat:op_call(1,3),
		mat:op_call(2,0),mat:op_call(2,1),mat:op_call(2,2),mat:op_call(2,3),
		mat:op_call(3,0),mat:op_call(3,1),mat:op_call(3,2),mat:op_call(3,3))
end

-- Vec4f extensions:
osg.Vec4f.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..", "..self:w()..")"
end

-- component wise multiplication:
function osg.Vec4f.mult(self,x,y,z,w)
	return osg.Vec4f(self:x()*(x or 1.0),self:y()*(y or 1.0), self:z()*(z or 1.0), self:w()*(w or 1.0))
end

osg.Vec4f.toColour = function(self)
	local wx = require "wx"
	
	return wx.wxColour(math.floor(self:x()*255.0),
					   math.floor(self:y()*255.0),
					   math.floor(self:z()*255.0),
					   math.floor(self:w()*255.0))
end

-- Vec2d extensions:
osg.Vec2d.__tostring = function(self)
	return "("..self:x()..", "..self:y()..")"
end

-- Vec3d extensions:
osg.Vec3d.__tostring = function(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..")"
end

osg.Vec3d._v = function(self,id)
	return (id==0 and self:x()) or (id==1 and self:y()) or (id==2 and self:z()) 
end

osg.Vec3d.xy = function(self)
	return osg.Vec2d(self:x(),self:y())
end

osg.Vec3f.xy = function(self)
	return osg.Vec2f(self:x(),self:y())
end

osg.Vec4d.xyz = function(self)
	return osg.Vec3d(self:x(),self:y(),self:z())
end

osg.Vec4f.xyz = function(self)
	return osg.Vec3f(self:x(),self:y(),self:z())
end

osg.Vec3d.clone = function(self)
	return osg.Vec3d(self:x(),self:y(),self:z())
end

osg.Vec3f.clone = function(self)
	return osg.Vec3f(self:x(),self:y(),self:z())
end

osg.Vec3d.normalized = function(self)
	local res = self:clone()
	res:normalize()
	return res
end

osg.Vec3f.normalized = function(self)
	local res = self:clone()
	res:normalize()
	return res
end

osg.Vec3d.cross = function(self,rhs)
	return self:op_pow(rhs)
end

osg.Vec3f.cross = function(self,rhs)
	return self:op_pow(rhs)
end

osg.Vec3d.dot = function(self,rhs)
	return self*rhs
end

osg.Vec3f.dot = function(self,rhs)
	return self*rhs
end

osg.Vec3d.toDeg = function(self)
	return self*180.0/math.pi
end

osg.Vec3d.toRad = function(self)
	return self*math.pi/180.0
end

osg.XAXIS = osg.Vec3d(1.0,0.0,0.0)
osg.YAXIS = osg.Vec3d(0.0,1.0,0.0)
osg.ZAXIS = osg.Vec3d(0.0,0.0,1.0)

osg.Vec2 = osg.Vec2f
osg.Vec3 = osg.Vec3f
osg.Vec4 = osg.Vec4f

osg.BoundingSphere = osg.osg_BoundingSphereImpl_osg_Vec3d

-- index overloads:
local vec3dIndex = osg.Vec3d.__index

osg.Vec3d.__index = function(self,key)
	if tonumber(key) then
		return self:op_index(key)
	else
		return vec3dIndex[key]
	end
end

local vec3fIndex = osg.Vec3f.__index

osg.Vec3f.__index = function(self,key)
	if tonumber(key) then
		return self:op_index(key)
	else
		return vec3fIndex[key]
	end
end

local vec4dIndex = osg.Vec4d.__index

osg.Vec4d.__index = function(self,key)
	if tonumber(key) then
		return self:op_index(key)
	else
		return vec4dIndex[key]
	end
end

local vec4fIndex = osg.Vec4f.__index

osg.Vec4f.__index = function(self,key)
	if tonumber(key) then
		return self:op_index(key)
	else
		return vec4fIndex[key]
	end
end

-- callback extensions:
osg.Node.setUpdateCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setUpdateCallback(cb)
	return cb
end

osg.Node.addUpdateCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addUpdateCallback(cb)
	return cb
end

osg.Node.setCullCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setCullCallback(cb)
	return cb
end

osg.Node.addCullCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addCullCallback(cb)
	return cb
end

osg.Node.setEventCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:setEventCallback(cb)
	return cb
end

osg.Node.addEventCB = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createNodeCallback(func)
	self:addEventCallback(cb)
	return cb
end

osg.Node.setEvtHandler = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createGUIEventHandler(func)
	self:setEventCallback(cb)
	return cb
end

osg.Node.addEvtHandler = function(self, func)
	local tools = require "osg.Tools"
	local cb = tools:createGUIEventHandler(func)
	self:addEventCallback(cb)
	return cb
end

-- update the parents again:
-- local tick = osg.Timer.instance():tick()

-- this is needed to update the methods from osg.Node derived classes.
log:info("Updating method lists for module osg...")
__luna.copyAllParents(osg);
__luna.copyAllParents(osgGA);
__luna.copyAllParents(osgUtil);
__luna.copyAllParents(osgText);
__luna.copyAllParents(osgDB);
__luna.copyAllParents(osgViewer);
__luna.copyAllParents(OpenThreads);
__luna.copyAllParents(osgParticle);

-- local elapsed = osg.Timer.instance():delta_s(tick, osg.Timer.instance():tick())

-- log:info("OSG parents updated in ", elapsed, " secs.")

function osg.Quat.__tostring(self)
	return "("..self:x()..", "..self:y()..", "..self:z()..", "..self:w()..")"
end

function osg.Quat.fromVectors(forward,up)
	forward:normalize()
	local left = up:cross(forward)

	if left:length() < 0.000001 then
		log:error("Quat","Cannot compute quaternion from forward=",forward," and up=",up)
		return osg.Quat(); -- return dummy attitude.
	end
	
	-- now perform the actual attitude computation:
	left:normalize()
	
	up = forward:cross(left)
	up:normalize()
	
	local mat = osg.Matrixd(forward:x(),forward:y(),forward:z(),0.0,
							left:x(),left:y(),left:z(),0.0,
							up:x(),up:y(),up:z(),0.0,
							0.0,0.0,0.0,1.0)
							
	-- return the attitude:
	return mat:getRotate()
end

function osg.Vec2f.__tostring(self)
	return "("..self:x()..", "..self:y()..")"
end
