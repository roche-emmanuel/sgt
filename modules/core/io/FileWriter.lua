local Class = require("classBuilder"){name="FileWriter",bases="base.Object"};

function Class:initialize(options)
	if type(options)=="string" then
		self:open(options)
	end
end

function Class:open(filename,flags)
	self:close()
	flags = flags or "w"
	self._file = io.open(filename,flags)
end

function Class:close()
	if self._file then
		self._file:close()
		self._file = nil
	end
end

function Class:newLine()
	self:check(self._file,"Invalid file handle.")
	self._file:write("\n")
end

function Class:writeLine(str)
	self:check(self._file,"Invalid file handle.")
	self._file:write(str.."\n")
end

return Class
