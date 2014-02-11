module(..., package.seeall)

local log = require "tracer"
--if flavor=="ds411" then
--	log:notice("Tests","Ignoring Yahoo Finance tests on ds411.")
--	return
--end

function test_investorhub_symbol_retriever()
	log:info("Tests","Testing investor hub symbol retriever.");
	
	local ret = require("finance.yahoo.InvestorHubSymbolRetriever")()
	
	local syms = require("finance.yahoo.SymbolTable")
	log:info("Tests","Found ", #syms, " Investor hub symbols.");
	
	log:info("Tests","Investor hub symbol retriever test done.");
end

function test_quote_retriever()
	log:info("Tests","Testing quote handler");

	local handler = require("finance.yahoo.QuoteHandler")()
	
	local res = handler:getQuotes{"MSFT","AAPL"}
	
	log:info("Tests","Retrieved quotes are: ",res)
	
	log:info("Tests","Done testing quote handler.")
end

function test_retrieve_data()
	log:info("Tests","Retrieving data from yahoo finance...");
	--local url = 'http://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	local url = 'http://query.yahooapis.com/v1/public/yql?q=select%20Bid%2CAsk%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	local http = require("socket.http")
	
	local body, res = http.request(url)
	assert_not_equal(nil,body,"Invalid body retrieved.")
	log:info("Data retrieved.")
	
	-- Non decompose JSON body:
	local json = require("json")
	local result = json.decode(body)
	
	log:info("Tests","Retrieved data is: ",result)
	log:info("Tests","Data retrieval test done.")
end

function test_saving_loading_data()
	log:info("Tests","Testing saving loading data.")

	local luasql = require"luasql.sqlite3"
	local env = luasql.sqlite3()
	
	local file = fs:getRootPath(true).."tests/mydb.sql"
	if (fs:exists(file)) then
		fs:removeFile(file)
	end
	
	local conn = env:connect(file)
	assert_not_equal(nil,conn,"Invalid connection object")
	
	-- Create the data table.
	log:info("Tests","Creating data table...")
	local result = conn:execute("CREATE TABLE mytest (Symbol char(10), Bid real, Ask real, Price real, TradeTime datetime)")
	assert_equal("number",type(result),"Invalid result type for table creation.")
	assert_equal(0,result,"Invalid result value for table creation.")
	
	-- Insert some data in the table:
	log:info("Tests","Inserting entry in table.")
	result = conn:execute([[insert into mytest (Symbol,Bid,Ask,Price,TradeTime) values ('EURUSD=X',1.3123,1.3045,1.3108,datetime('now')),
	('GOOG',1.333333,1.444444,1.555555,datetime('10:30')),
	('AAPL',1.3,1.4,1.5,datetime('11:45:34'));]])
	assert_equal(3,result,"Invalid result value for value insertion.")
	
	-- Read back the items:
	log:info("Tests","Reading back the data rows...")
	local cursor = conn:execute("select * from mytest")
	assert_not_equal(nil,cursor,"Invalid selection result.")
	
	-- iterate on the rows:
	local item = {}
	local count = 0
	while(cursor:fetch(item,"a")) do
		count = count + 1
		log:info("Tests","Read item ",count,": symbol='",item.Symbol,"', bid=",item.Bid,", Ask=",item.Ask,", Price=",item.Price,", TradeTime=",item.TradeTime)	
	end
	
	-- Cursor seems already closed when fetch is done.
	--result = cursor:close()
	--assert_equal(true,result,"Cannot close cursor.")
			
	-- Destroy the data table.
	log:info("Tests","Destroying data table...")
	result = conn:execute("DROP table mytest")
	assert_equal("number",type(result),"Invalid result type for table destruction.")
	
	-- destroy connection:
	result = conn:close()
	assert_equal(true,result,"Cannot destroy connection.")
	
	-- destry environment:
	result = env:close()
	assert_equal(true,result,"Cannot destroy environment.")
	
	log:info("Tests","Saving loading data test done.")
end
