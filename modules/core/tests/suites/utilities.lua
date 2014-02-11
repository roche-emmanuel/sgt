module(..., package.seeall)

local log = require "tracer"
local utils = require "utils"

function test_typeEx()
	local core = require "core"
	
	local str = "text"
	local tstr = utils.typeEx(str)
	assert_equal("string",tstr,"Invalid string type detected.")
	
	local man = core.LogManager.instance()
	local tman = utils.typeEx(man)
	assert_equal("sgt.LogManager",tman,"Invalid LogManager type detected.")
end

function test_split_string()
	log:info("Tests","Testing split string")

	local str1 = "aa.bb.cc.dd.ee"
	local v1 = {"aa","bb","cc","dd","ee"}
	
	local res = utils.splitString(str1,".")
	assert_equal(#v1,#res,"Invalid result 1 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 1 table value.")
	end
		
	local str1 = "aa/bb/cc/dd/ee"
	local v1 = {"aa","bb","cc","dd","ee"}
	
	local res = utils.splitString(str1,"/")
	assert_equal(#v1,#res,"Invalid result 2 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 2 table value.")
	end
	
	local str1 = "aa/bb//dd/"
	local v1 = {"aa","bb","","dd",""}
	
	local res = utils.splitString(str1,"/")
	assert_equal(#v1,#res,"Invalid result 3 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 3 table value.")
	end

	local str1 = "aa/bb//dd/"
	local v1 = {"aa","bb","dd"}
	
	local res = utils.splitString(str1,"/",true)
	assert_equal(#v1,#res,"Invalid result 3b table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 3b table value.")
	end
		
	local str1 = "world"
	local v1 = {"world"}
	
	local res = utils.splitString(str1,"/")
	assert_equal(#v1,#res,"Invalid result 4 table size.")
	for k,v in ipairs(v1) do
		assert_equal(v,res[k],"Invalid result 4 table value.")
	end

	log:info("Tests","Split string test done.")
end
