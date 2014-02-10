
local oo = require "loop.base"

local log = require "logger"
 
local IteratorHandler = oo.class{}

IteratorHandler.CLASS_NAME = "bindings.IteratorHandler"

function IteratorHandler:__init()
    local object = oo.rawnew(self,{})  
	object._TRACE_ = "IteratorHandler"
    return object
end

function IteratorHandler:foreachIterator(list,handler,...)
	-- iterate on all the items in the list:
	if not list then
		log:warn("Invalid list in IteratorHandler:handle()");
		return;
	end
	
	-- go to first:
	list:toFirst()
	
    local item = list:current()
    if not item then
        log:warn("No first item in iterator list.");
        list:release()
        return
    end
    
    -- loop iteration:
    while(item) do
    	handler:handle(item,...)
    	
    	if item.release then
    		item:release()
    	end
        
        list:toNext();
        item = list:current();
    end
    
    -- release the list.
    list:release();
end

return IteratorHandler
