module(..., package.seeall)

local Object = require "base.Object"
local log = require "tracer"
local cfg = require "config"

function test_object()
	-- create new class:
	local obj = Object()
	
	assert_equal(true,obj:isString("hello world"),"Invalid isString result");
	assert_equal(false,obj:isString(5.0),"Invalid negative isString result");
	
	assert_equal(true,obj:isNumber(5.0),"Invalid isNumber result");
	assert_equal(false,obj:isNumber("hello"),"Invalid negative isNumber result");
	
	assert_equal(true,obj:isInteger(5.0),"Invalid isInteger result");
	assert_equal(false,obj:isInteger(5.3),"Invalid negative isInteger result");

	assert_equal(true,obj:isNil(nil),"Invalid isNil result");
	assert_equal(false,obj:isNil("hello"),"Invalid negative isNil result");

end

function test_i18n()
	-- perform i18n tests here:
	local obj = Object()
	
	local locale = require "base.Locale"
	locale:setLocale("en")
	
	local msg = obj.i18n.hello_world 
	assert_equal("Hello world!",msg,"Invalid english translation")
	
	local msg = obj.i18n.missing_translation
	log:debug("Tests","Got missing translation: ",msg)
	
	locale:setLocale("fr")

	local msg = obj.i18n.hello_world 
	assert_equal("Bonjour le monde!",msg,"Invalid french translation")
	
	-- restore locale:
	locale:setLocale(cfg.default_locale)
end

function test_getTable()
	local obj1 = sgt.Object()
	assert_equal(nil,obj1:getTable(),"Invalid result in obj1");
	
	local tt = {}
	local obj2 = sgt.Object(tt)
	assert_equal(tt,obj2:getTable(),"Invalid result in obj2");
	log:info("Tests","Done testing derivation table access.")
end

