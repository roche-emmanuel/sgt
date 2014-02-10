local Class = require("classBuilder"){name="wxDefineFinder",bases="helpers.wxValueFinder"};

function Class:extractElement(line)
	-- remove any trailing space:
	line = line:gsub("%s*$",""):gsub("^%s*",""):gsub("%s*//.*$","")
	
	-- parse what's left of the line for wxEvent type definition:
	local def, val = line:match("#define%s+(wx[A-Z0-9_]*[#%(]?)%w*%s+(.*)$") --_?[%w]+
	
	local valid = val and (tonumber(val) or val:find("|") or val==val:match("(%(?wx[A-Z_]*%)?)"))

	return valid and def
end

function Class:writeElement(elem)
	return "#define "..elem.." 0\n"
end

return Class
