local Class = require("classBuilder"){name="Set",bases="std.Vector"}

local Vector = require "std.Vector"

--- Check if item is already contained in set.
-- @return True if the item was found in the set, false otherwise.
-- @return The index of the item in the Set if found.
function Class:contains(item)
    if item==nil then
        return true; -- nil is contained!
    end
    
    for k,v in ipairs(self._data) do
        if v == item then
            return true, k;
        end
    end
    return false;
end

--- Erase an object from the Set by value.
function Class:eraseValue(item)
   	for k,v in ipairs(self._data) do
        if v == item then
			return self:erase(k)
        end
    end
end

function Class:eraseValueList(list)
	for _,v in list:sequence() do
		self:eraseValue(v)
	end
end

--- Remove all the elements matching a given predicate from this set:
-- return the list of removed items.
function Class:removeMatches(func)
	local list = self:getMatches(func)
	self:eraseValueList(list)
	return list
end

--- Append item at set back.
-- Push an item at the end of the set but only it the set doesn't contain the item yet.
-- @param item The item to add 
-- @return True if the item was added, false otherwise.
function Class:push_back(item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self._data,item);
    return true;
end

--- Append item at set front.
-- Push an item at the front of the set but only if the set doesn't contain the item yet.
-- @param item The item to add
-- @return True if the item was added, false otherwise.
function Class:push_front(item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self._data,1,item);
    return true
end

--- Insert item at given position.
-- Insert an item at the provided position.
-- @param index 1-based index of insertion
-- @param item The item to insert
function Class:insert(index,item)
    if self:contains(item) then
        return false;
    end
    
    table.insert(self._data,index,item)
    return true;
end

function Class:ordered_insert(item,sortfn)
    if self:contains(item) then
        return false;
    end

	return Vector.ordered_insert(self,item,sortfn)
end

-- Metamethod to map the vector indices.
function Class:__index(field)
   return (type(field)~="number" and Class[field]) or Vector.__index(self,field)
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the set, keeping only one copy of each item.
-- @param t The table to copy, may be nil.
function Class:fromTable(t)
    self:clear()
    for _,v in ipairs(t or {}) do
        self:push_back(v)
    end
end

return Class;
