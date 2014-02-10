local Class = require("classBuilder"){name="Function",bases="reflection.Member"};

local Scope = require "reflection.Scope"
local Vector = require "std.Vector"
local Set = require "std.Set"

local im = require "bindings.IgnoreManager"
local tm = require "bindings.TypeManager"


function Class:initialize(name)
    self.parameters = Vector()
    self.templateParameters = Vector()
    self.isConst = false
    self._isStatic = false
    self._isAbstract = false;
	self._isVirtual = false;
    self._isExtension = false;
end

opmap = {}
opmap["operator+"] = "__add"
opmap["operator-"] = "__sub"
opmap["operator*"] = "__mul"
opmap["operator/"] = "__div"
opmap["operator=="] = "__eq"
opmap["operator<"] = "__lt"
opmap["operator<="] = "__le"
opmap["operator++"] = "op_inc"
opmap["operator--"] = "op_dec"
opmap["operator!="] = "op_neq"
opmap["operator+="] = "op_add"
opmap["operator-="] = "op_sub"
opmap["operator*="] = "op_mult"
opmap["operator/="] = "op_div"
opmap["operator^"] = "op_pow"
opmap["operator[]"] = "op_index"
opmap["operator()"] = "op_call"
opmap["operator>>"] = "op_read"
opmap["operator<<"] = "op_write"
opmap["operator="] = "op_assign"
opmap["operator delete"] = "" -- ignored
opmap["operator new"] = "" -- ignored

function Class:getLuaName()
	if self._luaName then
		return self._luaName;
	elseif self:isOperator() then
		local name = self:getName()
		local lname = opmap[name]
		if lname == "" then
			return -- discard this.
		end
		
		if lname == nil then
			self:warn("Cannot select lua name for operator ".. name)
		end
		
		if lname == "__sub" then
			-- check if this is the unary minus operator:
			if self:getNumParameters() == 0 then
				lname = "__unm"
			end
		end
		
		return lname
	elseif self._isGetter or self._isSetter then
		local lname = self:getName()
		if lname:sub(1,2)=="m_" then
			lname = lname:sub(3)
		end
		if lname:sub(1,1)=="_" or lname:find("^m[A-Z]") then
			lname = lname:sub(2)
		end

		local withUnderscore = lname:find("_")
		local op = self._isGetter and "get" or "set"
		
		lname = op .. (withUnderscore and ("_" .. lname) or (lname:sub(1,1):upper() .. lname:sub(2)))
		return lname
	else
		return self:getName()
	end
end

function Class:setLuaName(name)
	self._luaName = name
end

function Class:getFullName()
    if self:getParent() then
        -- Assume the parent as a getFullName() Class:
        local pname = self:getParent():getFullName()
        return (pname=="" and "" or (pname .. "::")) .. self:getName()
    else
        return self:getName()
    end
end


--- Get the return type of the function
-- @return The return type for this Class. Note that this may be nil in case the
-- function is a class constructor/destructor.
function Class:getReturnType()
    return self.returnType
end

--- Set the return type of the function
-- Assign a return type to this Class.
-- @param rtype The Type to be assigned. May be nil.
function Class:setReturnType(rtype)
    self.returnType = rtype
end

--- Retrieve the vector of parameters for this Class.
-- @return The Vector of parameters. The Vector may be empty if the function
-- has no parameter.
function Class:getParameters()
    return self.parameters;
end

--- Retrieve the offset of the first parameter with a default value
function Class:getDefaultOffset()
	local offset = 0;
	for _,v in self.parameters:sequence() do
		if v:getDefaultValue() then
			return offset
		end	
		offset = offset+1
	end
	
	return; -- no default value.
end

--- Retrieve the Vector of template parameters.
-- The vector is normally empty for regular classes.
function Class:getTemplateParameters()
    return self.templateParameters;
end

--- Add a parameter to the list.
-- @param arg The new Parameter to add. Should not be nil.
function Class:addParameter(arg)
	self:check(arg,"Parameter argument is nil")
    self.parameters:push_back(arg)
end

--- Add a template parameter to the list.
-- @param arg The new parameter to add. Should not be nil.
function Class:addTemplateParameter(arg)
	self:check(arg,"Template parameter argument is nil")
    self.templateParameters:push_back(arg)
end

--- Set the constness of the Class.
-- @param isconst The constness state of the Class.
function Class:setConst(isconst)
	self._isConst = isconst
end

--- Check if this function is const.
function Class:isConst()
	return self._isConst;
end

function Class:setAsExtension(ext)
	self._isExtension = ext
end

function Class:isExtension()
	return self._isExtension;
end

--- Set the static state of the Class.
function Class:setStatic(static)
    self._isStatic = static
end

--- Check if this function is static	retuunr
function Class:isStatic()
	return self._isStatic;
end

--- Set the abstract state of the Class.
function Class:setAbstract(abstract)
    self._isAbstract = abstract
end

--- Check if this function is abstract
function Class:isAbstract()
    return self._isAbstract;
end

function Class:setWrapper(wrapper)
	self._isWrapper = wrapper
end

function Class:isWrapper()
	return self._isWrapper
end

function Class:setUseBase(use)
	self._useBase = use
end

function Class:getUseBase()
	return self._useBase
end

--- Check if function is a constructor.
function Class:isConstructor()
	return self:getLuaName() == self:getParent():getName()
end

--- Check if function is a destructor.
function Class:isDestructor()
	self:check(self:getParent(),"Invalid parent object.")
	self:check(self:getParent():getName(), "Invalid parent name")
	
	return self:getName() == "~".. self:getParent():getName()
end

--- Check if function is an operator.
function Class:isOperator()
    return self:getName():find("^operator")~=nil
end

function Class:isMethod()
	return not self:isConstructor() and not self:isDestructor() and not self:isOperator()
end

--- Assign the doxygen argsstring to this Class.
-- The doxygen argsstring can be used to easy extract information
-- on this Class.
-- @param str the doxygen Argsstring
function Class:setArgsString(str)
    self.argsString = str;
end

--- Retrieve the doxygen argsstring from this Class.
function Class:getArgsString()
    return self.argsString
end

--- Check if this function contains at least one
-- array declaration.
-- Only arguments are checked not the returnn type.
function Class:containsArray()
    return self.argsString:find("%[")~=nil --[0-9]*%]
    --local proto = self:getPrototype()
    --return proto:find("%[[0-9]*%]")~=nil
end

--- Check if function contains at least one pointer on pointer declaration.
function Class:containsPointerOnPointer()
    return self.argsString:find("%*%*")~=nil or (self.returnType and self.returnType:getName():find("%*%*"))
		or self.argsString:find("%*%s*const%s*%*")~=nil or (self.returnType and self.returnType:getName():find("%*%s*const%s*%*"))		
    --local proto = self:getPrototype()
    --return proto:find("%[[0-9]*%]")~=nil
end

function Class:containsArobace()
    return self.argsString:find("@")~=nil or (self.returnType and self.returnType:getName():find("@"))
end

function Class:containsFunctionArg()
	for k,param in self.parameters:sequence() do
		if param:getType():getName():find("%(") then
			return true
		end
	end
	
	if self.returnType and self.returnType:getName():find("%(") then
		return true;
	end
	
	if self.returnType and self.returnType:getName()=="typedef" then
		return true;
	end
end

--- Check if this function has template parameters.
function Class:isTemplated()
    return not self.templateParameters:empty();
end

--- Return number of parameters for this Class.
function Class:getNumParameters()
	return self.parameters:size()
end

function Class:containsClassTemplates()
	-- check if the parent is a template class:
	if self:getParent():getScopeType() ~= Scope.CLASS then
		return false;
	end
	
	local class = self:getParent()
	if not class:isTemplated() then
		return false;
	end
	
	-- retrieve the list of template parameters for that class:
	local tparams = class:getTemplateParameters()
	
	-- for each typename, we check if the param name is found in the function prototype:
	local proto = self:getPrototype(false,false,false)
	for _,param in tparams:sequence() do
		
		if proto:find(param:getName(),1,true) then
			self:notice("Found template type ", param:getName(), " in function ", self:getPrototype(true,true,false))
			return true;
		end
	end
end

function Class:containsInvalidType()

	for _,param in self:getParameters():sequence() do
		local ptype = param:getType()
		if not ptype:isValidForWrapping() then
			self:notice("Found invalid type ", ptype:getName(), " in function ", self:getPrototype(true,true,false))	
			return true;
		end
	end
	
	if self.returnType and not self.returnType:isValidForWrapping() then
		self:notice("Found invalid return type ", self.returnType:getName(), " in function ", self:getPrototype(true,true,false))	
		return true;		
	end
end


--- Check if this function is valid for wrapping .
-- only used for luabind and Swig bindings.
function Class:isValidForWrapping()
    return (
    	not self:isVariadic() 
    	and not self:containsArray() 
    	and not self:containsPointerOnPointer() 
    	and not self:containsArobace() 
		and not self:containsInvalidType()
    	and not self:isTemplated()
		and not self:containsClassTemplates()
		and self:getLuaName()
    	and not self:containsFunctionArg()
    	and not self:getName():find("~")
    	and not im:ignoreFunction(self))
end

--- Check if the function is variadic
function Class:isVariadic()
    return self.argsString:find("%.%.%.")~=nil
end

--- Retrieve only the arguments prototypes.
-- The parameters  in the string will be comma separated.
function Class:getArgumentsPrototype(withNames)
	local sig = "";
	local num = self:getParameters():size();
	
    for k,v in self:getParameters():sequence() do
        local def = v:getDefaultValue() and v:getDefaultValue():getName()
		def = def=="((void *) 0)" and "NULL" or def
        local name = v:getName() 
		name = name=="" and "arg"..k or name
		name = name .. (def and " = "..def or "")
        sig = sig.. v:getType():getName() .. (withNames and (" ".. name) or "") .. (k<num and ", " or "")
    end
    
    return sig;
end

function Class:getArgumentNames()
	local sig = {};
	local num = self:getParameters():size();
	
	if num==0 then
		return "";
	end
	
    for k,v in self:getParameters():sequence() do
		local name = v:getName()
        table.insert(sig,name=="" and "arg"..k or name)
    end
    
    return table.concat(sig,", ");
end

--- Generate function prototype:
-- @param withNames When set to true the parameter names and default values are added in the prototype.
function Class:getPrototype(withNames,fullname,noargstring)
    local sig =  "".. (self:getReturnType() and (self:getReturnType():getName().." ") or "") .. ((type(fullname)=="string" and fullname .."::"..self:getName()) or (fullname and self:getFullName()) or self:getName()) 
    
    if noargstring then
		sig = sig .. "(" .. self:getArgumentsPrototype(withNames) .. ")"
	    
	    if self:getConstness() then
	        sig = sig .. " const"
	    end
    else
    	sig = sig .. self.argsString
    end
    
    if self:getStatic() then
        sig = "static " .. sig
    end

    return sig
end

--- Retrieve the function signature.
-- (this is different from the function prototype)
function Class:getSignature()
	local sig = self:getReturnType() and self:getReturnType():getName() or ""
	if self:getParent():getScopeType() == Scope.CLASS and not self:getStatic() then
		sig = sig .. "(".. self:getParent():getFullName().. "::*)"
	else
		sig = sig .. "(*)"
	end
	
	sig = sig .. "(" .. self:getArgumentsPrototype(false) .. ")"
    
    if self:getConstness() then
        sig = sig .. " const"
    end

    return sig
end

--- Check if two functions are exactly the sames.
function Class:isEqualTo(other)
	return self:getPrototype(false,false,true)==other:getPrototype(false,false,true)
end

--- Check if function is overloaded.
-- @return The function overload state
-- @return When the function is overloaded, this function will also
-- return the Set of all the overloaded functions with that name.
function Class:isOverloaded()
	if self._isOverloaded == nil then
	-- find the overloads in the parent holder:
	self._overloads = Set();
	
	local protection = (self:isPublic() and "Public") or (self:isProtected() and "Protected") or "Private"
	
	--local list = self:isConstructor() and self:getParent():getValidPublicConstructors() 
	--	or self:isOperator() and self:getParent():getValidPublicOperators()
	--	or self:getParent():getValidPublicFunctions()
	
	local list = self:isConstructor() and self:getParent():getFunctions{"Valid","Constructor",protection} 
		or self:isOperator() and self:getParent():getFunctions{"Valid","Operator",protection}
		or self:getParent():getFunctions{"Valid","Method",protection}

	local thisname = self:getLuaName() -- retrieve the lua name as this may make a difference for operator-()
	 
	for _,v in list:sequence() do
		if v:getLuaName() == thisname then
			self._overloads:push_back(v)
		end
	end
	
		self._isOverloaded = self._overloads:size()>1;
	end
	
	return self._isOverloaded, self._overloads
end

--function Class:__eq(op2)
--    return self:isEqualTo(op2)
--end

function Class:isClassMethod()
	return self:getParent():getScopeType() == Scope.CLASS
end

function Class:isGlobal()
	return self:getParent():getScopeType() == Scope.NAMESPACE
end

--- Check if this function contains the lua_State type in its parameter list.
function Class:hasLuaState()
	for _,param in self:getParameters():sequence() do
		if param:isLuaState() then 
			return true
		end		
	end
	
	return false;
end

function Class:isExternal()
	return tm:getFunctionModule(self)
end

function Class:setVirtual(virtual)
	self._isVirtual = virtual;
end

function Class:isVirtual()
	return self:isAbstract() or self._isVirtual
end

function Class:setIsGetter(getter)
	self._isGetter = getter
end

function Class:isGetter()
	return self._isGetter
end

function Class:setIsSetter(setter)
	self._isSetter = setter
end

function Class:isSetter()
	return self._isSetter
end

function Class:clone()
	local func = Class()
	func:setName(self:getName())
	func._isWrapper = self._isWrapper
	func._isVirtual = self._isVirtual
	func.argsString = self.argsString
	func.templateParameters = self.templateParameters
	func._isAbstract = self._isAbstract
	func._isStatic = self._isStatic
	func._isExtension = self._isExtension
	func._isConst = self._isConst
	func._luaName = self._luaName
	func.returnType = self.returnType
	
	local params = self:getParameters()
	for _,param in params:sequence() do
		func:addParameter(param)
	end
	
	-- getParent():addFunction(func)
	return func
end

-- deprecated, for backward compatibility only
Class.setConstness = Class.setConst 
Class.getConstness = Class.isConst
Class.getStatic = Class.isStatic
Class.getAbstract = Class.isAbstract

return Class
