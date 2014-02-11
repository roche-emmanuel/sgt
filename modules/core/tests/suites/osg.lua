module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring OSG tests on ds411.")
	return
end

local osg = require "osg"

require "extensions.osg"

function test_vectors()
	local vec = osg.Vec4f(1.0,0.0,0.0,1.0);
	log:info("Tests","Generated vector is: (",vec:x(),", ",vec:y(),", ",vec:z(),", ",vec:w(),")")
end

function test_object_equality()
	log:info("Tests","Testing object equality.")
	
	local grp = osg.Group()
	
	local node = osg.Node()
	grp:addChild(node)
	
	local grp2 = node:getParent(0)
	
	assert_equal(grp,grp2,"Group equality test failed.")
	
	assert_equal(true,grp==grp2,"Group equality test 2 failed.")
	
	assert_equal(true,grp~=node,"Group equality test 3 failed.")

	log:info("Tests","Object equality tests done.")
end

function test_function_injection()
	
	log:info("Tests","Testing function injection.")
	
	local vec = osg.Vec4f(1.0,2.0,3.0,0.666)
	local res = "".. tostring(vec)
	
	assert_equal("string",type(res),"Invalid vec4f helloword result.")
	log:info("Tests","Result from vec4f is: ",res)
end

function test_viewer_deletion()
	log:info("Tests","Starting viewer deletion test.")
	local viewer = osgViewer.Viewer()
	--local viewer = osgViewer.ViewerBase() -- this one is abstract
	
	log:info("Tests","Deleting...")
	viewer:delete()
	
	log:info("Tests","Viewer deletion done.")
end

function test_vec3array()
	log:info("Tests","Creating geode...")
	local geode = osg.Geode()
	
	log:info("Tests","Creating geometry...")
	local geom = osg.Geometry()
	geode:addDrawable(geom);
	
	log:info("Tests","Creating vertex array...")
	local vertices = osg.Vec4Array();
	geom:setVertexArray(vertices);

	log:info("Tests","Adding vertices...")
	vertices:push_back(osg.Vec4f(-1.0,-1.0,0.0,0.0))
	vertices:push_back(osg.Vec4f(-1.0,1.0,0.0,1.0))
	vertices:push_back(osg.Vec4f(1.0,1.0,1.0,1.0))
	vertices:push_back(osg.Vec4f(1.0,-1.0,1.0,0.0));
	
	assert_equal(4,vertices:size(),"Invalid vertex count.")
	
	log:info("Tests","Adding primitive set... TRIANGLE_STRIP=",osg.PrimitiveSet.TRIANGLE_STRIP)
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	log:info("Tests","Creating program...")
	local prog = osg.Program();
	
	log:info("Tests","Creating vertex shader...")
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource([[
varying vec2 coords;

void main() {
    gl_Position = gl_Vertex;
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}	
	]]);
	
	log:info("Tests","Creating fragment shader...")
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	vs:setShaderSource([[
void main() {
    gl_FragColor = vec4(0.0,1.0,0.0,1.0);
}
	]]);
	
	prog:addShader(vs)
	prog:addShader(fs)
	
	log:info("Tests","Creating state set...")
	local ss = geode:getOrCreateStateSet()
	
	log:info("Tests","Adding program to state set...")
	ss:setAttributeAndModes(prog)
	
	log:info("Tests","Vec3Array test done.")
end

function test_wrapper_deletion()
	log:info("Tests","Testing wrapper deletion.")
	local BasicNode = require "osg.BasicNode"
	
	log:info("Tests","Creating wrapper...")
	local node = BasicNode.createInstance()
	log:info("Tests","Deleting wrapper...")
	node:delete()
	
	--assert_equal(nil,node,"Node object is still valid.")
	
	log:info("Tests","Wrapper deletion test done.")
end

function test_protected_function_access()
	log:info("Tests","Testing protection function access.")
	local BasicNode = require "osg.BasicNode"
	local osg = require "osg"
	
	local node = BasicNode.createInstance()
	local grp = osg.Group()
	node:getTable().addParent(node,grp)
	node:getTable().setNumChildrenRequiringUpdateTraversal(node,1)

	log:info("Tests","Protection function access test done.")
end

function test_diamond_inheritance_handling()
	log:info("Tests","Testing diamond inheritance support.")
	local handler = osgGA.GUIEventHandler()
	
	assert_not_equal(nil,handler,"Invalid GUIEventHandler object.")
	handler:setIgnoreHandledEventsMask(0)

	log:info("Tests","Done testing iamond inheritance support.")
end

function test_object_equality_advanced()
	log:info("Tests","Testing object equality advanced.")

	local grp1 = osg.Group()
	local grp2 = osg.Group()
	
	assert_not_equal(grp1,grp2,"Different groups are equal.")
	
	local obj1 = grp1:dynCast("osg::Object")

	-- The test below will fail because both arguments do not use the same metamethod.
	assert_equal(grp1,obj1,"Group casted as object not equal to itself.")
	
	log:info("Tests","Done testing object equality advanced.")
end

function test_matrix3()
	log:info("Tests","Testing matrix3.")
	
	local ca = math.cos(math.pi/6)
	local sa = math.sin(math.pi/6)
	
	local target = osg.Matrix3(ca,sa,0.0,
	                           -sa,ca,0.0,
							   0.0,0.0,1.0);
							   
	local mat = osg.Matrixd.rotate(math.pi/6, osg.ZAXIS);
	local res = mat:toMatrix3()
	
	log:info("Mat4 is: ",mat)
	log:info("Mat3 is: ",target)
	
	assert_equal(target,res,"Matrix3 are not equal.")
	
	log:info("Tests","Done testing matrix3.")
end

function test_event_handler()
	log:info("Tests","Testing event handler.")
	
	local grp = osg.Group()
	grp:setName("Mygroup")
	
	local executed = false;
	local thenode = nil
	local thename = nil
	
	local viewer = osgViewer.Viewer()
	
	--viewer:getCamera():setRenderTargetImplementation(osg.Camera.FRAME_BUFFER_OBJECT);
	viewer:setUpViewInWindow(50,50,500,400)
	-- viewer:getCamera():addChild(grp)
	viewer:setSceneData(grp)
	viewer:setThreadingModel(osgViewer.ViewerBase.SingleThreaded)

	-- grp:setUpdateCB(function(node,nv)
		--log:info("Tests","executing node callback...")
		-- executed = true
		-- thenode = node;
		-- viewer:setDone(true);
	-- end)
	
	grp:addEvtHandler(function(ea,aa,node,nv)
		log:info("Tests","gui event handler...")
		executed = true
		thenode = node;
		assert_not_equal(nil,node,"Invalid node argument in GuiEventHandler::handle()")
		
		log:info("Tests","Retrieving node name...")
		thename = node:getName();
		log:info("Tests","Node name is: ", thename)
		
		if(node:dynCast("osg::Group")==grp) then
			log:warn("Node test passed!")
		else
			log:error("Node test failed!")
		end
		viewer:setDone(true);
	end)

	-- while not executed do
	log:info("Tests","Rendering viewer...")
	viewer:run()
	log:info("Tests","Done rendering viewer.")
	-- end	

	assert_equal(true,executed,"Invalid execution status")
	assert_equal("Mygroup",thename,"Invalid node retrieved")
	assert_equal(grp,thenode,"Invalid node retrieved")

	viewer=nil
	grp=nil
	osg.setNotifyHandler(nil)
	collectgarbage('collect')
	
	log:info("Tests","Done testing event handler")
end

function test_get_perspective()
	log:info("Tests","Testing getPerspective.")
	
	local angle = math.random()*80.0;
	local mat = osg.Matrixd.perspective(angle,1.33,1.0,1000.0)
	
	local res, fovy, aspect, znear, zfar = mat:getPerspective(0.0,0.0,0.0,0.0);
	
	log:info("Tests","Testing perspective with angle: ", angle)
	
	assert_equal(angle,fovy,"Invalid perspective fovy angle.")
	
	log:info("Tests","Done testing getPerspective.")
end

function test_vec3_negation()
	log:info("Tests","Testing vector negation.")
	
	local v1 = osg.Vec3d(1.0,1.0,1.0)
	local v2 = -v1
	local v3 = -v2
	
	assert_equal(v1,v3,"Invalid vec negation result.")
	
	local v1 = osg.Vec3f(1.0,1.0,1.0)
	local v2 = -v1
	local v3 = -v2
	
	assert_equal(v1,v3,"Invalid vec negation result 2.")

	local v1 = osg.Vec4d(1.0,1.0,1.0,0.5)
	local v2 = -v1
	local v3 = -v2
	
	assert_equal(v1,v3,"Invalid vec negation result 3.")
	
	local v1 = osg.Vec2f(1.0,1.0)
	local v2 = -v1
	local v3 = -v2
	
	assert_equal(v1,v3,"Invalid vec negation result 4.")
	
	log:info("Tests","Done testing vector negation.")
end
