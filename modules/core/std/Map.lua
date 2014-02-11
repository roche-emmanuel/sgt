local Class = require("classBuilder"){name="Map",bases="base.Object"}

--- the init function to build a vector:
function Class:initialize(options)
	self._data = {}
	if options then
		self:fromTable(options)
	end
end

--- Set an item in the map:
function Class:set(key,item)
    if key then
        self._data[key] = item
    end
end

--- Get an item from the map:
function Class:get(key)
	if key~=nil then
		return self._data[key]
	end
end

--- Check if we have a given item in the map:
function Class:has(key)
	if key~=nil then
		return self._data[key]~=nil
	end
	return false;
end

function Class:getOrCreate(key,subclass)
	self:check(key~=nil,"Invalid key.")
	self:check(subclass~=nil,"Invalid key.")
	
	local val = self._data[key]
	if not val then
		val = subclass();
		self._data[key] = val;
	end
	return val;
end

--- Erase a value from the map by key
function Class:erase(key)
    if key then
        self._data[key] = nil
    end
end

--- Get the size of the map.
-- @return map size
function Class:size()
    local count = 0
    for _,_ in pairs(self._data) do
        count = count+1
    end
    return count
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
    --return next,self._data,nil
    return pairs(self._data)
end

--- Clear the content of the vector
function Class:clear()
    self._data = {}
end

--- Return a copy of the vector.
function Class:clone()
    return oo.classof(self)(self._data)
end

-- Metamethod to map the vector indices.
function Class:__index(field)
    return (Class[field] or self._data[field])
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function Class:fromTable(t)
    local newdata = {}
    for k,v in pairs(t or {}) do
        newdata[k] = v;
    end
    self._data = newdata
end

--- Convert the vector object into a simple table.
function Class:toTable()
    local newdata = {}
    for _,v in pairs(self._data) do
        table.insert(newdata,v)
    end
    
    return newdata;
end

Class.remove = Class.erase

return Class;
