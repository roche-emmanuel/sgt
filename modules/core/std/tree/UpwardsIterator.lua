local Class = require("classBuilder"){name="TreeUpwardsIterator",bases="std.tree.Iterator"};

-- mapping for operator++
function Class:inc()
    self:check(self._node,"Invalid node");
    self._node=self._node.parent;
    return self;
end
	
function Class:dec()
    self:no_impl()
end


return Class
