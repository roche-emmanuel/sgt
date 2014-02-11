local Class = require("classBuilder"){name="TreeLeafIterator",bases="std.tree.Iterator"};

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
    while(not self._node.next_sibling) do
        if (not self._node.parent) then	
			return self;
		end
        self._node=self._node.parent;
    end
    self._node=self._node.next_sibling;
    while(self._node.first_child) do
        self._node=self._node.first_child;
	end
    return self;
end
	
function Class:dec()
    self:check(self._node,"Invalid node");
    while (not self._node.prev_sibling) do
        if (not self._node.parent) then
			return self;
		end
        self._node=self._node.parent;
    end
    self._node=self._node.prev_sibling;
    while(self._node.last_child) do
        self._node=self._node.last_child;
	end
    return self;
end


return Class
