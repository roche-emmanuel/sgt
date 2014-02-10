
local oo = require "loop.cached"
local dbg = require "debugger"

local Set = require "std.Set"
local Map = require "std.Map"

local log = require "logger"

local Object = require "base.Object"

--- Class used to configure the piece of codes that should be ignored.
local IgnoreManager = oo.class{}

-- other categories: 
-- class_declaration

IgnoreManager.CLASS_NAME = "bindings.IgnoreManager"

function IgnoreManager:__init()
    local obj = Object:__init({})
    obj = oo.rawnew(self,obj)
    obj._TRACE_ = "IgnoreManager"
    obj._patternsMap = Map()
   
    obj:addPattern("class","@")
    obj:addPattern("class_declaration","@")
	
    return obj
end

function IgnoreManager:getPatterns(cat)
	local category = self._patternsMap:get(cat)
	if not category then
		category = Set();
		self._patternsMap:set(cat,category)
	end
	
	return category
end

--- Retrieve the ignore converters pattern set.
function IgnoreManager:getIgnoreClassesPatterns()
    return self:getPatterns("class")
end

function IgnoreManager:getIgnoreDefinesPatterns()
    return self:getPatterns("define")
end

function IgnoreManager:getIgnoreFunctionsPatterns()
    return self:getPatterns("function")
end

--- Retrieve the ignore converters pattern set.
function IgnoreManager:getIgnoreConvertersPatterns()
    return self:getPatterns("converter")
end

function IgnoreManager:getIgnoreHeadersPatterns()
	return self:getPatterns("header")
end

function IgnoreManager:addPattern(cat,pattern)
	self:getPatterns(cat):push_back(pattern)
end

function IgnoreManager:ignore(text,cat)
	local patterns = self:getPatterns(cat)
    for _,pattern in patterns:sequence() do
    	--log:info("Testing pattern=", pattern, " from cat=",cat," on text=",text)
        if text:find(pattern) then
        	log:notice("Ignoring ",cat," item '",text,"' because of ignore pattern '",pattern,"'")
            return true;
        end
    end
end

function IgnoreManager:ignoreFunction(func)
	return self:ignore(func:getPrototype(false,true),"function")
end

function IgnoreManager:ignoreHeader(header)
	return self:ignore(header,"header")
end

function IgnoreManager:ignoreDefine(def)
    return self:ignore(def:getName(),"define")
end

function IgnoreManager:ignoreWrapper(class,func)
	return self:ignore(func:getPrototype(false,class:getFullName()),"wrapper")
end

function IgnoreManager:ignoreClass(class)
	return self:ignore(class:getFullName(),"class")
end

function IgnoreManager:ignoreConverter(class)
	if self:ignoreClass(class) then
		return true;
	end

	return self:ignore(class:getFullName(),"converter")
end

local instance = IgnoreManager()

return instance

