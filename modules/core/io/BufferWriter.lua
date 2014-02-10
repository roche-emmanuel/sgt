local Class = require("classBuilder"){name="BufferWriter",bases="base.Object"};

function Class:initialize()
    self.content = {} -- The current content of the writer.
    self.indent = 0 -- base intent value
    self.tab = "\t" -- default tabulation value
    self.keepBackup = false
end

--- Fix the indent value.
-- Set the indentation count that will be used for the next calls to the writeLine method.
-- @param val The new indent value as integer
function Class:setIndent(val)
    self.indent = val
end

function Class:setKeepBackup(keep)
	self.keepBackup = keep
end

function Class:setTargetFolder(folder)
    self.targetFolder = folder
end

function Class:setTargetFilename(filename)
    self.targetFilename = filename
end

--- Push the indentation forward.
-- Increase the indentation level by one
function Class:pushIndent()
    self.indent = self.indent+1
end

--- Push the indentation backward.
-- Decrease the indentation level by one. This function will ensure that the 
-- indentation value is always >= 0.
function Class:popIndent()
    self.indent = math.max(self.indent-1,0)
end

function Class:clearContent()
    self.content = {}
end

--- Append unformatted message to the content.
-- This function will simplyg contcatenate the given message on the output content
-- with no addition formating stage.
-- @param msg The message to be appended on the content buffer.
function Class:appendContent(msg)
    table.insert(self.content,msg)
end

function Class:appendBuffer(buf)
	for k,v in ipairs(buf.content) do
		table.insert(self.content,v)
	end
end

--- Write a line on the content buffer.
-- Write a complete line in the content buffer.
-- @param msg The message to be written without the final new line character or the indentation prefix.
function Class:writeLine(msg,sep)
  self:appendContent(string.rep(self.tab,self.indent) .. msg)
  self:appendContent(sep or "\n")
end

--- Append a newline character on the content buffer.
function Class:newLine()
    self:appendContent("\n")
end

--- Get writer content.
-- return the current content buffer of the writer as a single string
function Class:getContent()
    return table.concat(self.content)
end

function Class:writeSubLine(msg,...)
	local str = msg
	for id,v in ipairs({...}) do
		str = str:gsub("%${"..id.."}",v)
	end
	self:writeLine(str);
end

function Class:writeForeach(list,msg,...)
	for k,v in list:sequence() do
		local str = msg
		for id,func in ipairs({...}) do
			str = str:gsub("%${"..id.."}",type(func)=="function" and func(k,v) or func)
		end
		self:writeLine(str);
	end
end

function Class:replaceLastEntry(rep)
	table.remove(self.content)
	table.insert(self.content,rep)
end

--- Write the writer content to file if needed.
function Class:writeFile(filename)
    local str = ""
        
    filename = (self.targetFolder or "").. (filename or self.targetFilename)
    self:info("Writing file "..filename)

    local f = io.open(filename,"r")
    if f then
        str = f:read("*a")
        f:close()
    end
    
    local content = self:getContent()
    if str == content then
        self:info("No change in file ".. filename)
    else
        self:info("Updating content of ".. filename)
        -- now write the file:
        local f = io.open(filename,"w")
        if not f then
        	self:error("Cannot open file ",filename," for writing. (file is locked or parent path doesnt exist ?)")
        	return;
        end
        f:write(content)
        f:close()
        
        if str ~= "" and self.keepBackup then
            local f = io.open(filename..".bak","w")
            f:write(str)
            f:close()
        end
    end
end

Class.append = Class.appendContent

return Class
