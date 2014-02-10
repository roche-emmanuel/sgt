-- prototype 1 for finance agent:
-- This agent will simply retrieve a fixed stock value from yahoo finance once every minute
-- and display the stock prices on the std output.
-- This module depends on the socket and json modules.

local http = require("socket.http")
local json = require("json")	
local apr = require("apr")
local luasql = require"luasql.mysql"
	
local Class = require("classBuilder"){name="AgentProto1",bases="base.Object"};
	
--- Perform initialization of the agent:
function Class:initialize(options)
	--self._url = 'http://query.yahooapis.com/v1/public/yql?q=select%20Bid%2CAsk%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	self._url = 'http://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	
	-- create the database connection:
	self._env = luasql.mysql()
	self:check(self._env,"Invalid MySQL environment.")
	
	self._conn = self._env:connect("finance_data", "finance_data","7finance81rD","192.168.0.50",3306);
	self:check(self._conn,"Invalid connection object")
	
	-- check if the table already exists and create it otherwise:
	local cursor = self._conn:execute([[
		SELECT COUNT(*)
		FROM information_schema.tables 
		WHERE table_schema = 'finance_data' 
		AND table_name = 'mytest';]])
	self:check(cursor,"Invalid cursor value.")
	self:info("table existence cursor result is: count=",cursor:numrows())
	self:check(cursor:numrows()==1,"Invalid cursor value.")

	local item = {}
	cursor:fetch(item,"a")
	self:debug2("Retrieved item is item=",item)
	
	if tonumber(item["COUNT(*)"])==0 then
		-- new to create the table:
		self:info("Creating the mytest table.")
		local result = self._conn:execute("CREATE TABLE mytest (Symbol char(10), Bid real, Ask real, Price real, TradeTime datetime)")
		self:check(result==0,"Invalid result value while creating table.")
	end
	
	self:debug("Initialized.")
end

-- Main function to run the agent loop infinitely. 
-- Note that this agent will be blocking until the application is killed.
function Class:run()
	
	while(true) do
		-- Read from internet:
		local body, res = http.request(self._url)
		
		if body then
			--self:check(body,res)
			-- Non decompose JSON body:
			local result = json.decode(body)
			
			--self:info("Received stock quote: ", result)
			
			local quote = result.query.results.quote
			
			-- display the stock prices:
			self:info("Stock prices : Ask=",quote.Ask,", Bid=",quote.Bid)
			
			-- FIrst check if the table already exists in the database:
			
			-- Now write the stock value to the MySQL database:
			--self:info("Should write data to table here.");
			local fstr = "insert into mytest (Symbol,Bid,Ask,Price,TradeTime) values ('EURUSD=X',%f,%f,%f,NOW())"
			result = self._conn:execute(string.format(fstr,quote.Bid, quote.Ask, quote.LastTradePriceOnly));
			self:check(result==1,"Invalid result value for value insertion :",result)
		else
			self:warn("Error occured while retrieving stock values: ",res)
		end
		
		-- sleep for 60 seconds.
		apr.sleep(60);
	end
end

return Class
