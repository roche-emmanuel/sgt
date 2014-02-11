local Class = require("classBuilder"){name="MicroPatherTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"

function Class:onStop()
	self:info("Deleting micropather nodes.")
	--self._pather:delete()
	self._nodes:clear()
end

function Class:initialize(options)
	local mpather = require "micropather"
	
	-- self:createCube(1)
	-- self:createBase()
	
	self._nodes = require("std.Map")()
	
	self._mapX = 10
	self._mapY = 10
	
	self._mapData = {
		1, 1, 0, 1, 1, 1, 1, 1, 1, 1,
		1, 0, 0, 1, 0, 0, 0, 0, 0, 1,
		1, 0, 1, 0, 0, 0, 1, 0, 1, 1,
		1, 0, 0, 0, 1, 0, 1, 1, 0, 1,
		1, 0, 1, 1, 1, 0, 0, 0, 1, 1,
		1, 0, 0, 1, 1, 0, 0, 0, 0, 1,
		1, 0, 1, 0, 0, 0, 1, 0, 1, 1,
		1, 1, 1, 1, 1, 1, 0, 0, 0, 1,
		1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
		1, 1, 0, 1, 1, 1, 1, 1, 1, 1
	}
	
	self._costList = {
		{direction=osg.Vec2(1.0,0.0),weight=1.0},
		{direction=osg.Vec2(0.0,-1.0),weight=1.0},
		{direction=osg.Vec2(-1.0,0.0),weight=1.0},
		{direction=osg.Vec2(0.0,1.0),weight=1.0},
	}
		
	self._finder = micropather.Graph{
		LeastCostEstimate = function(tt, obj, start, finish )
			local startX, startY = self:convertNodeToXY(start)
			local endX, endY = self:convertNodeToXY(finish);
			
			local dx = (endX - startX); 
			local dy = (endY - startY);
			return math.sqrt(dx * dx + dy * dy);
		end,
		
	    AdjacentCost = function(tt, obj, node, adjacent )
			local currX, currY = self:convertNodeToXY(node);
			
			for i=1,#self._costList do
				local nx = currX + self._costList[i].direction:x();
				local ny = currY + self._costList[i].direction:y();
				
				if ( self:checkPassable(nx, ny) ) then
					local stateCost = micropather.StateCost()
					stateCost:setState(self:convertXYToNode(nx, ny))
					stateCost:setCost(self._costList[i].weight)
					
					adjacent:push_back( stateCost );
				end
			end
		end	,
		
		PrintStateInfo = function(tt, obj, node )
			local currX, currY = self:convertNodeToXY( node );
			self:info("current location: ",currX,", ",currY);
		end,
	};
	
	self._pather = micropather.MicroPather(self._finder)
	
	self:build()
	
	self:home()
end

function Class:convertNodeToXY( node)
	local obj = sgt.BaseClass.fromVoid(node)
	self:check(obj,"Invalid BaseClass object.")
	local x = obj:getTable()._x;
	local y = obj:getTable()._y;

	-- self:info("Extracted node coords: ",x,", ",y)
	
	return x, y
end
	
function Class:convertXYToNode( x, y )
	local obj = self._nodes:get(x .."_"..y)
	if not obj then
		-- self:info("Creating state node for ",x,", ",y)
		obj = sgt.BaseClass{
			_x = x,
			_y = y
		}
		
		self._nodes:set(x.."_"..y,obj)
	end
	
	return obj:asVoid()
end

function Class:checkPassable( nx, ny )
	if ( nx>=0 and nx<self._mapX and ny>=0 and ny<self._mapY ) then
		local data = self._mapData[ny * self._mapX + nx + 1];
		return data==0;
	end
	return false;
end
	
function Class:findPath(startX, startY, endX, endY, result )
	local totalCost = 0.0;
	local path = sgt.std_vector_void_ptr();
	
	local rtn = self._pather:Solve( self:convertXYToNode(startX, startY), self:convertXYToNode(endX, endY), path, totalCost );
	if rtn==micropather.MicroPather.SOLVED then				
		for i=0,path:size()-1 do
			local x,y = self:convertNodeToXY( path:op_index(i) );
			result:push_back(osg.Vec2(x, y));
		end
		return true;
	end
	
	return false;			
end
	
function Class:createAnimationPathCallback( vertices, scale, duration )
    local path = osg.AnimationPath();
    path:setLoopMode( osg.AnimationPath.LOOP );
    
    local scaleFactor = osg.Vec3d(scale, scale, scale);
    local delta_time = duration / vertices:size();
	
	local X_AXIS = osg.Vec3(1.0,0.0,0.0)
	
    for i=0,vertices:size()-1 do
        local rot = osg.Quat()
		local dir;
		
        if ( i<vertices:size()-1 ) then
            dir = vertices:op_index(i+1) - vertices:op_index(i); 
        else
            dir = vertices:op_index(i) - vertices:op_index(i-1); 
        end

		dir:normalize();
		rot:makeRotate( X_AXIS, dir );
		
        path:insert( delta_time * i, osg.AnimationPath_ControlPoint(osg.Vec3d(vertices:op_index(i)), rot, scaleFactor) );
    end
    
    local apcb = osg.AnimationPathCallback();
    apcb:setAnimationPath( path );
    return apcb;    
end

function Class:build()
    -- Create the map geometries
    local groundShape = osg.ShapeDrawable(osg.Box(osg.Vec3(45.0, 45.0, 0.0), 100.0, 100.0, 0.5));
    groundShape:setColor( osg.Vec4(0.2, 0.2, 0.2, 0.2) );
    
    local ground = osg.Geode();
    ground:addDrawable( groundShape );
    
    local geode = osg.Geode();
    geode:addDrawable( osg.ShapeDrawable( osg.Box(osg.Vec3(0.0, 0.0, 5.0), 10.0)) );
    
    local scene = self:getRoot()
    scene:addChild( ground );
    
	for x=0,9 do
        for y=0,9 do
            if ( self._mapData[y*10 + x + 1]==1 ) then
				local boxNode = osg.MatrixTransform();
				boxNode:setMatrix( osg.Matrixd.translate(10.0*x, 10.0*y, 0.0) );
				boxNode:addChild( geode );
				scene:addChild( boxNode );
			end
        end
    end
    
    -- Compute and draw found path
    local result = require("std.Vector")();
	local gl = require "luagl"
	local tools = require "osg.Tools"
	
    if ( self:findPath(2, 0, 2, 9, result) ) then
        local vertices = osg.Vec3Array();
		
		for _,val in result:sequence() do
            vertices:push_back(osg.Vec3( 10.0*val:x(), 10.0*val:y(), 2.0 ));
        end
		
        local normals = osg.Vec3Array();
        normals:push_back(osg.Vec3(0.0, 0.0, 1.0));
        
        local color = osg.Vec4Array();
        color:push_back(osg.Vec4(1.0, 1.0, 0.0, 1.0));
        
        local pathGeom = osg.Geometry();
        pathGeom:setVertexArray( vertices );
        pathGeom:setNormalArray( normals );
        pathGeom:setNormalBinding( osg.Geometry.BIND_OVERALL );
        pathGeom:setColorArray( color );
        pathGeom:setColorBinding( osg.Geometry.BIND_OVERALL );
        pathGeom:addPrimitiveSet( osg.DrawArrays(gl.LINE_STRIP, 0, result:size()) );
        
        local path = osg.Geode();
        path:addDrawable( pathGeom );
        scene:addChild( path );
        
        local actor = osg.MatrixTransform();
        actor:getOrCreateStateSet():setMode( gl.NORMALIZE, osg.StateAttribute.ON );
        actor:addChild( tools:getModel("tests/data/dumptruck.osgt") );
        actor:addUpdateCallback( self:createAnimationPathCallback(vertices, 0.3, 15.0) );
        scene:addChild( actor );
    end
end

return Class 
