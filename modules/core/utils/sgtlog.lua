require "core"
require "extensions.core"

--[[
Class: utils.sgtlog

This is a minimal class providing access to log methods and constants.

This class contains a few logging functions for each possible log level listed below.

- fatal 
- error
- notice
- info
- debug
- debug0 to debug5

Note that in the previous list "debug" is an alias for "debug0". For each log level xxx we have access to the following static functions.

*Note* : For each function listed below the "xxxx" placeholder should be replaced with one of the level names, for instance:
(start example)
	local log = require "utils.sgtlog"
	log.info("Hello world")
	log.warn_t("Logger","This is a warning.")
(end)

The class also contains a list of all available levels in *Class.levels*.
]]

--[=[
--[[
Function: xxxx

Log a simple message.
This method will send the message as a simple log to the <sgt.LogManager> singleton.

Parameters:
	... - The arguments to write.
]]
function Class:xxxx(...)
]=]

--[=[
--[[
Function: xxxx_f

Log a simple message with formating.
This method will send the message as a simple log to the <sgt.LogManager> singleton.

Parameters:
	msg - The message string to send.
]]
function Class:xxxx_f(msg)
]=]

--[=[
--[[
Function: xxxx_v

Log a simple message when verbose is enabled.
This method will send the message as a simple log to the <sgt.LogManager> singleton.

Parameters:
	msg - The message string to send.
]]
function Class:xxxx_v(msg)
]=]

--[=[
--[[
Function: xxxx_t

Log a message with trace.
Will send the log to the <sgt.LogManager> with a given trace.

Parameters:
	trace - The trace string to use for this message
	msg - The message string to log.
]]
function Class:xxxx_t(trace,msg)
]=]

--[=[
--[[
Function: xxxx_tf

Log a message with trace when verbose is enabled.
Will send the log to the <sgt.LogManager> with a given trace.

Parameters:
	trace - The trace string to use for this message
	msg - The message string to log.
]]
function Class:xxxx_tf(trace,msg)
]=]

--[=[
--[[
Function: xxxx_tv

Log a message with trace when verbose is enabled.
Will send the log to the <sgt.LogManager> with a given trace.

Parameters:
	trace - The trace string to use for this message
	msg - The message string to log.
]]
function Class:xxxx_tv(trace,msg)
]=]

local Class = {}

local write = require "utils.tostring"

-- The supported log levels:
local list = {"FATAL","ERROR","NOTICE","INFO","DEBUG0","DEBUG1","DEBUG2",
			  "DEBUG3","DEBUG4","DEBUG5",warn="WARNING",debug="DEBUG0"}

local levels = {}

-- Inject the coorsponding functions:
local key
for k,v in pairs(list) do
	key = tonumber(k) and v:lower() or k
	local level = sgt.LogManager[v] -- the level must be local to avoid using the last level value only.
	levels[key] = level
	
	Class[key] = function(...) sgt.doLog(level,write(...)) end
	Class[key.."_f"] = function(fmt,...) sgt.doLog(level,fmt:format(...)) end
	Class[key.."_v"] = function(...) sgt.doLogV(level,write(...)) end

	Class[key.."_t"] = function(trace,...) sgt.doTrace(level,trace,write(...)) end
	Class[key.."_tf"] = function(trace,fmt,...) sgt.doTrace(level,trace,fmt:format(...)) end
	Class[key.."_tv"] = function(trace,...) sgt.doTraceV(level,trace,write(...)) end
end

Class.levels = levels

return Class