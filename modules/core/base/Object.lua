--[[
Class: base.Object

This is the absolute base object.
]]
local className = "base.Object"

local oo = require "loop.cached"

local log = require "tracer"

if config and config.use_stack_plus then
	local STP = require "StackTracePlus"
	debug.traceback = STP.stacktrace
end

require("logger"):debug0_v("Generating class ",className)

local Object = oo.class{}
Object.CLASS_NAME = className

-- Additional data to support i18n:
Object.i18n = require "i18n"

function Object:__init(options,instance)
	local obj = oo.rawnew(self,instance or {})
	obj._TRACE_ = className
	
	return obj
end

function Object:supers()
	return oo.supers(oo.classof(self))
end

function Object:isString(var)
	return type(var)=="string"
end

function Object:isNonEmptyString(var)
	return type(var)=="string" and #var>0
end

function Object:isEmptyString(var)
	return var==""
end

function Object:isTable(var)
	return type(var)=="table"
end

function Object:isNumber(var)
	return type(var)=="number"
end

function Object:isFunction(var)
	return type(var)=="function"
end

function Object:isNil(var)
	return type(var)=="nil"
end

function Object:isInteger(var)
	return type(var)=="number" and math.floor(var)==var
end

function Object:check(cond,msg,...)
	if not cond then
		self:throw(msg,...)
	end
end

function Object:checkFunction(var,msg,...)
	if not self:isFunction(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkString(var,msg,...)
	if not self:isString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkTable(var,msg,...)
	if not self:isTable(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNonEmptyString(var,msg,...)
	if not self:isNonEmptyString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkEmptyString(var,msg,...)
	if not self:isEmptyString(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNumber(var,msg,...)
	if not self:isNumber(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkInteger(var,msg,...)
	if not self:isInteger(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:checkNil(var,msg,...)
	if not self:isNil(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

function Object:getClassOf(obj)
	return oo.classof(obj or self)
end

function Object:getAllClassMembers(obj)
	return oo.allmembers(self:getClassOf(obj))
end

function Object:isInstanceOf(class,obj)	
	local obj_class;
	if obj~=nil then
		obj_class = oo.classof(obj)
	else
		obj_class = oo.classof(self)	
	end
	
	return obj_class==class or oo.subclassof(obj_class,class)
end

function Object:checkType(obj,base,strict)
	if not obj then 
		return 
	end
	
	local obj_class = oo.classof(obj)
	if not (obj_class == base or (not strict and oo.subclassof(obj_class,base))) then
		self:throw("Expected class ",base.CLASS_NAME," and got ",obj_class.CLASS_NAME, " for object ", obj)
	end 
end

function Object:throw(msg,...)
	self:error(msg,...)
	self:backtrace()
	error("Stopping because error occured: '"..msg.."'\n at: ".. debug.traceback())
end

function Object:soft_no_impl(msg)
	self:warn(msg or "The function called is not implemented yet.")
	self:backtrace()
end

function Object:no_impl()
	self:error("The function called is not implemented yet.")
	self:backtrace()
	error("Stopping because of missing implementation.")
end

function Object:deprecated(msg)
	self:warn("Deprecated: ",msg)
	self:backtrace("warn")
end

function Object:backtrace(level)
	log[level or "error"](log,self,debug.traceback())
end

local sgtlog = require "utils.sgtlog"

for k,v in pairs(sgtlog.levels) do
	Object[k] = function(self,msg,...) 
		return log[k](log,type(self)=="table" and self._TRACE_ or self,msg,...); end
	Object[k.."_v"] = function(self,msg,...) 
		return log[k.."_v"](log,type(self)=="table" and self._TRACE_ or self,msg,...); end
end

function Object:getProperties()
	if not self._properties then
		self._properties = require("std.Map")()
	end
	
	return self._properties;
end

function Object:getProperty(pname)
	return self:getProperties():get(pname);
end

function Object:hasProperty(pname)
	return self:getProperties():has(pname);
end

function Object:setProperty(pname,val)
	return self:getProperties():set(pname,val);
end

function Object:getEventManager()
	if not self._eventManager then
		self._eventManager = require("base.EventManager")
	end
	
	return self._eventManager;
end

function Object:getWindowManager()
	if not self._windowManager then
		self._windowManager = require("gui.wx.WindowManager")
	end
	
	return self._windowManager;
end

return Object
