module(..., package.seeall)

local log = require "tracer"
local fs = require "base.FileSystem"

-- This test is known to fail on linux.
function lua_read_number()
	log:info("Tests","Testing lua read number");
	
	local file = fs:getRootPath(true).."tests/lua_read.txt"
	local str = [[
 0xCAFEBABE
 0xDEADBEEF
 3.141592653589793115997963468544185161590576171875
 this line is in fact not a number :-)

 that was an empty line	
	]]
	
	local f = io.open(file,"w")
	f:write(str)
	f:close()
	
	f = io.open(file,"r")
	local num = f:read("*n");
	f:close()
	assert_equal(0xCAFEBABE,num,"Invalid num compare.");
	
	log:info("Tests","Done with lua read number test.")
end

function test_lane_timer()
	log:info("Tests","Testing APR");
	
	local apr = require "apr"
	
	-- perform the internal tests:
	local tests = require "apr.test.init"
	
	tests()
	
	log:info("Tests","Done testing APR.")
end

