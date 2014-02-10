local oo = require "loop.cached"

local sgt = require "core"

-- Default logger class
local LoggerBase = require("logging.LoggerBase")

local DefaultTracer = oo.class({},LoggerBase)

function DefaultTracer:__init()
	local obj = LoggerBase:__init()
	obj = oo.rawnew(self,obj)
	return obj
end

local performLog = function(self,level,trace,...)
	if trace and trace ~= "" then
		sgt.doTrace(level,trace,self:write(...))
	else
		sgt.doLog(level,self:write(...))
	end
end

local performLogV = function(self,level,trace,...)
	if trace and trace ~= "" then
		sgt.doTraceV(level,trace,self:write(...))
	else
		sgt.doLogV(level,"default",self:write(...))
	end	
end

for k,v in pairs(LoggerBase.levels) do
	DefaultTracer[k] = function(self,trace,...) 
		return performLog(self,v,type(trace)=="table" and trace._TRACE_ or trace,...); end
	DefaultTracer[k.."_v"] = function(self,trace,...) 
		return performLogV(self,v,type(trace)=="table" and trace._TRACE_ or trace,...); end
end

return DefaultTracer
