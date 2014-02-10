local Class = require("classBuilder"){name="wxEventFinder",bases="helpers.wxValueFinder"};

function Class:extractElement(line)
	-- parse what's left of the line for wxEvent type definition:
	return line:match("%s+(wxEVT_[%w_]*[#%(]?)") --_?[%w]+
end

function Class:writeElement(elem)
	return "#define "..elem.." 0\n"
end

return Class
