local className = "base.ClassBuilder"

require("logger"):debug0_v("Generating class ",className)

local oo = require "loop.cached"

local Object = require "base.Object"
local log = require "logger"

local Class = oo.class({},Object)
Class.CLASS_NAME = className

function Class:__init(options,instance)
	local obj = Object:__init(instance or {})
	obj = oo.rawnew(self,obj)
	obj._TRACE_ = className
	return obj
end

-- main function to create a new class
function Class:__call(options)
	self:check(options,"Invalid options to build class.")
	
	options.bases = type(options.bases)=="string" and {options.bases} or options.bases or {}
	
	if not options.name then
		self:debug1_v("Class name missing. Retrieving name from file.");
		
		-- retrieve the name from the file name.
		--local debug = require "debug"
		local filename = debug.getinfo(2).source
		self:debug2_v("Found filename: ",filename)
		-- retrieve the file name only:
		options.name = filename:gsub("^.-([%a%d_]+)%.lua$","%1")
		self:debug2_v("Extracted class name: ",options.name)
	end
	
	self:check(type(options.name)=="string" and options.name ~= "","Invalid options.name field.")
	
	-- actual bases tables:
	local bases = {}
	for _,base in ipairs(options.bases) do
		table.insert(bases,type(base)=="string" and require(base) or base)
	end
	
	self:debug0_v("Generating class for ",options.name)
	local result = oo.class({},unpack(bases))
	result.CLASS_NAME = options.name -- kept for backward compatibility (see binding modules for instance)
	result._CLASSNAME_ = options.name
	result._LIBRARYNAME_ = options.library or "sgt"
	
	function result:__init(opt,instance)
		local obj = instance or {}
		
		for _,base in ipairs(bases) do
			obj = base:__init(opt,obj)
		end
		
		obj =  oo.rawnew(self,obj)
		obj._TRACE_ = options.name
		
		if result.new then
			result.new(obj,opt)
		end
		
		if not instance then
			obj:doInitialize(opt)
		end
		
		return obj 
	end

	function result:doInitialize(opt,class,done)
		done = done or {}
		class = class or oo.classof(self)
		
		for _,base in oo.supers(class) do
			if base.doInitialize then
				base.doInitialize(self,opt,base,done)
			end
		end
		
		--log:info("Calling doInitialize for class ", class._CLASSNAME_ or "[unnamed]")

		if class.initialize and not done[class.initialize] then
			done[class.initialize] = true -- this is needed to ensure we don't execute parent initialize func multiple times
			-- when the child initialize func is not defined.
			class.initialize(self,opt)
		end
	end
	
	if not result.release then
		function result:release()
			self:deprecated("release should not be used.")
			self._wrappers = nil;
		end
	end
	
	function result:getWrapper(index)
		self:deprecated("getWrapper should not be used.")
		index = index or 0
		return self._wrappers and self._wrappers[index+1]
	end
	
	function result:defineMember(options)
		local name = options.name
		local fname = options.fullname or options.name
		fname = fname:sub(1,1):upper() .. fname:sub(2)
		
		if options.defVal~= nil then
			self["_" .. name] = options.defVal
		end
		
		if not result["get"..fname] then
			result["get"..fname] = function(self)
				return self["_" .. name];
			end
		end
		
		if not options.readonly and not result["set"..fname] then
			result["set"..fname] = function(self,val)
				self["_" .. name] = val;
			end
		end
	end
	
	function result:generateWrapping(wrapper,index)
		result.createInstance = function(options)
			return wrapper(result(options))
		end
		
		--[[self:deprecated("generateWrapping should not be used.")
		
		index = index or 1
		
		for name,func in pairs(wrapper) do
			if type(func)=="function" and (not result[name]) and name~="new" and name~="__eq" and name~="__gc" and name~="delete" then
				--self:info("Adding auto wrapped function: ",name)
				local wname = (name:sub(1,5)=="base_" and name) or (wrapper["base_"..name] and "base_"..name) or name -- force rediction to the base function call to avoid infinite looping.
				result[name] = function(self, ...) 
					--log:info("Calling method ",wname,"...")
					local obj = self._wrappers[index]
					return obj[wname](obj, ...) 
				end
			end
		end]]		
	end
	
	function result:createWrapper(wrapper,...) 
		self:deprecated("createWrapper should not be used.")
	
		self._wrappers = self._wrappers or {}
		local obj = wrapper(self,...)
		self:check(obj,"Could not create wrapper object.");
		
		table.insert(self._wrappers, obj)		
		
		-- also wrapper the protected methods now:
		for name,func in pairs(self) do
			if type(func)=="function" and (name:sub(1,10)=="protected_") then
				local rname = name:sub(11)
				if not self[rname] then
					self[rname] = function(self, ...)
						return self[name](obj,...)
					end
				end
			end
		end			
	end
	
	function result:delete()
		self:debug2_v("Deleting ",self._CLASSNAME_," object.")
	end

	-- return the resulting class:
	return result;
end

-- Function alias for class creation:
Class.create = Class.__call

return Class
