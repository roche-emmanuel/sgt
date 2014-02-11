module(..., package.seeall)

local log = require "tracer"

function test_jit()
	log:info("Tests","Performing jit tests...")
	
	log:info("Tests","Disabling jit...")
	assert_not_equal(nil,jit,"Invalid JIT table")
	assert_not_equal(nil,jit.off,"Invalid jit.off function")
	
	jit.off()
	
	log:info("Tests","JIT tests done.")	
end
