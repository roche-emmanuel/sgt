local Class = require("classBuilder"){name="OrderedMap",bases="std.Map"}

local Map = require "std.Map"
local Set = require "std.Set"

function Class:initialize(options)
	self._keys = self._keys or Set()
end

--- Set an item in the map:
function Class:set(key,item)
    if key then
        self._keys:push_back(key)
        self._data[key] = item
    end
end

--- Erase a value from the map by key
function Class:erase(key)
    if key then
        local cont, index = self._keys:contains(key)
        if cont then
            self._keys:erase(index)
        end
        self._data[key] = nil
    end
end

--- Get the size of the map.
-- @return map size
function Class:size()
    return self._keys:size()
end

--- Check vector emptyness.
-- @return true if the vector is empty, false otherwise.
function Class:empty()
    return next(self._data)==nil;
end

--- Iterate on the vector items
-- This function will return the iteration items compatible with the
-- for k,v in obj:sequence() do ... end
-- @return The iteration function
-- @return The data table to iterate on.
-- @return The initial index to start iterating
function Class:sequence()
    
    local index = 0
    function iterator (t, id)
        --LOG:info("Iterating with index " .. index)
        index = index + 1
        local key = self._keys[index]
        return key, key and self._data[key]
    end
    
    --LOG:info "Returning local iterator..."
    
    --return next,self._data,nil
    return iterator, self._data, 0
end

--- Clear the content of the vector
function Class:clear()
    self._data = {}
	self._keys = self._keys or Set() -- this might not be initialized when calling from table in the initialize function.
    self._keys:clear()
end

-- Metamethod to map the vector indices.
function Class:__index(field)
    return Class[field] or Map.__index(self,field)
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function Class:fromTable(t)
    self:clear()
    for k,v in pairs(t or {}) do
        self:set(k,v);
    end
end

--- Convert the vector object into a simple table.
function Class:toTable()
    local newdata = {}
    for k,v in self:sequence() do
        newdata[k] = v
    end
    
    return newdata;
end

return Class
