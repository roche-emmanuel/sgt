local Class = require("classBuilder"){name="Value",bases={"base.Object"}};

function Class:initialize(options)
	self:setItemLinks(options.links)
end

-- check if a given string is a keyword
function Class:isKeyWord(str)
	return (str:find("%*") 
		or str:find("&")
		or str:find("const"))
end

function Class:setItemLinks(vec)
	self._itemLinks = vec; 
end

function Class:getItemLinks()
	return self._itemLinks;
end

--- Parse the input linkedtext vector.
-- parsing the input linked text will generate the type definition.
function Class:getName()
	local linkvec = self:getItemLinks()
	 
	self:check(linkvec,"linkvec argument is nil")
	self:checkType(linkvec,require("std.Vector"),true)
	
	local ItemLink = require "reflection.ItemLink"
	local Scope = require "reflection.Scope"
	
	-- retrieve the base type from the item links:
	-- and generate the type string at the same time:
	local str = {}
	local base = nil
	for _,v in linkvec:sequence() do
		self:checkType(v,ItemLink)
		if v:getType() == ItemLink.OBJECT then
			-- retrieve the object as base
			if (base~=nil) then
				self:warn("Type base class was already found, previous base=", base, ", new base=",v:getContent())
			end
			
			base = v:getContent()
			--self:checkType(base,Scope)  -- could also be an EnumValue here.
			
			--self:warn("Retrieving BASE name in value: ".. base:getFullName())
			--self:check(base.getFullName,"No getFullName implementation found in class: ", oo.classof(base).CLASS_NAME)
						
			table.insert(str,base:getFullName())
		else
			--self:warn("Retrieving STRING name in value: ".. v:getContent())
		
			table.insert(str,v:getContent()) -- concat simple string.
			if not self:isKeyWord(v:getContent()) then
				base = v:getContent()
			end
		end
	end
	
	str = table.concat(str," ")
	if not base then
		self:warn("Could not parse base type in value: ".. str)
	end
	
	-- assign the base if any;
	self._base = base or str;
	
	return str;
end

return Class


