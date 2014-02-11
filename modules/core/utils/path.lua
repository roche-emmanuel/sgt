--[[
Class: utils.path

Path manipulation and file queries package. This is modelled after Python's os.path library (10.1); see @{04-paths.md|the Guide}.
]]

local lfs = require "lfs"
local assert = require "utils.assert"
local base = require "utils.base"
local getenv = os.getenv
require "utils.compat"

local Class = {}

local sep = "/"

--[[
Variable: sep

The separator used for path formating internally. This separator is "/" by default.
]]
Class.sep = sep


--[[
Variable: root_dir

The root path of the application.
]]
Class.root_dir = root_path


local attrib = function(file,aname)
	file = Class.normalize(file)
	return lfs.attributes(file,aname)
end

local link_attrib = function(file,aname)
	file = Class.normalize(file)
	return lfs.symlinkattributes(file,aname)
end

-- local attrib = lfs.attributes
-- local link_attrib = lfs.symlinkattributes

-- helper attrib method to deal with errors.
-- local attrib_safe = function(file, aname)
	-- local res, msg = attrib(file,aname)
	-- return assert.notNil(res,msg)
-- end

-- helper link_attrib method to deal with errors.
-- local link_attrib_safe = function(file,aname)
	-- local res, msg = link_attrib(file,aname)
	-- return assert.notNil(res,msg)
-- end




--[[
Function: normalize

Normalize the given path.
This will ensure that paths such as: A//B, A/./B, A\B\, and A/foo/../B all become A/B.
Note that this method is also convert the windows separator to the normalized unix separator
The path can then be converted back to windows format.

Parameters:
	path - {string} The path to normalize.
  
Returns:
	The normalized path.
]]
function Class.normalize(path)
	assert.String(path)
	path = path:gsub("\\","/")
			   :gsub("//","/")
			   :gsub("/[^/]+/%.%.","") -- now remove the elements of type A/..
			   :gsub("/%./","/")
			   :gsub("/$","")
	return path
end


--[[
Function: isDir

Check if a given path is a directory

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a folder, false otherwise.
]]
function Class.isDir(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end

    return attrib(path,'mode') == 'directory'
end

--[[
Function: isFile

Check if a given path is a valid file:close

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a file, false otherwise.
]]
function Class.isFile(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end

    return attrib(path,'mode') == 'file'
end

--[[
Function: isLink

Check if the given path is a symbolic link

Parameters:
	path - {string} The path to check
  
Returns:
	True is the given path is a symbolic link, false otherwise.
]]

function Class.isLink(path)
	if not type("path")=="string" then
		return false; -- this is not a directory.
	end
	
	return link_attrib(path,'mode')=='link'
end

--[[
Function: getSize

Retrieve the size of a given file. The size is returned in bytes.

Parameters:
	path - {string} The path to check
  
Returns:
	The size of the file, or nil not applicable.
]]
function Class.getSize(path)
	assert.String(path)
	
    return attrib(path,'size')
end

--[[
Function: exists

CHeck if the given path exists

Parameters:
	path - The path to check
  
Returns:
	True if the given path exists, false otherwise
]]
function Class.exists(path)
	assert.String(path)
	
    return attrib(path,'mode') ~= nil
end

--[[
Function: getAccessTime

Return the time of last access as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the access time from
  
Returns:
	the last access as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getAccessTime(path)
	assert.String(path)
    return attrib(path,'access')
end

--[[
Function: getModificationTime

Return the time of last modification as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the modification time from
  
Returns:
	the last modification as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getModificationTime(path)
	assert.String(path)
    return attrib(path,'modification')
end

--[[
Function: getChangeTime

Return the system change time as the number of seconds since the epoch.

Parameters:
	path - The file to retrieve the change time from
  
Returns:
	The change as the number of seconds since the epoch or nil if not applicable.
]]
function Class.getChangeTime(path)
	assert.String(path)
    return attrib(path,'change')
end


local function at(s,i)
    return s:sub(i,i)
end

--[[
Function: splitPath

Given a path, return the directory part and a file part.
If there's no directory part, the first value will be empty. Note that the
path format will be normalized with the function call and it the path represents
a folder, such as A/B/C/D/ then the last folder is considered as the file in that
case and the returned values are: A/B/C and D.

Parameters:
	path - The path to split
  
Returns:
	The directory part and the file part as two values.
]]
function Class.splitPath(path)
    assert.String(path)
	path = Class.normalize(path)
	
    local i = #path
    local ch = at(path,i)
    while i > 0 and ch ~= sep do
        i = i - 1
        ch = at(path,i)
    end
	
    if i == 0 then
        return '',path
    else
        return path:sub(1,i-1), path:sub(i+1)
    end
end

--[[
Function: splitExt

given a path, return the root part and the extension part.
if there's no extension part, the second value will be empty.
Note that the extension point will we returned as part of the
extension.

Parameters:
	P - The path to split.
  
Returns:
	The root part of the path and the extension part.
]]
function Class.splitExt(P)
    assert.String(P)
	P = Class.normalize(P)
    local i = #P
    local ch = at(P,i)
    while i > 0 and ch ~= '.' do
        if ch == sep then
            return P,''
        end
        i = i - 1
        ch = at(P,i)
    end
    if i == 0 then
        return P,''
    else
        return P:sub(1,i-1),P:sub(i)
    end
end

--[[
Function: dirName

Return the directory part of a path.

Parameters:
	P - The path to retrieve the directory from
  
Returns:	
	The directory part of the path.
]]
function Class.dirName(P)
    assert.String(P)
    local p1,p2 = Class.splitPath(P)
    return p1
end

--[[
Function: baseName

Return the file part of a path

Parameters:
	P - A file path
  
Returns:
	The name of the file or the last directory in the path.
]]
function Class.baseName(P)
    assert.String(P)
    local p1,p2 = Class.splitPath(P)
    return p2
end

--[[
Function: extension

Get the extension part of a path.

Parameters:
	P - The file path.
  
Returns:
	The file extension with the ".", or empty string if no extension.
]]
function Class.extension(P)
    assert.String(P)
    local p1,p2 = Class.splitExt(P)
    return p2
end

--[[
Function: isAbs

Check if a given path is an absolute path or not.

Parameters:
	path - The path to check.
  
Returns:
	True if the path is absolute, false otherwise.
]]
function Class.isAbs(path)
    assert.String(path)
	path = Class.normalize(path)
    if base.is_windows then
        return at(path,1) == '/' or at(path,1)=='\\' or at(path,2)==':'
    else
        return at(path,1) == '/'
    end
end

--[[
Function: join

return the path resulting from combining the individual paths.
if the second (or later) path is absolute, we return the last absolute path (joined with any non-absolute paths following). Empty elements (except the last) will be ignored.

Parameters:
	p1 - A file path
	p2 - A file path
	... - (optional) more file paths
  
Returns:
	The concatenated path.
]]
function Class.join(p1,p2,...)
    assert.String(p1)
    assert.String(p2)
    if select('#',...) > 0 then
        local p = Class.join(p1,p2)
        local args = {...}
        for i = 1,#args do
            assert.String(args[i])
            p = Class.join(p,args[i])
        end
        return p
    end
	-- p1 = Class.normalize(p1)
	-- p2 = Class.normalize(p2)
	
    if Class.isAbs(p2) then 
		return Class.normalize(p2) 	
	end
	
    return Class.normalize(p1..sep..p2)
end

--[[
Function: absPath

Convert the input path into an absolute path

Parameters:
	path - {string} The path to convert
	pwd - (optional) {string} The folder to use as a starting point.
  
Returns:
	The absolute path.
]]
function Class.absPath(path,pwd)
    assert.String(path)
	if pwd then assert.String(pwd) end
    path = Class.normalize(path)
	pwd = pwd or root_path
	
    if not Class.isAbs(path) then
        path = Class.join(pwd,path)
    end
	
    return path
end

--[[
Function: normcase

Normalize the path and convert to lower case on windows. Normalize only otherwise.
]]
function Class.normcase(path)
	assert.String(path)
	return base.is_windows and Class.normalize(path):lower() or Class.normalize(path)
end

--[[
Function: toWin

Convert a path to the windows format. This method will
normalize the path and then convert it to lower case and
replace all the instances of "/" with "\".

Parameters:
	path - The path to convert
  
Returns:
	The converted path.
]]
function Class.toWin(path)
	assert.String(path)
	return (Class.normalize(path):lower():gsub('/','\\'))
end

--[[
Function: validate

Validate the path format by normalizing it and 
then calling <toWin> in case we are on a windows platform.

Parameters:
	path - The path to validate
  
Returns:
	The validated path.
]]
function Class.validate(path)
	assert.String(path)
	return base.is_windows and Class.toWin(path) or Class.normalize(path)
end

--[[
Function: relPath

relative path from *root_path* directory or optional start point.

Parameters:
	path - The path to convert to relative
	start - (optional) starting point to use, default value is *root_path*
  
Returns:
	The relative path computed.
]]
function Class.relPath(path,start)
    assert.String(path)
	if start then assert.String(start) end
    
	path = Class.normcase(Class.absPath(path,start))
    start = start or root_path
    start = Class.normcase(start)
    local startl, Pl = base.split(start,sep,true), base.split(path,sep,true)
    local n = math.min(#startl,#Pl)
    local k = n+1 -- default value if this loop doesn't bail out!
    for i = 1,n do
        if startl[i] ~= Pl[i] then
            k = i
            break
        end
    end
    local rell = {}
    for i = 1, #startl-k+1 do rell[i] = '..' end
    if k <= #Pl then
        for i = k,#Pl do table.insert(rell,Pl[i]) end
    end
    return table.concat(rell,sep)
end

--[[
Function: expandUser

Replace a starting '~' with the user's home directory.
In windows, if HOME isn't set, then USERPROFILE is used in preference to
HOMEDRIVE HOMEPATH. This is guaranteed to be writeable on all versions of Windows.

Parameters:
	path - The path where the user should be expanded.
	
Returns:
	The path with expanded user.
]]
function Class.expandUser(path)
    assert.String(path)
    if at(path,1) == '~' then
        local home = getenv('HOME')
        if not home then -- has to be Windows
            home = getenv 'USERPROFILE' or (getenv 'HOMEDRIVE' .. getenv 'HOMEPATH')
        end
        return Class.normcase(home.. path:sub(2))
    else
        return Class.normcase(path)
    end
end

--[[
Function: tmpName

Return a suitable full path to a new temporary file name.
unlike os.tmpname(), it always gives you a writeable path (uses TEMP environment variable on Windows)
]]
function Class.tmpName()
    local res = os.tmpname()
    if base.is_windows then res = getenv('TEMP')..res end
    return res
end


--[[
Function: commonPrefix

Return the largest common prefix path of two paths.

Parameters:
	path1 - The first path to consider
	path1 - The second path to consider
  
Returns:
	The common prefix of both paths.
]]
function Class.commonPrefix(path1,path2)
    assert.String(path1)
    assert.String(path2)
    path1, path2 = Class.normcase(path1), Class.normcase(path2)
    -- get them in order!
    if #path1 > #path2 then path2,path1 = path1,path2 end
    for i = 1,#path1 do
        local c1 = at(path1,i)
        if c1 ~= at(path2,i) then
            local cp = path1:sub(1,i-1)
            if at(path1,i-1) ~= sep then
                cp = Class.dirName(cp)
            end
            return cp
        end
    end
    if at(path2,#path1+1) ~= sep then path1 = Class.dirName(path1) end
    return path1
    --return ''
end

--[[
Function: package_path

return the full path where a particular Lua module would be found.
Both package.path and package.cpath is searched, so the result may
either be a Lua file or a shared library.


Parameters:
	mod - The name of the module to look for.
  
Returns:
	The full module path.
]]
--- 
-- @param mod name of the module
-- @return on success: path of module, lua or binary
-- @return on error: nil,error string
function Class.packagePath(mod)
    assert.String(mod)
    local res
    mod = mod:gsub('%.',sep)
    res = package.searchpath(mod,package.path)
    if res then return res,true end
    res = package.searchpath(mod,package.cpath)
    if res then return res,false end
    base.throw('cannot find module "',mod,'" on lua paths')
end

--[=[
--[[
Function: mkDir

Create a directory.

Parameters:
	dirname - Directory name
  
Returns:
	Returns true if the operation was successful; in case of error, it returns nil plus an error string.
]]
function Class.mkDir(dirname)
]=]
Class.mkDir = lfs.mkdir

--[=[
--[[
Function: rmDir

Removes an existing directory. 

Parameters:
	dirname - Directory name
  
Returns:
	Returns true if the operation was successful; in case of error, it returns nil plus an error string.
]]
function Class.rmDir(dirname)
]=]
Class.rmDir = lfs.rmdir

--[=[
--[[
Function: cwd

Returns a string with the current working directory or nil plus an error string.
]]
function Class.cwd()
]=]
Class.cwd = lfs.currentdir

--[=[
--[[
Function: chDir

Changes the current working directory to the given path.

Parameters:
	dirname - Directory name
  
Returns:
	Returns true if the operation was successful; in case of error, it returns nil plus an error string.
]]
function Class.chDir(dirname)
]=]
Class.chDir = lfs.chdir

--[=[
--[[
Function: dir

Lua iterator over the entries of a given directory. Each time the iterator is called with dir_obj it returns a directory entry's name as a string, or nil if there are no more entries. You can also iterate by calling dir_obj:next(), and explicitly close the directory before the iteration finished with dir_obj:close(). Raises an error if path is not a directory.

Parameters:
	dirname - Directory name
  
Returns:
	Returns iter, dir_obj
]]
function Class.dir(dirname)
]=]
Class.dir = lfs.dir

return Class;
