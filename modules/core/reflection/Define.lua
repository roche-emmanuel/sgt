local Class = require("classBuilder"){name="Define",bases="reflection.Entity"};

local im = require "bindings.IgnoreManager"
local ItemLink = require "reflection.ItemLink"

function Class:initialize(options)
	self.initializers = options and options.initializers
end

function Class:setInitializers(init)
	self.initializers = init;
end

function Class:getInitializers()
	return self.initializers
end

function Class:getInitStr()
	if not self.initializers then
		return;
	end

	if not self._initStr then
		-- parse the initializers:
		local cont = {}
		for k,v in self.initializers:sequence() do
			if v:getType() == ItemLink.STRING then
				table.insert(cont,v:getContent())
			else
				return;
			end
		end
		
		self._initStr = table.concat(cont)
	end
	
	return self._initStr;
end

function Class:isIgnored()
	local header = self:getHeaderFile()
	
	if not header or im:ignoreHeader(header) or im:ignore(header,"file") then
		self:debug("Ignoring definition ",self:getName()," because of header ",header or "[nil]")
		return true;
	end
	
	local str =  self:getInitStr()

	if im:ignoreDefine(self) then
	    self:debug("Ignoring definition ",self:getName()," because of ignore manager.")
		return true;
	end

	if not str then
		self:debug("Ignoring definition ",self:getName()," because of no content.")
		return true
	end
	
	if str:find("||") then
		return false;
	end

	if str:find("|") then
		return false;
	end
	
	if not tonumber(str) then
		self:debug("Ignoring definition ",self:getName()," because it's not a number: ",str)
		return true;
	end	
end

return Class