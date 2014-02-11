local man = require("test.Manager")

man:addSuite("utils.path tests",function()
	
	local path = require "utils.path"
	
	Test("path.normalize",function()
		assert.equals(path.normalize("A\\B\\..\\C/./D//E/"),"A/C/D/E")
	end)
	
	Test("path.isDir",function()
		assert.True(path.isDir(root_path))
		assert.True(path.isDir(root_path.."/"))
		assert.False(path.isDir(root_path.."dummy"))
	end)	

	Test("path.isFile",function()
		assert.False(path.isFile(root_path))
		assert.False(path.isFile(root_path.."/"))
		assert.False(path.isFile(root_path.."dummy"))
		assert.True(path.isFile(root_path.."lua/modules/config.lua"))
	end)
	
	Test("path.isLink",function()
		assert.False(path.isLink(root_path))
		assert.False(path.isLink(root_path.."/"))
		assert.False(path.isLink(root_path.."dummy"))
		assert.False(path.isLink(root_path.."lua/modules/config.lua"))
	end)	

	Test("path.getSize",function()
		assert.equals(0,path.getSize(root_path))
		assert.gt(0,path.getSize(root_path.."lua/modules/config.lua"))
	end)	
	
	Test("path.exists",function()
		assert.True(path.exists(root_path))
		assert.True(path.exists(root_path.."lua/modules/config.lua"))
		assert.False(path.exists(root_path.."dummy"))
	end)
	
	Test("path.getAccessTime",function()
		assert.gt(0,path.getAccessTime(root_path))
		assert.gt(0,path.getAccessTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getAccessTime(root_path.."dummy"))
	end)
	
	Test("path.getModificationTime",function()
		assert.gt(0,path.getModificationTime(root_path))
		assert.gt(0,path.getModificationTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getModificationTime(root_path.."dummy"))
	end)
	
	Test("path.getChangeTime",function()
		assert.gt(0,path.getChangeTime(root_path))
		assert.gt(0,path.getChangeTime(root_path.."lua/modules/config.lua"))
		assert.Nil(path.getChangeTime(root_path.."dummy"))
	end)
	
	Test("path.splitPath",function()
		local folder,file = path.splitPath(root_path.."lua/modules/config.lua")
		assert.equals(folder,root_path.."lua/modules")
		assert.equals(file,"config.lua")
		
		local folder,file = path.splitPath(root_path.."lua/modules/")
		assert.equals(folder,root_path.."lua")
		assert.equals(file,"modules")
	end)

	Test("path.absPath",function()
		assert.equals(path.absPath("lua/modules"),root_path.."lua/modules")
		assert.equals(path.absPath("lua/modules/"),root_path.."lua/modules")
		assert.equals(path.absPath("lua/modules/","C:"),"C:/lua/modules")
	end)
	
	Test("path.isAbs",function()
		assert.True(path.isAbs(root_path))
		assert.False(path.isAbs("lua/modules"))
		assert.False(path.isAbs("../lua/modules"))
		assert.False(path.isAbs("./lua/modules"))
		assert.True(path.isAbs("/lua/modules"))		
	end)
	
	Test("path.join",function()
		assert.equals(path.join(root_path,"lua/modules"),root_path.."lua/modules")
		assert.equals(path.join("lua","modules"),"lua/modules")
		assert.equals(path.join("lua","/modules"),"/modules")
		assert.equals(path.join("lua","/modules","path"),"/modules/path")
		assert.equals(path.join("C:","modules","path"),"C:/modules/path")
		assert.equals(path.join("C:","modules","path\\lua"),"C:/modules/path/lua")
	end)
	
	Test("path.toWin",function()
		assert.equals(path.toWin("C:/lua/modules/"),"c:\\lua\\modules")
		assert.equals(path.toWin("lua/modules/file.LUA"),"lua\\modules\\file.lua")
	end)
	
	Test("path.relPath",function()
		assert.equals(path.relPath(root_path.."lua/modules/"),"lua/modules")
		assert.equals(path.relPath(root_path.."../lua/modules/"),"../lua/modules")
		assert.equals(path.relPath(root_path,"W:"),path.normcase(root_path:sub(4)))
		assert.equals(path.relPath("C:\\my\\sub/path","C:\\disc"),"../my/sub/path")
		assert.equals(path.relPath("C:\\my\\sub/path","C:\\disc\\path"),"../../my/sub/path")
	end)
	
	Test("path.expandUser",function()
		assert.equals(path.expandUser("~/"),"c:/users/kenshin")
		assert.equals(path.expandUser("~/my/path"),"c:/users/kenshin/my/path")
	end)
	
	Test("path.tmpName",function()
		local fname1 = path.tmpName()
		local fname2 = path.tmpName()
		log.info("Temp file names are: f1=",fname1,", f2=",fname2)
		assert.notEqual(fname1,fname2)
	end)
	
	Test("path.splitExt",function()
		local file,ext = path.splitExt(root_path.."lua/modules/config.lua")
		
		assert.equals(file,root_path.."lua/modules/config")
		assert.equals(ext,".lua")

		local file,ext = path.splitExt(root_path.."lua/modules.no/config")
		assert.equals(file,root_path.."lua/modules.no/config")
		assert.equals(ext,"")
	end)
	
	Test("path.dirName",function()
		assert.equals(path.dirName("lua/modules/config/"),"lua/modules")
		assert.equals(path.dirName("lua/modules/config"),"lua/modules")
	end)	

	Test("path.baseName",function()
		assert.equals(path.baseName("lua/modules/config/"),"config")
		assert.equals(path.baseName("lua/modules/config.lua"),"config.lua")
	end)	
	
	Test("path.extension",function()
		assert.equals(path.extension("lua/modules/config/"),"")
		assert.equals(path.extension("lua/modules/config"),"")
		assert.equals(path.extension("lua/modules/config.lua"),".lua")
	end)	
	
	Test("path.commonPrefix",function()
		local p1 = root_path.."lua/modules/config.lua"
		local p2 = root_path.."lua/scripts/test.lua"
		local p3 = "w:\\lua/scripts/test.lua"
		local p4 = "C:\\lua/scripts/test.lua"
		
		assert.equals(path.commonPrefix(p1,p2),path.normcase(root_path.."lua").."/")
		assert.equals(path.commonPrefix(p1,p3),"w:/")
		assert.equals(path.commonPrefix(p1,p4),"")
	end)	
	
	Test("path.packagePath",function()
		assert.equals(path.packagePath("utils.base"),root_path.."lua/modules/utils/base.lua")
		assert.equals(path.packagePath("core"),root_path.."bin/win32/modules/core.sgp")
		assert.hasError(function() path.packagePath("stupid_dummy_module") end)
	end)
	
end)
