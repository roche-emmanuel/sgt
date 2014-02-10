
local oo = require "loop.base"

local Map = require "std.Map"
local OrderedMap = require "std.OrderedMap"

local dbg = require "debugger"

-- This module contains the base functions needed to support writing library bindings
local TypeConverter = oo.class{}

TypeConverter.CLASS_NAME = "bindings.TypeConverter"

function TypeConverter:__init()
    local object = oo.rawnew(self,{})
	object.fromLuaConverters = OrderedMap()
	object.toLuaConverters = OrderedMap() 
	object.typeCheckers = OrderedMap()   
	object.wrapperConverters = OrderedMap()   
	object._TRACE_ = "TypeConverter"
    return object
end

function TypeConverter:setWrapperConverter(typename,converter)
	dbg:assert(type(converter)=="function", "Invalid function as towrapper converter.")
	self.wrapperConverters:set(typename,converter)
end

function TypeConverter:setTypeChecker(typename,checker)
	dbg:assert(type(checker)=="function", "Invalid function as type checker.")
	self.typeCheckers:set(typename,checker)
end

function TypeConverter:setFromLuaConverter(typename,converter)
	dbg:assert(type(converter)=="function", "Invalid function as fromlua converter.")
	self.fromLuaConverters:set(typename,converter)
end

function TypeConverter:setToLuaConverter(typename,converter)
	dbg:assert(type(converter)=="function", "Invalid function as tolua converter.")
	self.toLuaConverters:set(typename,converter)
end

function TypeConverter:getTypeChecker(typename)
	if not typename then
		return
	end
	
	for k,v in self.typeCheckers:sequence() do
		if typename:find(k) then
			return v
		end
	end	
end

function TypeConverter:getFromLuaConverter(typename)
	if not typename then
		return
	end
	
	for k,v in self.fromLuaConverters:sequence() do
		if typename:find(k) then
			return v
		end
	end	
end

function TypeConverter:getToLuaConverter(typename)
	if not typename then
		return
	end
	
	for k,v in self.toLuaConverters:sequence() do
		if typename:find(k) then
			return v
		end
	end
end

function TypeConverter:getWrapperConverter(typename)
	if not typename then
		return
	end
	
	for k,v in self.wrapperConverters:sequence() do
		if typename:find(k) then
			return v
		end
	end
end

return TypeConverter()
