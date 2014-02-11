--[[
Class: utils.base

Base utility functions.

]]

local Class = {}

local write = require "utils.tostring"
local log = require "log"
local assert = require "utils.assert"
local append = table.insert

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

--[=[
--[[
Function: stacktrace

Return the current stack trace.	
  
Parameters:
	... - Any argument to print in from of the stack
	
Returns:
	The trace as a string.
]]
function base.stacktrace()
]=]
local stacktrace = function(...)
	return debug.traceback(write(...),errorlevel()-1)
end

--[=[
--[[
Function: printStacktrace

Print the current stack trace. The stack trace is printed on the debug log level.

Parameters:
	... - Any argument to print in from of the stack  
]]
function base.printStacktrace()
]=]
local printStacktrace = function(...)
	log.debug(stacktrace(...))
end

--[[
Function: throwObject

Throw a single object. The object can be anything.

Parameters:
	object - The object to throw
]]
local throwObject = function(object)
	error(object,errorlevel())
end

--[=[
--[[
Function: throw

Method used to throw an error.

Parameters:
	... - Any argument to print as the error message.	  
]]
function base.throw()
]=]
local throw = function(...)
	local Exception = require "core.Exception"
	throwObject(Exception{write(...),stack=stacktrace()})
end

--[=[
--[[
Function: deprecated

Simple deprecation method.
This method can be used to notify that a given function/method should be considered deprecated.

Parameters:
	... - Message to output.
]]
function base.deprecated(...)
]=]
local deprecated = function(...)
	log.warn(stacktrace("Deprecated: ",...))
end


--[=[
--[[
Function: getOSName

Retrieve the name of the OS.

Returns:
	The name of the current OS.
]]
function base.getOSName()
]=]
local getOSName = function()
	return require('ffi').os
end

--[=[
--[[
Function: isWindows

Check if the current OS is a windows OS.
  
Returns:
	True is the OS is Windows, false otherwise.
]]
function base.isWindows()
]=]
local isWindows = function()
	return getOSName():find('^Windows')~=nil
end

--[=[
--[[
variable: is_windows

Check if the current OS is a windows OS.
True is the OS is Windows, false otherwise.
]]
boolean base.is_windows
]=]

--[[
Function: escape

escape any 'magic' characters in a string

Parameters:
	s - The string to be escaped.
  
Returns:
	The escaped string.
]]
function Class.escape(s)
    assert.String(s)
    return (s:gsub('[%-%.%+%[%]%(%)%$%^%%%?%*]','%%%1'))
end

--[[
Function: choose

Return either of two values, depending on a condition.

Parameters:
	cond - The condition to check
	value1 - value returned if cond is true
	value2 - (optional) value returned if cond is false
]]
function Class.choose(cond,value1,value2)
    if cond then 
		return value1
    else 
		return value2
    end
end

--[[
Function: execute

Execute a shell command.

Parameters:
	cmd - a shell command
  
Returns:
	true if successful, false otherwise. Then the actual return code.
]]
function Class.execute(cmd)
	local res1 = os.execute(cmd)
	return res1==0, res1
end

--[[
Function: trimLeft

Trim a string on left only using the given pattern.

Parameters:
	s - The string to trim
	re - the trim pattern. Note that this pattern should *not* contain the "^" or the "$" symbols or
no trim operation will occur.
  
Returns:
	The trimed string
]]
function Class.trimLeft(s,re,plain)
	assert.String(s)
	if re then assert.String(re) end
	re = re or "%s+"
	re = plain and Class.escape(re) or re
	local res,num = s:gsub("^"..re,"")
	if num > 0 then
		return Class.trimLeft(res,re) -- we do not pass plain here: re is already escaped.
	end
	return s
end

--[[
Function: trimRight

Trim a string on right only using the given pattern.

Parameters:
	s - The string to trim
	re - the trim pattern. Note that this pattern should *not* contain the "^" or the "$" symbols or
no trim operation will occur.
  
Returns:
	The trimed string
]]
function Class.trimRight(s,re,plain)
	assert.String(s)
	if re then assert.String(re) end
	re = re or "%s+"
	re = plain and Class.escape(re) or re
	local res,num = s:gsub(re.."$","")
	if num > 0 then
		return Class.trimRight(res,re) -- we do not pass plain here: re is already escaped.
	end
	return s
end

--[[
Function: trim

Trim a string on left and right using the given pattern.

Parameters:
	s - The string to trim
	re - the trim pattern. Note that this pattern should *not* contain the "^" or the "$" symbols or
no trim operation will occur.
  
Returns:
	The trimed string
]]
function Class.trim(s,re,plain)
	return Class.trimLeft(Class.trimRight(s,re,plain),re,plain)
end

--[[
Function: split

split a string into a list of strings separated by a delimiter.

Parameters:
	s - The input string
	re - A Lua string pattern; defaults to '%s+'
	plain - don't use Lua patterns
	n - optional maximum number of splits
	
Returns:
	A list-like table. Raise an error if s is not a string.
]]
function Class.split(s,re,withEmpty,plain,n)
    assert.String(s)
	-- s = Class.trim(s,re,plain)
	
    local find,sub,append = string.find, string.sub, table.insert
    local i1,ls = 1,{}
    if not re then re = '%s+' end
    if re == '' then return {s} end
    while true do
        local i2,i3 = find(s,re,i1,plain)
        if not i2 then
            local last = sub(s,i1)
            if (withEmpty or last ~= '') then append(ls,last) end
            if #ls == 1 and ls[1] == '' then
                return {}
            else
                return ls
            end
        end
				local val = sub(s,i1,i2-1)
        if (withEmpty or val ~= '') then append(ls,val) end
        if n and #ls == n then
            ls[#ls] = sub(s,i1)
            return ls
        end
        i1 = i3+1
    end
end

--[[
Function: splitv

--- split a string into a number of values.
-- @param s the string
-- @param re the delimiter, default space
-- @return n values
-- @usage first,next = splitv('jane:doe',':')
-- @see split
]]
function Class.splitv(s,re)
	return unpack(Class.split(s,re))
end

--[[
Function: readFile

Return the contents of a file as a string.

Parameters:
	filename - The file path.
	is_bin - (optional) open in binary mode if true.
  
Returns:
	The content of the file as a string.
]]
function Class.readFile(filename,is_bin)
    local mode = is_bin and 'b' or ''
    assert.String(filename)
    local f,err = io.open(filename,'r'..mode)
    if not f then return throw (err) end
    local res,err = f:read('*a')
    f:close()
    if not res then return throw (err) end
    return res
end

--[[
Function: writeFile

Write a string to a file.

Parameters:
	filename - The file path
	str - The string
  
Returns:
	True in case of success, false and error message otherwise.
]]
function Class.writeFile(filename,str)
    assert.String(filename)
    assert.String(str)
    local f,err = io.open(filename,'w')
    if not f then return throw(err) end
    f:write(str)
    f:close()
    return true
end

--[[
Function: readLines

Return the contents of a file as a list of lines.
Note that this method will not count any final empty line as a valid line.

Parameters:
	filename - The file path
	
Returns:
	The file content as a table.
]]
function Class.readLines(filename)
    assert.String(filename)
    local f,err = io.open(filename,'r')
    if not f then return throw(err) end
    local res = {}
    for line in f:lines() do
        append(res,line)
    end
    f:close()
    return res
end

----------------------------------------------------------------------------
-- Public interface:

Class.stacktrace = stacktrace
Class.printStacktrace = printStacktrace
Class.throw = throw
Class.throwObject = throwObject
Class.deprecated = deprecated
Class.getOSName = getOSName
Class.isWindows = isWindows
Class.is_windows = isWindows()

return Class;
