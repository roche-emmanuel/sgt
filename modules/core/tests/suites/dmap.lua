local suite = {}

function suite.test_dmap()
	log:info("Testing dmap")
	
	local DMap = require "std.DMap"
	local obj = DMap()
	
	obj:set(1,2,3)
	obj:set("key","key2","hello")
	
	assert_equal(3,obj:get(1,2),"Invalid value in (1,2)")
	assert_equal("hello",obj:get("key","key2"),"Invalid value in (key,key2)")
	
	log:info("Done testing dmap")
end

return suite
