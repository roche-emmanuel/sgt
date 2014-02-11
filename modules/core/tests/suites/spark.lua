module(..., package.seeall)

local log = require "tracer"
if flavor=="ds411" then
	log:notice("Tests","Ignoring spark tests on ds411.")
	return
end

local spark = require "spark"
local osg = require "osg"
require "extensions.osg"

--[[function test_diamond_inheritance_handling()
	log:info("Tests","Testing spark diamond inheritance support.")
	local handler = spark.SparkUpdatingHandler();
	
	assert_not_equal(nil,handler,"Invalid SparkUpdatingHandler object.")
	local res1 = handler:dynCast("osg::Referenced")
	assert_not_equal(nil,res1,"Invalid res1 object.")
	
	--handler:removeSpark(1)

	log:info("Tests","Done testing spark diamond inheritance support.")
end
]]

