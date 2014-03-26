local Class = createClass{"EnigmaLoader",bases="loaders.LoaderBase"}

local path =require 'utils.path'

--[[
Class: loaders.enigma

Loader used to generate an enigma package from a given package configuration.
The package configuration is given as a regular lua table defined in a file passed as parameter 
for this loader.

This class inherits from <loaders.LoaderBase>.

Enigma configuration:
  The Configuration file should contain the following entries:

  - *input_file* : The input file for the boxing.
  - *output_file* : The output file for the boxing.
  - *{files}* : A list of pattern matching all the files that should be included in this package.
]]

--[[
Function: execute

Re-implementation of <loaders.LoaderBase.execute>.
]]
function Class:execute()
	self:debug("Entering enigma mode...")
	--  Here we should have receive a parameter, and this parameter should be considered as a file to execute to perform 
	-- the binding generation process:
	self:check(#self._params==1,"Should receive 1 parameter for enigma mode: params=",self._params)

	-- execute the file:
	self:debug("Executing file: ",self._params[1])
	local desc = dofile(self._params[1])
	
	self:debug("Received description: ",desc)
	self._desc = desc

	-- we need to generate a temporary file except if the target description file name is specified.
	self._evbfile = self._flags.evbfile or path.tmpName().."evb"

	self:debug("Generating EVB file: ", self._evbfile)

	-- prepare a global buffer to store all the evb content:
	self._buf = {}
	self._tagStack = {}
	self._indent = 0

	-- generate the EVB file:
	self:generateEVB()

	-- write the EVB file:
	self:writeEVB()

	return 0
end

--[[
Function: append

Method used to append some content on the evb buffer.
]]
function Class:append(str)
	table.insert(self._buf,str)
end

--[[
Function: appendLine

Method used to append a complete line to the buffer. This will call <append> internally after adding the newline character
to the provided argument.
]]
function Class:appendLine(str)
	return self:append(str.."\n")
end

--[[
Function: openTag

Mathod used to write an opening XML tag
]]
function Class:openTag(tname)
	table.insert(self._tagStack,tname)
	self:appendLine(string.rep("  ",self._indent).."<"..tname..">")
	self._indent = self._indent+1
end

--[[
Function: closeTag

Method used to write a closing XML tag
]]
function Class:closeTag()
	-- retrieve the latest tag from the stack:
	local tname = table.remove(self._tagStack)
	self:check(tname,"Invalid tag name in closeTag")

	self._indent = math.max(0,self._indent-1)
	self:appendLine(string.rep("  ",self._indent).."</"..tname..">")
end

--[[
Function: writeTag

Method used to write an element text element with a given value
]]
function Class:writeTag(tname,value)
	if type(value) == "boolean" then
		value = value and "true" or "false"
	end
	return self:appendLine(string.rep("  ",self._indent).."<"..tname..">"..value.."</"..tname..">")
end

--[[
Function: writeEVB

Function called to write the buffer content to the EVB file.
]]
function Class:writeEVB()
	self:debug("Writing EVB file...")
	local str = table.concat(self._buf)

	local f = io.open(self._evbfile,"w")
	self:check(f,"Invalid evb file: ",self._evbfile)
	f:write(str)
	f:close()
end

--[[
Function: generateEVB

Method called to generate the EVB file content. This method is the main function
used to retrieve the list of files that will be required to build an EVB package.
]]
function Class:generateEVB()
	self:debug("Generating EVB content...")

	-- add the base content:
	self:appendLine('<?xml encoding="utf-16"?>')
	self:openTag("")

	-- write the input file:
	self:writeTag("InputFile",self._desc.input_file)
	self:writeTag("OutputFile",self._desc.output_file)

	self:openTag("Files")
	self:closeTag() -- closing </Files>

	self:openTag("Packaging")
	self:writeTag("Enabled",self._desc.packaging_enabled or false)
	for _,str in ipairs(self._desc.packages) do
		self:writeTag("Package",str)
	end
	self:closeTag() -- closing </Packaging>

	self:openTag("Options")
	self:writeTag("ShareVirtualSystem",self._desc.share_virtual_system or false)
	self:writeTag("MapExecutableWithTemporaryFile",self._desc.map_exec_temp_file or false)
	self:writeTag("AllowRunningOfVirtualExeFiles",self._desc.allow_running_virtual_exec or false)
	self:closeTag() -- closing </Options>

	self:closeTag() -- closing </>
end

return Class
