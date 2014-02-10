local Class = require("classBuilder"){name="Entity",bases={"base.Object"}};

Class.SECTION_PUBLIC = 0
Class.SECTION_PROTECTED = 1
Class.SECTION_PRIVATE = 2

local section_str = {}
section_str.public = Class.SECTION_PUBLIC
section_str.protected = Class.SECTION_PROTECTED
section_str.private = Class.SECTION_PRIVATE

local tm = require "bindings.TypeManager";
local im = require "bindings.IgnoreManager";

function Class:initialize(options)
	self._name = (options and options.name) or ""
	self._section = Class.SECTION_PUBLIC
end

function Class:getName()
	self:check(self._name,"Invalid name")
	return self._name
end

function Class:setName(name)
	self:check(name,"Invalid name argument.")
	
	if name:find("::") then
		-- this name contains a namespace, we should discard it:
		self._name = name:match("::([%a%d_]+)$")
		if not self._name then
			self._name = name:match("::([%a%d_<>%*%s:,]+)$")
			self:debug2("Performed extended match on name '", name,"', result is: '", self._name,"'")
		end
		
		self:check(self._name,"Invalid name after regex matching. Original name is: ",name)		
		return
	end
	
    if name:find("^@") then
        self._name = "unnamed_".. name:sub(2)
        self:debug2("Changing object name ", name , " into ", self._name)
    else
        self._name = name
    end
    
    self:check(self._name,"Invalid name after setName")
end

function Class:getParent()
    return self._parent
end

--- Set the parent of that object.
function Class:setParent(parent,force)
	self:check(parent,"Invalid parent argument")
	self:checkType(parent,require("reflection.Scope"))
	
	if (self._parent == parent) then
		return -- nothing to do.
	end
	
	if force and self._parent then
		local prev_parent = self._parent;
		self:warn("Forcing parent change for object '",self:getFullName(),"' to parent '",parent:getFullName(),"'");

		-- remove the child from the previous parent:
		local res = prev_parent:removeSubScope(self);
		self:check(res,"Child scope was not found in previous parent scope.");
		
		self._parent = parent
		return prev_parent
	end
	
	-- The child should not already be parented to another parent:
	
	if self._parent then
		self:error("Trying to reparent object '",self:getFullName(),"' to parent '",parent:getFullName(),"' previous parent is: '",self._parent:getFullName(),"' and change is not enforced.")
		return;
	end
	
	self._parent = parent
end

function Class:isValidForWrapping()
	return true;
end

--- Retrieve the full name of that entity.
-- The full name will take into account the parent scopes if any.
function Class:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() function:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
        -- return pname .. "::" .. self:getName()
    else
        return self:getName()
    end
end

function Class:getHeaderFile()
	return self._headerFile
end

function Class:setHeaderFile(header)
	self:checkNonEmptyString(header,"Invalid header argument")
	if self._headerFile == header then
		return -- nothing to do.
	end
	
	if(self._headerFile) then
		self:debug("Replace header file '", self._headerFile, "' with '", header,"' for object ", self:getFullName());	
	end

	self._headerFile = header
end

function Class:getLuaName()
	return self._luaName or self:getName()
end

function Class:setLuaName(name)
	self:check(name,"Invalid name argument.")
	self._luaName = name
end

function Class:getSection()
    return self._section
end

function Class:setSection(section)
	self:check(section,"Invalid section argument.")
    self._section = type(section)=="string" and section_str[section] or section;
	self:check(self._section==Class.SECTION_PUBLIC or self._section==Class.SECTION_PROTECTED or self._section==Class.SECTION_PRIVATE,"Invalid section.")
end

function Class:isPublic()
	return self._section == Class.SECTION_PUBLIC
end

function Class:isRecursivePublic()
	 return self:isPublic() and (not self:getParent() or self:getParent():isRecursivePublic())
end

function Class:isProtected()
	return self._section == Class.SECTION_PROTECTED
end

function Class:isPrivate()
	return self._section == Class.SECTION_PRIVATE
end

--- Retrieve the root namespace for this parent
function Class:getRootNamespace()
	local prevParent = nil;
	local parent = self:getParent();
	while(parent and parent:getName()~="") do
		prevParent = parent
		parent = parent:getParent();
	end
	
	if prevParent and prevParent:isClass() then
		return nil
	end
	return prevParent
end

function Class:setModule(modname)
	self:checkNonEmptyString(modname,"Invalid module name");
	tm:setModule(self,modname)
end

function Class:getModule()
	return tm:getModule(self)
end

function Class:setExternal(external)
	return tm:setExternal(self,external)
end

function Class:isExternal()
	return self.externalModule or tm:getExternalBase(self:getName())
	--return tm:isExternal(self)
end

function Class:isIgnored()
	return im:ignore(self)
end

return Class

