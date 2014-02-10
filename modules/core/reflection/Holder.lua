local Class = require("classBuilder"){name="Holder",bases="reflection.Scope"};

local Set = require "std.Set"

function Class:initialize(options)
	local ItemSet = require "reflection.ItemSet"
	
	self._functions = ItemSet()
	self._variables = ItemSet();
	self._enums = ItemSet();
end

function Class:getItems(list,filters,args)
	return list:filterItems(filters,args)
end

function Class:getFunctions(filters,args)	
	return self:getItems(self._functions,filters,args)
end

function Class:getVariables(filters,args)
   return self:getItems(self._variables,filters,args)
end

function Class:getEnums(filters,args)
   return self:getItems(self._enums,filters,args)
end

function Class:addVariable(var)
	self:check(var,"Invalid var argument.")
	self:checkType(var,require"reflection.Variable")

	var:setParent(self)
	
	self._variables:addItem(var)
end

function Class:addEnum(enum)
	self:check(enum,"Invalid enum argument.")
	self:checkType(enum,require"reflection.Enum")

	enum:setParent(self)
	
	self._enums:addItem(enum)
end

--- Add a function to the function Set.
function Class:addFunction(func)
	self:check(func and self:isInstanceOf(require"reflection.Function",func),"Invalid function: ",func);
	
	func:setParent(self)

	self._functions:addItem(func)
end

function Class:removeFunction(func)
	self:check(func and self:isInstanceOf(require"reflection.Function",func),"Invalid function: ",func);
	
	self._functions:eraseValue(func)
end

function Class:getValidPublicFunctions()
	return self:getFunctions{"Public","Valid","Method"}
end

return Class
