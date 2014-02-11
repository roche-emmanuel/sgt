module(..., package.seeall)

local log = require "tracer"

function test_number_format()
	log:info("Tests","Testing number format")

	local val = tonumber("-.998")
	assert_equal(-.998,val,"Invalid number formating.")
end

function test_wrapper_destruction()
	log:info("Tests","Testing wrapper destructor callback.")
	
	local cbCalled = false;
	
	local sink = sgt.LogSink{delete=function(tt) log:warn("Tests","Now calling sink destruction cb."); cbCalled = true; end }
	
	log:info("Tests","Sink ref count=",sink:referenceCount())
	
	sink:delete()
	
	assert_equal(true,cbCalled,"Destructor cb was not called.")
	
	log:info("Tests","Wrapper destructor callback test done.")
end

function test_void_converters()
	log:info("Tests","Testing void converters.")
	
	local osg = require "osg"
	
	local grp = osg.Group()
	
	local ptr = grp:asVoid()
	assert_not_equal(nil,ptr,"Invalid pointer retrieved from group.")
	
	local grp2 = osg.Group.fromVoid(ptr)
	assert_not_equal(nil,grp2,"Invalid group object retrieved from pointer.")
	
	assert_equal(grp2,grp,"Group objects are different.")
	
	log:info("Tests","Void converters test done.")
end
