
local oo = require "loop.cached"
local utils = require "utils"
local Namespace = require "reflection.Namespace"
local Scope = require "reflection.Scope"
local Set = require "std.Set"
local OrderedMap = require "std.OrderedMap"
local Map = require "std.Map"
local dbg = require "debugger"

local tm = require "bindings.TypeManager"

local Object = require "base.Object"

local log = require "logger"

-- This module contains the mapping of the relfection details read with doxmlparser.
local RMap = oo.class({},Object)

function RMap:__init(class,object)
    object = Object:__init(object or {})
    object = oo.rawnew(self,object)
    object.globalNamespace = Namespace() -- the global namespace holding everything.
    object.classes = Set()
    object.namespaces = Set()
    object.enums = Set()
    object.baseClasses = Set()
    object.derivedClassesMap = OrderedMap()
    object.userHeaders = Set() -- Set of user provided headers.
    object.userContent = Set() -- Set of user provided content.
    object.defines = Set()
    object.codeAdditions = Map()
	object._initialized = false;
	object._TRACE_ = "ReflectionMap"
	
    return object
end

function RMap:setCodeAddition(name,content)
	self.codeAdditions:set(name,content)
end

function RMap:getCodeAddition(name)
	return self.codeAdditions:get(name)
end

function RMap:isInitialized()
	return self._initialized;
end

--- Retrieve the global namespace:
function RMap:getGlobalNamespace()
    return self.globalNamespace;
end

-- helper function to retrieve all the classes.
function RMap:collectClasses(scope,visited)
	--log:warn("Class collector entering scope: ".. scope:getFullName())
	
    if not visited:contains(scope) then
        if(scope:getScopeType() == Scope.CLASS) and not scope:isIgnored() then
            self.classes:push_back(scope)
        end
        
        visited:push_back(scope)
       
        local children = scope:getSubScopes()

        for k,v in children:sequence() do
			--log:warn("Visiting child ".. v:getName() .. " in parent ".. scope:getName())
            self:collectClasses(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited! Parent is: ", scope:getParent():getFullName())
    end
end

-- helper function to retrieve all the classes.
function RMap:collectEnums(scope,visited)
	--log:warn("Class collector entering scope: ".. scope:getFullName())
	
    if not visited:contains(scope) then
    	local enums = scope:getEnums()
    	
    	for _,v in enums:sequence() do
    		self.enums:push_back(v)
    	end
        
        visited:push_back(scope)
        local children = scope:getSubScopes()

        for k,v in children:sequence() do
			--log:warn("Visiting child ".. v:getName() .. " in parent ".. scope:getName())
            self:collectEnums(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited! Parent is: ", scope:getParent():getFullName())
    end
end

-- helper function to retrieve all the namespaces.
function RMap:collectNamespaces(scope,visited)
    if not visited:contains(scope) then
        if(scope:getScopeType() == Scope.NAMESPACE) then
            -- only add the namespace if it contains something:
            if not scope:getFunctions():empty() or not scope:getEnums():empty() or not scope:getVariables():empty() then
                self.namespaces:push_back(scope)
            end
        end
        
        visited:push_back(scope)
        local children = scope:getSubScopes()
        for k,v in children:sequence() do
            self:collectNamespaces(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited!")
    end
end

--- Use to collect all the classes in the reflectin map.
function RMap:collectAllClasses()
    log:notice ("Collecting all classes...")
    -- iterate on all the scopes to find the classes:
    self.classes:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectClasses(self.globalNamespace,visited)
end

--- Use to collect all the classes in the reflectin map.
function RMap:collectAllEnums()
    log:notice ("Collecting all enums...")
    -- iterate on all the scopes to find the classes:
    self.enums:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectEnums(self.globalNamespace,visited)
end


function RMap:collectAllNamespaces()
    log:notice ("Collecting all namespaces...")
	--dbg:backtrace(1,true)
	
    -- iterate on all the scopes to find the classes:
    self.namespaces:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectNamespaces(self.globalNamespace,visited)
end

--- Find the base classes.
-- The "Base classes" are the classes with no parent class in the XML reflection
-- This function will compute the list of all base classes found so far.
function RMap:findBaseClasses()
    self.baseClasses:clear()
    
    log:info ("Finding base classes...")

    local classes = self.classes
    
    --log:info ("self.classes content is: ",classes)
    
    for k,v in classes:sequence() do
        if v:getBases():empty() then
            self.baseClasses:push_back(v)
        end
    end    
end

--- Find all the derived classes:
function RMap:findDerivedClasses()
    log:info ("Collecting derived classes...")

    local map = self.derivedClassesMap
    map:clear()
    
    local classes = self.classes;
    local bases = self.baseClasses
    
    for k,v in classes:sequence() do
        --log:info("Checking derivation of ".. v:getName())
        for k1,base in bases:sequence() do
            if(self:isDerivedFrom(v,base)) then
                local set = map[base]
                if not set then
                    set = Set()
                    map:set(base,set)
                end
                set:push_back(v);
                --log:info("Adding derived class ".. v:getName() .. " to base ".. base:getName())
            end
        end
    end        
end

--- Get a class by its name.
function RMap:getClass(cname)
    local classes = self.classes

    for k,v in classes:sequence() do
        if v:getName() == cname then
            return v;
        end
    end
end

--- Check if class is derived from parent.
function RMap:isDerivedFrom(class,base)
    -- check if we can find the base class in the parent hierarchy of the class object:
    if not class or not base then
        return false;
    end
    
    local bases = class:getBases()
    for k,v in bases:sequence() do
        if( v == base) then
            return true;
        end
        if self:isDerivedFrom(v,base) then
            return true;
        end
    end
    
    return false;
end

--- Sort all classes by hierarchy.
function RMap:sortClassesHierarchy()
    log:info ("Sorting classes by hierarchy...")

    -- order all the classes by parent/child hierarchy.
    local sorted = Set()
    local classes = self.classes;
    
    for k,v in classes:sequence() do
        -- check if any of the sorted classes is derived from that class:
        local index = nil
        
        for k,class in sorted:sequence() do
            if(self:isDerivedFrom(class,v)) then
                log:info ("Inserting class ".. v:getName() .. " before derived class ".. class:getName())
                index = k;
                break;
            end
        end
        
        if index then
            sorted:insert(index,v)
        else
            sorted:push_back(v)
        end
    end
    
    self.classes = sorted;
end

--- Function called when done adding classes to the mapping.
function RMap:generateClassHierarchy()
    self:collectAllClasses()
    self:collectAllNamespaces()
    self:collectAllEnums()
    self:findBaseClasses()
    self:findDerivedClasses()
    self:sortClassesHierarchy()
    self:retrieveConvertableTypes()
    
    log:warn("Parsing all types...")
    tm:parseTypes()
    
	self._initialized = true;
end

--- Assign a specific module name for the bindings.
function RMap:setModuleName(modname)
    self.moduleName = modname
end

--- Retrieve the module name.
function RMap:getModuleName()
    return self.moduleName
end

function RMap:setLuaOpenName(name)
	self.luaOpenName = name
end

function RMap:getLuaOpenName()
	return self.luaOpenName or self:getModuleName()
end


--- Retrieve the set of user headers.
function RMap:getUserHeaders()
    return self.userHeaders
end

--- Add a new header to the user header list.
function RMap:addUserHeader(name)
    self.userHeaders:push_back(name)
end

--- Retrieve the set of user headers.
function RMap:getUserContents()
    return self.userContent
end

--- Add a new header to the user header list.
function RMap:addUserContent(cont)
    self.userContent:push_back(cont)
end

--- Retrieve the map of derived classes.
function RMap:getDerivedClassesMap()
    return self.derivedClassesMap
end

--- Retrieve derived classes for a specific base class.
function RMap:getDerivedClasses(base)
    return self.derivedClassesMap[base]
end

--- Return the list of all classes.
function RMap:getAllClasses(validOnly)
	if validOnly then
		if self._validClasses then
			return self._validClasses
		end
		
		self._validClasses = Set();
		for k,v in self.classes:sequence() do
			if not v:isIgnored() and v:isValidForWrapping() then
				self._validClasses:push_back(v)
				self:debug0_v("Adding ", v:getFullName()," to class list.")
			else
				self:notice("Ignoring class ",v:getFullName())
			end
		end
		
		return self._validClasses;
	else
    	return self.classes
    end
end

--- Return the list of all namespaces.
function RMap:getAllNamespaces()
    return self.namespaces
end

--- Return the list of available enumerations:
function RMap:getAllEnums()
	return self.enums;
end

function RMap:addDefine(def)
	dbg:assert(def,"Invalid define object");
	self.defines:push_back(def)
	log:info("Adding define ",def:getName())
end

function RMap:getDefines()
	return self.defines;
end

function RMap:retrieveConvertableTypes()
    -- get the "convertable" types:
    local convertables = OrderedMap();
    
    local derived = self:getDerivedClassesMap()
    
    for k,v in derived:sequence() do
        if not k:isConverterIgnored() then
            convertables:set(k,v)
        end
    end
    
    self.convertableClassesMap = convertables;
end

function RMap:getConvertableClassesMap()
	return self.convertableClassesMap
end

return RMap
