-- Default filesystem handler based on luafilesystem.
local lfs = require "lfs"

local Class = require("classBuilder"){name="FileSystem",bases="base.Object"};

-- filepath types:
Class.TYPE_FILE="file"
Class.TYPE_FOLDER="directory"
Class.TYPE_DIR="directory"

-- File locking flags:
Class.MODE_READ="r"
Class.MODE_WRITE="w"

--- Perform initialization of the filesystem:
function Class:initialize(options)
	self._root_path = options and options.root_path or sgt_root or root_path
	self:checkFolder(self._root_path,"Invalid root path folder")
	self._root_path = self:formatPath(self._root_path)
	self:debug("Initialized with root path: ",self._root_path)
end

--- Return the root  path for the current installation
-- Note that the returned path doe not contain any ending path separator by default
-- set the argument withSeparator to true to change that.
function Class:getRootPath(arg)
	if type(arg)=="boolean" then
		return self._root_path .. (arg and "/" or "")
	elseif type(arg)=="string" then
		return self._root_path .. "/" .. arg
	else
		return self._root_path
	end
end


-- Return the path of a data file:
function Class:getDataPath(str)
	return self:getRootPath(true) .. "data/" .. str
end

-- Return the path of an asset file:
function Class:getAssetPath(str)
	return self:getRootPath(true) .. "assets/" .. str
end

-- Return the path of a module file:
function Class:getModulePath(str)
	return self:getRootPath(true) .. "lua/modules/" .. str
end

-- Return the path of an image asset file:
function Class:getImagePath(str)
	return self:getAssetPath("images/" .. str)
end

function Class:getShaderPath(str)
	return self:getAssetPath("shaders/" .. str)
end
--- Retrieve a relative path from the root path.
function Class:getPath(subpath)
	self:checkString(subpath,"Invalid string argument")
	return self._root_path .. "/"..subpath
end

--- Method used to convert a filepath to the unix standard format
-- forward slash are replaced with backward slashs and the last
-- character in the path is removed if it is a slash.
function Class:formatPath(path)
	self:checkNonEmptyString(path,"Invalid path argument.")
	return path:gsub("\\","/"):gsub("/$","")
end

--- Safe aattribute retrieval from LFS:
-- this function will first remove ending path separator from
-- the filename if needed.
function Class:attributes(filename,aname)
	self:checkNonEmptyString(filename,"Invalid filename argument.")
	-- remove ending path separator if any: 
	-- as this will prevent lfs from working properly and detect folders.
	local file=self:formatPath(filename)	
	local res, msg = lfs.attributes(file,aname)
	self:debug5("Retrieved mode ",res or "nil"," for filepath ",file)
	return res,msg
end

--- Check if the given filepath exists.
-- The path could point to a file, a folder, or anything else as long as it is a valid path.
-- this function will return true if the filepath is valid or nil otherwise (eg. if it doesn't exist).
function Class:exists(filename)
	return self:attributes(filename,"mode")~=nil
end

--- Check if a given filename is a valid file or not.
function Class:isFile(filename)
	return self:attributes(filename,"mode")=="file"
end

--- Check if a given filename is a valid folder or not.
function Class:isDirectory(filename)
	return self:attributes(filename,"mode")=="directory"
end

--- Check if a given file is valid
-- will fail if it's not the case.
function Class:checkFile(var,msg,...)
	if not self:isFile(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

--- Check if a given folder is valid
-- will fail if it's not the case.
function Class:checkFolder(var,msg,...)
	if not self:isFolder(var) then
		self:throw("(var=",var,") ",msg,...)
	end
end

--- Safe get attribute for a given filepath.
-- this function will trigger an error in case the filepath is not valid.
-- If the attribute name is not provided it will return a table with
-- all attributes. 
function Class:getAttribute(filename,aname)
	self:checkNonEmptyString(filename,"Invalid filename argument")
	local res, msg = self:attributes(filename,aname)
	self:check(res,msg," (filename=",filename," and aname=",aname,")")
	return res;
end

--- Retrieve the type of a given filepath.
-- will fail if the filepath is invalid.
function Class:getType(filename)
	return self:exists(filename) and self:getAttribute(filename,"mode")
end

--- Retrieve the size in number of bytes of the given file.
-- Will fail if the given filepath is not a file.
function Class:getFileSize(filename)
	self:check(self:isFile(filename),"Invalid file path: ",filename)
	return self:getAttribute(filename,"size")
end

--- Set the current working directory.
-- will fail if the given path is not a valid folder
function Class:setCurrentWorkingDirectory(path)
	self:check(self:isFolder(path),"Invalid folder argument")
	self:debug2_v("Setting current working directory to ",path)
	local res, msg = lfs.chdir(path)
	self:check(res,msg)
end

---  Retrieve the current working directory.
function Class:getCurrentWorkingDirectory()
	local res, msg = lfs.currentdir()
	self:check(res,msg)
	-- always format the path separators and add ending separator:
	res = self:formatPath(res).."/"
	self:debug2_v("Retrieved current working directory: ",res)
	return res;
end

--- Function to iterate on each item in a given folder
-- the provided function will be applied on each item found
-- matching the provided pattern and of the proper type.
-- This function can also be applied recursively.
-- options table:
--  .path = root path where to start traversing (mandatory)
--  .func = function to be executed on each matching item (mandatory)
--  .pattern = pattern to match against each item full path to allow processing of that item by the provided function.
--             if not specified, all fullpaths are considered as matching.
--  .type = specify which type of item should be processed. This could be either "file" or "directory", or... by default
--          all types are processed.
--  .recursive = when set to true, the traversal will process sub folders content.
--  .userdata = optional userdata value that will be passed to the processing function.
-- the sub_path argument is used internally and should not be provided at the user level.
-- The processor function should have the following prototype:
-- function(data) where data is a table with the fields:
--   .path = the root path where the traversal was started.
--   .sub_path = the sub folder from the root path where the traverse operation currently is (if any)
--   .file = The current filename of the item that matched the constraints in the traverse operation, from the sub_path folder.
--   .fullpath = the complete path of the current item.
--   .userdata = the userdata provided to the traverse function.
function Class:traverse(options,sub_path)
	self:check(self:isNil(sub_path) or self:isNonEmptyString(sub_path),"Invalid sub path.")
	self:checkFunction(options.func,"Invalid function in dir traversal.")
	
	local path = self:formatPath(options.path) .. "/" .. (sub_path or "") 
	self:checkFolder(path,"Invalid path for dir traversal");
	
	for file in lfs.dir(path) do
        if file ~= "." and file ~= ".." then
            local fullpath = path..file

			if ( not options.pattern or fullpath:find(options.pattern)) 
				 and (not options.type or options.type==self:getType(fullpath)) then
				options.func{path=options.path,
					 sub_path=sub_path or "",
					 file=file,
					 fullpath=fullpath,
					 userdata=options.userdata}
			end
					            
            if self:isFolder(fullpath) and options.recursive then
                self:traverse(options,(sub_path or "").. file .. "/")
            end
        end
    end
end

--[=[
--- Method used to lock a file.
function Class:lockFile(file,mode,start,length)
	self:check(file,"Invalid file argument")
	self:checkNonEmptyString(mode,"Invalid file mode: ", mode);
	self:check(start==nil or self:isInteger(start),"Invalid start position: ", start)
	self:check(length==nil or self:isInteger(length),"Invalid file chunk length: ", length)
	self:debug2_v("Locking file: ",file, " with start=",start," length=",length)
	local res, msg = lfs.lock(file, mode, start, length)
	self:check(rs,msg)
end

function Class:unlockFile(file,start,length)
	self:check(file,"Invalid file argument")
	self:check(start==nil or self:isInteger(start),"Invalid start position: ", start)
	self:check(length==nil or self:isInteger(length),"Invalid file chunk length: ", length)
	
	self:debug2_v("Unlocking file: ",file, " with start=",start," length=",length)
	local res, msg = lfs.unlock(file, start, length)
	self:check(rs,msg)
end

function Class:touch(filename,atime,mtime)
	self:checkNonEmptyString(filename,"Invalid filenaame argument")
	self:check(start==nil or self:isInteger(start),"Invalid start position: ", start)
	self:check(length==nil or self:isInteger(length),"Invalid file chunk length: ", length)
	
	self:debug2_v("Unlocking file: ",file, " with start=",start," length=",length)
	local res, msg = lfs.unlock(file, start, length)
	self:check(res,msg)
end
]=]

function Class:removeFile(filename)
	self:checkNonEmptyString(filename,"Invalid filename argument")
	local res, msg = os.remove(filename)
	self:check(res,msg)
end


-- function aliases:
Class.isFolder = Class.isDirectory
Class.getCWD = Class.getCurrentWorkingDirectory
Class.setCWD = Class.setCurrentWorkingDirectory

return Class() -- return instance of the class.
