module(..., package.seeall)

local Vector = require "std.Vector"
local Set = require "std.Set"
local Map = require "std.Map"
local OrderedMap = require "std.OrderedMap"
local Tree = require "std.Tree"

local Verbose = require ("loop.debug.Verbose")

local LOG = Verbose{
  groups = {
    -- levels
    {"info"},
    -- aliases
    all = {"info"},
  },
}
LOG:flag("all", true)

function test_vector_functions()
    local vec = Vector()
    
    vec:push_back(1)
    vec:push_back(2)
    vec:push_back(3)
    vec:push_back(4)
    
    --[[
    LOG:info ("Vector content is: ",vec.data)
    for k,v in vec:sequence() do
        LOG:info ("Vector item ",k," = ",v)
    end
    ]]
    
    assert_equal(4,vec:size(),"Wrong vector size.")
    
    vec:push_front(0)
    
    assert_equal(0,vec:front(),"Wrong value in vec:front()")
    
    assert_equal(4,vec:back(),"Wrong value in vec:back()")
    
    assert_equal(4,vec:pop_back(),"Wrong value in vec:pop_back()")
    assert_equal(0,vec:pop_front(),"Wrong value in vec:pop_front()")
    
    assert_equal(3,vec:size(),"Wrong vec:size() value")
    
    vec:insert(2,"coucou")
    
    assert_equal("coucou",vec[2],"Wrong value in index metamethod")
    
    assert_equal(false,vec:empty(),"Wrong empty value.")
    local vec2 = vec:clone()
    vec:clear()
    assert_equal(true,vec:empty(),"Wrong empty value.")
    
    vec2:erase(2)
    local count =0
    for k,v in vec2:sequence() do
        count = count  +1
        assert_equal(k,v,"Wrong equality test");
    end
    
    assert_equal(3,count,"Wrong sequence count.")
end

function test_vector_at()
    local vec = Vector{"a","b","c","d"}
    
    assert_equal(vec:at(1),"a","Wrong vec:at() value")
end

function test_vector_table()
    local vec = Vector{"a","b","c","d"}
    
    local t1 = vec:toTable()
    assert_equal(t1[1],"a","Wrong vec:toTable() value")
    assert_equal(t1[4],"d","Wrong vec:toTable() value")
    
    vec:fromTable{1,2,3,4,5}
    
    assert_equal(vec:size(),5,"Wrong vector size")
    
    for k,v in vec:sequence() do
        assert_equal(k,v,"Wrong vector value")
    end
end

function test_set_contains()
    local set = Set{"a","b","c","d",3}
    
    assert_equal(set:contains("a"),true,"Set doesn't contain 'a'")
    assert_equal(set:contains("e"),false,"Set doesn't contain 'a'")

    assert_equal(set:push_back("a"),false,"Can still push exisiting item")
    assert_equal(set:push_front("3"),true,"Cannot push because of coertion")
    assert_equal(set:push_front(3),false,"Can still push exisiting value")
    
    local t1 = {1,1,2,2,3,3,4,4}
    set:fromTable(t1)
    
    assert_equal(set:size(),4,"Wrong set size.")

end

function test_map_get_set()
    local map = Map{a=1,b=2,c=3,d=4}
    
    assert_equal(4,map:size(),"Invalid map size");
    
    LOG:info ("Map content is: ",map.data)
    
    assert_equal(1,map.a,"Invalid map value");
    assert_equal(1,map:get("a"),"Invalid map value");
    assert_equal(2,map.b,"Invalid map value")
    
    assert_equal(false,map:empty(),"Map is empty")
    
    map:set("b","coucou")
    
    assert_equal("coucou",map["b"],"Invalid map value")
    
    map:clear()
    assert_equal(true,map:empty(),"Map is not empty")
end

function test_map_table()
    local map = Map{data={a=1,b=2,c=3,d=4}}
    
    local t1 = {1,2,3,4}
    map:fromTable(t1)
    
    for k,v in map:sequence() do
        assert_equal(k,v,"Invalid map value mapping.")
    end
end

function test_vector_back()
    local vec = Vector{"a","b","c","d"}
    
    assert_equal(vec:back(),"d","Invalid vec:back() value")
end

function test_super_constructor()
    --LOG:info "Should print vector construction after here..."
    local set = Set()
    local set2 = Set{1,2,3}
    
    --LOG:info "Should print vector construction before here..."
end

function test_set_sequence()
    local set = Set{"a","b","c","d"}
    
    count = 0
    for k,v in set:sequence() do
        count = count + 1
        assert_equal(k,count,"Invalid key")
    end
    
    assert_equal(4,count,"Invalid count")
end

function test_set_sequence_empty()
    local set = Set()
    
    count = 0
    for k,v in set:sequence() do
        count = count + 1
        assert_equal(k,count,"Invalid key")
    end
end

function test_sequence_table()
    local t = {}
    
    --for k,v in next, t, 0 do  -- invalid key to next error
    for k,v in ipairs(t) do
        -- Do nothing.
    end
end

function test_orderedmap_sequence()
    local t1 = {"a","b","c","d","e","f","g","h","i","j","k","l"}
    local map = OrderedMap(t1)
    
    count = 0
    for k,v in map:sequence() do
        count = count + 1
        --LOG:info "Testing..."
        assert_equal(v,t1[count],"Invalid key")
    end
    
    --assert_equal(4,count,"Invalid count")
end

function test_vector_erase()
	local vec = Vector()
	
	vec:push_back(1)
    vec:push_back(2)
    vec:push_back(3)
    vec:push_back(4)
	
	vec:erase(3)
	
	local count = 0;
	for _,val in vec:sequence() do
		count = count +1
	end
	
	assert_equal(3,count,"Invalid vector count after erase.")	
	
	assert_equal(4,vec[3],"Invalid vector value at index 3.")	
end

--[[
-- this test doesn't work yet with the version 2.0.1 of luajit.
function test_table_collection()
	log:info("Testing table collection.")
	
	local collected = false;
	
	do
	  local b = setmetatable({a = 1}, {__gc = function(self) collected = true; log:info("Hello from the garbage collection code!"); end});
	end

	assert_equal(true,collected,"Collection metamethod was not called.")
	
	log:info("Done testing table collection.")
end
]]

function test_tree_creation()
	log:info("Testing tree creation.")
	
	local Tree = require "std.Tree"
	local tree = Tree()
	
	log:info("Done testing tree creation.")
end

function test_tree_iterator_dereference()
	log:info("Testing tree iterator dereference")
	
	local myobj = {"thetable"}
	
	log:info("Testing default data() method access.")
	local it = require("std.tree.Iterator"){node={data=myobj}}
	assert_equal(myobj,it:data(),"Missmatch between iterator object and original value")

	log:info("Now testing __len() metamethod access")
	assert_equal(myobj,#it,"Missmatch between #iterator original value")
	
	log:info("Done testing tree iterator dereference.")
end

function test_vector_tostring()
	log:info("Testing vector tostring.")
	local vec = Vector()
	
	vec:push_back(1)
	vec:push_back(2)
	vec:push_back(3)
	
	local str = "{1, 2, 3}"
	assert_equal(str,tostring(vec),"Invalid vector to string conversion result.")
	
	log:info("Done testing vector tostring.")
end


function test_vector_ordered_insert()
	log:info("Testing vector ordered insert.")
	local vec = Vector()
	
	local func = function(x,y)
		return x>y
	end
	
	local data = { 1,9,2,8,3,7,4,6,5,4 }
	local res = "{9, 8, 7, 6, 5, 4, 4, 3, 2, 1}"
	
	for i=1,#data do
		vec:ordered_insert(data[i],func)
	end

	log:info("Checking order on vector: ", vec)
	assert_equal(res,tostring(vec),"Invalid vector ordered insert result.")
	
	log:info("Done testing vector ordered insert.")	
end

function test_tree_to_string()
	log:info("Testing tree tostring")
	
	local tree = Tree()
	local str = "{}"
	assert_equal(str,tostring(tree),"Invalid empty tree string representation.")
	
	tree:insert(tree:begin(),0)
	log:info("Tree content at step 1: ", tostring(tree))
	
	log:info("Appending tree children...")
	tree:append_child(tree:begin(),1)
	assert_equal("{0 (1)}",tostring(tree),"Invalid tree string") 
	
	local it = tree:append_child(tree:begin(),2)
	local it = tree:append_child(it,3)
	
	assert_equal("{0 (1, 2 (3))}",tostring(tree),"Invalid tree string 2")

	-- log:info("Displaying tree content.")
	log:info("Tree content at step 2: ", tostring(tree))
	
	log:info("Done testing tree tostring")
end

function test_tree_size_empty()
	log:info("Testing tree size/empty")
	local tree = Tree()
	
	assert_equal(0,tree:size(),"Invalid empty tree size.")
	assert_equal(true,tree:empty(),"Invalid empty tree empty() result.")

	-- now add some content:
	tree:insert(tree:begin(),0)
	
	assert_equal(1,tree:size(),"Invalid non empty tree size.")
	assert_equal(false,tree:empty(),"Invalid non empty tree empty() result.") 

	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	tree:append_child(tree:begin(),2)
	
	assert_equal(3,tree:size(),"Invalid non empty tree size.")
	assert_equal(false,tree:empty(),"Invalid non empty tree empty() result.") 

	tree:insert(tree:begin(),3)
	assert_equal(4,tree:size(),"Invalid non empty tree size.")

	log:info("Done testing tree size/empty.")
end

function test_tree_prepend()
	log:info("Testing tree prepend")
	local tree = Tree()
	
	assert_equal(0,tree:size(),"Invalid empty tree size.")
	assert_equal(true,tree:empty(),"Invalid empty tree empty() result.")

	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:prepend_child(tree:begin(),1)
	tree:prepend_child(tree:begin(),2,3)
	tree:prepend_child(tree:begin(),3)
	
	assert_equal("{0 (3, 2, 2, 2, 1)}",tostring(tree),"Invalid prepend_child result.")
	
	log:info("Done testing tree prepend.")
end

function test_tree_replace()
	log:info("Testing tree replace")

	local tree = Tree()

	tree:insert(tree:begin(),0)
	local it = tree:append_child(tree:begin(),1)
	local it4 = tree:append_child(it,2)
	local it2 = tree:append_child(it,3)
	tree:append_child(it2,4)
	tree:append_child(it2,5)
	local it3 = tree:append_child(it2,6)
	tree:append_child(it3,7)
	tree:append_child(it3,8)

	log:info("Tree before replace tree=",tostring(tree))
	assert_equal("{0 (1 (2, 3 (4, 5, 6 (7, 8))))}",tostring(tree),"Invalid tree before replace.")
	
	tree:replace(it3,9)
	log:info("Tree after replace tree=",tostring(tree))
	assert_equal("{0 (1 (2, 3 (4, 5, 9 (7, 8))))}",tostring(tree),"Invalid tree after replace.")
	
	local tree2 = Tree{root="A"}
	tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	
	tree:replace(it4,tree2:begin())
	log:info("Tree after replace iterator=",tostring(tree))
	assert_equal("{0 (1 (A (B, C), 3 (4, 5, 9 (7, 8))))}",tostring(tree),"Invalid tree after replace iterator")
	
	log:info("Done testing tree replace")	
end

function test_iterator_at_end()
	log:info("Testing iterator at_end parent")

	local tree = Tree()

	tree:insert(tree:begin(),0)
	local it = tree:append_child(tree:begin(),1)
	local it2 = tree:append_child(it,2)
	
	assert_not_equal(nil,it2._node.parent,"Invalid node parent")

	local it3 = it2:at_end()
	assert_equal(it2._node,it3._parent,"Invalid iterator parent")
	assert_equal(nil,it3._node,"Invalid iterator node")
	
	log:info("Done testing iterator at_end parent")
end

function test_tree_insert_subtree()
	log:info("Testing tree insert_subtree")

	local tree = Tree()

	tree:insert(tree:begin(),0)
	local it = tree:append_child(tree:begin(),1)
	local it4 = tree:append_child(it,2)
	local it2 = tree:append_child(it,3)
	tree:append_child(it2,4)
	tree:append_child(it2,5)
	local it3 = tree:append_child(it2,6)
	tree:append_child(it3,7)
	tree:append_child(it3,8)

	log:info("Tree before insert_subtree =",tostring(tree))
	assert_equal("{0 (1 (2, 3 (4, 5, 6 (7, 8))))}",tostring(tree),"Invalid tree before replace.")
		
	local tree2 = Tree{root="A"}
	tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	
	tree:insert_subtree(it4,tree2:begin())
	log:info("Tree after insert_subtree =",tostring(tree))
	assert_equal("{0 (1 (A (B, C), 2, 3 (4, 5, 6 (7, 8))))}",tostring(tree),"Invalid tree after replace iterator")
	
	local it5=tree:insert(it3:at_end());
    tree:replace(it5, "9");
	log:info("Tree after insert/replace at_end =",tostring(tree))
	
	tree:insert_subtree(it4:begin(),tree2:begin())
	log:info("Tree after insert_subtree at end =",tostring(tree))
	assert_equal("{0 (1 (A (B, C), 2 (A (B, C)), 3 (4, 5, 6 (7, 8, 9))))}",tostring(tree),"Invalid tree after insert_subtree at_end")

	log:info("Done testing tree insert_subtree")
end

function test_tree_append_children()
	log:info("Testing tree append children")
	local tree = Tree()
	
	assert_equal(0,tree:size(),"Invalid empty tree size.")
	assert_equal(true,tree:empty(),"Invalid empty tree empty() result.")

	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:prepend_child(tree:begin(),1)
	tree:prepend_child(tree:begin(),2,3)
	tree:prepend_child(tree:begin(),3)
	
	local tree2 = Tree{root="A"}
	--tree2:append_child(tree2:begin(),"B")
	
	tree2:append_children(tree2:begin(),tree:begin(),tree:at_end())

	log:info("Checking tree append children result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{A (0 (3, 2, 2, 2, 1))}",tostring(tree2),"Invalid tree append_children result.")
	
	log:info("Done testing tree append children.")
end

function test_tree_prepend_children()
	log:info("Testing tree prepend_children")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	tree:append_child(tree:begin(),2,3)
	tree:prepend_child(tree:begin(),3)
	
	local tree2 = Tree{root="A"}
	tree2:append_child(tree2:begin(),"B")
	
	tree2:prepend_children(tree2:begin(),tree:begin():begin(),tree:begin():at_end())

	log:info("Checking tree prepend_children result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{A (2, 2, 2, 1, 3, B)}",tostring(tree2),"Invalid tree append_children result.")
	
	log:info("Done testing tree prepend_children")
end

function test_tree_insert_subtree_after()
	log:info("Testing tree insert_subtree_after")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	tree:append_child(tree:begin(),2,1)
	tree:append_child(tree:begin(),3)
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	
	tree2:insert_subtree_after(it,tree:begin())

	log:info("Checking tree insert_subtree_after result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{A (B, 0 (1, 2, 3), C)}",tostring(tree2),"Invalid tree insert_subtree_after result.")
	
	log:info("Done testing tree insert_subtree_after")
end

function test_tree_insert_above()
	log:info("Testing tree insert_above")

	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	
	log:info("Checking tree insert_above result with tree2=",tostring(tree2))
	
	tree2:insert_above(it,"D")
	assert_equal("{A (D (B), C)}",tostring(tree2),"Invalid tree insert_above result.")
	
	tree2:insert_above(tree2:begin(),"E")
	assert_equal("{E (A (D (B), C))}",tostring(tree2),"Invalid tree insert_above result 2.")
	
	log:info("Done testing tree insert_above")
end

function test_tree_replace_range()
	log:info("Testing tree replace_range")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	tree:append_child(tree:begin(),2)
	tree:append_child(tree:begin(),3)
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	
	tree2:replace_range(it,it:at_end(),tree:begin():begin(),tree:begin():at_end())

	log:info("Checking tree replace_range result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{A (1, 2, 3)}",tostring(tree2),"Invalid tree replace_range result.")
	
	log:info("Done testing tree replace_range")
end

function test_tree_copy()
	log:info("Testing tree copy")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(tree:begin(),3)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")

	assert_equal("{0 (1, 2 (4, 5), 3)}",tostring(tree),"Invalid tree before copy.")
	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 before copy.")
	
	tree2:copy(tree)

	log:info("Checking tree copy result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{0 (1, 2 (4, 5), 3)}",tostring(tree2),"Invalid tree copy result.")
	
	log:info("Done testing tree copy")
end

function test_tree_next_at_same_depth()
	log:info("Testing tree next_at_same_depth")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(it0,4)
	tree:append_child(it0,5)

	local it1 = tree:append_child(tree:begin(),3)
	tree:append_child(it1,6)
	tree:append_child(it1,7)
	
	local it2 = tree:append_child(tree:begin(),8)
	tree:append_child(it2,9)
	tree:append_child(it2,10)

	log:info("Checking tree next_at_same_depth result with tree2=",tostring(tree))

	local it = tree:next_at_same_depth(it0)
	assert_equal(it1,it,"Invalid tree next_at_same_depth step 1.")

	local it = tree:next_at_same_depth(it)	
	assert_equal(it2,it,"Invalid tree next_at_same_depth step 2.")
	
	log:info("Done testing tree next_at_same_depth")
end

function test_tree_erase()
	log:info("Testing tree erase")
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	local it1 = tree2:append_child(tree2:begin(),"C")
	tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 before erase.")
	
	tree2:erase(it1:asSibling())

	assert_equal("{A (B (D, E), F)}",tostring(tree2),"Invalid tree2 before erase.")

	tree2:erase(it:asSibling())

	assert_equal("{A (F)}",tostring(tree2),"Invalid tree2 before erase.")
	
	log:info("Done testing tree erase")
end

function test_tree_erase_children()
	log:info("Testing tree erase_children")
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	local it1 = tree2:append_child(tree2:begin(),"C")
	tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 before erase_children.")
	
	tree2:erase_children(it1:asSibling())

	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 after erase_children 1.")

	tree2:erase_children(it:asSibling())

	assert_equal("{A (B, C, F)}",tostring(tree2),"Invalid tree2 after erase_children 2.")
	
	log:info("Done testing tree erase_children")
end

function test_tree_flatten()
	log:info("Testing tree flatten")
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	local it1 = tree2:append_child(tree2:begin(),"C")
	tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 before flatten.")
	
	tree2:flatten(it)

	assert_equal("{A (B, D, E, C, F)}",tostring(tree2),"Invalid tree2 after flatten 1.")

	tree2:flatten(tree2:begin())

	assert_equal("{A, B, D, E, C, F}",tostring(tree2),"Invalid tree2 after flatten 2.")
	
	log:info("Done testing tree flatten")
end

function test_tree_reparent()
	log:info("Testing tree reparent")
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	local it1 = tree2:append_child(tree2:begin(),"C")
	local it2 = tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")
	tree2:append_child(it2,"G")
	tree2:append_child(it2,"H")
	tree2:append_child(it2,"I")

	assert_equal("{A (B (D, E), C, F (G, H, I))}",tostring(tree2),"Invalid tree2 before reparent.")
	
	tree2:reparent(it,it1,it1:asSibling():inc())

	assert_equal("{A (B (D, E, C), F (G, H, I))}",tostring(tree2),"Invalid tree2 after reparent 1.")

	tree2:reparent(it1,it2) --:begin(),it2:at_end())

	assert_equal("{A (B (D, E, C (G, H, I)), F)}",tostring(tree2),"Invalid tree2 after reparent 2.")
	
	log:info("Done testing tree reparent")
end

function test_tree_wrap()
	log:info("Testing tree wrap")
	
	local tree = Tree{root="A"}
	local it = tree:append_child(tree:begin(),"B")
	local it1 = tree:append_child(tree:begin(),"C")
	local it2 = tree:append_child(tree:begin(),"F")
	tree:append_child(it,"D")
	tree:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree),"Invalid tree before wrap.")
	
	tree:wrap(it2,"G")

	assert_equal("{A (B (D, E), C, G (F))}",tostring(tree),"Invalid tree after wrap 1.")

	tree:wrap(it,"H")

	assert_equal("{A (H (B (D, E)), C, G (F))}",tostring(tree),"Invalid tree after wrap 2.")
	
	log:info("Done testing tree wrap")
end

function test_tree_move_after()
	log:info("Testing tree move_after")
	
	local tree = Tree{root="A"}
	local it = tree:append_child(tree:begin(),"B")
	local it1 = tree:append_child(tree:begin(),"C")
	local it2 = tree:append_child(tree:begin(),"F")
	tree:append_child(it,"D")
	tree:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree),"Invalid tree before move_after.")
	
	tree:move_after(it,it2)

	assert_equal("{A (B (D, E), F, C)}",tostring(tree),"Invalid tree after move_after 1.")

	tree:move_after(it1,it)

	assert_equal("{A (F, C, B (D, E))}",tostring(tree),"Invalid tree after move_after 2.")
	
	log:info("Done testing tree move_after")
end

function test_tree_move_before()
	log:info("Testing tree move_before")
	
	local tree = Tree{root="A"}
	local it = tree:append_child(tree:begin(),"B")
	local it1 = tree:append_child(tree:begin(),"C")
	local it2 = tree:append_child(tree:begin(),"F")
	tree:append_child(it,"D")
	tree:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree),"Invalid tree before move_before.")
	
	tree:move_before(it:asSibling(),it2:asSibling())

	assert_equal("{A (F, B (D, E), C)}",tostring(tree),"Invalid tree after move_before 1.")

	tree:move_before(it1,it) -- not changing anything

	assert_equal("{A (F, B (D, E), C)}",tostring(tree),"Invalid tree after move_before 2.")
	
	tree:move_before(tree:begin(),it1) -- not changing anything

	assert_equal("{C, A (F, B (D, E))}",tostring(tree),"Invalid tree after move_before 3.")

	log:info("Done testing tree move_before")
end

function test_tree_move_ontop()
	log:info("Testing tree move_ontop")
	
	local tree = Tree{root="A"}
	local it = tree:append_child(tree:begin(),"B")
	local it1 = tree:append_child(tree:begin(),"C")
	local it2 = tree:append_child(tree:begin(),"F")
	tree:append_child(it,"D")
	tree:append_child(it,"E")

	assert_equal("{A (B (D, E), C, F)}",tostring(tree),"Invalid tree before move_ontop.")
	
	tree:move_ontop(it1,it2)
	
	assert_equal("{A (B (D, E), F)}",tostring(tree),"Invalid tree after move_ontop 1.")

	tree:append_child(it2,"G")
	tree:append_child(it2,"H")
	
	tree:move_ontop(it,it2)

	assert_equal("{A (F (G, H))}",tostring(tree),"Invalid tree after move_ontop 2.")
	
	tree:append_child(tree:begin(),"B")
	tree:append_child(tree:begin(),"C")
	local it3 = tree:append_child(tree:begin(),"D")
	tree:append_child(it3,"E")

	assert_equal("{A (F (G, H), B, C, D (E))}",tostring(tree),"Invalid tree after move_ontop 3.")

	tree:move_ontop(it2,it3)
	
	assert_equal("{A (D (E), B, C)}",tostring(tree),"Invalid tree after move_ontop 4.")

	log:info("Done testing tree move_ontop")
end

function test_tree_merge()
	log:info("Testing tree merge")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(tree:begin(),3)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	
	local tree2 = Tree{root="A"}
	local it = tree2:append_child(tree2:begin(),"B")
	tree2:append_child(tree2:begin(),"C")
	tree2:append_child(tree2:begin(),"F")
	tree2:append_child(it,"D")
	tree2:append_child(it,"E")

	assert_equal("{0 (1, 2 (4, 5), 3)}",tostring(tree),"Invalid tree before merge.")
	assert_equal("{A (B (D, E), C, F)}",tostring(tree2),"Invalid tree2 before merge.")
	
	-- tree2:merge(tree2:begin(),tree2:at_end(),tree:begin(),tree:at_end())
	tree2:merge(it:begin(),it:at_end(),tree:begin(),tree:at_end())

	log:info("Checking tree merge result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	-- assert_equal("{A (B (D, E), C, F), 0 (1, 2 (4, 5), 3)}",tostring(tree2),"Invalid tree merge result.")
	assert_equal("{A (B (D, E, 0 (1, 2 (4, 5), 3)), C, F)}",tostring(tree2),"Invalid tree merge result.")
	
	log:info("Done testing tree merge")
end

function test_tree_sort()
	log:info("Testing tree sort")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	tree:append_child(tree:begin(),3)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(tree:begin(),1)
	tree:append_child(it0,5)
	tree:append_child(it0,4)
	
	assert_equal("{0 (3, 2 (5, 4), 1)}",tostring(tree),"Invalid tree before sort.")
	
	tree:sort(tree:begin(),tree:at_end()) --,nil,true)

	log:info("Checking tree sort result with tree=",tostring(tree))
	
	assert_equal("{0 (3, 2 (5, 4), 1)}",tostring(tree),"Invalid tree before sort.")

	local tree2 = Tree()
	tree2:insert(tree2:at_end(),3)
	tree2:insert(tree2:at_end(),1)
	tree2:insert(tree2:at_end(),7)
	tree2:insert(tree2:at_end(),4)
	tree2:insert(tree2:at_end(),6)
	tree2:insert(tree2:at_end(),5)
	tree2:insert(tree2:at_end(),2)
	
	assert_equal("{3, 1, 7, 4, 6, 5, 2}",tostring(tree2),"Invalid tree sort original.")
	
	tree2:sort(tree2:begin(),tree2:at_end()) --,nil,true)
	assert_equal("{1, 2, 3, 4, 5, 6, 7}",tostring(tree2),"Invalid tree sort result.")

	tree:sort(tree:begin(),tree:at_end(),nil,true)
	assert_equal("{0 (1, 2 (4, 5), 3)}",tostring(tree),"Invalid tree sort result.")
	
	log:info("Done testing tree sort")
end

function test_tree_subtree()
	log:info("Testing tree subtree")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	local it1 = tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	local it2 = tree:append_child(tree:begin(),3)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	

	assert_equal("{0 (1, 2 (4, 5), 3)}",tostring(tree),"Invalid tree before subtree.")
	
	local tree2 = tree:subtree(it1,it1:at_end())

	log:info("Checking tree subtree result with tree2=",tostring(tree2)," and tree=",tostring(tree))
	
	assert_equal("{1, 2 (4, 5), 3}",tostring(tree2),"Invalid tree subtree result.")
	
	log:info("Done testing tree subtree")
end

function test_tree_swap_next()
	log:info("Testing tree swap_next")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	local it1 = tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	local it2 = tree:append_child(tree:begin(),3)
	tree:append_child(it2,6)
	tree:append_child(it2,7)
	

	assert_equal("{0 (1, 2 (4, 5), 3 (6, 7))}",tostring(tree),"Invalid tree before swap_next.")
	
	tree:swap_next(it2)
	
	log:info("Checking tree swap_next result with tree=",tostring(tree))

	assert_equal("{0 (1, 2 (4, 5), 3 (6, 7))}",tostring(tree),"Invalid tree after swap_next 1.")

	tree:swap_next(it0)

	log:info("Checking tree swap_next result with tree=",tostring(tree))
	
	assert_equal("{0 (1, 3 (6, 7), 2 (4, 5))}",tostring(tree),"Invalid tree swap_next result.")
	
	log:info("Done testing tree swap_next")
end

function test_tree_swap()
	log:info("Testing tree swap")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	local it1 = tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	local it2 = tree:append_child(tree:begin(),3)
	tree:append_child(it2,6)
	tree:append_child(it2,7)
	

	assert_equal("{0 (1, 2 (4, 5), 3 (6, 7))}",tostring(tree),"Invalid tree before swap.")
	
	tree:swap(it0, it2)
	
	log:info("Checking tree swap result with tree=",tostring(tree))
	
	assert_equal("{0 (1, 3 (6, 7), 2 (4, 5))}",tostring(tree),"Invalid tree swap result.")
	
	tree:swap(it0, it1)
	
	log:info("Checking tree swap result with tree=",tostring(tree))
	
	assert_equal("{0 (2 (4, 5), 3 (6, 7), 1)}",tostring(tree),"Invalid tree swap result 2.")

	log:info("Done testing tree swap")
end

function test_tree_depth()
	log:info("Testing tree depth")
	local tree = Tree()
	
	-- now add some content:
	tree:insert(tree:begin(),0)
	
	-- insert a child into the first element:
	local it1 = tree:append_child(tree:begin(),1)
	local it0 = tree:append_child(tree:begin(),2)
	tree:append_child(it0,4)
	tree:append_child(it0,5)
	local it2 = tree:append_child(tree:begin(),3)
	tree:append_child(it2,6)
	local it3 = tree:append_child(it2,7)
	
	assert_equal("{0 (1, 2 (4, 5), 3 (6, 7))}",tostring(tree),"Invalid tree before depth.")
	
	assert_equal(1,tree:depth(it1),"Invalid level one depth.")
	assert_equal(2,tree:depth(it3),"Invalid level two depth.")
	
	assert_equal(0,tree:number_of_children(it3),"Invalid num children.")
	assert_equal(2,tree:number_of_children(it2),"Invalid num children 2.")
	assert_equal(3,tree:number_of_children(tree:begin()),"Invalid num children 3.")
	
	assert_equal(1,tree:number_of_siblings(it3),"Invalid num siblings.")
	assert_equal(2,tree:number_of_siblings(it2),"Invalid num siblings 2.")
	assert_equal(0,tree:number_of_siblings(tree:begin()),"Invalid num siblings 3.")
	
	assert_equal(true,tree:is_in_subtree(it1,tree:begin(), tree:at_end()),"Invalid is_in_subtree result.")
	assert_equal(false,tree:is_in_subtree(it3,it0:begin(), it0:at_end()),"Invalid is_in_subtree result 2.")
	assert_equal(false,tree:is_in_subtree(it0,it0:begin(), it0:at_end()),"Invalid is_in_subtree result 3.")
	assert_equal(true,tree:is_in_subtree(it3,it2:begin(), it2:at_end()),"Invalid is_in_subtree result 4.")
	assert_equal(true,tree:is_in_subtree(it3,it2, tree:begin():at_end()),"Invalid is_in_subtree result 5.")

	
	log:info("Done testing tree depth")
end

