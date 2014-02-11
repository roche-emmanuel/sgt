local man = require("test.Manager")

man:addSuite("utils.dir tests",function()
	
	local dir = require "utils.dir"
	local path = require "utils.path"
	local base = require "utils.base"
	
	Test("dir.fnmatch",function()
		assert.True(dir.fnmatch(root_path.."lua/modules/config.lua",root_path.."*.lua"))
		assert.False(dir.fnmatch(root_path.."lua/modules/config.lua",root_path.."*.obj"))
	end)
	
	Test("dir.filter",function()
		-- prepare a list of files:
		local list = {
			"lua/modules/file1.lua",
			"lua/modules/file2.lua",
			"lua/modules/file3.obj",
			"lua/modules/file4.lua",
			"lua/modules/file5.obj",
		}
		
		local res = dir.filter(list,"*.lua")
		
		assert.equals(3,res:size())
	end)
	
	Test("dir.getFiles",function()
		local files = dir.getFiles(root_path.."lua/modules/utils","*.lua")
		assert.False(files:empty(),"No file found.")
		files:foreach(function(f)
			assert.isFile(f)
			assert.equals(path.extension(f),".lua")
		end)		

		local files2 = dir.getFiles(root_path.."lua/modules/utils")
		assert.gte(files:size(),files2:size())
	end)
	
	Test("dir.getDirectories",function()
		local res = dir.getDirectories(root_path.."lua")
		
		assert.equals(2,res:size())
		assert.equals(res:at(1),root_path.. "lua/modules")
		assert.equals(res:at(2),root_path.. "lua/scripts")
	end)
	
	Test("dir.copyFile",function()
		local str = "line 1\nline 2\n\nline 3\n"
		local fname1 = path.tmpName()
		assert.True((base.writeFile(fname1,str)))
		
		-- log.info("Testing copy with file: ",fname1)
		
		local fname2 = fname1..".backup"
		os.remove(fname2)
		local res = dir.copyFile(fname1,fname2)
		assert.True(res)
		local res = dir.copyFile(fname1,fname2,false)
		assert.False(res)
		assert.True(path.exists(fname2))
		os.remove(fname2)
		os.remove(fname1)
	end)	
	
	Test("dir.moveFile",function()
		local str = "line 1\nline 2\n\nline 3\n"
		local fname1 = path.tmpName()
		assert.True((base.writeFile(fname1,str)))
		
		-- log.info("Testing move with file: ",fname1)
		
		local fname2 = fname1..".backup"
		os.remove(fname2)
		local res = dir.moveFile(fname1,fname2)
		assert.True(res)
		
		local res = dir.moveFile(fname1,fname2)
		assert.False(res)
		
		assert.False(path.exists(fname1))
		assert.True(path.exists(fname2))
		os.remove(fname2)
	end)

	Test("dir.getAllFiles",function()
		local files = dir.getAllFiles(root_path.."lua/modules")
		
		assert.gte(0,files:size())
		for k,val in files:sequence() do
			assert.File(val)
		end
	end)
	
	Test("dir.walk",function()
		assert.True(false)
	end)

	Test("dir.makePath",function()
		assert.True(false)
	end)

	Test("dir.cloneTree",function()
		assert.True(false)
	end)	
	
	Test("dir.rmTree",function()
		assert.True(false)
	end)	
	
	Test("dir.dirTree",function()
		assert.True(false)
	end)	


	
end)
