module(..., package.seeall)

local fs = require "base.FileSystem"
local log = require "logger"

function test_filesystem()
	local validFile = root_path.."init.lua"
	local validFolder = root_path
	local invalidPath = root_path.."dummy_item"
	log:debug_v("Checking filesystem with\nvalidFile=",validFile,
		"\nvalidFolder=",validFolder,"\ninvalidPath=",invalidPath)
		
	-- check if a valid folder exists:
	log:debug_v("Checking exists()")	
	assert_equal(true,fs:exists(validFile),"Invalid valid file check.")
	assert_equal(true,fs:exists(validFolder),"Invalid valid folder check.")
	
	log:debug_v("Checking non existing filepaths.")
	assert_equal(false,fs:exists(invalidPath),"Invalid invalid path check.")

	log:debug_v("Checking isFile()")
	assert_equal(true,fs:isFile(validFile),"Invalid isFile result on file.")
	assert_equal(false,fs:isFile(validFolder),"Invalid isFile result on folder.")
	
	log:debug_v("Checking isDirectory()")
	assert_equal(false,fs:isFolder(validFile),"Invalid isFolder result on file.")
	assert_equal(true,fs:isFolder(validFolder),"Invalid isFolder result on folder.")
	assert_equal(true,fs:isDirectory(validFolder),"Invalid isDirectory result on folder.")

	log:debug_v("Checking getAttribute()")
	assert_equal("file",fs:getAttribute(validFile,"mode"),"Invalid getAttribute result on file.")
	assert_gt(0,fs:getAttribute(validFile,"size"),"Invalid file size.")
	
	-- Note that on linux system the size of a folder may not be zero (can by 4096 for instance)
	-- Thus the following test should be removed.
	--assert_equal(0,fs:getAttribute(validFolder,"size"),"Invalid folder size")
	
	log:debug_v("Checking current working directory")
	
	local path = fs:getCurrentWorkingDirectory()
	log:debug_v("Current working dir is: ", path)
	fs:setCWD(validFolder)
	assert_equal(validFolder,fs:getCWD(),"Invalid cwd.")
	
	local count = 0
	log:debug_v("Checking directory traversal")
	local func = function(data)
		if count < 10 then
			log:debug("found file ",count,": ", data.fullpath)
			count = count+1
		end
	end
	
	log:debug_v("Finding all files:")
	count = 0
	fs:traverse{path=validFolder,func=func,recursive=true}
	log:debug_v("Finding all lua scripts:")
	count = 0
	fs:traverse{path=validFolder,func=func,pattern="%.lua$",recursive=true}
	log:debug_v("Finding all folders:")
	count = 0
	fs:traverse{path=validFolder,func=func,type="directory",recursive=true}
	
	log:debug_v("FS test done.")	
end
