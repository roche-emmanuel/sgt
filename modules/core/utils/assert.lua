--[[
Class: utils.assert

Implementation of assertion calls.
]]

local log = require "log"
local write = require "utils.tostring"
local oo = require "loop.cached"

local path

local Meta = {}

local errorlevel = function()
  -- find the first level, not defined in the same file as this
  -- code file to properly report the error
  local level = 1
  local info = debug.getinfo(level)
  local thisfile = (info or {}).source
  while thisfile and thisfile == (info or {}).source do
    level = level + 1
    info = debug.getinfo(level)
  end
  if level > 1 then level = level - 1 end -- deduct call to errorlevel() itself
  return level
end

local stacktrace = function(...)
	return debug.traceback(write(...),errorlevel()-1)
end

local throwObject = function(excep)
	error(excep,errorlevel())
end

local throw = function(...)
	-- retrieve the stacktrace:
	local Exception = require "core.Exception"
	throwObject(Exception{write(...),stack=stacktrace()})
end

local quote = function(arg)
	return type(arg)=="string" and '"'..arg..'"' or arg
end

local onError0 = function(reason,...)
	throw("Assertion failed: (=> ",reason,"): ",...)
end

local onError1 = function(val,reason,...)
	throw("Assertion failed: [value=",quote(val),"] (=> ",reason,"): ",...)
end

local onError2 = function(val1,val2,reason,...)
	throw("Assertion failed: [value1=",quote(val1),", value2=",quote(val2),"] (=> ",reason,"): ",...)
end

local doTest1 = function(result,val,reason,...)
	if result then
		return val
	end
	onError1(val,reason,...)
end

local doTest2 = function(result,val1,val2,reason,...)
	if result then
		return
	end
	onError2(val1,val2,reason,...)
end

local doTest0 = function(result,reason,...)
	if result then
		return
	end
	onError0(reason,...)
end

--- Meta method to handle the calls assert(val,msg,...)
Meta.__call = function(self,val,...)
	return doTest1(val,val,"is false or nil",...)
end

local Class = {}

--[[
Function: True

Method to check if a given value is true.

Parameters:
	val - The value to be tested.
	
Returns:
	The value itself if it is true, an error is triggered otherwise.
]]
function Class.isTrue(val,...)
	return doTest1(val==true,val,"is not true",...)
end

function Class.isFalse(val,...)
	return doTest1(val==false,val,"is not false",...)
end

function Class.isString(val,...)
	return doTest1(type(val)=="string",val,"is not a string",...)
end

function Class.isTable(val,...)
	return doTest1(type(val)=="table",val,"is not a table",...)
end

function Class.isFunction(val,...)
	return doTest1(type(val)=="function",val,"is not a function",...)
end

function Class.isBoolean(val,...)
	return doTest1(type(val)=="boolean",val,"is not a boolean",...)
end

function Class.isNonEmptyString(val,...)
	return doTest1(type(val)=="string" and #val>0,val,"is not a string or is the empty string",...)
end

function Class.areEqual(val1,val2,...)
	return doTest2(val1==val2,val1,val2,"are not equals",...)
end

function Class.isGreaterThan(val1,val2,...)
	return doTest2(val1 and val2 and val1<val2,val1,val2,"value2 is less or equal to value1",...)
end

function Class.isGreaterOrEqualTo(val1,val2,...)
	return doTest2(val1 and val2 and val1<=val2,val1,val2,"value2 is less than value1",...)
end

function Class.isLessThan(val1,val2,...)
	return doTest2(val1 and val2 and val1>val2,val1,val2,"value2 is greater or equal to value1",...)
end

function Class.isLessOrEqualTo(val1,val2,...)
	return doTest2(val1 and val2 and val1>=val2,val1,val2,"value2 is greater than value1",...)
end

function Class.areNotEqual(val1,val2,...)
	return doTest2(val1~=val2,val1,val2,"are equals",...)
end

function Class.isNil(val,...)
	return doTest1(val==nil,val,"is not nil",...)
end

function Class.isNotNil(val,...)
	return doTest1(val~=nil,val,"is nil",...)
end

function Class.hasError(func,...)
	if type(func)~="function" then
		doTest1(false,func,"is not a function",...)
	end
	
	local status, msg = pcall(func)
	doTest0(status==false,"function didn't trigger an error.",...)
end

function Class.noError(func,...)
	if type(func)~="function" then
		doTest1(false,func,"is not a function",...)
	end
	
	local status, msg = pcall(func)
	doTest0(status==true,"function did trigger an error.",...)
end

function Class.isFile(val,...)
	path = path or require "utils.path"
	return doTest1(path.isFile(val),val,"is not a file",...)	
end

function Class.isDir(val,...)
	path = path or require "utils.path"
	return doTest1(path.isDir(val),val,"is not a dir",...)	
end

function Class.isInstanceOf(class,obj,...)
	local obj_class = oo.classof(obj)
	local res = obj~=nil and (obj_class==class or oo.subclassof(obj_class,class))	
	return doTest1(res,obj,"is not an instance of ".. class._CLASSNAME_,...)
end

Class.True = Class.isTrue
Class.False = Class.isFalse
Class.Nil = Class.isNil
Class.notNil = Class.isNotNil
Class.String = Class.isString
Class.Table = Class.isTable
Class.Function = Class.isFunction
Class.Bool = Class.isBoolean
Class.Boolean = Class.isBoolean
Class.File = Class.isFile
Class.Dir = Class.isDir
Class.InstanceOf = Class.isInstanceOf
Class.gt = Class.isGreaterThan
Class.gte = Class.isGreaterOrEqualTo
Class.lt = Class.islessThan
Class.lte = Class.islessOrEqualTo
Class.equals = Class.areEqual
Class.equal = Class.areEqual
Class.notEquals = Class.areNotEqual
Class.notEqual = Class.areNotEqual
Class.nonEmptyString = Class.isNonEmptyString

return setmetatable(Class,Meta)
