local Class = require("classBuilder"){name="Type",bases="reflection.Holder"};

local Scope = require "reflection.Scope"
local Holder = require "reflection.Holder"

local Enum = require "reflection.Enum"
local Vector = require "std.Vector"
local ItemLink = require "reflection.ItemLink"
	
local tm = require "bindings.TypeManager"
local corr = require "bindings.TextCorrector"

local utils = require "utils"

function Class:initialize(options)
	self:setItemLinks(options and options.links)
	self._scopeType = Scope.TYPE

	tm:registerType(self)
end

-- create a type from a string:
function Class.createFromString(str)
	
	local link = ItemLink(str)
	local links = Vector()
	links:push_back(link)
			
	local rtype = Class{links=links}
	rtype:parse();
	
	return rtype
end

-- check if a given string is a keyword
function Class:isKeyWord(str)
	return (str:find("%*") 
		or str:find("&")
		or str:find("struct%s+")
		or str:find("enum%s+")
		or str:find("const") or str:find("class[%s]+"))
end

function Class:setItemLinks(vec)
	self._itemLinks = vec; 
end

function Class:getItemLinks()
	return self._itemLinks;
end

function Class:addFunction(func)
	tm:registerMappedTypeFunction(self:getBaseName(true),func)
	Holder.addFunction(self,func)
end

function Class:extractBaseType(str)
	-- str = str:gsub("^[%s]*const[%s]+","")
	-- str = str:gsub("^([^%*]+)%*.*","%1")
	-- str = str:gsub("^([^&]+)&.*","%1")
	str = str:gsub("^%s*const%s+(.-)%s*$", "%1")
	str = str:gsub("^%s*struct%s+(.-)%s*$", "%1")
	str = str:gsub("^%s*(.-)%s*const%s*$", "%1")
	str = str:gsub("^%s*(.-)%s*&%s*$", "%1")
	str = str:gsub("^%s*(.-)%s*%*%s*$", "%1")
	str = str:gsub("^%s*(.-)%s*$", "%1")
	--str = str:gsub("^%s*([^%s]%.*)$","%1")
	--str = str:gsub("^(%.*)%s*$","%1")
	--str = str:gsub("^[%s]*([^%s]+)[%s]*.*","%1")
	return str	
end

function Class:expandTypedefs(linkvec)
	local result = Vector()
	
	local typedefFound = false;
	
	for _,v in linkvec:sequence() do
		-- if v:getType() == ItemLink.TYPEDEF then
			-- push the typedef definition elements:
			-- for _,v2 in v:getContent():getItemLinks():sequence() do
				-- result:push_back(v2)
			-- end
			-- typedefFound = true
		-- else
			-- just push the type:
			result:push_back(v);
		-- end
	end
	
	if typedefFound then
		return self:expandTypedefs(result)
	else
		return result
	end
end

function Class:clone()
	local res = Type{links=self:getItemLinks()}
	if self._base then
		res:parse()
	end
	
	return res;
end

--- Parse the input linkedtext vector.
-- parsing the input linked text will generate the type definition.
function Class:parse()
	local linkvec = self:getItemLinks()
	 
	-- we need to expand the typedefs if any:
	-- Actually no because the types are expanded during the doxygen reflection parsing.
	--linkvec = self:expandTypedefs(linkvec)
	
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
			--self:check(base==nil,"Type base class was already found: currentBase=",(type(base)=="table" and base:getFullName() or base),
			--	" newBase=",v:getContent():getFullName())
			
			if base == nil then	
				base = v:getContent()
			end
			
			if self._firstBase == nil and self:isInstanceOf(require"reflection.Class",v:getContent()) then
				self._firstBase = v:getContent()
			end
			
			--self:checkType(base,Scope)
			
			table.insert(str,v:getContent():getFullName())
		else
			local data = v:getContent()
			self:check(type(data)=="string","Invalid data type")
			
			table.insert(str,data) -- concat simple string.
			if not base and not self:isKeyWord(data) and not data:match("[<>]") then
				base = v:getContent()
			end
		end
	end
	
	str = table.concat(str)
	
	if not base or str:find("<") then
		base = self:extractBaseType(str)
		self:check(base~="","Invalid extracted base name from ", str) 
		self:info("Extracted base type '",base,"' from type '", str,"'")
	end
	
	
	
	--self:notice("Parsing type : '".. str.."'")
	self:check(base,"Could not parse base type in type: ".. str)
	
	-- assign the base if any;
	self._base = base;
	
	str = corr:correct("type_name",str);
	self._fullName = str;
	
	-- remove undesired keywords in the typename:
	self._fullName = self._fullName:gsub("%s+class%s+"," ")
	self._fullName = self._fullName:gsub("%s+struct%s+"," ")
	
	-- parse the type string:
	self._isConst = (str:find("^[%s]*const[%s]+")~=nil)
	self._isReference = (str:find("&%s*$")~=nil)
	self._isConstReference = (str:find("&%s*const%s*$")~=nil)
	self._isPointer = (str:find("%*&?%s*$")~=nil)
	self._isConstPointer = (str:find("%*&?%s*const%s*$")~=nil)
	self._isPointerOnPointer = (str:find("%*%*%s*$")~=nil)
end

function Class:setIsConst(val)
	self._isConst = val
end

function Class:setIsReference(val)
	self._isReference = val
end

function Class:getFirstBase()
	return self._firstBase -- return the first base if any.
end

--- Retrieve the base of that type if any
function Class:getBase(parseIfNeeded)
	if not self._base and parseIfNeeded then
		self:parse()
	end
	return self._base
end

function Class:getBaseName(parseIfNeeded)
	if not self._base and parseIfNeeded then
		self:parse()
	end
	return type(self._base)=="string" and self._base or self._base:getFullName()
end

function Class:isConst()
	return self._isConst
end

function Class:isReference()
	return self._isReference
end

function Class:isConstReference()
	return self._isConstReference
end

function Class:isVoid()
	local str = self:getName()
	return str:find("void%s*%*?&?%s*$") or str:find("void%s*%*?&?%s*const%s*$")
end

function Class:isEnum()
	if type(self._base) ~= "table" then return false; end
	
	return self:isInstanceOf(Enum,self._base)
end

function Class:isInteger()
	local str = self:getName()
	return not self:isClass() and 
		( self:isEnum() 
		or str:find("^int%s*[%*&]?%s*$") 
		or str:find("%s+int%s*[%*&]?%s*$") 
		or str:find("size_t") 
		or str:find("unsigned char") 
		or str:find("unsigned short")
		or str:find("signed short")
		or str:find("^%s*char%s*[%*&]?%s*$")
		or str:find("^%s*signed char%s*[%*&]?%s*$")
		or str:find("^%s*const%s*signed char%s*[%*&]?%s*$")
		or str:find("^%s*short%s*[%*&]?%s*$")
		or str:find("^%s*const%s*short%s*[%*&]?%s*$")
		or str == "unsigned" 
		or str == "wxChar") 
end

function Class:isNumber()
	local str = self:getName()
	return self:isInteger() 
		or str:find("long")
		or str:find("^%s*double%s*[%*&]?$") 
		or str:find("^%s*float%s*[%*&]?$") 
		or str:find("^%s*const%s*double%s*[%*&]?$") 
		or str:find("^%s*const%s*float%s*[%*&]?$")  
end

function Class:isString()
	local str = self:getName()
	if str:find("<") then
		return false;
	end
	
	return str:find("const%s+char%s*%*") 
		or str:find("wxChar%s*%*") 
		or str:find("wchar_t%s*%*") 
		or str:find("string") 
		or str:find("^%s*wxString%s*[%*&]?$")
		or str:find("^%s*const%s+wxString%s*[%*&]?$")
		or str=="char *"	
end

function Class:isBoolean()
	-- check if we can find a boolean pattern:
	if self:isClass() then
		return false -- a class should not be considered a boolean (?)
	end
	
	return type(self._base)=="string" and self._base:find("bool")
end

function Class:getAbsoluteBaseFullName()
	if type(self._base) == "table" then
		return self._base:getFirstAbsoluteBase():getTypeName()
	else
		return self._base;
	end
end

function Class:isClass()
	if self:getName():find("<") then
		return true;
	end
	
	if type(self._base)=="string" and (self._base:find("<")) then
		-- this is a template!
		return true;
	end
	
	local str = self:getName()
	if str=="void" then
		return false; -- void is created as a class in plug_core.
	end
	if str:find("__int64") then
		return true;
	end
	
	if type(self._base) ~= "table" then return false; end
	
	return self:isInstanceOf(require"reflection.Class",self._base)
end

function Class:isPointer()
	return self._isPointer or self._isConstPointer
end

function Class:isConstPointer()
	return self._isConstPointer
end

function Class:isPointerOnPointer()
	return self._isPointerOnPointer
end

--- Reimplemented getName function.
-- return the complete name of that type
function Class:getName()
	if true then
		self:check(self._fullName,"Type not parsed yet cannot retrieve its name.")
		
		--if not self._fullName then
			--self:parse()
		--end
		if self._fullName == "unsigned" then
			return "unsigned int" -- correction of incorrect type name.
		end
		
		return self._fullName;
	else
		self:parse()
		
		local name = self:getBaseName()
		
		if self:isConst() then
			name = "const "..name
		end
		if self:isPointerOnPointer() then
			name = name.."**"
		elseif self:isConstReference() then
			name = name.."& const"
		elseif self:isReference() then
			name = name.."&"
		elseif self:isConstPointer() then
			name = name.."* const"
		elseif self:isPointer() then
			name = name.."*"
		end
		
		return name;
	end
end

function Class:isLuaState()
	if self:getBaseName(true) == "lua_State" then
		return true
	end
	return false;
end

function Class:isLuaFunction()
	if self:getName() == "lua_Function *" then
		return true
	end
	return false;
end

function Class:isLuaTable()
	if self:getName() == "lua_Table *" then
		return true
	end
	return false;
end

function Class:isLuaAny()
	if self:getName() == "lua_Any *" then
		return true
	end
	return false;
end

function Class:getFirstAbsoluteBaseName()
	if type(self._base)=="table" then
		return self._base:getFirstAbsoluteBase():getFullName()
	elseif type(self._base)=="string" then
		return self._base
	else
		error("Could not retrieve AbsoluteBaseName for type ",self:getName())
	end	
end

function Class:getAbsoluteBaseHash()
	if type(self._base)=="table" then
		return self._base:getAbsoluteBaseHash()
	elseif type(self._base)=="string" then
		return utils.getHash(self._base)
	else
		error("Could not retrieve AbsoluteBaseHash for type ",self:getName())
	end
end

function Class:isNothing()
	local linkvec = self:getItemLinks()
	
	if linkvec:size()~=1 then
		return false;
	end
	 
	local item = linkvec:front()
	
	local ItemLink = require "reflection.ItemLink"
	
	if (item:getType() == ItemLink.OBJECT and  item:getContent():getFullName()=="void") 
		or (item:getType() == ItemLink.STRING and  item:getContent()=="void") then
		self:notice("Found void type!")
		return true;	
	end
	
	return false;
end

function Class:isValidForWrapping()
	local str = self:getName()
	if tonumber(str) or str=="-" then
		return false;
	end
	
	if str:find("%(") or str:find("%)") then
		self:notice("Considering type '",str,"' as invalid because it contains parentheses.")
		return false;
	end
	
	return (not self:isInstanceOf(require"reflection.Class",self._base) or self:getBase():isValidForWrapping()) 
end

return Class


