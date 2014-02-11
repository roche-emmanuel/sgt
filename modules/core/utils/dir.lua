--[[
Class: utils.dir

Getting directory contents and matching them against wildcards.
]]


local base = require 'utils.base'
local path = require 'utils.path'
local is_windows = base.is_windows
local ldir = path.dir
local chdir = path.chDir
local mkdir = path.mkDir
local rmdir = path.rmDir
local sub = string.sub
local os,pcall,ipairs,pairs,require,setmetatable,_G = os,pcall,ipairs,pairs,require,setmetatable,_G
local remove = os.remove
local append = table.insert
local wrap = coroutine.wrap
local yield = coroutine.yield
local throw = base.throw
local assert = require "utils.assert"
local log = require "log"

local Vector = require "std.Vector"

local dir = {}

local function filemask(mask)
    mask = base.escape(mask)
    return mask:gsub('%%%*','.+'):gsub('%%%?','.')..'$'
end

--[[
Function: fnmatch

does the filename match the shell pattern?

Parameters:
	file - A file name
	pattern - A shell pattern
	
Returns:
	True or false. Raise an error if the file or pattern are not strings.
]]
function dir.fnmatch(file,pattern)
    assert.String(file)
    assert.String(pattern)
	pattern = path.normcase(pattern)
	-- log.debug("Cheking file=",file,", against pattern=",pattern)
    return path.normcase(file):find(filemask(pattern)) ~= nil
end

--[[
Function: filter

return a list of all files which match the pattern.

Parameters:
	files - A table containing file names.
	pattern - A shell pattern.
	
Returns:
	<std.Vector> of files. Raise an error if file names or pattern are not strings.
]]
function dir.filter(files,pattern)
    assert.Table(files)
    assert.String(pattern)
    local res = Vector()
    local mask = filemask(pattern)
    for i,f in ipairs(files) do
        if f:find(mask) then res:push_back(f) end
    end
	
    return res
end

local function _listfiles(dir,filemode,match)
    local res = Vector()
    local check = base.choose(filemode,path.isFile,path.isDir)
    if not dir then dir = path.root_dir end
    for f in ldir(dir) do
        if f ~= '.' and f ~= '..' then
            local p = path.join(dir,f)
            if check(p) and (not match or match(p)) then
                res:push_back(p)
            end
        end
    end
	
    return res
end

--[[
Function: getFiles

Return a list of all files in a directory which match the a shell pattern.
Note that the dir argument is prepended to the file paths returned.

Parameters:
	dir - A directory. If not given, all files in <path.root_dir> directory are returned.
	mask - A shell pattern. If not given, all files are returned.
	
Returns:
	An <std.Vector> of files. Raise an error if dir or mask are not strings.
]]
function dir.getFiles(dir,mask)
    if dir then assert.Dir(dir) end
    if mask then assert.String(mask) end
    local match
    if mask then
        mask = filemask(mask)
        match = function(f)
            return f:find(mask)
        end
    end
    return _listfiles(dir,true,match)
end

--[[
Function: getDirectories

Return a list of all subdirectories of the directory.

Parameters:
	dir - {string} A directory. If not given, <utils.path.root_dir> is used. Raise an error if not a valid directory.
  
Returns:
	An <std.Vector> of directories. 
]]
function dir.getDirectories(dir)
	if dir then assert.Dir(dir) end
    return _listfiles(dir,false)
end

local function quote_argument (f)
    f = path.normcase(f)
    if f:find '%s' then
        return '"'..f..'"'
    else
        return f
    end
end


local ffi,ffi_checked,CopyFile,MoveFile,GetLastError,win32_errors,cmd_tmpfile

local function execute_command(cmd,parms)
   if not cmd_tmpfile then cmd_tmpfile = path.tmpName () end
   local err = is_windows and ' > ' or ' 2> '
    cmd = cmd..' '..parms..err..cmd_tmpfile
    local ret = base.execute(cmd)
    if not ret then
        return false,(base.readFile(cmd_tmpfile):gsub('\n(.*)',''))
    else
        return true
    end
end

local function find_ffi_copyfile()
	if ffi_checked then
		return
	end

	ffi_checked = true
	local res
	res, ffi = pcall(require,'ffi')
	if not res then
		ffi = nil
		return
	end
	
	-- ffi was loaded properly.
	ffi.cdef [[
		int CopyFileA(const char *src, const char *dest, int iovr);
		int MoveFileA(const char *src, const char *dest);
		int GetLastError();
	]]
	CopyFile = ffi.C.CopyFileA
	MoveFile = ffi.C.MoveFileA
	GetLastError = ffi.C.GetLastError

    win32_errors = {
        ERROR_FILE_NOT_FOUND    =         2,
        ERROR_PATH_NOT_FOUND    =         3,
        ERROR_ACCESS_DENIED    =          5,
        ERROR_WRITE_PROTECT    =          19,
        ERROR_BAD_UNIT         =          20,
        ERROR_NOT_READY        =          21,
        ERROR_WRITE_FAULT      =          29,
        ERROR_READ_FAULT       =          30,
        ERROR_SHARING_VIOLATION =         32,
        ERROR_LOCK_VIOLATION    =         33,
        ERROR_HANDLE_DISK_FULL  =         39,
        ERROR_BAD_NETPATH       =         53,
        ERROR_NETWORK_BUSY      =         54,
        ERROR_DEV_NOT_EXIST     =         55,
        ERROR_FILE_EXISTS       =         80,
        ERROR_OPEN_FAILED       =         110,
        ERROR_INVALID_NAME      =         123,
        ERROR_BAD_PATHNAME      =         161,
        ERROR_ALREADY_EXISTS    =         183,
    }
end

local function two_arguments (f1,f2)
    return quote_argument(f1)..' '..quote_argument(f2)
end

local function file_op (is_copy,src,dest,flag)
    if flag == 1 and path.exists(dest) then
        return false,"cannot overwrite destination"
    end
    if is_windows then
        -- if we haven't tried to load Alien/LuaJIT FFI before, then do so
        find_ffi_copyfile()
        -- fallback if there's no Alien, just use DOS commands *shudder*
        -- 'rename' involves a copy and then deleting the source.
        if not CopyFile then
            src = path.normcase(src)
            dest = path.normcase(dest)
            local res, err = execute_command('copy',two_arguments(src,dest))
            if not res then return nil,err end
            if not is_copy then
                return execute_command('del',quote_argument(src))
            end
        else
            if path.isDir(dest) then
                dest = path.join(dest,path.baseName(src))
            end
			local ret
            if is_copy then ret = CopyFile(src,dest,flag)
            else ret = MoveFile(src,dest) end
            if ret == 0 then
                local err = GetLastError()
                for name,value in pairs(win32_errors) do
                    if value == err then return false,name end
                end
                return false,"Error #"..err
            else return true
            end
        end
    else -- for Unix, just use cp for now
        return execute_command(is_copy and 'cp' or 'mv',
            two_arguments(src,dest))
    end
end

--[[
Function: copyFile

Copy a file.

Parameters:
	src - source file
	dest - destination file or directory
	flag - (optional) true if you want to force the copy (default is true)
	
Returns:
	True is operation succeeded, false and error message otherwise.
]]
function dir.copyFile (src,dest,flag)
    assert.String(src)
    assert.String(dest)
    flag = flag==nil or flag
    return file_op(true,src,dest,flag and 0 or 1)
end

--[[
Function: moveFile

Move a file.

Parameters:
	src - source file
	dest - destination file or directory
	flag - (optional) true if you want to force the copy (default is true)
	
Returns:
	True is operation succeeded, false and error message otherwise.
]]
function dir.moveFile (src,dest)
    assert.String(src)
    assert.String(dest)
    return file_op(false,src,dest,0)
end


local function _dirfiles(dir,attrib)
    local dirs = Vector()
    local files = Vector()
    for f in ldir(dir) do
        if f ~= '.' and f ~= '..' then
            local p = path.join(dir,f)
            local mode = attrib(p,'mode')
            if mode=='directory' then
                dirs:push_back(f)
            else
                files:push_back(f)
            end
        end
    end
	
    return dirs,files
end


local function _walker(root,bottom_up,attrib)
    local dirs,files = _dirfiles(root,attrib)
    if not bottom_up then yield(root,dirs,files) end
    for i,d in ipairs(dirs) do
        _walker(root..path.sep..d,bottom_up,attrib)
    end
    if bottom_up then yield(root,dirs,files) end
end

--[[
Function: walk

Return an iterator which walks through a directory tree starting at root.
The iterator returns (root,dirs,files).
Note that dirs and files are lists of names (i.e. you must say path.join(root,d)
to get the actual full path). 
If bottom_up is false (or not present), then the entries at the current level are returned
before we go deeper. This means that you can modify the returned list of directories before
continuing. This is a clone of os.walk from the Python libraries.

Parameters:
	root - A starting directory
	bottom_up - (optional) False if we start listing entries immediately. Default is false.
	follow_links - (optional) follow symbolic links. False by default. Not applicable on windows.
]]
function dir.walk(root,bottom_up,follow_links)
    assert.Dir(root)
    local attrib
    if is_windows or not follow_links then
        attrib = path.attrib
    else
        attrib = path.link_attrib
    end
    return wrap(function () _walker(root,bottom_up,attrib) end)
end

--[[
Function: rmTree

Remove a whole directory tree.

Parameters:
	fullpath - A directory path
  
Returns:
	true or nil then error if failed
]]
function dir.rmTree(fullpath)
    assert.Dir(1,fullpath)
    if path.isLink(fullpath) then return false,'will not follow symlink' end
    for root,dirs,files in dir.walk(fullpath,true) do
        for i,f in ipairs(files) do
            remove(path.join(root,f))
        end
        rmdir(root)
    end
    return true
end

local dirpat = '(.+)/[^/]+$'

local _makepath
function _makepath(p)
	-- windows root drive case
	if p:find '^%a:[/]*$' then
		return true
	end
	if not path.isDir(p) then
		local subp = p:match(dirpat)
		local ok, err = _makepath(subp)
		if not ok then return nil, err end
		return mkdir(p)
   else
		return true
   end
end

--[[
Function: makePath

Create a directory path.
This will create subdirectories as necessary!

Parameters:
	p - A directory path
  
Returns:
	true on success, nil + errormsg on failure
]]
function dir.makePath(p)
    assert.String(p)
    return _makepath(path.normcase(path.absPath(p)))
end


--[[
Function: cloneTree

Clone a directory tree. Will always try to create a new directory structure
if necessary.

Parameters:
	path1 - The base path of the source tree
	path2 - The new base path for the destination
	file_fun - (optional) an optional function to apply on all files
	verbose - (optional) boolean to control the verbosity of the output. false by default.
	
Returns:
	true or nil, then error message, or list of failed directory creations, list of failed file operations.
	
Usage example:
(start example)
	dir.cloneTree('.','../backup',copyfile)
(end example)
]]
function dir.cloneTree (path1,path2,file_fun,verbose)
    assert.String(path1)
    assert.String(path2)
    local abspath,normcase,isdir,join = path.absPath,path.normcase,path.isDir,path.join
    local faildirs,failfiles = {},{}
    if not isdir(path1) then return throw 'source is not a valid directory' end
    path1 = abspath(normcase(path1))
    path2 = abspath(normcase(path2))
    if verbose then log.info_t('dir.cloneTree','normalized:',path1,path2) end
    -- particularly NB that the new path isn't fully contained in the old path
    if path1 == path2 then return throw "paths are the same" end
    local i1,i2 = path2:find(path1,1,true)
    if i2 == #path1 and path2:sub(i2+1,i2+1) == path.sep then
        return throw 'destination is a subdirectory of the source'
    end
    local cp = path.commonPrefix (path1,path2)
    local idx = #cp
    if idx == 0 then -- no common path, but watch out for Windows paths!
        if path1:sub(2,2) == ':' then idx = 3 end
    end
    for root,dirs,files in dir.walk(path1) do
        local opath = path2..root:sub(idx)
        if verbose then log.info_t('dir.cloneTree','paths:',opath,root) end
        if not isdir(opath) then
            local ret = dir.makePath(opath)
            if not ret then append(faildirs,opath) end
            if verbose then log.info_t('dir.cloneTree','creating:',opath,ret) end
        end
        if file_fun then
            for i,f in ipairs(files) do
                local p1 = join(root,f)
                local p2 = join(opath,f)
                local ret = file_fun(p1,p2)
                if not ret then append(failfiles,p2) end
                if verbose then
                    log.info_t('dir.cloneTree','files:',p1,p2,ret)
                end
            end
        end
    end
    return true,faildirs,failfiles
end

--[[
Function: dirTree

Return an iterator over all entries in a directory tree

Parameters:
	d - a directory
  
Returns:
	an iterator giving pathname and mode (true for dir, false otherwise)
]]
function dir.dirTree( d )
    assert.nonEmptyString(d, "directory parameter is missing or empty" )
    local exists, isdir = path.exists, path.isDir
    local sep = path.sep

    local last = sub ( d, -1 )
    if last == sep or last == '/' then
        d = sub( d, 1, -2 )
    end

    local function yieldtree( dir )
        for entry in ldir( dir ) do
            if entry ~= "." and entry ~= ".." then
                entry = dir .. sep .. entry
                if exists(entry) then  -- Just in case a symlink is broken.
                    local is_dir = isdir(entry)
                    yield( entry, is_dir )
                    if is_dir then
                        yieldtree( entry )
                    end
                end
            end
        end
    end

    return wrap( function() yieldtree( d ) end )
end

--[[
Function: getAllFiles

Recursively returns all the file starting at *path*. It can optionally take a shell pattern and
only returns files that match *pattern*. If a pattern is given it will do a case insensitive search.

Parameters:
	start_path - {string} A directory.
	pattern - {string} A shell pattern. If not given, all files are returned.
	
Returns:
	<std.Vector> containing all the files found recursively starting at *start_path* and filtered by *pattern*.
]]
function dir.getAllFiles( start_path, pattern )
    assert.Dir(start_path)
    pattern = pattern or ""

    local files = Vector()
    local normcase = path.normcase
    for filename, mode in dir.dirTree( start_path ) do
        if not mode then
            local mask = filemask( pattern )
            if normcase(filename):find( mask ) then
                files:push_back(filename)
            end
        end
    end

    return files
end

return dir
