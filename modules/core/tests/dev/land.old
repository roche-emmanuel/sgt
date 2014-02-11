local suite = {}

local land = require "land"

function suite.test_half()
	log:info("Testing half")
	
	local v1 = sgt.half(2.0)
	local v2 = sgt.half(3.0)
	local v3 = sgt.half(5.0)
	
	assert_equal(v3,v1+v2,"Invalid half addition result.")
	assert_equal(5.0,v3:toFloat(),"Invalid toFloat result.")
	
	log:info("Done testing half")
end

function suite.test_vec2f()
	log:info("Testing vec2f")
	
	local v1 = sgt.vec2f(2.0,3.0)
	local v2 = sgt.vec2f(3.0,2.0)
	local v3 = sgt.vec2f(6.0,6.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(12.0,v1:dot(v2),"Invalid dot result.")
	
	log:info("Done testing vec2f")
end

function suite.test_vec3d()
	log:info("Testing vec3d")
	
	local v1 = sgt.vec3d(2.0,3.0,1.0)
	local v2 = sgt.vec3d(3.0,2.0,1.0)
	local v3 = sgt.vec3d(6.0,6.0,1.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(13.0,v1:dot(v2),"Invalid dot result.")
	
	log:info("Done testing vec3d")
end

function suite.test_vec4i()
	log:info("Testing vec4i")
	
	local v1 = sgt.vec4i(2.0,3.0,1.0,2.0)
	local v2 = sgt.vec4i(3.0,2.0,1.0,2.0)
	local v3 = sgt.vec4i(6.0,6.0,1.0,4.0)
	local v4 = sgt.vec3i(6.0,6.0,1.0)
	
	assert_equal(v3,v1*v2,"Invalid vector mult result.")
	assert_equal(v4,v3:xyz(),"Invalid dot result.")
	
	log:info("Done testing vec4i")
end

function suite.test_box2i()
	log:info("Testing box2i")
	
	local v1 = sgt.box2i(-1.0,1.0,-1.0,1.0)
	local v2 = sgt.vec2i(2.0,1.0)
	local v3 = sgt.vec2i(1.0,1.0)
	
	assert_equal(0,v1:center():op_index(0),"Invalid center x result.")
	assert_equal(0,v1:center():op_index(1),"Invalid center x result.")
	assert_equal(v3,v1:nearestInnerPoint(v2),"Invalid nearest point result.")
	assert_equal(1,v1:distanceTo(v2),"Invalid distance to result.")
	
	log:info("Done testing box2i")
end

function suite.test_box3d()
	log:info("Testing box3d")
	
	local v1 = sgt.box3d(-1.0,1.0,-1.0,1.0,-1.0,1.0)
	local v2 = sgt.vec3d(0.0,0.0,0.0)
	local v3 = sgt.vec3d(0.5,0.5,-0.5)
	
	assert_equal(v2,v1:center(),"Invalid center result.")
	assert_equal(true,v1:contains(v3),"Invalid contains result.")
	
	log:info("Done testing box3d")
end

function suite.test_mat2f()
	log:info("Testing mat2f")
	
	local v1 = sgt.mat2f(2.0,0.0,
						 0.0,2.0)
	local v2 = sgt.mat2f(3.0,0.0,
						 0.0,3.0)
	local v3 = sgt.mat2f(6.0,0.0,
						 0.0,6.0)
	local v4 = sgt.mat2f(1.0/3.0,0.0,
						 0.0,1.0/3.0)
	
	assert_equal(v3,v1*v2,"Invalid mat2 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat2 inverse result.")
	
	log:info("Done testing mat2f")
end

function suite.test_mat3d()
	log:info("Testing mat3d")
	
	local v1 = sgt.mat3d(2.0,0.0,0.0,
						 0.0,2.0,0.0,
						 0.0,0.0,2.0)
	local v2 = sgt.mat3d(3.0,0.0,0.0,
						 0.0,3.0,0.0,
						 0.0,0.0,3.0)
	local v3 = sgt.mat3d(6.0,0.0,0.0,
						 0.0,6.0,0.0,
						 0.0,0.0,6.0)
	local v4 = sgt.mat3d(1.0/3.0,0.0,0.0,
						 0.0,1.0/3.0,0.0,
						 0.0,0.0,1.0/3.0)
	
	assert_equal(v3,v1*v2,"Invalid mat3 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat3 inverse result.")
	
	log:info("Done testing mat3d")
end

function suite.test_mat4d()
	log:info("Testing mat4d")
	
	local v1 = sgt.mat4d(sgt.mat3d(2.0,0.0,0.0,
						 0.0,2.0,0.0,
						 0.0,0.0,2.0))
	local v2 = sgt.mat4d(sgt.mat3d(3.0,0.0,0.0,
						 0.0,3.0,0.0,
						 0.0,0.0,3.0))
	local v3 = sgt.mat4d(sgt.mat3d(6.0,0.0,0.0,
						 0.0,6.0,0.0,
						 0.0,0.0,6.0))
	local v4 = sgt.mat4d(sgt.mat3d(1.0/3.0,0.0,0.0,
						 0.0,1.0/3.0,0.0,
						 0.0,0.0,1.0/3.0))
	
	assert_equal(v3,v1*v2,"Invalid mat4 mult result.")
	assert_equal(v4,v2:inverse(),"Invalid mat4 inverse result.")
	
	log:info("Done testing mat4d")
end

function suite.test_quatd()
	log:info("Testing quatd")
	
	local v1 = sgt.quatd(sgt.vec3d(1.0,1.0,1.0),48)
	local v2 = sgt.quatd(sgt.vec3d(1.0,1.0,1.0),-48)
		
	assert_equal(v2:getAngle(),v1:inverse():getAngle(),"Invalid quat inverse angle result.")
	assert_equal(v2:getAxis(),v1:inverse():getAxis(),"Invalid quat inverse axis result.")
	
	log:info("Done testing quatd")
end

function suite.test_task()
	log:info("Testing Task")
	
	local v1 = sgt.Task("MyTask",false,3)
	
	assert_equal("MyTask",v1:getName(),"Invalid task name result.")
	assert_equal(false,v1:isGpuTask(),"Invalid task isGpuTask() result.")
	assert_equal(3,v1:getDeadline(),"Invalid task getDeadline() result.")
	
	log:info("Done testing Task")
end

function suite.test_taskgraph()
	log:info("Testing TaskGraph")
	

	local v1 = sgt.TaskGraph()
	local v2 = sgt.Task("MyTask",false,3)
	
	assert_equal(true,v1:isEmpty(),"Invalid taskgraph isEmpty result.")
	v1:addTask(v2)
	
	assert_equal(false,v1:isEmpty(),"Invalid taskgraph isEmpty result bis.")
	
	log:info("Done testing TaskGraph")
end

function suite.test_scheduler()
	log:info("Testing MultithreadScheduler")
	

	local v1 = sgt.TaskGraph()
	local v2 = sgt.Task("MyTask",false,3)
	
	local sch = sgt.MultithreadScheduler(0,0,0.0,3)
	
	v1:addTask(v2)
	
	assert_equal(false,v1:isDone(),"Invalid taskgraph isDone result.")

	sch:run(v1)

	assert_equal(true,v1:isDone(),"Invalid taskgraph isDone result bis.")
	assert_equal(true,v2:isDone(),"Invalid taskgraph isDone result ter.")
	
	log:info("Deleting scheduler...")
	sch = nil;
	collectgarbage('collect')
	log:info("Scheduler deleted.")
	
	log:info("Done testing MultithreadScheduler")
end

function suite.test_infinity()
	log:info("Testing Infinity value")
	
	local val = 1345.33;
	-- local val2 = sgt.getInfinity()
	local val2 = sgt.INFINITY
	
	assert_equal(true,sgt.isFinite(val),"Invalid isFinite result.")
	assert_equal(false,sgt.isFinite(val2),"Invalid isFinite result bis.")

	assert_equal(false,sgt.isNaN(val),"Invalid isNaN result.")
	assert_equal(false,sgt.isNaN(val2),"Invalid isNaN result bis.")

	assert_equal(false,sgt.isInf(val),"Invalid isInf result.")
	assert_equal(true,sgt.isInf(val2),"Invalid isInf result bis.")

	log:info("Done testing Infinity value.")
end

function suite.test_frustum()
	log:info("Testing frustum computation")
	
	local fovy = 20.0 + math.random()*50.0;
	local aspect = 1.0 + math.random()*0.66;
	
	local mat = osg.Matrixd.perspective(fovy,aspect,0.1,10000.0);
	
	local planes = mat:extractFrustumPlanes()
	assert_equal(6,planes:size(),"Invalid frustum plane count result.")
	
	-- retrieve the normals from the planes:
	local bottom = planes:at(2):asVec4():xyz():normalized()
	local top = planes:at(3):getNormal():normalized()
	
	assert_lt(1e-10,math.abs(1.0-bottom:length()),"Invalid plane normal length.")
	--assert_equal(1.0,bottom:length(),"Invalid plane normal length bis.")
	
	local fov = math.deg(math.acos(-(bottom*top)));
	log:info("Tests","Testing frustum computation with fovy=",fovy)
	
	assert_lt(1e-10,math.abs(fovy-fov),"Invalid fovy computation result.")
	
	-- compute expected fovx
	local fovx = 2.0 * math.atan(aspect* math.tan(math.rad(fovy/2.0))); -- in radians.
	
	local left = planes:at(0):asVec4():xyz():normalized()
	local right = planes:at(1):getNormal():normalized()
	
	local fov = math.acos(-left*right);

	log:info("Tests","Testing frustum computation with fovx=",math.deg(fovx))
	assert_lt(1e-10,math.abs(fovx-fov),"Invalid fovx computation result.")
	
	log:info("Done testing frustum computation")
end

return suite
