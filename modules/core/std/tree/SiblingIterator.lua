local Class = require("classBuilder"){name="TreeSiblingIterator",bases="std.tree.Iterator"};

local TreeIterator = require "std.tree.Iterator"

function Class:initialize(rhs)
	if rhs then
		if self:isInstanceOf(Class,rhs) then
			self._parent = rhs._parent 
		elseif self:isInstanceOf(TreeIterator,rhs) then
			self._parent = self._node and self._node.parent
		else
			self._parent = rhs.parent
		end
	end
end

function Class:setParent(parent)
	self._parent = parent
end

function Class:getParent()
	return self._parent
end

-- mapping for operator++
function Class:inc()
    if(self._node) then
        if (not self._node.next_sibling) then
            self._parent = self._node.parent;
            self._node=nil;
        else
            self._node=self._node.next_sibling;
        end
    end
    return self;
end
	
function Class:dec()
    if(self._node) then
		self._node=self._node.prev_sibling;
    else
        self:check(self._parent,"Invalid parent object");
        self._node=self._parent.last_child;
    end
	return self
end	

function Class:range_first()
	return self._parent and self._parent.first_child
end

function Class:range_last()
	return self._parent and self._parent.last_child
end

return Class
