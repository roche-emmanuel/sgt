local Class = require("classBuilder"){name="InvestorHubSymbolRetriever",bases="finance.yahoo.SymbolRetriever"};

function Class:initialize(options)
	local folder = options and options.folder or fs:getAssetPath("finance/")
	self:check(folder,"Invalid folder to look for csv files.");
	
	self:setColumns{"symbol","company","exchange","country"}
	
	-- Parse each csv file available in that folder:
	local func = function(data)
		--self:info("Parsing file ", data.fullpath)
		self:parseFile(data.fullpath)
	end
	

	fs:traverse{path=folder,func=func,recursive=false,pattern="%.csv$"}
	
	--self:parseFile(fs:getAssetPath("finance/yahoo_stock_names_Argentina.csv"))
	
	-- write the file:
	self:writeFile(fs:getModulePath("finance/yahoo/SymbolTable.lua"))
end

function Class:parseFile(filename)
	local reader = require("io.CSVReader")(filename)
	
	-- fix the content (some companies have commas in their name).
	reader:setContent(reader:getContent()
		:gsub(", Inc%."," Inc.")
		:gsub(", inc"," inc")
		:gsub(", plc"," plc")
		:gsub(", Ltd%."," Ltd.")
		:gsub("%s*,%s*",",")
		:gsub(",,France",",Paris,France")
		:gsub(",,United Kingdom",",LSE,United Kingdom")
		:gsub(",,",",")
		)
	
	reader:setColumns{"company","symbol","exchange","country"}
	
	local tt = reader:readItem()
	while tt do
		self:addSymbol(tt)
		tt = reader:readItem()
	end
end


return Class
