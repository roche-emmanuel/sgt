local man = require("test.Manager")

man:addSuite("utils.base tests",function()
	
	local base = require "utils.base"
	local path = require "utils.path"
	
	Test("base.getOSName",function()
		log.info("Current OS name is: ", base.getOSName())
	end)
	
	Test("base.isWindows",function()
		assert.True(base.isWindows())
		assert.True(base.is_windows)
	end)
	
	Test("base.trim",function()
		assert.equals(base.trim("  cc  "),"cc")
		assert.equals(base.trim("  cc  ","_"),"  cc  ")
		assert.equals(base.trim("__cc__","_"),"cc")
		assert.equals(base.trim("_33_cc_22_","_[0-9]*"),"cc")
	end)
	
	Test("base.split",function()
		local src = "|||a|b|c||d|e|||" 
		local res = base.split(src,"|")
		assert.equals(5,#res)
		for k,v in ipairs{"a","b","c","d","e"} do
			assert.equals(v,res[k],"Invalid result at index ",k)
		end
		
		assert.gt(5,#base.split(src,"|",true))
	end)
	
	Test("base.readFile / base.writeFile",function()
		local str="Hello Manu!";
		local fname = path.tmpName()
		assert.True((base.writeFile(fname,str)))
		
		local str2 = base.readFile(fname)
		assert.equals(str,str2)
	end)
	
	Test("base.readLines",function()
		local str = "line 1\nline 2\n\nline 3\n"
		local fname = path.tmpName()
		assert.True((base.writeFile(fname,str)))

		local lines = base.readLines(fname)
		assert.equals(4,#lines)
		assert.equals(lines[4],"line 3")
	end)
end)
