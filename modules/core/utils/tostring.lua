
-- internal system to handle the current indent for the output string:
local indent = 0
local indentStr = "  " -- the indent string to use.
local writtenTables = {}
local currentLevel = 0
local maxLevel = 5;
local writeTable = nil -- forward declaration !

local resetState = function()
	indent = 0
	writtenTables = {}
	currentLevel = 0
end

-- method used internally to push an indent level
local pushIndent = function()
	indent = indent+1
end

-- method used internally to pop an indent level
local popIndent = function()
	indent = math.max(0,indent-1)
end

-- Method used internally to write the current indent to the table string buffer.
local writeIndent = function(result)
	table.insert(result,string.rep(indentStr,indent))
end

local writeLine = function(result,line)
	table.insert(result,line)
end

-- Method used to increment the current level value:
local incrementLevel = function()
	currentLevel = currentLevel+1
	if maxLevel == -1 then
		return true -- always accept new levels.
	else
		currentLevel = math.min(currentLevel,maxLevel)
		return currentLevel<maxLevel
	end
end

local decrementLevel = function()
	currentLevel = math.max(currentLevel-1,0)
end

local getID = function(obj)
	local objt = type(obj)
	if objt == "table" then
		return "[table #".. sgt.getLuaID(obj).."]"
	elseif objt == "userdata" then
		return "[userdata #".. sgt.getLuaID(obj).."]"
	elseif objt == "function" then
		return "[function #".. sgt.getLuaID(obj).."]"
	else
		return tostring(obj) -- default case.
	end
end

-- Core function to write anything to a string in the most appropriate way:
local writeString = function(obj,quote)
	local objt = type(obj)
	if objt == "nil" then
		return "<<nil>>"
		
	elseif objt == "boolean" then
		return obj and "true" or "false"
	
	elseif objt == "string" then
		return quote and '"'..obj..'"' or obj
	
	elseif objt == "table" then
		if obj.__tostring then
			return tostring(obj)
		elseif obj._CLASSNAME_ then
			return "< ".. obj._CLASSNAME_.. " (lua) >  ".. getID(obj) .. " ".. writeTable(obj)
		else
			return getID(obj) .. " " .. writeTable(obj)
		end
	elseif objt == "userdata" and obj._CLASSNAME_ then
		if obj.__tostring then
			return tostring(obj)
		else
			return "< " .. obj._CLASSNAME_ .. " (native) > ".. getID(obj)
		end
	elseif objt == "function" then
		return getID(obj)
	else
		return tostring(obj)
	end
end


-- method used internally to write a single table into a result table containing only 
-- strings to concatenate.
-- Note that this method assumes that the table header was already written with writeString()
local writeTableData = function(t,result)
	if type(t)~="table" then
		error("THe received argument for writeTable is not a table.")
	end

	if writtenTables[t] then
		-- If the table was already written in this cycle bypass it:
		writeLine(result,"(...already written...)")
	else
		-- Otherwise we need to write the table content:
		writeLine(result,"{\n")
		
		-- add the table into the set:
		writtenTables[t] = true
		
		pushIndent()
		if incrementLevel() then
			-- write each element of the table:
			for k,v in pairs(t) do
				writeIndent(result)
				writeLine(result,writeString(k) .. " = " .. writeString(v,true) .. ",\n")				
			end
			decrementLevel()
		else
			writeIndent(result)
			writeLine(result,"(...too many levels...)\n");
		end
		popIndent()
		writeIndent(result)
		writeLine(result,"}")
	end
end

-- Method used to write a table as a string.
writeTable = function(t)
	local result = {}
	writeTableData(t,result)
	return table.concat(result)
end

------------------------------------------------------------------------------
-- Public interface.

--[=[
--[[
Function: utils.tostring

Convert all the provided argments into a single string.

Parameters:
	... - All the arguments to convert.
  
Returns:
	The resulting concatenated string. If no argument is provided return an empty string.
]]
function utils.tostring(...)
]=]

local toString = function(...)
	resetState()
	
	local elems = {}
	local num = select('#', ...)
	for i=1,num do
		local v = select(i, ...)
		table.insert(elems,writeString(v))
	end	
	
	return table.concat(elems)
end

return toString;
