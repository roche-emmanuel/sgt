local Class = createClass{name="DataMap",bases="core.Object"};


local split = function(str,sep)
	local list = {}
	
	local i1,i2,last
	
	while true do
		i1, i2 = str:find(sep)
		if not i1 then
			break
		end
		
		last = str:sub(1,i1-1)
		if last~="" then
			-- log:info("Found last key: '",last,"'")
			table.insert(list,tonumber(last) or last)
		end
		
		str = str:sub(i2+1)		
	end
	
	-- log:info("Returning from split: list=",list," last='",str,"'")
	return list, tonumber(str) or str
end


--[[
Class: core.DataMap

Simple Data map representation. This class is used to store and retrieve
key,value pairs in a hierarchical structure. Internally the data is saved
in a regular lua table. The data map separator (default value is the ".")
is used to build the table hierarchy.

This class inherits from <base.Object>.
]]

--[=[
--[[
Constructor: DataMap

Create a new instance of the class.
]]
function DataMap(options)
]=]
function Class:initialize(options)
	self._data = options and options.data or {}
	self._sep = options and options.sep or "%."
end

--[[
Function: getTable

Retrieve the data table in this DataMap.
  
Returns:
	The data table.
]]
function Class:getTable()
	return self._data
end

--[[
Function: setTable

Assign the table data holder for this data map.

Parameters:
	tt - The table data.
]]
function Class:setTable(tt)
	self.assert.Table(tt)
	self._data = tt
end

--[[
Function: getSubContainer

Retrieve the sub container to use as parent for the provided key.
The last part of the key after the last separator symbol is used as
the actually key in the sub cnotainer table.

Parameters:
	key - The key to retrieve the sub container for.
  
Returns:
	The sub container table and the real key to use.
]]
function Class:getSubContainer(key)
	self:check(key,"Invalid key")
	
	-- cut the key with the separator
	local list, last = split(key,self._sep)
	local cont = self._data
	for _,sub in ipairs(list) do
		if type(cont[sub])~="table" then
			cont[sub] = {}
		end
		cont = cont[sub]
	end
	
	return cont, last
end

--[[
Function: hasKey

Check if the given key is assigned a value or not..

Parameters:
	key - The key to check.
  
Returns:
	True if there is a value for this key, false otherwise.
	if true, also returns the final sub container, and the last
	key name (these are used internally for <unset>)
]]

function Class:hasKey(key)
	self:check(key,"Invalid key")

	local list, last = split(key,self._sep)
	local cont = self._data
	for _,sub in ipairs(list) do
		if type(cont[sub])~="table" then
			return false
		end
		cont = cont[sub]
	end

	return cont[last]~=nil, cont, last
end

--[[
Function: set

Set a value of this datamap.


Parameters:
	key - The key where to set the value may contain separators.
	value - The value to set.
]]
function Class:set(key,value)
	local cont, last = self:getSubContainer(key)
	if cont[last] ~= value then
		cont[last] = value
		return true;
	end
	return false -- value was not changed.
end

--[[
Function: unset

Unset the value under a given key.

Parameters:
	key - The key to unset.
]]
function Class:unset(key)
	local res, cont, last = self:hasKey(key)
	if res then
		cont[last] = nil
	end
end

--[[
Function: get

Retrieve a value from the datamap.

Parameters:
	key - THe key to retrieve the value from.
	value - The default value to return if there was no previous value.
  
Returns:
	The retrieved value of the default one. Note that the default value can be nil.
]]
function Class:get(key,value)
	local cont, last = self:getSubContainer(key)
	if cont[last]==nil then
		cont[last] = value
	end
	return cont[last]
end

--[[
Function: merge

Merge the content of the argument table into this datamap.

Parameters:
	t - The table or other <utils.DataMap> object to be merged.
	perfix - (for internal use) Specify the prefix to use when saving a given subtable.
]]
function Class:merge(t,prefix)
	self:check(type(t)=="table","Invalid table argument")
	if self:isInstanceOf(Class,t) then
		return self:merge(t:getTable(),prefix)
	end
	-- ensure this is not a class:
	self:check(not t._CLASSNAME_,"Cannot merge datamap with class object.")
	prefix = prefix and prefix.."." or ""
	
	for key,val in pairs(t) do
		if type(val)=="table" and not val._CLASSNAME_ then
			self:merge(val,prefix .. key)
		else
			-- write the value normally:
			self:set(prefix .. key, val)
		end
	end
end

--[[
Function: getSubMap

Retrieve the value of a key as a sub <utils.DataMap> object.
Note that the value stored under the key must be a table or nil
if it is nil an empty DataMap is created, otherwise, returns
the content of the table as a DataMap or trigger an error is 
the value is not a table.

Parameters:
	key - The key to retrieve.
  
Returns:
	The <utils.DataMap> corresponding to the sub key.
]]
function Class:getSubMap(key)
	local data = self:get(key,{})
	self:check(type(data)=="table","Invalid table data.")
	
	if data._CLASSNAME_ then
		-- the data is actually a class object.
		-- we should not parse the object internal as ordinary table fields,
		-- so this is normally an error. Except if this object is actually a DataMap itself.
		-- in that case we may just return the object:
		self:check(data:isInstanceOf(Class),"Invalid class object result: object is instance of ", data._CLASSNAME_)
		return data
	end
	
	-- generate a datamap on this table:
	return Class{data=data}
end

--[[
Function: fetch

Fecth a key value from the datamap.
This method is similar to the get method except that it will ensure there
is a value to read and trigger an error otherwise. Thus the default value is 
not needed here.

Parameters:
	key - THe key to read from.
  
Returns:
	The value read under the given key.
]]
function Class:fetch(key)
	local val = self:get(key)
	self:check(val~=nil,"Could not fetch value for key: ", key)
	return val
end

return Class


