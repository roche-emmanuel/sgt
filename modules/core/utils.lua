local utils = {}

local lpeg = require "lpeg" -- using lpeg for string splitting.

--- Concatenate vector entries as a string.
-- Concatenate all the entries in a integer indexed table with a separator value
-- the default value for the separator is ', '
-- @param list The table whoose entries should be concatenated
-- @param sep The separator to use for the concatenation.
-- @return The Concatenated string
-- @return The number of items in the list
function utils.concatenateStrings(list,sep)
    local num = #list
    if(num == 0) then
        return "", num
    end
    
    sep = sep or ", "
    local result = "";

    for _,v in ipairs(list) do
        result = result .. v .. sep;
    end    
    
    -- Remove the final separator:
    result = result:sub(1,-sep:len()-1)
    return result, num;
end

--- Concatenate entries in a Vector as a string.
-- Concatenate all the entries in a OrderedSet with a separator value
-- the default value for the separator is ', '
-- @param list The Vector whoose entries should be concatenated. This orderedSet must provide a sequence() function returning the iteration details.
-- @param sep The separator to use for the concatenation.
-- @return The Concatenated string
-- @return The number of items in the set
function utils.concatenateVector(set,sep)    
    sep = sep or ", "
    local result = "";
    local count = 0
    for _,v in set:sequence() do
        result = result .. v .. sep;
        count = count + 1
    end    
    
    -- Remove the final separator:
    result = result:sub(1,-sep:len()-1)
    return result, count;
end

--- Simple function to get a string hash.
-- The hash code is generated using each character of the string.
-- @param str The string to hash.
-- @return The hash code as a number
function utils.getHash(str)
	local n=#str
	local h=0
	for i=1,n do
		h=31*h+string.byte(str,i)
		h=math.fmod(h,100000000+i)
	end
	return h
end


-- Split a string into a table based on a defined separator.
-- See "Splitting a string" example from http://www.inf.puc-rio.br/~roberto/lpeg/lpeg.html#ex
-- warning this method will not remove empty string by default
function utils.splitString (s, sep, pruneEmpty)
  	sep = lpeg.P(sep)
  	local elem = lpeg.C((1 - sep)^0)
  	local p = lpeg.Ct(elem * (sep * elem)^0)   -- make a table capture
  	if pruneEmpty then
		local res = lpeg.match(p, s)
		local result = {}
		for k,v in ipairs(res) do
			if v and v~="" then
				table.insert(result,v)
			end
		end
		
		return result;
  	else
  		return lpeg.match(p, s)
  	end
end


-- Return extended type info on an object when applicable.
function utils.typeEx(obj)
	local tObj = type(obj)
	if tObj == "userdata" and obj._CLASSNAME_ then
		return obj._CLASSNAME_
	elseif tObj=="table" and obj._CLASSNAME_ and obj._LIBRARYNAME_ then
		return obj._LIBRARYNAME_ .. "." .. obj._CLASSNAME_
	end

	return tObj;
end

function utils.subLine(str,...)
	for id,v in ipairs({...}) do
		str = str:gsub("%${"..id.."}",v)
	end
	return str
end

function utils.findIterator(from,to,val)
	local it = from:clone()
	while (it~=to) do
		if #it == val then 
			return it
		end
		it:inc()
	end
	return it
end

return utils
