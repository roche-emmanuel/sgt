local Class = require("classBuilder"){name="DMap",bases="std.Map"}

local Map = require "std.Map"

--- Set an item in the map:
function Class:set(key1,key2,item)
	--self:info("Calling Dmap::set()!!!")
    if key1 and key2 then
        local sub = Map.getOrCreate(self,key1,Map)
		sub:set(key2,item)
		--self:info("Setting (",key1,", ",key2,") =",item)
    end
end

--- Get an item from the map:
function Class:get(key1,key2)
	--self:info("Calling Dmap::get()!!!")
	if key1 and self._data[key1] then
		if key2~=nil then 
			--self:info("Getting (",key1,", ",key2,") =",self._data[key1]:get(key2))
			return self._data[key1]:get(key2) 
		else 
			return self._data[key1]
		end
	end
end

--- Check if we have a given item in the map:
function Class:has(key1,key2)
    if key1 and self._data[key1]~=nil then	
		return self._data[key1]:has(key2)
	end
end

function Class:getOrCreate(key1,key2,subclass)
	self:check(key1~=nil,"Invalid key.")
	self:check(key2~=nil,"Invalid key.")
	self:check(subclass~=nil,"Invalid key.")
	
	local sub = Map.getOrCreate(self,key1,Map)
	return sub:getOrCreate(key2,subclass)
end

--- Erase a value from the map by key
function Class:erase(key)
    if key then
        self._data[key] = nil
    end
end

--- Return a copy of the vector.
function Class:clone()
    self:no_impl()
end

-- Metamethod to map the vector indices.
function Class:__index(field)
    return (Class[field] or Map.__index(self,field))
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function Class:fromTable(t)
	self:no_impl()
end

--- Convert the vector object into a simple table.
function Class:toTable()
	self:no_impl()
end

return Class;
