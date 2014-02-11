module(..., package.seeall)

local Vector = require "std.Vector"
local Set = require "std.Set"
local Map = require "std.Map"
local Scope = require "reflection.Scope"
local Function = require "reflection.Function"
local Class = require "reflection.Class"
local oo = require "loop.cached"

function test_instanceof()
    local vec = Vector()
    
    assert_equal(true,oo.instanceof(vec,Vector),"Invalid instance type")
    
    local scope = Scope()
    scope:setName("hello")
    
    assert_equal(false,oo.instanceof(scope,Vector),"Invalid Scope instance type")
    assert_equal(Scope,oo.classof(scope),"Invalid Scope instance type")
end

--[[
function test_function_equality()
    local f1 = Function()
    local f2 = Function()
    f1:setName("func1")
    f2:setName("func2")
    
    assert_equal(false,f1==f2,"functions are equals!")
    
    f2:setName("func1")
    assert_equal(false,f1==f2,"functions are not equals!")
end
]]

function test_function_name()
    local func = Function()
    
    func:setName("Coucou")
    assert_equal("Coucou",func:getName(),"wrong name in function")
end

function test_class_name()
	local class = Class()
	
	class:setName("Coucou")
	assert_equal("Coucou",class:getName(),"wrong name in class")
end
