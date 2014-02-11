local Class = require("classBuilder"){name="TreeFixedDepthIterator",bases="std.tree.Iterator"};

function Class:initialize(rhs)
	self:no_impl()
end

function Class:inc()
	self:no_impl()
--[[
    self:check(self._node,"Invalid node");

    if(self._node.next_sibling) then
        self._node=self._node.next_sibling;
    else
        local relative_depth=0;
    upper:
        repeat
            self._node=self._node.parent;
            if(not self._node) then 
				return self 
			end;
            relative_depth = relative_depth-1;
        until(self._node.next_sibling)
    lower:
        self._node=self._node.next_sibling;
        while( not self._node.first_child==0) do
            if(not self._node.next_sibling) then
                goto upper;
			end
            self._node=self._node.next_sibling;
            if(not self._node) then
				return self;
			end
        end
		
        while(relative_depth<0 and self._node.first_child) do
            self._node=self._node.first_child;
            relative_depth = relative_depth+1;
        end
		
        if(relative_depth<0) then
            if(not self._node.next_sibling) then
				goto upper;
            else
				goto lower;
			end
        end
    end
	
    return self;
]]
end
	
function Class:dec()
	self:no_impl()
end

return Class
