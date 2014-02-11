--[[
Class: utils.app

Application support functions
]]


local base = require 'utils.base'
local path = require 'utils.path'
local assert = require "utils.assert"
local throw = base.throw
local log = require "log"


local app = {}

--[[
Function: parse_args

Implementation taken from penlight library.

Parse command-line arguments into flags and parameters.
Understands GNU-style command-line flags; short (`-f`) and long (`--flag`).
These may be given a value with either '=' or ':' (`-k:2`,`--alpha=3.2`,`-n2`);
note that a number value can be given without a space.
Multiple short args can be combined like so: ( `-abcd`).

Parameters:
    args - an array of strings (default is the global `arg`)
    flags_with_values - any flags that take values, e.g. {out=true}

Returns:
    a table of flags (flag=value pairs), an array of parameters

    An error is returned if args is nil, and the global `args` is not available!
]]
function app.parse_args (args, flags_with_values)
  
  if not args then
    args = _G.arg
    log.error("First error!")
    if not args then throw "Not in a main program: 'arg' not found" end
  end

  -- throw "This is an error."

  flags_with_values = flags_with_values or {}
  local _args = {}
  local flags = {}
  local i = 1
  while i <= #args do
    local a = args[i]
    local v = a:match('^-(.+)')
    local is_long
    if v then -- we have a flag
        if v:find '^-' then
          is_long = true
          v = v:sub(2)
        end
        if flags_with_values[v] then
          if i == #_args or args[i+1]:find '^-' then
            return throw ("no value for '"..v.."'")
          end
          flags[v] = args[i+1]
          i = i + 1
        else
          -- a value can also be indicated with =
          local var,val =  base.splitv (v,'=')
          var = var or v
          val = val or true
          if not is_long then
            if #var > 1 then
              if var:find '.%d+' then -- short flag, number value
                val = var:sub(2)
                var = var:sub(1,1)
              else -- multiple short flags
                for i = 1,#var do
                  flags[var:sub(i,i)] = true
                end
                val = nil -- prevents use of var as a flag below
              end
            else  -- single short flag (can have value, defaults to true)
                val = val or true
            end
          end
          if val then
              flags[var] = val
          end
      end
      else
        _args[#_args+1] = a
      end
      i = i + 1
  end
  return flags,_args
end

return app
