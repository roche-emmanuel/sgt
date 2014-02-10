local Class = require("classBuilder"){name="CSVReader",bases="base.Object"};

function Class:initialize(options)
	
	if type(options)=="string" then
		self:readFile(options)
	elseif options.data then
		self:setContent(options.data)
	end
end

function Class:getContent()
	return self._content
end

function Class:setContent(data)
	self._content = data
	self._startIndex = 1
end

function Class:readFile(filename,flags)
	self:info("Loading content from file: ",filename)
	flags = flags or "r"
	local file = io.open(filename,flags)
	self:setContent(file:read("*a"))
	file:close()
end

function Class:setColumns(cols)
	self._columns = cols
end

function Class:readItem()
	
	if self._startIndex > #self._content then
		return 
	end
	
	local result = {}
	local numprops = #self._columns
	local input = self._content
	
	for k,prop in ipairs(self._columns) do
		local sep = k==numprops and "\n" or ","
		local index = self._startIndex
		local searchIndex = input:sub(index,index)=='"' and input:find('"',index+1) or index
		local sepIndex = input:find(sep,searchIndex)
		
		self:check(sepIndex,"Invalid index while reading property ",prop);
		
		local val = input:sub(self._startIndex,sepIndex-1)
		self._startIndex = sepIndex+1
		
		val = val:gsub('^"(.-)"$',"%1") -- remove quotations.
		
		val = tonumber(val) or val
		--self:info("Setting ",prop,"=",val)
		result[prop] = val
	end
	
	return result;
end

return Class
