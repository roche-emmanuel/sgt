module(..., package.seeall)

local builder = require "classBuilder"

function test_class_builder()
	-- create new class:
	local class = builder{bases="base.Object"}
	
	function class:__call()
		return 5;
	end
	
	-- create new instance of the class:
	local obj = class();
	
	assert_not_equal(nil,obj,"The class instance is nil.")
	
	assert_equal(5,obj(),"Invalid value when calling operator.")
end
