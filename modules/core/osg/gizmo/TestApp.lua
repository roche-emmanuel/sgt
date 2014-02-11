local Class = require("classBuilder"){name="GizmoTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	options = options or {}
		
	--local mt = self:loadModel("tests/data/glider.osgt")
	--self:createCube(1)
	self:createBase()
	--self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local gizmo = require "gizmo"
	
	local manipulator = osgGA.TrackballManipulator{
		handle = function(tt, obj, ea, aa )
			--self:info("ModKeyMask=",ea:getModKeyMask())
			if bit.band(ea:getModKeyMask(), osgGA.GUIEventAdapter.MODKEY_CTRL) == 0 then
				return false;  -- force using CTRL when manipulating
			end
			--self:info("Calling base handle...")
			return obj:base_handle(ea, aa);
		end,
    }

	local scene = osg.MatrixTransform();
    
	scene:addChild( tools:getModel("tests/data/glider.osgt") );
    
    local giz = gizmo.GizmoDrawable();
    giz:setTransform( scene );
    giz:setGizmoMode( gizmo.GizmoDrawable.MOVE_GIZMO );
	
    local geode = osg.Geode();
    geode:addDrawable( giz );
    geode:setCullingActive( false );  -- allow gizmo to always display
    geode:getOrCreateStateSet():setRenderingHint( osg.StateSet.TRANSPARENT_BIN );  -- always show at last
	
	--[[
	self:getCanvas():addListener{event="onClose",func=function()
		self:info("Calling onClose event for OSGCanvas!");
		geode:removeDrawable(giz)
		self:info("Deleting gizmo.")
		giz:delete()
		self:info("Gizmo Deleted.")
	end}
	]]
	
    local root = self:getRoot()
    root:addChild( scene );
    root:addChild( geode );

	self:getViewer():setCameraManipulator(manipulator)	
	self:home()
end

return Class 
