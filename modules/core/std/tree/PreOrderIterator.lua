local Class = require("classBuilder"){name="TreePreOrderIterator",bases="std.tree.Iterator"};

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
    self:check(self._node,"Invalid node.");
    if( not self._skip_children and self._node.first_child ) then
        self._node=self._node.first_child;
    else
        self._skip_children = false;
        while( not self._node.next_sibling) do
            self._node=self._node.parent;
            if( not self._node) then
                return self;
			end
        end
        self._node=self._node.next_sibling;
    end
    return self;
end
	
function Class:dec()
    self:check(self._node,"Invalid node");
    if(self._node.prev_sibling) then
        self._node=self._node.prev_sibling;
        while( self._node.last_child ) do
            self._node=self._node.last_child;
		end
    else
        self._node=self._node.parent;
        if(not self._node) then
            return self;
		end
    end
    return self;
end
		
return Class
