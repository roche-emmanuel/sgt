local suite = {}

local Tree = require "std.Tree"

function suite.test_tree_parse()
	log:info("Testing tree parse")
	local tree = Tree()

	tree:parse("{}")
	
	assert_equal("{}",tostring(tree),"Invalid tree parse result 1.")
	
	tree = Tree()
	tree:parse("{val1}")	
	assert_equal("{val1}",tostring(tree),"Invalid tree parse result 2.")

	tree = Tree()
	tree:parse("{val1, val2, val3}")	
	assert_equal("{val1, val2, val3}",tostring(tree),"Invalid tree parse result 3.")
	
	tree = Tree()
	tree:parse("{val1 (val2, val3)}")	
	assert_equal("{val1 (val2, val3)}",tostring(tree),"Invalid tree parse result 4.")

	tree = Tree()
	tree:parse("{val1 (val2,    val3),  val4 (val5), val6, val7  (  \nval8\n, val9, val10 (val11 (val12, val13))  ), val14}")	
	assert_equal("{val1 (val2, val3), val4 (val5), val6, val7 (val8, val9, val10 (val11 (val12, val13))), val14}",tostring(tree),"Invalid tree parse result 5.")

	tree = Tree()
	tree:parse("{val1 (val2 val3)}","")	
	assert_equal("{val1 (val2, val3)}",tostring(tree),"Invalid tree parse result 6.")

	tree = Tree()
	tree:parse("{val1 (val2    val3)  val4 (val5) val6 val7  (  \nval8\n val9 val10 (val11 (val12 val13))  ) val14}","")	
	assert_equal("{val1 (val2, val3), val4 (val5), val6, val7 (val8, val9, val10 (val11 (val12, val13))), val14}",tostring(tree),"Invalid tree parse result 5.")

	log:info("Done testing tree parse")
end

function suite.test_tree_sequence()
	log:info("Testing tree sequence")
	local tree = Tree()

	tree:parse("{}")
	
	for it in tree:sequence() do
		assert_equal(true,false,"This section should never be executed.")
	end
	
	tree = Tree()
	tree:parse("{val1, val2, val3}")	
	local expect = {"val1","val2","val3"}
	local k = 1
	for it in tree:sequence() do
		assert_equal(expect[k],#it,"Mismatch on child "..k)
		k = k+1
	end

	tree = Tree()
	tree:parse("{val1 (val2    val3)  val4 (val5) val6 val7  (  \nval8\n val9 val10 (val11 (val12 val13))  ) val14}","")	
	local expect = {}
	for i=1,14 do
		table.insert(expect,"val"..i)
	end
	
	local k = 1
	for it in tree:sequence() do
		assert_equal(expect[k],#it,"Mismatch on child "..k)
		k = k+1
	end

	log:info("Done testing tree sequence")
end

function suite.test_tree_it_sequence()
	log:info("Testing tree it sequence")
	local tree = Tree()
	tree:parse("{val1 (val2    val3 val4 val5)  val4}","")	
	local expect = {}
	for i=2,5 do
		table.insert(expect,"val"..i)
	end
	
	local k = 1
	local beg = tree:begin()
	
	for it in beg:sequence() do
		assert_equal(expect[k],#it,"Mismatch on child "..k)
		k = k+1
	end

	log:info("Done testing tree it sequence")
end

function suite.test_tree_sequence_leaf()
	log:info("Testing tree sequence_leaf")
	local tree = Tree()

	tree:parse("{}")
	
	for it in tree:sequence{leaf=true} do
		assert_equal(true,false,"This section should never be executed.")
	end
	
	tree = Tree()
	tree:parse("{val1, val2, val3}")	
	local expect = {"val1","val2","val3"}
	local k = 1
	for it in tree:sequence{leaf=true} do
		assert_equal(expect[k],#it,"Mismatch on child "..k)
		k = k+1
	end

	tree = Tree()
	tree:parse("{val1 (val2    val3)  val4 (val5) val6 val7  (  \nval8\n val9 val10 (val11 (val12 val13))  ) val14}","")	
	local expect = {"val2","val3","val5","val6","val8","val9","val12","val13","val14"}
	
	local k = 1
	for it in tree:sequence{leaf=true} do
		assert_equal(expect[k],#it,"Mismatch on child "..k)
		k = k+1
	end

	log:info("Done testing tree sequence_leaf")
end

return suite
