local oo = require "loop.base"

require "core"
require "extensions.core"

--local sgt = require "core" -- load the core library.

-- Default logger class
local LoggerBase = oo.class{}

local levels = {}
levels.fatal = sgt.LogManager.FATAL
levels.error = sgt.LogManager.ERROR
levels.warn = sgt.LogManager.WARNING
levels.notice = sgt.LogManager.NOTICE
levels.info = sgt.LogManager.INFO
levels.debug = sgt.LogManager.DEBUG0
levels.debug0 = sgt.LogManager.DEBUG0
levels.debug1 = sgt.LogManager.DEBUG1
levels.debug2 = sgt.LogManager.DEBUG2
levels.debug3 = sgt.LogManager.DEBUG3
levels.debug4 = sgt.LogManager.DEBUG4
levels.debug5 = sgt.LogManager.DEBUG5

LoggerBase.levels = levels

function LoggerBase:__init()
	local obj = oo.rawnew(self,{})
	obj.indent = 0
	obj.indentStr = "   "
	--obj.writtenTables = require("std.Set")(); -- used to ensure each table is written only once in a table hierarchy.
	obj.writtenTables = {}
	obj.currentLevel = 0
	obj.maxLevel = 5
	return obj
end

function LoggerBase:pushIndent()
	self.indent = self.indent+1
end

function LoggerBase:popIndent()
	self.indent = math.max(0,self.indent-1)
end

function LoggerBase:incrementLevel()
	self.currentLevel = math.min(self.currentLevel+1,self.maxLevel)
	return self.currentLevel~=self.maxLevel; -- return false if we are on the max level.
end

function LoggerBase:decrementLevel()
	self.currentLevel = math.max(self.currentLevel-1,0)
end

--- Write a table to the log stream.
function LoggerBase:writeTable(t)
	local msg = "" -- we do not add the indent on the first line as this would 
	-- be a duplication of what we already have inthe write function.
	
	local id = tostring(t);
	
	if self.writtenTables[t] then
		msg = id .. " (already written)"
	else
		msg = id .. " {\n"
		
		-- add the table into the set:
		self.writtenTables[t] = true
		
		self:pushIndent()
		if self:incrementLevel() then
			local quote = ""
			for k,v in pairs(t) do
				quote = type(v)=="string" and not tonumber(v) and '"' or ""
				msg = msg .. string.rep(self.indentStr,self.indent) .. tostring(k) .. " = ".. quote .. self:writeItem(v) .. quote .. ",\n" -- 
			end
			self:decrementLevel()
		else
			msg = msg .. string.rep(self.indentStr,self.indent) .. "(too many levels)";
		end
		self:popIndent()
		msg = msg .. string.rep(self.indentStr,self.indent) .. "}"
		
		--local dbg = require "debugger"
		--dbg:assert(,"writtenTable set is invalid.");
	end
	
	return msg;
end

--- Write a single item as a string.
function LoggerBase:writeItem(item)
	if type(item) == "table" then
		-- concatenate table:
		return item.__tostring and tostring(item) or self:writeTable(item)
	elseif item==false then
		return "false";
	else
		-- simple concatenation:
		return tostring(item);
	end
end

--- Write input arguments as a string.
function LoggerBase:write(...)
	self.writtenTables = {};
	self.currentLevel = 0
	
	local msg = string.rep(self.indentStr,self.indent);	
	local num = select('#', ...)
	for i=1,num do
		local v = select(i, ...)
		msg = msg .. (v~=nil and self:writeItem(v) or "nil")
	end
	
	--for _,v in ipairs({...}) do
	--	msg = msg .. self:writeItem(v)
	--end
	
	return msg;
end

return LoggerBase
