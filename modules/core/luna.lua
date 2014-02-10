 
local log = require "tracer"

local __luna = _G.__luna or {}

-- add the luna functions:
__luna.copyParentMethods = function(class,p) -- __luna.copyParentMethods or 
	log:debug4("Luna",'Copying parent methods from ' .. p .. ' for class '.. class._CLASSNAME_);
	local parent = _G;
	local ns = '_G';
	for pname in string.gmatch(p, '([%w_]+)%.') do
  		ns = ns .. '.' .. pname;
  		parent = parent[pname]
	  	if not parent then
	    	log:error("Luna",'Cannot find the namespace ' .. ns .. '. Please register it before loading ' .. class._CLASSNAME_);
	    	return;
	  	end
	end
	
	for pname in string.gmatch(p, '%.([%w_]+)$') do
  		parent = parent[pname]
	end
	
	if not parent then
  		log:error("Luna",'Cannot find parent class: ' .. p .. '. Please register this class before loading ' .. class._CLASSNAME_);
	end
	
	for k,v in pairs(parent) do
  		if k~='__index' and k~='__newindex' and class[k]==nil then
    		class[k]=v
  		end
	end

	if not parent._PARENTS_ then
  		log:error("Luna",'Cannot find parent table in class: ' .. p .. ' while loading ' .. class._CLASSNAME_); --(parent._CLASSNAME_ or "[no name]")
	end
				
	-- iterate on the parent's of the parent:
	for k,v in pairs(parent._PARENTS_ or {}) do
	  	__luna.copyParentMethods(class,v)
	end	
end

__luna.copyAllParents = function(mod) --__luna.copyAllParents or 
	log:debug4("Luna","Starting copy of all parents...");
	if type(mod)~="table" then
		log:error("Luna", "Invalid module name in copyAllParents or module ", mod.__NAME__ or "[unnamed]")
		return;
	end
		
	for k,v in pairs(mod) do
	  	-- check if the object is a luna class:
	  	if( type(v)=='table' and v._CLASSNAME_ and v._PARENTS_) then
			log:debug4("Luna","Handing class ",v._CLASSNAME_);
	    	for _,p in pairs(v._PARENTS_) do
	    		log:debug4("Luna","Handing class parent ",p);
	      		__luna.copyParentMethods(v,p);
	    	end
	  	end
	end
	log:debug1("Luna","Ending copy of all parents in module ", mod.__NAME__ or "[unnamed]");

end

_G.__luna = __luna

_G.requireExtension = function(modName)
	log:notice("Requiring extensions for module: ", modName)
	local fs = require "base.FileSystem"
	
	if fs:isFile(fs:getRootPath(true).. "lua/modules/extensions/" .. modName .. ".lua") then
		require("extensions."..modName)
	else	
		log:info("No extensions found for module ",modName)
	end
end
