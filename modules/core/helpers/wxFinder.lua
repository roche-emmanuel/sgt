local Class = require("classBuilder"){name="wxFinder",bases="base.Object"};

local cfg = require "config"
local utils = require "utils"
local fs = require "base.FileSystem"
local Vector = require "std.Vector"
local Set = require "std.Set"

function Class:initialize(options)
	self:check(options.rootFolder,"A valid rootFolder entry is needed to build a wx finder.");	
	self._rootFolder = options.rootFolder -- the folder where to start looking for header files
	self._ignoreFilePatterns = Set();
	for _,v in pairs(options.ignoreFiles or {}) do
		self._ignoreFilePatterns:push_back(v)
	end
end

function Class:run()
	-- look for all files ending with ".h" in the given rootFolder.
	local func = function(data)
		local filename = data.fullpath
		for _,pat in self._ignoreFilePatterns:sequence() do
			if filename:find(pat) then
				return
			end
		end
	
		self:parseFile(filename)
	end
	
	fs:traverse{path=self._rootFolder,func=func,pattern="%.h$",recursive=true}
	
	self:finalize()
end

function Class:parseFile(filename)
	-- Read the complete content of the file in a table line by line.
	local file = io.open(filename,"r");
	self:check(file,"Invalid file handle.")
	
	local line = file:read("*l")
	
	for line in file:lines() do 
		self:parseLine(line)
	end
	
	file:close()	
end

function Class:parseLine(origline)
	local line = origline
	
	local num;
	
	-- check if we are already in a long comment:
	if self._inLongComment then
		-- look for a long comment end in that line:
		line, num = line:gsub(".-%*/","")
		self:check(num<2,"Invalid number of in long comment closure in line ",origLine)
		if num==1 then
			self._inLongComment = false; -- we are leaving a long comment.
		end
	end
	
	if self._inLongComment then
		-- no need to process further in case of long comment
		return;
	end
	
	-- check if the line contains a comment symbol and remove anything after it:
	line = line:gsub("//.*","");
	
	-- check for single line long comment:
	line = line:gsub("/%*.-%*/","")
	
	-- check for long comment entrance:
	line, num = line:gsub("/%*.*","");
	self:check(num<2,"Invalid number of in long comment entrance in line ",origLine)
	if num==1 then
		self._inLongComment = true; -- we are leaving a long comment.
	end
	
	self:processLineElement(line)
end

return Class
