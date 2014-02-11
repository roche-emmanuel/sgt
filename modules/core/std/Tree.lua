local Class = require("classBuilder"){name="Tree",bases="base.Object"};

local Iterator = require "std.tree.Iterator"
local SiblingIterator = require "std.tree.SiblingIterator"
local LeafIterator = require "std.tree.LeafIterator"
local UpwardsIterator = require "std.tree.UpwardsIterator"
local PreOrderIterator = require "std.tree.PreOrderIterator"
local PostOrderIterator = require "std.tree.PostOrderIterator"
local BreadthFirstIterator = require "std.tree.BreadthFirstIterator"
local Vector = require "std.Vector"

local utils = require "utils"

function Class:initialize(rhs)
	self:reset();
	
	if rhs then
		if self:isInstanceOf(Iterator,rhs) then
			self:set_head(#rhs)
			self:replace(self:begin(),rhs)
		elseif rhs.tree then
			self:copy(rhs.tree)
		elseif (rhs.root or rhs[1]) then
			self:set_head(rhs.root or rhs[1])
		end
	end
	
	self._openSymbol = "{"
	self._closeSymbol = "}"
	
end

function Class:subtree_to_table(it,tt,indent,indentStr,sep,indexed)
	indentStr = indentStr or "  "
	sep = sep or "\n"
	--indexed = indexed or {}
    local nChildren=it:number_of_children();
    tt = tt or {}
	indent = indent or 0
	
	--[[
	self:info("Tree to table on item= ",tostring(#it))
	
	if indexed[it._node] then
        table.insert(tt,string.rep(indentStr,indent) .. "[breaking loop on: " .. tostring((#it) or "[none]").. "], " .. sep)
		return
	end
	
	indexed[it._node] = true;
	]]
	
	if (nChildren==0) then
        table.insert(tt,string.rep(indentStr,indent) .. tostring((#it) or "[none]").. ", " .. sep)
	else
        table.insert(tt,string.rep(indentStr,indent) .. tostring((#it) or "[none]").. " (" ..sep);
		local sib = it:begin()
		local sibe = it:at_end()
		--local count=1
		while(sib~=sibe) do
			--self:info("Interating on child ",count)
			self:subtree_to_table(sib,tt,indent+1,indentStr,sep,indexed);
			--count = count+1
			sib:inc()
		end
        table.insert(tt,string.rep(indentStr,indent) .. "), "..sep);
	end	
end

function Class:toString(indentStr, sep)
	indentStr = indentStr or ""
	sep = sep or ""
	
	--self:info("entering toString()")
	
	local tt = {}
	-- local indexed = {}
	--self:info("calling begin()")
	local it = self:begin()
	--self:info("calling at_end()")
	local ite = self:at_end()
	while(it~=ite) do
		--self:info("Wrinting subtree to table")
		self:subtree_to_table(it,tt,1,indentStr,sep) --,indexed)
		it:skip_children()
		it:inc()
	end
	
	--self:info("tree table content is: ",tt)
	
	local str = self._openSymbol .. sep .. table.concat(tt) .. self._closeSymbol
	return (str:gsub(", ([%)}])","%1"));	
end

function Class:__tostring()
	--self:info("entering __tostring()")
	return self:toString()
end

function Class:append_child(it, x, count)
	if count then
	    for i=1,count do
			self:append_child(it,x);
		end
		return it:getClassOf(){it._node.last_child};
	end
	
    -- If your program fails here you probably used 'append_child' to add the top
    -- node to an empty tree. From version 1.45 the top element should be added
    -- using 'insert'. See the documentation for further information, and sorry about
    -- the API change.
    self:check(it:valid(),"Invalid iterator")
	self:check(it._node~=self._head,"Current node should not be the head.");

	local tmp = {}
	tmp.data = x;
    -- tmp.first_child=nil;
    -- tmp.last_child=nil;

    tmp.parent=it._node;
    if(it._node.last_child) then
        it._node.last_child.next_sibling=tmp;
    else
        it._node.first_child=tmp;
    end
	
    tmp.prev_sibling=it._node.last_child;
    it._node.last_child=tmp;
    -- tmp.next_sibling=nil;
    return Iterator{tmp};
end

function Class:prepend_child(it, x, count)
	if count then
		local res;
	    for i=1,count do
			res=self:prepend_child(it,x);
		end
		return res
	end
	
	self:check(it:valid(),"Invalid node");
    self:check(it._node~=self._head,"Current node should not be the head.");

    local tmp = {}
    tmp.data = x
    -- tmp.first_child=nil;
    -- tmp.last_child=nil;

    tmp.parent=it._node;
    if(it._node.first_child) then
        it._node.first_child.prev_sibling=tmp;
    else
        it._node.last_child=tmp;
    end
	
    tmp.next_sibling=it._node.first_child;
    it._node.first_child=tmp;
    -- tmp.prev_sibling=nil;
    return Iterator{tmp};
end
	
function Class:append_children(it, from, to)
	self:check(it:valid(),"Invalid node");
    self:check(it._node~=self._head,"Current node should not be the head.");

	from = SiblingIterator(from)
	to = SiblingIterator(to)
	
    local ret=from:clone();

	local theend = it:at_end()
	
    while(from~=to) do
        self:insert_subtree(theend, from);
        from:inc();
    end
    return ret;
end

function Class:prepend_children(it, from, to)
	self:check(it:valid(),"Invalid node");
    self:check(it._node~=self._head,"Current node should not be the head.");

    local ret=from:clone();

    while(from~=to) do
        self:insert_subtree(it:begin(), from);
        from:inc();
    end
    return ret;
end
	
-- Short-hand to insert topmost node in otherwise empty tree.
function Class:set_head(x)
    self:check(self._head.next_sibling==self._feet,"Invalid config for set_head");
    return self:insert(Iterator(self._feet), x);
end

-- Insert node as previous sibling of node pointed to by position.
function Class:insert(position, x)
    if(not position._node and not position:isInstanceOf(SiblingIterator)) then
        position._node=self._feet; -- Backward compatibility: when calling insert on a null node,
        -- insert before the feet.
    end
	
    local tmp = {};
    tmp.data = x;

	tmp.next_sibling=position._node;

	if position:isInstanceOf(SiblingIterator) then
		if(not position._node) then -- iterator points to end of a subtree
			tmp.parent=position._parent;
			tmp.prev_sibling=position:range_last();
			tmp.parent.last_child=tmp;
		else
			tmp.parent=position._node.parent;
			tmp.prev_sibling=position._node.prev_sibling;
			position._node.prev_sibling=tmp;
		end	
	else
		tmp.parent=position._node.parent;
		tmp.prev_sibling=position._node.prev_sibling;
		position._node.prev_sibling=tmp;		
	end
	
    if(not tmp.prev_sibling) then
        if(tmp.parent) then-- when inserting nodes at the head, there is no parent
            tmp.parent.first_child=tmp;
		end
    else
        tmp.prev_sibling.next_sibling=tmp;
	end
	
    return Iterator{tmp};
end

-- Insert node (with children) pointed to by subtree as previous sibling of node pointed to by position.
function Class:insert_subtree(position, subtree)
    -- insert dummy
	--self:info("Inserting dummy in insert_subtree")
    local it=self:insert(position);
    -- replace dummy with subtree
    return self:replace(it, subtree);
end

-- Insert node (with children) pointed to by subtree as next sibling of node pointed to by position.
function Class:insert_subtree_after(position, subtree)
    -- insert dummy
    local it=self:insert_after(position);
    -- replace dummy with subtree
    return self:replace(it, subtree);
end

-- Insert node as next sibling of node pointed to by position.
function Class:insert_after(position, x)
    local tmp = {};
    tmp.data = x;

    tmp.parent=position._node.parent;
    tmp.prev_sibling=position._node;
    tmp.next_sibling=position._node.next_sibling;
    position._node.next_sibling=tmp;

    if(not tmp.next_sibling) then
        if(tmp.parent) then-- when inserting nodes at the head, there is no parent
            tmp.parent.last_child=tmp;
		end
    else
        tmp.next_sibling.prev_sibling=tmp;
    end
    return Iterator{tmp};
end

-- Insert node above position (below parent if it exists); returns new node
function Class:insert_above(position, x)
    local dst=position._node;

    local tmp = {}
    tmp.data = x;

    tmp.first_child=dst;
    tmp.last_child=dst;
    tmp.parent=dst.parent;
    tmp.prev_sibling=dst.prev_sibling;
    tmp.next_sibling=dst.next_sibling;

    if (tmp.prev_sibling) then
        tmp.prev_sibling.next_sibling=tmp;
    elseif (tmp.parent) then
        tmp.parent.first_child=tmp;
    end
	
    if (tmp.next_sibling) then
        tmp.next_sibling.prev_sibling=tmp;
    elseif (tmp.parent) then
        tmp.parent.last_child=tmp;
    end

    dst.parent=tmp;
    dst.prev_sibling=nil;
    dst.next_sibling=nil;

    return Iterator{tmp};
end

-- Replace node at 'position' with other node (keeping same children);
function Class:replace(position, from)
	if self:isInstanceOf(Iterator,from) then		
		self:check(position._node~=self._head,"Invalid head position");

		if (position==from) then--added check...
			return position;
		end
		
		local current_from=from._node;
		local start_from=from._node;
		local current_to=position._node;

		-- replace the node at position with head of the replacement tree at from
		self:erase_children(position);
		local tmp = {}
		tmp.data = #from;

		if(not current_to.prev_sibling) then
			current_to.parent.first_child=tmp;
		else
			current_to.prev_sibling.next_sibling=tmp;
		end
		
		tmp.prev_sibling=current_to.prev_sibling;
		
		if(not current_to.next_sibling) then
			current_to.parent.last_child=tmp;
		else
			current_to.next_sibling.prev_sibling=tmp;
		end
		
		tmp.next_sibling=current_to.next_sibling;
		tmp.parent=current_to.parent;

		current_to=tmp;

		-- only at this stage can we fix 'last'
		local last=from._node.next_sibling;

		local toit= PreOrderIterator{tmp};
		
		-- copy all children
		repeat 
			self:check(current_from,"Invalid current_from state");
			if(current_from.first_child) then
				--self:info("appending data=",current_from.data," to toit")
				current_from=current_from.first_child;
				toit=self:append_child(toit, current_from.data);
			else
				while(not current_from.next_sibling and current_from~=start_from) do
					current_from=current_from.parent;
					toit=self:parent(toit);
					self:check(current_from,"Invalid current_from object");
				end
				current_from=current_from.next_sibling;
				if(current_from~=last) then
					--self:info("appending data=",current_from.data," to toit parent")
					toit=self:append_child(self:parent(toit), current_from.data);
				end
			end
		until(current_from==last);

		return position:clone(current_to);
	else
		--self:info("Replacing value in position.")
		position._node.data = from
		return position;
	end
end

-- Replace string of siblings (plus their children) with copy of a new string (with children); see above
function Class:replace_range(orig_begin, orig_end, new_begin, new_end)
    orig_begin=SiblingIterator(orig_begin)
    orig_end=SiblingIterator(orig_end)
    new_begin=SiblingIterator(new_begin)
    new_end=SiblingIterator(new_end)
	
	local orig_first=orig_begin._node;
    local new_first=new_begin._node;
    local orig_last=orig_first;
    while(orig_begin:inc()~=orig_end) do
        orig_last=orig_last.next_sibling;
	end
    local new_last=new_first;
    while(new_begin:inc()~=new_end) do
        new_last=new_last.next_sibling;
	end

    -- insert all siblings in new_first..new_last before orig_first
    local first=true;
	local origit = PreOrderIterator{orig_first}
    local ret;
    
	while(true) do
        local tt=self:insert_subtree(origit, PreOrderIterator{new_first});
        if(first) then
            ret=tt;
            first=false;
        end
        if(new_first==new_last) then
            break;
		end
		
        new_first=new_first.next_sibling;
    end

    -- erase old range of siblings
    local last=false;
    local nextv=orig_first;
    while(true) do
        if(nextv==orig_last) then
            last=true;
		end
		
        nextv=nextv.next_sibling;
        self:erase(PreOrderIterator{orig_first});
        if(last) then
            break;
		end
        orig_first=nextv;
    end
	
    return ret;						 
end

						 
function Class:copy(tree)
	self:check(tree and self:isInstanceOf(Class,tree),"Invalid tree instance : ",tree)
	
    self:clear();
    local it=tree:begin();
	local to=self:begin();
	local ite = tree:at_end()
	
    while(it~=ite) do
        to=self:insert(to, #it);
        it:skip_children();
        it:inc();
    end
	
    to=self:begin();
    it=tree:begin();
    while(it~=ite) do
        to=self:replace(to, it);
        to:skip_children();
        it:skip_children();
        to:inc();
        it:inc();
    end
end

function Class:reset()
    self._head = {};
	self._feet = {};
	
	self._head.next_sibling = self._feet;
	self._feet.prev_sibling = self._head;
end

-- Erase all nodes of the tree.
function Class:clear()
	self:reset()
end

function Class:begin(it)
	if it then
		self:check(it:valid(),"Invalid iterator");
		return SiblingIterator{it._node.first_child};	
	else
		return PreOrderIterator{self._head.next_sibling};
	end
end

function Class:at_end(it)
	if it then
		local ret = SiblingIterator();
		ret._parent_=it._node;
		return ret;	
	else
		return PreOrderIterator{self._feet};
	end
end

function Class:begin_breadth_first()
    return BreadthFirstIterator{self._head.next_sibling};
end

function Class:end_breadth_first()
    return BreadthFirstIterator();
end

function Class:begin_post()
    local tmp=self._head.next_sibling;
    if(tmp~=self._feet) then
        while(tmp.first_child) do
            tmp=tmp.first_child;
		end
    end
    return PostOrderIterator{tmp};
end

function Class:end_post()
	return PostOrderIterator{self._feet};
end

function Class:begin_leaf()
    local tmp=self._head.next_sibling;
    if(tmp~=self._feet) then
        while(tmp.first_child) do
            tmp=tmp.first_child;
		end
    end
    return LeafIterator{tmp};
end

function Class:end_leaf()
	return LeafIterator{self._feet};
end


function Class:begin_upwards(it)
    return UpwardsIterator(it);
end

-- Return iterator to the parent of a node.
-- If no parent return a NULL iter	
function Class:parent(it)
	self:check(it:valid() or it._parent,"Invalid iterator")
	return it:getClassOf(){node=(it._node and it._node.parent or it._parent)}
end

-- Return iterator to the last child of a node.
function Class:last_child(it)
	self:check(it:valid(),"Invalid iterator")
	return it:getClassOf(){node=it._node.last_child,parent=it._node}
end

-- Return iterator to the previous sibling of a node.
function Class:previous_sibling(it)
	self:check(it:valid(),"Invalid iterator")
	return it:getClassOf(){it._node.prev_sibling}
end

-- Return iterator to the next sibling of a node.
function Class:next_sibling(it)
	self:check(it:valid(),"Invalid iterator")
	return it:getClassOf(){it._node.next_sibling}
end

-- Return iterator to the next node at a given depth.
function Class:next_at_same_depth(it)
    self:check(it:valid(),"invalid iterator")
    local ret = it:getClassOf()(it);

    if(it._node.next_sibling) then
        ret._node=it._node.next_sibling;
    else
        local relative_depth=0;
    ::upper::
        repeat 
			ret._node=ret._node.parent;
            if(not ret._node) then
				return ret;
			end
            relative_depth = relative_depth-1;
        until(ret._node.next_sibling);
    ::lower::
        ret._node=ret._node.next_sibling;
        while(not ret._node.first_child) do
            if(not ret._node.next_sibling) then
                goto upper;
			end
            ret._node=ret._node.next_sibling;
            if(not ret._node) then
				return ret;
			end
        end
		
        while(relative_depth<0 and ret._node.first_child) do
            ret._node=ret._node.first_child;
            relative_depth = relative_depth+1;
        end
		
        if(relative_depth<0) then
            if(not ret._node.next_sibling) then
				goto upper;
            else
				goto lower;
			end
        end
    end
	
    return ret;
end

-- Erase element at position pointed to by iterator (plus its children), return incremented iterator.
function Class:erase(it)
    local cur=it._node;
    self:check(cur~=self._head);
    local ret = it:getClassOf()(it);
	
    ret:skip_children();
    ret:inc();
    
	self:erase_children(it);
	
    if(not cur.prev_sibling) then
        cur.parent.first_child=cur.next_sibling;
    else
        cur.prev_sibling.next_sibling=cur.next_sibling;
    end
	
    if(not cur.next_sibling) then
        cur.parent.last_child=cur.prev_sibling;
    else
        cur.next_sibling.prev_sibling=cur.prev_sibling;
    end

    return ret;
end

-- Erase all children of the node pointed to by iterator.
function Class:erase_children(it)
    local cur=it._node.first_child;
    local prev;

    while(cur) do
        prev=cur;
        cur=cur.next_sibling;
        self:erase_children(PreOrderIterator{prev});
    end
    it._node.first_child=nil;
    it._node.last_child=nil;	
end

-- Move all children of node at 'position' to be siblings (after position), returns position.
function Class:flatten(position)
    if(not position._node.first_child) then
        return position;
	end

    local tmp=position._node.first_child;
    while(tmp) do
        tmp.parent=position._node.parent;
        tmp=tmp.next_sibling;
    end
	
    if(position._node.next_sibling) then
        position._node.last_child.next_sibling=position._node.next_sibling;
        position._node.next_sibling.prev_sibling=position._node.last_child;
    else
        position._node.parent.last_child=position._node.last_child;
    end
	
    position._node.next_sibling=position._node.first_child;
    position._node.next_sibling.prev_sibling=position._node;
    position._node.first_child=nil;
    position._node.last_child=nil;

    return position;
end

-- Move nodes in range to be children of 'position' (end is not included, otherwise it would be called last).
function Class:reparent(position, begin, finish)
    begin = SiblingIterator(begin)
	
	if not finish then
		if(not begin._node.first_child) then 
			return position;
		end
		
		return self:reparent(position, SiblingIterator{begin._node.first_child}, SiblingIterator());	
	end
	
	local first=begin._node;
    local last=first;

    self:check(first~=position._node);

    if(begin==finish) then 
		return begin 
	end;
    
	-- determine last node
    while(begin:inc()~=finish) do
        last=last.next_sibling;
    end
	
    -- move subtree
    if(not first.prev_sibling) then
        first.parent.first_child=last.next_sibling;
    else
        first.prev_sibling.next_sibling=last.next_sibling;
    end
	
    if(not last.next_sibling) then
        last.parent.last_child=first.prev_sibling;
    else
        last.next_sibling.prev_sibling=first.prev_sibling;
    end
	
    if(not position._node.first_child) then
        position._node.first_child=first;
        position._node.last_child=last;
        first.prev_sibling=nil;
    else
        position._node.last_child.next_sibling=first;
        first.prev_sibling=position._node.last_child;
        position._node.last_child=last;
    end
	
    last.next_sibling=nil;

    local pos=first;
    while(true) do
        pos.parent=position._node;
        if(pos==last) then
			break;
		end
        pos=pos.next_sibling;
    end

    return Iterator{first};
end

-- Replace node with a new node, making the old node a child of the new node.
function Class:wrap(position, x)
    self:check(position:valid(),"Invalid position");
    local fr=position:asSibling() 
	local to=position:asSibling();
    to:inc();
    
	local ret = self:insert(position, x);
    self:reparent(ret, fr, to);
    return ret;	
end


-- Move 'source' node (plus its children) to become the next sibling of 'target'.
function Class:move_after(target, source)
    local dst=target._node;
    local src=source._node;
    self:check(dst,"Invalid dst node.");
    self:check(src,"Invalid src node.");

    if(dst==src) then
		return source;
	end
	
    if(dst.next_sibling and dst.next_sibling==src) then
		-- already in the right spot
		return source;
	end
	
    -- take src out of the tree
    if(src.prev_sibling) then
		src.prev_sibling.next_sibling=src.next_sibling;
    else
		src.parent.first_child=src.next_sibling;
	end
	
    if(src.next_sibling) then
		src.next_sibling.prev_sibling=src.prev_sibling;
    else
		src.parent.last_child=src.prev_sibling;
	end
	
    -- connect it to the new point
    if(dst.next_sibling) then
		dst.next_sibling.prev_sibling=src;
    else 
		dst.parent.last_child=src;
	end
	
    src.next_sibling=dst.next_sibling;
    dst.next_sibling=src;
    src.prev_sibling=dst;
    src.parent=dst.parent;
    return src;
end

-- Move 'source' node (plus its children) to become the previous sibling of 'target'.
function Class:move_before(target, source)
    if(target:isInstanceOf(SiblingIterator) and source:isInstanceOf(SiblingIterator)) then
		return self:move_sibling_before(target,source)
	end
	
	local dst=target._node;
    local src=source._node;
    self:check(dst,"Invalid dst node");
    self:check(src,"Invalid src node");

    if(dst==src) then	
		return source;
	end
	
    if(dst.prev_sibling and dst.prev_sibling==src) then
        -- already in the right spot
		return source;
	end

    -- take src out of the tree
    if(src.prev_sibling) then 
		src.prev_sibling.next_sibling=src.next_sibling;
    else
		src.parent.first_child=src.next_sibling;
	end
	
    if(src.next_sibling) then
		src.next_sibling.prev_sibling=src.prev_sibling;
    else
		src.parent.last_child=src.prev_sibling;
	end

    -- connect it to the new point
    if(dst.prev_sibling) then
		dst.prev_sibling.next_sibling=src;
    else 
		dst.parent.first_child=src;
	end
	
    src.prev_sibling=dst.prev_sibling;
    dst.prev_sibling=src;
    src.next_sibling=dst;
    src.parent=dst.parent;
    return src;
end

function Class:move_sibling_before(target, source)
    local dst=target._node;
    local src=source._node;
    local dst_prev_sibling;
	
    if(not dst) then -- must then be an end iterator
        dst_prev_sibling=target._parent.last_child;
        self:check(dst_prev_sibling,"Invalid prev sibling");
    else 
		dst_prev_sibling=dst.prev_sibling;
	end
    self:check(src,"Invalid source");

    if(dst==src) then return source; end
	
    if(dst_prev_sibling and v) then return source; end -- already in the right spot

    -- take src out of the tree
    if(src.prev_sibling) then 
		src.prev_sibling.next_sibling=src.next_sibling;
    else
		src.parent.first_child=src.next_sibling;
	end
	
    if(src.next_sibling) then
		src.next_sibling.prev_sibling=src.prev_sibling;
    else
		src.parent.last_child=src.prev_sibling;
	end

    -- connect it to the new point
    if(dst_prev_sibling) then
		dst_prev_sibling.next_sibling=src;
    elseif (dst) then
		dst.parent.first_child=src;
    else
		target._parent.first_child=src;
	end
	
    src.prev_sibling=dst_prev_sibling;
    if(dst) then
        dst.prev_sibling=src;
        src.parent=dst.parent;
    end
    src.next_sibling=dst;
    return src;
end

-- Move 'source' node (plus its children) to become the node at 'target' (erasing the node at 'target').
-- Warning : only use if 'source' is not included in the subtree of 'target'
function Class:move_ontop(target, source)
	local dst=target._node;
    local src=source._node;
    self:check(dst,"Invalid dst node");
    self:check(src,"Invalid src node");

    if(dst==src) then	
		return source;
	end

    -- remember connection points
    local b_prev_sibling=dst.prev_sibling;
    local b_next_sibling=dst.next_sibling;
    local b_parent=dst.parent;
	
    -- remove target
    self:erase(target:asSibling());

    -- take src out of the tree
    if(src.prev_sibling) then
		src.prev_sibling.next_sibling=src.next_sibling;
    else
		src.parent.first_child=src.next_sibling;
	end
	
    if(src.next_sibling) then
		src.next_sibling.prev_sibling=src.prev_sibling;
    else
		src.parent.last_child=src.prev_sibling;
	end

    -- connect it to the new point
    if(b_prev_sibling and b_prev_sibling~=src) then
		b_prev_sibling.next_sibling=src;
    else
		b_parent.first_child=src;
	end
	
    if(b_next_sibling and b_next_sibling~=src) then
		b_next_sibling.prev_sibling=src;
    else
		b_parent.last_child=src;
	end
	
    src.prev_sibling=b_prev_sibling~=src and b_prev_sibling;
    src.next_sibling=b_next_sibling~=src and b_next_sibling;
    src.parent=b_parent;
	
    return Iterator{src};
end


-- Merge with other tree, creating new branches and leaves only if they are not already present.
function Class:merge(to1, to2, from1, from2, duplicate_leaves)
    to1 = to1:asSibling()
	to2 = to2:asSibling()
	from1 = from1:asSibling()
	from2 = from2:asSibling()
	
	local fnd = SiblingIterator();
    while(from1~=from2) do
		fnd=utils.findIterator(to1, to2, #from1);
        if(fnd ~= to2) then -- element found
            if(from1:begin()==from1:at_end()) then -- full depth reached
                if(duplicate_leaves) then
                    self:append_child(self:parent(to1), #from1);
				end
            else -- descend further
                self:merge(fnd:begin(), fnd:at_end(), from1:begin(), from1:at_end(), duplicate_leaves);
            end
        else -- element missing
            self:insert_subtree(to2, from1);
        end
        from1:inc();
    end
end

-- Sort (std::sort only moves values of nodes, this one moves children as well).
function Class:sort(from, to, fn, deep)
    if(from==to) then return; end

	fn = fn or function(x,y) return x.data<y.data; end
	
    -- make list of sorted nodes
    -- CHECK: if multiset stores equivalent nodes in the order in which they
    -- are inserted, then this routine should be called 'stable_sort'.
    local nodes = Vector()
    local it=from:asSibling()
	local it2=to:asSibling();
	
    while(it ~= it2) do
		-- self:info("Sorting content: ",#it)
        nodes:ordered_insert(it._node, fn);
        it:inc();
    end
	
	-- for k,nit in nodes:sequence() do
		-- self:info("Node item ",k," = ", nit.data)
	-- end
	
    -- reassemble
    it2:dec();

    -- prev and next are the nodes before and after the sorted range
    local prev=from._node.prev_sibling;
    local nextv=it2._node.next_sibling;
	
    local nit=nodes:front()
    if(not prev) then -- to catch "sorting the head" situations, when there is no parent
        if(nit.parent) then
            nit.parent.first_child=nit;
		end
    else 
		prev.next_sibling=nit;
	end

    local eit = nodes:back()
	
	for k,nit in nodes:sequence() do
		if(nit~=eit) then
			-- self:info("Inserting node content: ", nit.data)
			nit.prev_sibling=prev;
			if(prev) then
				prev.next_sibling=nit;
			end
			prev=nit;
        end
    end
	
    -- prev now points to the last-but-one node in the sorted range
    if(prev) then
        prev.next_sibling=eit;
	end
	
    -- eit points to the last node in the sorted range.
    eit.next_sibling=nextv;
    eit.prev_sibling=prev; -- missed in the loop above
	
    if(not nextv) then
        if(eit.parent) then-- to catch "sorting the head" situations, when there is no parent
            eit.parent.last_child=eit;
		end
    else 
		nextv.prev_sibling=eit;
	end

    if(deep) then  -- sort the children of each node too
        local bcs = SiblingIterator{nodes:front()};
        while(bcs:valid()) do
            self:sort(bcs:begin(), bcs:at_end(), fn, deep);
            bcs:inc();
        end
    end
end

-- Partition (std::partition only moves values of nodes, this one moves children as well).
function Class:partition(from, to, pred)
	from=from:asSibling()
	to=to:asSibling()
	
    while (true) do
        while (from~=to and pred(#from)) do
            from:inc();
		end
        while (from~=to and not pred(#(to:dec()))) do
			-- do nothing.
		end
		
        if (from==to) then
            return from;
		end
        self:swap(to,from);
		to:swap(from)
    end
end

-- Extract a new tree formed by the range of siblings plus all their children.
function Class:subtree(from, to, tree)
    local tmp=tree or Class();
    tmp:set_head(0); -- dummy value
    tmp:replace_range(tmp:begin(), tmp:at_end(), from, to);
    return tmp;
end

-- Exchange the node (plus subtree) with its sibling node (do nothing if no sibling present).
function Class:swap_next(it)
    local nxt=it._node.next_sibling;
    if(nxt) then
        if(it._node.prev_sibling) then
            it._node.prev_sibling.next_sibling=nxt;
        else
            it._node.parent.first_child=nxt;
		end
		
        nxt.prev_sibling=it._node.prev_sibling;
        local nxtnxt=nxt.next_sibling;
        if(nxtnxt) then
            nxtnxt.prev_sibling=it._node;
        else
            it._node.parent.last_child=it._node;
		end
        nxt.next_sibling=it._node;
        it._node.prev_sibling=nxt;
        it._node.next_sibling=nxtnxt;
    end
end

-- Exchange two nodes (plus subtrees)
function Class:swap(one, two)
    -- if one and two are adjacent siblings, use the sibling swap
    if(one._node.next_sibling==two._node) then
		self:swap_next(one);
    elseif(two._node.next_sibling==one._node) then
		self:swap_next(two);
    elseif (one._node~=two._node) then
        local nxt1=one._node.next_sibling;
        local nxt2=two._node.next_sibling;
        local pre1=one._node.prev_sibling;
        local pre2=two._node.prev_sibling;
        local par1=one._node.parent;
        local par2=two._node.parent;

        -- reconnect
        one._node.parent=par2;
        one._node.next_sibling=nxt2;
        if(nxt2) then 
			nxt2.prev_sibling=one._node;
        else 
			par2.last_child=one._node;
		end
		
        one._node.prev_sibling=pre2;
        if(pre2) then
			pre2.next_sibling=one._node;
        else 
			par2.first_child=one._node;
		end

        two._node.parent=par1;
        two._node.next_sibling=nxt1;
        if(nxt1) then
			nxt1.prev_sibling=two._node;
        else
			par1.last_child=two._node;
		end
		
        two._node.prev_sibling=pre1;
        if(pre1) then
			pre1.next_sibling=two._node;
        else
			par1.first_child=two._node;
		end
    end
end

-- Count the total number of nodes.
function Class:size()
    local i=0;
    local it=self:begin();
	local ite=self:at_end()
    while(it~=ite) do
        i=i+1;
        it:inc();
    end
    return i;
end

-- Count the total number of nodes of the subtree 'it'
-- the node 'it' is included in the count
function Class:subtree_size(it)
    local i=1;
	local sib = it:begin()
	while(sib:valid()) do
        i = i+self:subtree_size(sib);
	end
    return i;	
end

-- Check if tree is empty.
function Class:empty()
    local it=self:begin()
    return (it==self:at_end());
end

-- Compute the depth to the root.
function Class:depth(it)
    local pos=it._node;
    self:check(pos,"Invalid position");
    local ret=0;
    while(pos.parent) do
        pos=pos.parent;
        ret=ret+1;
    end
    return ret;
end

-- Count the number of children of node at position.
function Class:number_of_children(it)
    local pos=it._node.first_child;

    local ret=0;
    while(pos) do
		pos=pos.next_sibling
		ret=ret+1;
	end
    return ret;
end

-- Count the number of 'next' siblings of node at iterator.
function Class:number_of_siblings(it)
    local pos=it._node;
    local ret=0;
    -- count forward
    while(pos.next_sibling and pos.next_sibling~=self._head and pos.next_sibling~=self._feet) do
        ret=ret+1;
        pos=pos.next_sibling;
    end
	
    -- count backward
    pos=it._node;
    while(pos.prev_sibling and pos.prev_sibling~=self._head and pos.prev_sibling~=self._feet) do
        ret=ret+1;
        pos=pos.prev_sibling;
    end

    return ret;
end

-- Determine whether node at position is in the subtrees with root in the range.
function Class:is_in_subtree(it, from, to)
    local tmp=PreOrderIterator(from);
	to = PreOrderIterator(to)
    while(tmp~=to) do
        if(tmp._node==it._node) then
			return true;
		end
        tmp:inc();
    end
    return false;
end
	
function Class:parse(str,sep)
	sep = sep or ","
	
	local it = self:begin()
	
	-- prepare the grammar:
	local V = lpeg.V
	local P = lpeg.P
	local S = lpeg.S
	
	local stack = Vector();
	local current;
	
	local write_item = function(val)
		-- log:info("Writing item: ",val)
		local parent = stack:back()
		if parent then
			current = self:append_child(parent,val)
		else
			current = self:insert(self:at_end(),val)
		end
	end
	
	local open_item = function()
		--log:info("Entering item...")
		self:check(current,"Invalid current iterator.")
		stack:push_back(current)
	end
	
	local close_item = function()
		--log:info("Closing item...")
		local iter = stack:pop_back()
		self:check(iter,"Invalid current iterator.")
	end
	
	local space = S(" \t\n");
	local item = (1 - S(sep.."(){}") - space)^1;
	
	local trim = function(pat)
		return (space^0)*P(pat)*(space^0);
		-- return P(pat);
	end
	
	local G = lpeg.P{ 
	  "Tree";
	  Exp = lpeg.C(item) / write_item;
	  Open = trim("(") / open_item;
	  Close = trim(")") / close_item;
	  Term = V"Exp"*(space^0*V"Open"*V"TermList"*V"Close")^0;
	  TermList = V"Term"*(trim(sep)* V"Term")^0;
	  Tree = P("{")^-1*(V"TermList"+P(""))*P("}")^-1;
	}
	
	return lpeg.match(G, str)
end
	
function Class:sequence(options)
	local ite = (options and options.leaf and self:end_leaf()) or self:at_end()
	
	local iteratorFunc = function(state,current)
		current = current and current:inc() or (options and options.leaf and self:begin_leaf()) or self:begin()
		
		if current~=ite then
			return current;
		end
	end
	
	return iteratorFunc, nil, nil
end

function Class:isValid(it)
	return it._node and it._node~=self._feet and it._node~=self._head
end

return Class
