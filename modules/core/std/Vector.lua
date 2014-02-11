local Class = require("classBuilder"){name="Vector",bases="base.Object"};

local oo = require "loop.cached"

-- This module defines a simple vector class encapsulating a lua table.
--local oo = require "loop.base"
--local type = type
--local rawget = rawget
--local table = table
--local ipairs = ipairs
--local next = next
--local print = print

function Class:initialize(options)
	self._data = {}
	if options then
		self:fromTable(options)
	end
end

--- Append item at vector back.
-- Push an item at the end of the vector.
-- @param item The item to add 
function Class:push_back(item)
    table.insert(self._data,item);
end

function Class:concat(sep)
	if self:empty() then
		return "";
	end
	
	return table.concat(self._data,sep or "");
end

--- Append item at vector front.
-- Push an item at the front of the vector.
-- @param item The item to add
function Class:push_front(item)
    table.insert(self._data,1,item);
end

function Class:append(list)
	self:check(list,"Invalid sequence.")
	for _,val in list:sequence() do
		self:push_back(val)
	end
	return self;
end

function Class:__add(list)
	return self:append(list)
end

--- Insert item at given position.
-- Insert an item at the provided position.
-- @param index 1-based index of insertion
-- @param item The item to insert
function Class:insert(index,item)
    table.insert(self._data,index,item)
end

local lessFunc = function(x,y) return x<y; end

function Class:ordered_insert(item,sortfn)
	self:check(item,"Cannot insert nil item.")
	
	-- we should have: sortfn(x,y) return x<y end 
	sortfn = sortfn or lessFunc
	
	-- use the function to find where to item should be inserted:
	if #self._data==0 then
		table.insert(self._data,1,item);
		return 1;		
	end
	
	-- the vector is not empty, so we need to check the values:
	for k,v in ipairs(self._data) do
		if sortfn(item,v) then
			table.insert(self._data,k,item);
			return k;
		end
	end
	
	table.insert(self._data,item);
	return #self._data
end

--- Pop the latest item from the vector.
-- This function will remove the lastest item from the vector and return it.
-- @return the popped item
function Class:pop_back()
    return table.remove(self._data)
end

function Class:sort(fn)
	table.sort(self._data,fn)
end

--- Pop the first item from the vector.
-- This function will remove the first item from the vector and return it.
-- @return the popped item
function Class:pop_front()
    return table.remove(self._data,1)
end

--- Pop the item from the vector.
-- This function will remove the item at the given index from the vector and return it.
-- @param index 1-based index
-- @return the popped item
function Class:erase(index)
    return table.remove(self._data,index)
end

--- Get the size of the vector.
-- @return vector size
function Class:size()
    return #self._data
end

--function Class:__eq(rhs)
--	return rhs and rhs:isInstanceOf(Class) and self._data = rhs._data
--end

function Class:__tostring()
	local vec = {}
	for k,v in self:sequence() do
		table.insert(vec,tostring(v))
	end
	
	return "{" .. table.concat(vec,", ") .. "}"
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
    --return next, self._data, 0
    return ipairs(self._data)
end

--- Retrieve the back value
-- @return the value at the back of the vector or nil if there is no data
function Class:back()
    return self._data[#self._data]
end

--- Retrieve the front value
-- @return the value at the front of the vector or nil if there is no data
function Class:front()
    return self._data[1]
end

--- Clear the content of the vector
function Class:clear()
    self._data = {}
end

--- Return a copy of the vector.
function Class:clone()
    return self:getClassOf()(self._data)
end

-- Metamethod to map the vector indices.
function Class:__index(field)
    return ( (type(field)=="number" and self._data[field]) or Class[field] )
end

--- Return value at position.
function Class:at(index)
    return self._data[index]
end

--- Convert retrieve the data from the input table.
-- copy the data from the input table into the vector.
-- @param t The table to copy, may be nil.
function Class:fromTable(t)
    local newdata = {}
    for _,v in ipairs(t or {}) do
        table.insert(newdata,v)
    end
    self._data = newdata
end

--- Convert the vector object into a simple table.
function Class:toTable()
    local newdata = {}
    for _,v in ipairs(self._data) do
        table.insert(newdata,v)
    end
    
    return newdata;
end

-- Execute the provided function for each element in the vector.
function Class:foreach(func)
	for _,v in ipairs(self._data) do
        func(v)
    end
end

--- Retrieve all the elements matching a given predicate function:
function Class:getMatches(func)
	local list = oo.classof(self)()
	for _,v in ipairs(self._data) do
		if func(v) then
			list:push_back(v)
		end
	end
	return list
end

-- Find the first element in the list that passes the given predicate test.
function Class:find(func)
	for _,v in ipairs(self._data) do
		if func(v) then
			return v
		end
	end
end

Class.last = Class.back
Class.first = Class.front
Class.remove = Class.erase

return Class
