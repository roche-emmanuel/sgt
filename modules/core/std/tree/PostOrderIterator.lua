local Class = require("classBuilder"){name="TreePostOrderIterator",bases="std.tree.Iterator"};

local SiblingIterator = require "std.tree.SiblingIterator"

function Class:initialize(rhs)
	if rhs and self:isInstanceOf(SiblingIterator,rhs) and not self._node then
		if rhs:range_last() then
			self._node=rhs:range_last();
		else
			self._node=rhs:getParent();
		end
		self:skip_children();
		self:inc()
	end
end

-- mapping for operator++
function Class:inc()
    self:check(self._node,"Invalid node");
    if( not self._node.next_sibling) then
        self._node=self._node.parent;
        self._skip_children=false;
    else
        self._node=self._node.next_sibling;
        if(self._skip_children) then
            self._skip_children=false;
        else
            while(self._node.first_child) do
                self._node=self._node.first_child;
			end
        end
    end
    return self;
end
	
function Class:dec()
    self:check(self._node,"Invalid node");
    if(self._skip_children or self._node.last_child) then
        self._skip_children=false;
        while(not self._node.prev_sibling) do
            self._node=self._node.parent;
		end
        self._node=self._node.prev_sibling;
    else
        self._node=self._node.last_child;
    end
    return self;
end
	
function Class:descend_all()
    self:check(self._node,"Invalid node");
    while(self._node.first_child) do
        self._node=self._node.first_child;
	end
end

return Class
