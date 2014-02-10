local Class = require("classBuilder"){name="Scope",bases="reflection.Entity"};

-- Enumeration values:
Class.NAMESPACE = 0
Class.CLASS = 1
Class.ENUM = 2
Class.TEMPLATE = 3
Class.TYPE = 4

function Class:initialize(options)	
	local ItemSet = require "reflection.ItemSet"
	
	self._scopeType = nil -- this value should be overriden by sub classes.
	self._subScopes = ItemSet();
end

function Class:getScopeType()
	self:check(self._scopeType,"Invalid scope type.")
	return self._scopeType;
end

function Class:setScopeType(stype)
	self:check(stype,"Invalid scope type") -- scope type should not be nil.
	if stype == self._scopeType then
		return; -- nothing to do.
	end
	self:check(not self._scopeType,"scope type was already set to value: ",self._scopeType)
	self._scopeType = stype;
end

function Class:getSubScopes(filters,args)
	return self._subScopes:filterItems(filters,args)
end

function Class:addSubScope(scope)
	self:check(scope,"Invalid scope argument.")
	self:check(self._scopeType~=Class.ENUM,"Enum scope may not contain sub scopes.")
	self:checkType(scope,require"reflection.Scope")

	local enforce = (self:getName()~="") -- enforce changing the scope if this is not the std namespace.
	
	scope:setParent(self,enforce) -- force setting of new parent.
	-- local prev_parent = scope:setParent(self,true) -- force setting of new parent.
	-- if prev_parent then
		-- prev_parent:removeSubScope(scope)
	-- end
	
	-- self:info("Subscopes: ",self._subScopes)
	--self:check(self._subScopes,"Invalid sub scopes");
	--self:checkType(self._subScopes, require"reflection.ItemSet")
	--self:check(self._subScopes.addItem,"Invalid addItem function");
	
	self._subScopes:addItem(scope)
end

function Class:removeSubScope(scope)
	self:check(scope,"Invalid scope argument.")
	self:check(self._scopeType~=Class.ENUM,"Enum scope may not contain sub scopes.")
	self:checkType(scope,require"reflection.Scope")
	
	return self._subScopes:eraseValue(scope)
end

function Class:isClass()
	return self._scopeType == Class.CLASS
end

function Class:isNamespace()
	return self._scopeType == Class.NAMESPACE
end

function Class:isEnum()
	return self._scopeType == Class.ENUM
end

function Class:isTemplate()
	return self._scopeType == Class.TEMPLATE
end

function Class:isType()
	return self._scopeType == Class.TYPE
end

return Class
