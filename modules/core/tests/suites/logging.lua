module(..., package.seeall)

local log = require "logger"
local tr = require "tracer"

function test_log_nil()
	log:debug_v("Trying to log nil value.")
	log:debug_v("The values are ",1," ",2," ",nil," ", 4," and that's all.")
	
	tr:debug_v("Tests","Trying to log nil value.")
	tr:debug_v("Tests","The values are ",1," ",2," ",nil," ", 4," and that's all.")
end
