module(..., package.seeall)

local log = require "tracer"
local fs = require "base.FileSystem"

function test_number_format()
	log:info("Tests","Drawing simple MathGL image")

	local mgl = require "mathgl"
	
	local gr = mgl.mglGraph();
	gr:FPlot("sin(pi*x)");
	gr:WriteFrame(fs:getRootPath(true).."tests/mathgl_test.png");

	log:info("Tests","Done drawing simple MathGL image.")	
end

