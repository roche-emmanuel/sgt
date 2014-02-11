local Class = require("classBuilder"){name="TreeBreadthFirstIterator",bases="std.tree.Iterator"};

local Iterator = require "std.tree.Iterator"

function Class:initialize(rhs)
	self._traversal_queue = require("std.Queue")()

	if rhs then
		self._traversal_queue:push(self:isInstanceOf(Iterator,rhs) and rhs._node or rhs)
	end
end

-- mapping for operator++
function Class:inc()
    self:check(self._node,"Invalid node");

    -- Add child nodes and pop current node
    local sib=self:begin();
    while(sib:valid()) do
        self._traversal_queue:push(sib:getNode());
        sib:inc();
    end
    self._traversal_queue:pop();
    if(self._traversal_queue:size()>0) then
        self._node=traversal_queue:front();
    else
        self._node=nil;
	end
    return self;
end

function Class:dec()
	self:no_impl()
end

return Class
