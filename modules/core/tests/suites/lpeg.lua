local suite = {}

local lpeg = require "lpeg"

function suite.test_lpeg_pattern()
	log:info("Testing simple lpeg pattern")
	
	-- matches a word followed by end-of-string
	local p = lpeg.R"az"^1 * -1

	assert_equal(6,p:match("hello"),"Invalid match 1")        --> 6
	assert_equal(6,lpeg.match(p, "hello"),"Invalid match 2")  --> 6
	assert_equal(nil,p:match("1 hello"),"Invalid match 3")    --> nil
	
	log:info("Done testing simple lpeg pattern")
end

function suite.test_lpeg_name_list()
	log:info("Testing simple name list")
	
	lpeg.locale(lpeg)   -- adds locale entries into 'lpeg' table

	local space = lpeg.space^0
	local name = lpeg.C(lpeg.alpha^1) * space
	local sep = lpeg.S(",;") * space
	local pair = lpeg.Cg(name * "=" * space * name) * sep^-1
	local list = lpeg.Cf(lpeg.Ct("") * pair^0, rawset)
	local t = list:match("a=b, c = hi; next = pi")  --> { a = "b", c = "hi", next = "pi" }
	
	assert_equal("b",t.a,"Invalid field 'a'")
	assert_equal("hi",t.c,"Invalid field 'c'")
	assert_equal("pi",t.next,"Invalid field 'next'")
	
	log:info("Done testing simple name list")
end

function suite.test_lpeg_split_string()
	log:info("Testing lpeg split_string")
	
	local split =function(s, sep)
	  sep = lpeg.P(sep)
	  local elem = lpeg.C((1 - sep)^0)
	  local p = lpeg.Ct(elem * (sep * elem)^0)   -- make a table capture
	  return lpeg.match(p, s)
	end
	
	local res = split("a,b ,c,d, e",",")
	local esp = {"a","b ","c","d"," e"}
	for k,v in ipairs(esp) do
		assert_equal(v,res[k],"Invalid result for capture "..k)
	end

	log:info("Done testing lpeg split_string")
end

function suite.test_lpeg_parse_tree()
	log:info("Testing lpeg tree parsing")

	-- prepare the grammar:
	local V = lpeg.V
	local P = lpeg.P
	local S = lpeg.S
	
	local write_item = function(val)
		log:info("Writing item: ",val)
	end
	
	local open_item = function()
		log:info("Entering item...")
	end
	
	local close_item = function()
		log:info("Closing item...")
	end
	
	local sep = ","
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
	  Term = V"Exp"*(space^1*V"Open"*V"TermList"*V"Close")^0;
	  TermList = V"Term"*(P(sep.." ")*V"Term")^0;
	  Tree = P("{")*(V"TermList"+P(""))*P("}");
	}
	
	assert_equal(3,lpeg.match(G, "{}"),"Invalid emtpy tree match.")
	
	assert_not_equal(nil,lpeg.match(G, "{val1}"),"Invalid tree match 1.")
	
	assert_not_equal(nil,lpeg.match(G, "{val1, val2, val3}"),"Invalid tree match 2.")
	
	assert_not_equal(nil,lpeg.match(G, "{val1 (val2, val3)}"),"Invalid tree match 3.")
	
	assert_not_equal(nil,lpeg.match(G, "{val1 (val2, val3), val4 (val5), val6, val7 (val8, val9, val10 (val11 (val12, val13))), val14}"),"Invalid tree match 4.")
	
	log:info("Done testing lpeg tree parsing")
end


return suite
