local Class = require("classBuilder"){name="Class",bases="reflection.Holder"};

local Function = require "reflection.Function"
local Scope = require "reflection.Scope"
local Vector = require "std.Vector"
local Set = require "std.Set"
local utils = require "utils"


local tm = require "bindings.TypeManager"
local im = require "bindings.IgnoreManager"
local rm = require "bindings.ReflectionManager"
local ItemSet = require "reflection.ItemSet"
local ItemLink = require "reflection.ItemLink"
local Type = require "reflection.Type"

function Class:initialize(options)
    self._scopeType = Scope.CLASS
    self._bases = Set()
    self._templateParameters = Vector()
	--self._baseSpecs = Map()
end

function Class:getMappedType()
	return self.mappedType
end

function Class:asType()
	local link = ItemLink(self)
	local links = Vector()
	links:push_back(link)
			
	local rtype = Type{links=links}
	rtype:parse();
	
	return rtype
end

function Class:getFullLuaName(withModule)
	local result = ""
	if self:getParent():isClass() then
		result = self:getParent():getFullLuaName() .. "_"
	end
	
	result = result .. self:getName()
	
	if withModule then
		local mname = rm:getDefaultModuleName()
		result = (self:getModule() or mname) .. "." .. result
	end
	
	return result
end

function Class:setMappedType(type)
	self.mappedType = type
end
 
function Class:getAbsoluteBases(set)
	set = set or Set()
	for k,v in self._bases:sequence() do
		v:getAbsoluteBases(set)
	end 
	
	if self._bases:empty() then
		set:push_back(self)
	end
	
	return set;
end

function Class:getNumBases()
	return self._bases:size()
end

function Class:getAllAbsoluteBaseHashes()
    local hashes = {}
	if self:isExternal() then
		table.insert(hashes,utils.getHash(tm:getAbsoluteBaseName(self)))
	else
	    for _,v in self:getAbsoluteBases():sequence() do
	        table.insert(hashes,utils.getHash(tm:getAbsoluteBaseName(v)));
	    end
    end
    return hashes
end

--- Retrieve the first absolute base of that class.
-- Only return the first class in the list of all absolute base
-- classes for the current class. 
function Class:getFirstAbsoluteBase()
	local abs = self:getAbsoluteBases()
	if abs:size()>1 then
		self:info("Found more that one absolute base for class: ".. self:getName())
	end
	return abs:front()
end

--- Retrieve the hash code of the first absolute base class.  
function Class:getAbsoluteBaseHash()
	if self:isExternal() then
		local str = tm:getAbsoluteBaseName(self)
		--self:check(str,"Invalid absoluteBaseName for external ",self:getFullName())
		
		return utils.getHash(str)
	else
		local abs = self:getFirstAbsoluteBase()
		local str = abs:getFullName()
		
		self:check(str,"Invalid absoluteBaseName for non-external ",self:getFullName())
		return utils.getHash(str)
	end
end

--- Retrieve the bases of this class.
-- @return Set of bases. The Set can be empty but should never be nil.
function Class:getBases()
	return self._bases
end

function Class:getValidPublicConstructors()
	return self:getFunctions{"Valid","Public","Constructor"}
end

function Class:getValidPublicOperators()
	return self:getFunctions{"ValidOperator","Public"}
end

--- Retrieve the class destructor.
-- @return The assigned class destructor or nil if no destructor was assigned to that class.
function Class:getDestructor()
	local funcs = self:getFunctions{"Destructor"}
	self:check(funcs:size()<=1)
	return funcs:front();
end

--- Add a new base to this class.
-- This function will automatically add this class object as a derivation
-- of the base.
-- @param base The base class to add. Should not be nil.
function Class:addBase(base,spec)
	self:check(base,"base argument is nil");
	self:checkType(base,Class,true);	
	self._bases:push_back(base);
	--self._baseSpecs:set(base,spec)
end

--- Check if this class has at least one base class.
-- @return True if this class has at least one base class, false otherwise.
function Class:hasBases()
	return not self._bases:empty()
end

--- Return a lua compatible version of the class name.
-- The bind name of the class is the name ussed in a 
-- lua  environment for access to this class.
function Class:getBindName()
	return self:getName()
end

--- Retrieve the list of abstract functions.
-- This function will recursively search for the abstract functions
-- in this class and its parent classes.
function Class:getAbstractFunctions()
	local abstractFuncs = Set()
	local concreteFuncs = Set()
	
	-- First collect the abstract/non abstract functions in 
	-- this class.
	local list = self:getFunctions{"Method"} + self:getFunctions{"Operator"}
	
	for _,v in list:sequence() do
		if v:isAbstract() then
			self:notice("Found abstract method: ",v:getFullName())
			abstractFuncs:push_back(v)
		else
			concreteFuncs:push_back(v)
		end
	end
	 
	-- retrieve the abstract functions inherited from each base
	-- class:
	for _,v in self:getBases():sequence() do
		local baseAbstracts = v:getAbstractFunctions()
		
		-- remove from that set the functions that have concrete 
		-- implementation in the current derived class
		for _,func in baseAbstracts:sequence() do
			local isConcrete = false;
			for _,concFunc in concreteFuncs:sequence() do
				if func:isEqualTo(concFunc) then
					isConcrete=true;
					self:notice("Found concrete implementation for : ",v:getFullName())
					break;
				end
			end
			
			if not isConcrete then
				abstractFuncs:push_back(func)
			end
		end 
	end
	
	return abstractFuncs
end

function Class:getVirtualFunctions()
	-- find all the non virtual functions in this class:
	local overrideFuncs = self:getFunctions{"Method"} + self:getFunctions{"Operator"}

	local virtualFuncs = ItemSet(); -- result set.
	
	local baseVirtuals = ItemSet();
	
	for _,v in self:getBases():sequence() do
		baseVirtuals:append(v:getVirtualFunctions()) 
	end
	
	-- remove from that set the functions that have an override
	-- implementation in the current derived class
	for _,func in baseVirtuals:sequence() do
		local isOverriden = false;
		local funcArgs = func:getArgumentsPrototype(false)
		local funcName = func:getName()
		
		for _,concFunc in overrideFuncs:sequence() do
			-- we do not check the return type here as the concrete return type could be a derived type from the base function return type.
			-- and otherwise matcing functions would be conflicting.
			if funcName == concFunc:getName() 
				and funcArgs == func:getArgumentsPrototype(false) 
				and func:getConstness()==concFunc:getConstness() 
				and func:isStatic()==concFunc:isStatic() 
				then
				isOverriden=true;
				self:notice("Found non override implementation for : ",func:getFullName())
				break;
			end
		end
		
		if not isOverriden then
			virtualFuncs:push_back(func)
		end		
	end
	
	-- Now add the local virtual functions and operators:
	virtualFuncs:append(self:getFunctions{"Method","Virtual"});
	virtualFuncs:append(self:getFunctions{"Operator","Virtual"});
	
	return virtualFuncs
end

function Class:getProtectedFunctions()
	-- find all the non virtual functions in this class:
	local funcs = self:getFunctions{"Method","Protected","NonVirtual"}
	funcs:append(self:getFunctions{"Operator","Protected","NonVirtual"})	
	
	for _,v in self:getBases():sequence() do
		funcs:append(v:getProtectedFunctions());
	end
	
	local result = ItemSet()
	local names = Set()
	
	for _, func in funcs:sequence() do
		local name = func:getLuaName()
		if names:contains(name) then
			self:warn("Ignoring protected function ",func:getFullName()," in class ", self:getFullName(), " as masked by previous function with same name.");
		else
			names:push_back(name)
			result:push_back(func)
		end
	end
	
	return result
end

--- Check if this class should be ignored.
-- Request the IgnoreManager whever this class should be
-- ignored or not for the bindings generation.
function Class:isIgnored()
	--error("Checking class ignore status for " ..self:getName())
	return im:ignoreClass(self)
end

--- Check if the converter from that class should be ignored.
-- Request the IgnoreManager whever the converter for this class should be
-- ignored or not for the bindings generation. This is only applicable to absolute
-- base classes which can be down casted to child classes.
function Class:isConverterIgnored()
	return im:ignoreConverter(self)
end

--- Check if this class is templated.
-- Should always return false for this class. (would return true
-- for the derived Template type)
-- @return false
function Class:isTemplated()
	return not self._templateParameters:empty()
end

function Class:addTemplateParameter(param)
	self:check(param,"Invalid template parameter argument");
	self._templateParameters:push_back(param)
end

function Class:getTemplateParameters()
	return self._templateParameters
end

--- Function used to check if a class is abstract.
function Class:isAbstract()
	-- return not self:getAbstractFunctions():empty() or not self:getAbstractOperators():empty()
	return not self:getAbstractFunctions():empty()
end

function Class:isVirtual()
	-- return not self:getAbstractFunctions():empty() or not self:getAbstractOperators():empty()
	local dtor = self:getDestructor()
	if dtor and dtor:isVirtual() then
		return true;
	end

	return not self:getVirtualFunctions():empty()
end

function Class:getTypeName()
	local mtype = self:getMappedType() and self:getMappedType():getName()
	if mtype and self:isRecursivePublic() then
		tm:registerMappedType(mtype)
	end
	return  mtype or self:getFullName()
end

function Class:isValidForWrapping()
	local abase = self:getFirstAbsoluteBase()
	
	local tname = self:getTypeName()
	
	if tname and (tname:find("%(") or tname:find("%)")) then
		self:notice("Ignoring class ",self:getFullName()," because its typename ", tname," contains parentheses.")
		return false;
	end
	
	return not self:isTemplated()
		and (self:getHeaderFile() and not im:ignore(self:getHeaderFile(),"file"))
		and ((not self:getParent()) or self:getParent():isValidForWrapping())
		and self:isPublic()
		and not self:isIgnored()
		and (abase==self or abase:isValidForWrapping())
end

function Class:setModule(modname)
	self.externalModule = modname
end

function Class:getDeleter()
	return tm:getDeleter(self)
end

function Class:getModule()
	local mtype = self:getMappedType() and self:getMappedType():getName()
	if mtype and self:isRecursivePublic() then
		-- In case there a mapped type for this class, we when to register it directly in the default module.
		-- the mapped type is going to be some king of std template composition.
		return rm:getDefaultModuleName()
	end
	return self.externalModule or tm:getModule(self) or tm:getMappedModuleName(self)
end

function Class:isExternal()
	return self.externalModule or tm:getModule(self)
end

function Class:addDefaultConstructor()
	local allcons = self:getFunctions{"Constructor"}
	if allcons:empty() then
		-- add default public constructor:
		local func = Function()
		func:setName(self:getName())
		func:setArgsString("()")
		func:setSection("public")
		func:setConstness(false)
		func:setStatic(false)
	
		self:addFunction(func)
	end
end

function Class:addVariableGetters()
	local allvars = self:getVariables{"Public","Valid"}
	for _,var in allvars:sequence() do
		-- add default public constructor:
		
		local func = Function()
		func:setName(var:getName())
		func:setArgsString("()")
		func:setSection("public")
		func:setConstness(false)
		func:setStatic(false)
		func:setReturnType(var:getType())
		func:setIsGetter(true)
		
		local prevFuncs = self:getFunctions({"Name"},{func:getLuaName()})
		
		if prevFuncs:empty() then
			self:addFunction(func)
		else
			self:warn("Ignoring getter with name ", func:getLuaName()," because of existing function in class ", self:getFullName())
		end
	end
end

function Class:addVariableSetters()

	local Type = require "reflection.Type"
	local Vector = require "std.Vector"
	local ItemLink = require "reflection.ItemLink"
	local Parameter = require "reflection.Parameter"
	
	local link = ItemLink("void")
	local links = Vector()
	links:push_back(link)
			
	local rtype = Type{links=links}
	rtype:parse();
	
	local allvars = self:getVariables{"Public","Valid"}
	for _,var in allvars:sequence() do
		-- add default public constructor:
		local vtype = var:getType()
		if not vtype:isConst() then
			local param = Parameter{type=vtype,name="value"};
			
			local func = Function()
			func:getParameters():push_front(param)
			func:setName(var:getName())
			func:setArgsString("(" .. vtype:getName() .. " value)")
			func:setSection("public")
			func:setConstness(false)
			func:setStatic(false)
			func:setReturnType(rtype)
			func:setIsSetter(true)
			
			local prevFuncs = self:getFunctions({"Name"},{func:getLuaName()})
			
			if prevFuncs:empty() then
				self:addFunction(func)
			else
				self:warn("Ignoring setter with name ", func:getLuaName()," because of existing function in class ", self:getFullName())
			end
		end
	end
end

function Class:addWrapperConstructors()
	self:check(self._wrappersLoaded==nil,"Wrappers were already loaded.");
	
	local Type = require "reflection.Type"
	local Vector = require "std.Vector"
	local ItemLink = require "reflection.ItemLink"
	local Parameter = require "reflection.Parameter"
	
	-- Add the new constructors to the list:
	local cons = self:getValidPublicConstructors()
	local newCons = Set();
	
	local link = ItemLink("lua_Table *")
	local links = Vector()
	links:push_back(link)
			
	local ptype = Type{links=links}
	ptype:parse();
	
	local param = Parameter{type=ptype,name="data"};
	
	for _,func in cons:sequence() do
		self:info("Cloning function ",func:getFullName())
		local ncons = func:clone()
		ncons:setWrapper(true);
		ncons:getParameters():push_front(param)
		
		newCons:push_back(ncons)
	end
	
	for  _,func in newCons:sequence() do 
		self:addFunction(func)
	end
	
	self._wrappersLoaded = true;
end

function Class:addDefaultVirtuals()
	-- only retrieve the public valid virtual functions:
	local funcs = self:getVirtualFunctions():filterItems({"ValidWrapper","Public","Method"},{self})
	
	local newFuncs = Set();
	
	for _,func in funcs:sequence() do
		self:info("Cloning virutal function ",func:getFullName())
		if not func:isAbstract() then
			local nfunc = func:clone()
			nfunc:setUseBase(true);
			nfunc:setVirtual(false); -- this should not be considered virtual.
			nfunc:setAbstract(false); -- this should not be considered virtual.
			nfunc:setWrapper(false); -- this should not be considered virtual.
			nfunc:setName("base_".. func:getName())
			
			newFuncs:push_back(nfunc)
		end
	end
	
	for  _,func in newFuncs:sequence() do 
		self:addFunction(func)
	end
end

function Class:isPolymorphic()
	for _,base in self:getBases():sequence() do
		if base:isPolymorphic() then
			return true;
		end
	end
	
	-- check if we have at least one virtual function :
	local funcs = self:getFunctions{"Virtual"}
	return not funcs:empty()
end

function Class:onStackOnly()
	-- check if this class can only be created on the stack:
	local funcs = self:getFunctions{"Operator","Private"}
	for _,func in funcs:sequence() do
		if (func:getName()=="operator new" or func:getName()=="operator delete") then
			self:notice("Found private new/delete operator for class ", self:getFullName(),": considered as stack only.")
			return true;
		end
	end
end


return Class
