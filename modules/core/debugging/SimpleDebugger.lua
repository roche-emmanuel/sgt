local oo = require "loop.base"
local ooc = require "loop.cached"
local log = require "logger"

local tracer = require "tracer"

local SimpleDebugger = oo.class{}

SimpleDebugger.CLASS_NAME = "debugger.SimpleDebugger"

--- Assertion function. 
-- To check status of variables
-- during the execution of a program.
-- @param cond Condition to check, if this evaluates  to false
-- then the give message is displayed (plus additional infos)
-- @param msg The message to output.
function SimpleDebugger:assert(cond,msg,...)
	if not cond then
		log:error(msg,...)
		self:backtrace()
		error("Assertion error occured")
	end
end

function SimpleDebugger:error(msg,...)
	log:error(msg,...)
	self:backtrace()
	error("Error occured.")
end

--- Assert got == exp.
function SimpleDebugger:assertEqual(got,exp,msg,...)
	if got ~= exp then
		log:error(got, " ~= ", exp, "\n",msg,...)
		self:backtrace()
		error("Equal assertion error occured.")		
	end
end

--- Assert a given object is nil.
-- @param obj The object that should be nil.
function SimpleDebugger:assertNil(obj,msg,...)
	return self:assert(obj==nil,msg,...)
end

--- Check object type.
-- Check if the class of a given object is a subclass
-- of the given super class
-- @param obj The object to ckeck
-- @param base the super class the object should inherit from
-- @param strict If this is true then the object should match
-- exactly the base type (no derived class allowed).
function SimpleDebugger:assertType(obj,base,strict)
	if not obj then 
		return 
	end
	
	local obj_class = ooc.classof(obj)
	if not (obj_class == base or (not strict and ooc.subclassof(obj_class,base))) then
		log:error("Expected class ",base.CLASS_NAME," and got ",obj_class.CLASS_NAME);
		self:backtrace()
		error("Type assertion error occured.")			
	end 
end

function SimpleDebugger:deprecated(msg)
	tracer:warn("Deprecated",msg)
	tracer:warn("Deprecated","Current stack trace:\n",debug.traceback())
end

function SimpleDebugger:simpleBacktrace(msg)
	log:error(debug.traceback(msg))
end

--- Retrieve backtrace information.
function SimpleDebugger:backtrace(level)
	level = level or 1
   
	while true do
		local info=debug.getinfo(level)
      	local k=info.name
      	if k==nil then
	 		break
      	else
	 		log:error('----------------------------------------------------------')
	 		log:pushIndent()
	 		log:error('Level: ', level)
	 		log:error(info.short_src..":"..info.currentline..":"..k)
	 		log:error('Local variables:',self:getLocals(level))
	 		log:popIndent()
	 		level=level+1
      	end
   	end
end

--- Print the locals for a given debug level.
-- @param level The level to consider
function SimpleDebugger:getLocals(level)
	local output={}
	level=level or 1
	local cur=1
	while true do
		if debug.getinfo(level, 'n')==nil then 
			return output 
		end
		
		local k,v=debug.getlocal(level, cur)
		if k~=nil then
			output[k]=v or "(nil)"
			cur=cur+1
		else
			break
		end
	end

	return output	
end

return SimpleDebugger
