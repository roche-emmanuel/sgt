
local oo = require "loop.cached"

local Set = require "std.Set"
local Map = require "std.Map"
 
local Object = require "base.Object"

-- This module contains the base functions needed to support writing library bindings
local TypeManager = oo.class({},Object)

TypeManager.CLASS_NAME = "bindings.TypeManager"

function TypeManager:__init()
    local object = Object:__init()
    object = oo.rawnew(self,object)
	object._types = Set()
    object._externals = Map()
    object._baseTypeMappings = Map()
    object._externalParents = Map()
    object._externalFuncs = Map()
    object._deleters = Map()
	object._referencedExternals = Set();
	object._registeredMappedTypes = Set()
	object._registeredMappedTypeFunctions = Map()
	object._typeConstructorMap = Map()
	object._typeDestructorMap = Map()
	object._hashAliases = {}

    -- this is a mapping of the actual root namespace of a class to the lua module that will be used for it.
    -- if no such mapping is available then
    -- 1. The class is placed in the default module in case this root namespace is the default namespace.
    -- 2. The class is placed in the module with the same name as the root namespace otherwise.
    object._moduleNameMap = Map()  
    object._TRACE_ = "TypeManager"
    return object
end

function TypeManager:getMappedModuleName(class)
	-- get the root namespace for this class:
	local ns = class:getRootNamespace()
	if not ns then
		-- this class is in the std default namespace, so we use the default module name.
		return nil;
	else 
		self:info("Found root namespace ", ns:getName(), " for class ", class:getFullName())
		return self._moduleNameMap:get(ns:getName()) or ns:getName()
	end
end

function TypeManager:setTypeConstructor(typename,construct)
	self._typeConstructorMap:set(typename,construct)
end

function TypeManager:getTypeConstructor(typename)
	for pattern,value in self._typeConstructorMap:sequence() do
		if typename:find(pattern) then
			return value
		end
	end
end

function TypeManager:setTypeDestructor(typename,dtor)
	self._typeDestructorMap:set(typename,dtor)
end

function TypeManager:getTypeDestructor(typename)
	for pattern,value in self._typeDestructorMap:sequence() do
		if typename:find(pattern) then
			return value
		end
	end
end

function TypeManager:getMappedModule(mname)
	return self._moduleNameMap:get(mname) or mname
end

function TypeManager:setMappedModuleName(mname, mapped)
	self._moduleNameMap:set(mname,mapped)
end

function TypeManager:registerMappedType(mtype)
	if not self._externals:get(mtype) then -- We should ignore external types at this point.
		if(mtype:find("%(%s*%*")) then
			-- this looks like a function typedef so we ignore it:
			self:notice("Ignoring function mapped type '",mtype,"'")
		elseif (mtype:find("union ") or mtype=="class") then
			self:warn("Got invalid mapped type: ", mtype)
			self:backtrace()
			return false
		else
			self:info("Registering mapped type '",mtype,"'")
			self._registeredMappedTypes:push_back(mtype)
		end
	end
	
	return true
end

function TypeManager:getRegisteredMappedTypes()
	return self._registeredMappedTypes
end

function TypeManager:registerMappedTypeFunction(mtype,func)
	if not self._externals:get(mtype) then -- We should ignore external types at this point.
		self:info("Registering function ",func:getName()," for mapped type ",mtype)
		self._registeredMappedTypes:push_back(mtype)
		local list = self._registeredMappedTypeFunctions:getOrCreate(mtype,Set) 
		list:push_back(func)		
	end
end

function TypeManager:getRegisteredMappedTypeFunctions(mtype)
	return self._registeredMappedTypeFunctions:get(mtype)
end


function TypeManager:registerType(type)
	self:check(type and self:isInstanceOf(require"reflection.Type",type),"Invalid type object.")	
	self._types:push_back(type)
end

function TypeManager:parseTypes()
	for _,v in self._types:sequence() do
		v:parse()
	end
end

function TypeManager:registerExternals(file)
	self:info_v("Registering externals from ",file)
	local f = io.open(file,"r")
	
	self:check(f,"Invalid file: ",file)
	
	local currentModule = nil
	local line = f:read("*l")
	while line do
		if line=="" then
			-- do nothing in that case.
		elseif line:find("module=(.*)$") then
			currentModule = line:gsub("module=(.*)$","%1")
			self:info_v("Switching to current module=",currentModule)
		else
			self:check(currentModule,"Invalid current module.")
			
			-- extract class and base from line:
			--self:debug("Checking external line:'",line,"'")
			
			local p1,p2, className, baseName=line:find("(.-) => (.*)$")
			
			if not p1 then
				--self:debug("Could not find external pattern");
				className = line;
				baseName = line
			end
			
			self:checkNonEmptyString(className,"Invalid empty class name")
			self:checkNonEmptyString(baseName,"Invalid empty base class name")
			
			local prevMod = self._externals:get(className)
			self:check(prevMod==nil,"The external class ",className," was already registered in module ",prevMod)			

			self:info_v("Registering external class: ",className," with parent: ", baseName)
			self._externals:set(className,currentModule)
			self._externalParents:set(className,baseName)
		end
		
		line = f:read("*l")	
	end
	
	self:info_v("Closing file ",file)
	f:close()
end

function TypeManager:registerExternalClass(mod,className,baseName)
	baseName = baseName or className
	self:info_v("Registering external class: ",className," with parent: ", baseName," in module ", mod)
	self._externals:set(className,mod)
	self._externalParents:set(className,baseName)
end

function TypeManager:registerExternalFunctions(file)
	self:info_v("Registering external functions from ",file)
	local f = io.open(file,"r")
	
	local currentModule = nil
	local line = f:read("*l")
	while line do
		if line=="" then
			-- do nothing.
		elseif line:find("module=(.*)$") then
			currentModule = line:gsub("module=(.*)$","%1")
			self:info_v("Switching to current module=",mod)
		else
			self:check(currentModule,"Invalid current module.")
			local prevMod = self._externalFuncs:get(line)
			self:check(prevMod==nil,"The external function ",line," was already registered in module",prevMod)			

			self:info_v("Registering external class: ",line)
			self._externalFuncs:set(line,currentModule)
		end
		line = f:read("*l")	
	end
	
	self:info_v("Closing file ",file)
	f:close()
end

function TypeManager:getModule(class)
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class argument")
	
	local tname = class:getTypeName()
	return self._externals:get(tname)
end

function TypeManager:getAbsoluteBaseName(class)
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class argument")
	
	local tname = class:getTypeName()
	return self._externalParents:get(tname) or tname; --class:getFullName()
end

function TypeManager:getExternalBase(tname,noRef)
	if not tname then
		return
	end
	
	local parentClass = self._externalParents:get(tname)
	if parentClass then
		self:info("Adding referenced external '",parentClass,"'")
		self._referencedExternals:push_back(parentClass)
		self:info("Adding referenced external '",tname,"'")
		self._referencedExternals:push_back(tname)
	end
	return parentClass
end

function TypeManager:getReferencedExternals()
	return self._referencedExternals
end

function TypeManager:getFunctionModule(func)
	self:check(func and self:isInstanceOf(require"reflection.Function",func),"Invalid function argument")
	
	local tname = func:getFullName()
	return self._externalFuncs:get(tname)
end

function TypeManager:registerDeleter(className,deleter)
	local prevdeleter = self._deleters:get(className)
	self:check(prevdeleter==nil,"Trying to override deleter '", prevdeleter, "' with new deleter '",deleter,"' for class '",className,"'")
	
	self._deleters:set(className,deleter)
end

function TypeManager:getDeleter(class)
	-- recursively check for a deleter availability:
	self:check(class and self:isInstanceOf(require"reflection.Class",class),"Invalid class argument")

	--self:info("Checking deleter for ",class:getFullName())
	if class:isExternal() then
		return self._deleters:get(self:getAbsoluteBaseName(class))
	end
	
	local del = self._deleters:get(class:getFullName())
	if del then
		return del
	end

	-- return the deleter for the base:
	for _,base in class:getBases():sequence() do
		local del = self:getDeleter(base)
		if del then
			return del
		end
	end
	
	-- return nothing.
end

function TypeManager:addBaseTypeMapping(srcType, destType)
	self._baseTypeMappings:set(srcType,destType)
end

function TypeManager:getBaseTypeMapping(srcType)
	return self._baseTypeMappings:get(srcType) or srcType
end

function TypeManager:setHashAlias(classname, alias)
	self._hashAliases[classname] = alias
end

function TypeManager:getHashAlias(classname)
	return self._hashAliases[classname] or classname
end

return TypeManager()
