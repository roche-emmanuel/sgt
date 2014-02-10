local Class = require("classBuilder"){name="LuaCompiler",bases="base.Object"};

local fs = require "base.FileSystem"

-- Class used to compile multiple inputs in a single output:
function Class:initialize(options)
	
end

function Class:compile(path,inputs,output)
	-- http://lua-users.org/wiki/LuaCompilerInLua

	-- compile the input file(s)
	local chunk = {}
	for _, file in ipairs(inputs) do
		self:info("Reading file ", path..file)

		local func, msg = loadfile(path..file)
		self:check(func,"Invalid loadfile result: ",msg)
		
		chunk[#chunk + 1] = func
	end

	if #chunk == 1 then
		chunk = chunk[1]
	else
		-- combine multiple input files into a single chunk
		for i, func in ipairs(chunk) do
			chunk[i] = ("%sloadstring%q(...);"):format(i==#chunk and "return " or " ",
													   string.dump(func))
		end

		chunk, msg = loadstring(table.concat(chunk))
		self:check(chunk,"Invalid loadstring result: ",msg)  
	end

	local out = io.open(output, "wb")
	out:write(string.dump(chunk))
	out:close()
end

return Class
