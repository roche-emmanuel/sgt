local Class = require("classBuilder"){name="File",bases="base.Object"};

---  Takes a path and returns a logically simplified version of it.
--
--   Why oh why?:
--
--       Because File::Spec->canonpath doesn't strip quotes on Windows.  So if you pass in "a b\c" or "a b"\c, they still end up as
--       different strings even though they're logically the same.
--
--       It also doesn't remove things like "..", so "a/b/../c" doesn't simplify to "a/c" like it should.
function Class:canonizePath(path)
	self:no_impl()
end

--- Returns whether the passed path is absolute.
function Class:pathIsAbsolute(path)
   self:no_impl()
end

---  Creates a path from its elements.
--
--   Parameters:
--
--       volume - The volume, such as the drive letter on Windows.  Undef if none.
--       dirString - The directory string.  Create with <JoinDirectories()> if necessary.
--       file - The file name, or undef if none.
--
--   Returns:
--
--       The joined path.
--
function Class:joinPath(volume, dirString, file)
	self:no_impl()
end    

---  Joins two paths.
--
--   Parameters:
--
--       basePath       - May be a relative path, an absolute path, or undef.
--       extraPath      - May be a relative path, a file, a relative path and file together, or undef.
--       noFileInExtra - Set this to true if extraPath is a relative path only, and doesn't have a file.
--
--   Returns:
--
--       The joined path.
--
--   Why oh why?:
--
--       Because nothing in File::Spec will simply slap two paths together.  They have to be split up for catpath/file, and rel2abs
--       requires the base to be absolute.
--
function Class:joinPaths(basePath, extraPath, noFileInExtra)
	self:no_impl()
end
   
---  Takes a path and returns its elements.
--
--   Parameters:
--
--       path - The path to split.
--       noFile - Set to true if the path doesn't have a file at the end.
--
--   Returns:
--
--       The array ( volume, directoryString, file ).  If any don't apply, they will be undef.  Use <SplitDirectories()> to split the
--       directory string if desired.
--
--   Why oh Why?:
--
--       Because File::Spec->splitpath may leave a trailing slash/backslash/whatever on the directory string, which makes
--       it a bit hard to match it with results from File::Spec->catdir.
--
function CLass:splitPath(path, noFile)
	self:no_impl()
end

---   Creates a directory string from an array of directory names.
--
--   Parameters:
--
--       directory - A directory name.  There may be as many of these as desired.
--
function Class:joinDirectories(directory, directory, ...)
	self:no_impl()
end

---   Takes a string of directories and returns an array of its elements.
--
--   Why oh why?:
--
--       Because File::Spec->splitdir might leave an empty element at the end of the array, which screws up both joining in
--       <ConvertToURL> and navigation in <MakeRelativePath>.
--
function Class:splitDirectories(directoryString)
	self:no_impl()
end

---  Takes two paths and returns a relative path between them.
--
--   Parameters:
--
--       basePath    - The starting path.  May be relative or absolute, so long as the target path is as well.
--       targetPath  - The target path.  May be relative or absolute, so long as the base path is as well.
--
--       If both paths are relative, they are assumed to be relative to the same base.
--
--   Returns:
--
--       The target path relative to base.
--
--   Why oh why?:
--
--       First, there's nothing that gives a relative path between two relative paths.
--
--       Second, if target and base are absolute but on different volumes, File::Spec->abs2rel creates a totally non-functional
--       relative path.  It should return the target as is, since there is no relative path.
--
--       Third, File::Spec->abs2rel between absolute paths on the same volume, at least on Windows, leaves the drive letter
--       on.  So abs2rel('a:\b\c\d', 'a:\b') returns 'a:c\d' instead of the expected 'c\d'.  That makes no sense whatsoever.  It's
--       not like it was designed to handle only directory names, either; the documentation says 'path' and the code seems to
--       explicitly handle it.  There's just an 'unless' in there that tacks on the volume, defeating the purpose of a *relative* path
--       and making the function worthless.
--
function Class:makeRelativePath(basePath, targetPath)
	self:no_impl()
end

---  Returns whether the path is a descendant of another path.
--
--   Parameters:
--
--       base - The base path to test against.
--       path - The possible subpath to test.
--
--   Returns:
--
--       Whether path is a descendant of base.
--
function Class:isSubPathOf(base, path)
	self:no_impl()
end

---  Takes a relative path and converts it from the native format to a relative URL.  Note that it _doesn't_ convert special characters
--   to amp chars.
--
function Class:convertToURL(path)
	self:no_impl()
end

---  Takes an array of directory entries and returns one without all the entries that refer to the parent directory, such as '.' and '..'.
function Class:noUpwards(array)
	self:no_impl()
end

---  Takes a path and returns a version without the file name.  Useful for sending paths to <CreatePath()>.
function Class:noFileName(path)
	self:no_impl()
end

--- Returns the path without an extension.
function Class:noExtension(path)
	self:no_impl()
end

--- Returns the extension of the passed path, or undef if none.
function Class:extensionOf(path)
	self:no_impl()
end

---   Returns whether the current platform has case-sensitive paths.
function Class:ssCaseSensitive()
	self:no_impl()
end



---   Creates a directory tree corresponding to the passed path, regardless of how many directories do or do not already exist.
--  Do _not_ include a file name in the path.  Use <NoFileName()> first if you need to.
function Class:createPath(path)
	self:no_impl()
end

--   Removes an empty directory tree.  The passed directory will be removed if it's empty, and it will keep removing its parents
--   until it reaches one that's not empty or a set limit.
--
--   Parameters:
--
--       path - The path to start from.  It will try to remove this directory and work it's way down.
--       limit - The path to stop at if it doesn't find any non-empty directories first.  This path will *not* be removed.
--
function Class:removeEmptyTree(path, limit)
	self:no_impl()
end

--   Copies a file from one path to another.  If the destination file exists, it is overwritten.
--
--   Parameters:
--
--       source      - The file to copy.
--       destination - The destination to copy to.
--
--   Returns:
--
--       Whether it succeeded
--
function Class:copy(source, destination)
	self:no_impl()
end

return Class()
