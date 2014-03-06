--[=[
--[[
Function: utils.buildclass

Function used to create new classes using the LOOP class model.

Parameters:
	options.name - {string} The name of the class to create. Can also be passed as options[1]
	options.bases - {string|table} The parent classes for this new class. Can be provided as a string,
an actual class table, or a table containing a mix of those for multiple inheritance. . Can also be passed as options[2]
  
Returns:
	The newly created class table. Can then be extended with new methods/variables.
]]
function utils.buildclass(options)
]=]

-- implementation of the class builder utility.
-- This tool is used to simplify the creation of loop classes.

local log  = require "log"
local assert = require "utils.assert"
local oo = require "loop.cached"

-- This is the main method used to create a new class object.
local createClass = function(options)
	-- check if the provided options are valid:
	assert(options,"Invalid options to build class.")
	
	-- convert the base list to a table if needed:
	local cbases  = options.bases or options[2] or {"core.Object"}
	cbases = type(cbases)~="table" and {cbases} or cbases
	
	local cname = options.name or options[1]

	-- check the name is valid:
	assert(type(cname)=="string" and cname ~= "","Invalid options.name field.")
	
	-- Retrieve the actual bases tables:
	local bases = {}
	local bases_inv = {}
	for _,base in ipairs(cbases) do
		table.insert(bases,type(base)=="string" and require(base) or base)
	end
	for _,base in ipairs(bases) do
		table.insert(bases_inv, 1, base)
	end
	
	-- Create the new class table
	log.debug_v("Generating class for ",cname)
	local result = oo.class({},unpack(bases_inv))
	result._CLASSNAME_ = cname
	result._TRACE_ = cname

	-- default implementations for new and initialize:
	function result:new(options)
		-- do nothing by default
	end
	
	function result:initialize(options)
		-- do nothing by default.
	end
	
	-- Setup the class init method:
	function result:__init(opt,instance)
		local obj = instance or {}
		
		for _,base in ipairs(bases) do
			obj = base:__init(opt,obj)
		end
		
		obj =  oo.rawnew(self,obj)
		
		if not instance then
			obj:doInitialize(opt)
		end
		
		return obj 
	end

	-- add extensions on the fly for a given class:
	function result.extendsWith(options)
		local list = {result}
		for _,base in ipairs(options) do
			table.insert(list,base)
		end
		
		local name = cname or result._CLASSNAME_ .. "_ext"
		return createClass{name=name,bases=list};
	end

	
	function result:doInitialize(opt,class,done)
		-- this is needed to ensure we don't execute parent functions multiple times in diamond
		-- inheritance.
		done = done or {} 
		
		-- The new functions are executing while "descending" the class hierarchy,
		-- the initialize functions are executing while "ascending".
		class = class or oo.classof(self)
		
		if class.new and not done[class.new] then
			done[class.new]=true
			class.new(self,opt)
		end
		
		-- We have to invert the order of the super classes
		-- to respect the initialization order:
		local bases = {}
		for _,base in oo.supers(class) do
			table.insert(bases, 1, base)
		end
		
		for _,base in ipairs(bases) do
			if base.doInitialize then
				base.doInitialize(self,opt,base,done)
			end
		end
		
		if class.initialize and not done[class.initialize] then
			done[class.initialize] = true 
			class.initialize(self,opt)
		end
	end	
	
	function result:delete()
		self:debug2_v("Deleting object.")
	end
	
	return result
end

-- also register the global function:
_G.createClass = function(options)
	return createClass(options)
end

return createClass
