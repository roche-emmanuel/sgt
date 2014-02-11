local Class = require("classBuilder"){name="Box2dTestApp",bases="osg.OSGTestApp"};

local box2d = require "box2d"
local tools = require "osg.Tools"

function Class:initialize(options)

    local updater = box2d.Box2DUpdater();
		
	local root = self:getRoot()

    root:addChild( updater:createBoundary(5.0, 5.0) );
	
    for i=-8,7 do
        if ( i~=0 ) then
            root:addChild( updater:createBoxObject(osg.Vec2(i*0.5,-i*0.5), osg.Vec2(0.4, 0.4), 1.0) );
		end
        root:addChild( updater:createBoxObject(osg.Vec2(i*0.5, i*0.5), osg.Vec2(0.4, 0.4), 1.0) );
	end
   	
	
	self:getViewer():addEventHandler(  updater );
	
	self:home()
end

return Class 
