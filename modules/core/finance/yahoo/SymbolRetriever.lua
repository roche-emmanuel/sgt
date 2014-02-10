local Class = require("classBuilder"){name="SymbolRetriever",bases="base.Object"};

function Class:initialize(options)
	self._filename = options and options.filename
	self._symbols = {}
	
	self._sortFunc = function(lhs, rhs)
		--self:info("Comparing '", lhs.symbol, "' with '", rhs.symbol,"'")
		return lhs.symbol < rhs.symbol
	end
end

function Class:addSymbol(tt)
	self:check(tt.symbol,"Invalid symbol name.")
	table.insert(self._symbols,tt)
end

function Class:setColumns(cols)
	self._columns = cols
end

function Class:writeFile(filename)
	filename = filename or self._filename
	
	-- sort the symbols:
	table.sort(self._symbols,self._sortFunc)
	
	-- open the file:
	local file = require("io.FileWriter")(filename)
	
	file:newLine()
	file:writeLine("-- List of all symbols")
	file:writeLine("local symbols = {};")
	file:newLine()
	local val, line, content;
	for _,sym in ipairs(self._symbols) do
		-- write each symbol as a table:
		line = {}
		table.insert(line,"table.insert(symbols,{")
		content = {}
		
		for _,name in ipairs(self._columns) do
			val = sym[name]
			table.insert(content,name .. '=' .. (tonumber(val) or '"'.. val ..'"') )
		end
		
		table.insert(line,table.concat(content,", "))
		table.insert(line,"})")
		file:writeLine(table.concat(line))
	end

	file:newLine()
	file:writeLine("return symbols;")	
	file:newLine()

	file:close()
end

return Class
