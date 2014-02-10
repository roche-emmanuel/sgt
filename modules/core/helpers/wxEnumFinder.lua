local Class = require("classBuilder"){name="wxEnumFinder",bases="helpers.wxValueFinder"};

function Class:parseFile(filename)
	-- Read the complete content of the file in a table line by line.
	local file = io.open(filename,"r");
	self:check(file,"Invalid file handle.")
	
	local content = file:read("*a")
	file:close()
	
	-- find all the enums in that file:
	for enum in content:gmatch("(\nenum%s*[%w_]*%s*{.-}%s*[%w_]*;)") do --
		
		local found = false;
		for _,pat in self._ignorePatterns:sequence() do
			if enum:find(pat) then
				found=true;
				break;
			end
		end
	
		if not found then
			self._values:push_back(enum)
		end
	end	
end

function Class:writeElement(elem)
	return elem.."\n\n"
end

return Class
