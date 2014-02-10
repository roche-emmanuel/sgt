--[[

 Unit tests for the relational database module of the Lua/APR binding.

 Author: Peter Odding <peter@peterodding.com>
 Last Change: July 2, 2011
 Homepage: http://peterodding.com/code/lua/apr/
 License: MIT

 This script executes the real test in dbd-child.lua as a child process.

--]]

local status, apr = pcall(require, 'apr')
if not status then
  pcall(require, 'luarocks.require')
  apr = require 'apr'
end
local helpers = require 'apr.test.helpers'
return helpers.ld_preload_trick 'dbd-child.lua'
