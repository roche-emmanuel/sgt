local Class = require("classBuilder"){name="ItemNameContainer",bases="gui.ItemContainer"};

local utils = require "utils"
local dataman = require "gui.DataManager"

-- By default a container will create its own table as data Holder 
-- if not provided another value in its constructor
function Class:initialize(options)
	-- handle dataHolderName here.
	self:check(options,"invalid option table")
	self:checkNonEmptyString(options.dataHolderName,"Invalid dataHolderName entry.")
	
	self._namePath = utils.splitString(contName,self._separator)
end

-- Re implementing the getContainer method.
function Class:getContainer()
    -- if we have a valid parent, then assume this parent is another provider,
    -- and retrieve the container from that parent provider instead of the target project
    -- itself:
    local num = #(self._namePath)
   	self:check(num>0,"Invalid number of names in path");
    
    local cont = nil -- prepare the nil map.
    
    if self._parent then
        if not self.parent:getCurrentItem() then
            return nil;
        end
        
        cont = self.parent:getCurrentItem():getItem(self._namePath[1]);
        if not cont and self._autoCreate then
        	cont = self.parent:getCurrentItem():createItem(self._namePath[1]);
        end
    else
        --wx.wxLogMessage("Size of vector name is "..num)
        cont = dataman:getMainContainer();
    end
    
    -- iterate on the sub maps:
    for i=2,num do
        map = map:getOrCreateItem(self._namePath[i]);
    end
    
    return map;
end

return Class
