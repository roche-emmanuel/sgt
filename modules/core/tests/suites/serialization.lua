module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring serialization tests on ds411.")
	return
end

local osg = require "osg"
local fs = require "base.FileSystem"


function test_file_serialization()
	
	log:info("Tests","Doing serialization test...")
	
	-- create a new sgt object:
	local obj = sgt.Object()
	obj:setName("testObject")
	
	--local rw = osgDB.Registry.instance():getReaderWriterForExtension("osgt")
	--assert_not_equal(rw,nil,"Invalid readerwriter for extension.")
	
	local file = fs:getRootPath(true).."tests/Object.osgt"
	log:info("Tests","Writing test object to "..file)
	local res = osgDB.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")

	log:info("Tests","Done writing object")
	
	log:info("Tests","Reading object from file=",file)
	local res = osgDB.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
end

-- this test is disabled because the serialisation support for timeprovider 
-- was removed from the sgtCore library (to avoid resource issues while debugging).
function disabled_timeprovider_serialization()
	
	log:info("Tests","Doing TimeProvider serialization test...")
	
	-- create a new sgt object:
	local obj = sgt.TimeProvider()
	obj:setName("MyProvider")
	obj:setTimeSpeed(2.0)
	
	--local rw = osgDB.Registry.instance():getReaderWriterForExtension("osgt")
	--assert_not_equal(rw,nil,"Invalid readerwriter for extension.")
	
	local file = fs:getRootPath(true).."tests/TimeProvider.osgt"
	log:info("Tests","Writing test object to "..file)
	local res = osgDB.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")

	log:info("Tests","Done writing object")
	
	-- Now read back the serialized object:
	log:info("Tests","Reading object from file=",file)
	local res = osgDB.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
	assert_not_equal(nil,res,"Cannot read object file.")
	
	local tp = res:dynCast("sgt::TimeProvider")
	assert_not_equal(nil,tp,"Cannot dyncast timeprovider.")
	
	local st = tp:getStartTime()
	log:info("Tests","Retrieved start time is: ", st)
end

function test_anyvector()
	log:info("Tests","Performing AnyVector creation...")
	local obj = sgt.AnyVector()
	assert_not_equal(nil,obj,"Invalid AnyVector object.")
	log:info("Tests","AnyVector test done.")
end

function test_anyvector_access()
	local obj = sgt.AnyVector()
	
	obj:push_back(1.234)
	obj:push_back(1.534)
	obj:push_back(4.0)
	obj:push_back(true)
	obj:push_back("Hello world!\n From Manu!")
	
	assert_equal(1.234,obj:get(0),"Invalid double value")
	assert_equal(1.534,obj:get(1),"Invalid double value")
	assert_equal(4.0,obj:get(2),"Invalid integer value")
	assert_equal(true,obj:get(3),"Invalid bool value")
	assert_equal("Hello world!\n From Manu!",obj:get(4),"Invalid string value")

	log:info("Tests","AnyVector access test done.")
end

-- this test is disabled because the serialisation support for anyvector
-- was removed from the sgtCore library (to avoid resource issues while debugging).
function disabled_anyvector_serialization()
	log:info("Tests","Performing AnyVector serialization...")
	local obj = sgt.AnyVector()
	assert_not_equal(nil,obj,"Invalid AnyVector object.")
	
	local file = fs:getRootPath(true).."tests/anyvector.osgt"
	
	if fs:exists(file) then
		log:info("Tests","Removing previous version of file ",file)
		fs:removeFile(file)
	end
	
	-- Add a double value:
	obj:push_back(1.234)
	obj:push_back(1.534)
	obj:push_back(4.0)
	obj:push_back(true)
	obj:push_back("Hello world!\n From Manu!")
	
	
	log:info("Tests","Writing test object to "..file)
	local res = osgDB.writeObjectFile(obj,file)
	assert_equal(true,res,"Cannot write object file.")
	
	log:info("Tests","Reading object from file=",file)
	local res = osgDB.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
	assert_not_equal(nil,res,"Cannot read object file.")
	
	local vec = res:dynCast("sgt::AnyVector")
	
	assert_not_equal(nil,vec,"Cannot dyncast anyvector.")
	log:info("Tests","AnyVector serialization test done.")
end

function test_basicnode_serialization()
	log:info("Tests","Performing BasicNode serialization...")
	
	require "serialization.SerializationManager"
	
	log:info("Tests","Creating basic node hierarchy...")
	local grp = osg.Group()
	grp:setName("my_root")
	
	local BasicNode = require "osg.BasicNodeTest"
	
	local child1 = BasicNode.createInstance();
	--child1:setMyValue(234.8);
	
	grp:addChild(child1)
	
	local child2 = BasicNode.createInstance();
	child2:getTable():setDoubleValue(234.8);
	child2:getTable():setBoolValue(true);
	child2:setName("My child 2");
	
	grp:addChild(child2)

	local file = fs:getRootPath(true).."tests/basicnode.osgt"
	local file2 = fs:getRootPath(true).."tests/basicnode.osgx"
	
	if fs:exists(file) then
		log:info("Tests","Removing previous version of file ",file)
		fs:removeFile(file)
	end
	
	log:info("Tests","Writing test object to "..file)
	local res = osgDB.writeObjectFile(grp,file)
	assert_equal(true,res,"Cannot write object file.")
	
	grp:setName("Hello manu");
	
	log:info("Tests","Writing test object to "..file2)
	local res = osgDB.writeObjectFile(grp,file2)
	assert_equal(true,res,"Cannot write object file.")
	
	log:info("Tests","Reading object from file=",file)
	local res = osgDB.readObjectFile(file,nil)
	log:info("Tests","Object read.")
	
	assert_not_equal(nil,res,"Cannot read object file.")
	
	local grp = res:dynCast("osg::Group")
	
	assert_not_equal(nil,grp,"Cannot dyncast root group.")

	log:info("Tests","BasicNode serialization test done.")
end

