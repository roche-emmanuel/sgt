-- this object class is constructed using the loop.cached class model:
local oo = require "loop.cached"

local log = require "log"
local assert = require "utils.assert"
local base = require "utils.base"

--[[
Class: core.Object

Absolute base class for all other classes.

For each log level, the base Object class provides the corresponding trace log method.

For instance the method *info_v* is mapped internally to *log.info_tv*. Note that the Object class doesn't provide
any *_t* method itself. When calling any of the log methods the intenal object field Object._TRACE_ is used as 
the trace value.
]]

local className = "core.Object"
log.debug_v("Generating class "..className)

local Object = oo.class{}

-- Each class should contain a _CLASSNAME_ field to store its name
Object._CLASSNAME_ = className
Object._TRACE_ = className

-- TODO: remove this variable to enforce local caching of config when needed.
--[[
Variable: cfg

This is the global level configuration table. It can be accessed by all 
classes inheriting from <core.Object>.
]]
Object.cfg = require "config"

--[[
Variable: throw

Global access to the <utils.base.throw> function
]]
Object.throw = base.throw


--[[
Variable: deprecated

Global access to the <utils.deprecated> library.
]]
Object.deprecated = base.deprecated

--[=[
--[[
Constructor: Object
Create a new instance of the class.
]]
function Object()
]=]

function Object:__init(options,instance)
	local obj = oo.rawnew(self,instance or {})
	return obj
end

-- add the log messages:
for lname,v in pairs(log.levels) do
	for sorig, sdest in pairs{_t="",_tf="_f",_tv="_v"} do
		local oname = lname..sorig
		local dname = lname..sdest
		Object[dname] = function(self,...) return log[oname](self._TRACE_,...); end
	end
end

--[[
Function: new

Method called when descending the class hierarchy.
This means that if B inherits from A then B:new(options) is called before A:new(options).
This method should be overriden in derived classes, and the default implementation does nothing.

Note that, even it the user doesn't provide his own implementation of new() a default one will be created
for each class created with the <utils.classbuilder>

Parameters:
	options - {table} (optional) Arguments to pass to the new method
]]
function Object:new(options)
	-- default implementation.
end

--[[
Function: initialize

Actual construction method called when ascending the class hierarchy.
This means that if B inherits from A then A:initialize(options) is called before B:initialize(options).

This method should be overriden in derived classes, and the default implementation does nothing.

Note that, even it the user doesn't provide his own implementation of initialize() a default one will be created
for each class created with the <utils.classbuilder>

Parameters:
	options - {table} (optional) Arguments to pass to the initialize method.
]]
function Object:initialize(options)
	-- default implementation.
end

function Object:doInitialize()
	-- default implementation.
end

--[[
Function: check

This method is an alias for the <assert> member

Parameters:
	val - Value to check
	... - (optional) message to output.
]]
function Object:check(val,...)
	return assert(val,...)
end

return Object
