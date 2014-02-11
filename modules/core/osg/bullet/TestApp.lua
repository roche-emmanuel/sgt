local Class = require("classBuilder"){name="GizmoTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	options = options or {}
		
	--local mt = self:loadModel("tests/data/glider.osgt")
	--self:createCube(1)
	--self:createBase()
	--self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local bullet = require "bullet"
	
	
    local root = self:getRoot()
	
	local updater = bullet.SampleRigidUpdater(root)
	
	updater:addGround( osg.Vec3(0.0, 0.0,-9.8) );
	for i=0,9 do
		for j=0,9 do
			updater:addPhysicsBox( osg.Box(osg.Vec3(), 0.99), osg.Vec3(i, 0.0, j+0.5), osg.Vec3(), 1.0 );
		end
	end

	self:getViewer():addEventHandler( updater );
	self:home()
end

return Class 
