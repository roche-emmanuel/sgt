local Class = require("classBuilder"){name="StockRetrieverConsoleApp",bases="base.Object"};

local Thread = require "base.Thread"

local interval = 1.0; -- check every second.
local linda = Thread.newLinda()

function Class.main_loop()
	log:info("Entering quote thread...")
	
	local Thread = require "base.Thread"
	local handler = require("finance.yahoo.QuoteHandler")()
	local tm = require "base.TimeManager"
	
	-- establish a connection to the server:
	local db = require("db.MySQLConnection"){host="singularityworld.info.tm",port=3306}
	
	log:info("Connecting to MySQL...")
	db:connect{user="finance_data",password="7finance81rD"}

	log:info("Checking quotes table existence...")
	local tname = "quotes"
	if not db:hasTable(tname) then
		log:info("Creating quotes table...")
		db:createTable(tname,{"Symbol char(10)","Bid real","Ask real","Price real","TradeTime int unsigned"}) -- primary key
	end

	if not db:hasTable(tname) then
		error("Could not create quotes table.");
	end
		
	log:info("Now entering continuous quote update loop...")
	local key, v, secs, res, elapsed, start_tick, prevsecs;
	
	local item = {}
	
	while true do
		key,v= linda:receive( interval, "test_key")
		secs = tm:getSeconds()
		-- secs = math.floor(Thread.getTime())
		--log:info("Elapsed seconds: ",secs)
		
		if math.mod(secs,60)==0 then
			-- start_tick = tm:tick()
			start_tick = os.clock()
			
			if prevsecs and (secs-prevsecs)~=60 then
				log:warn("Missing ", ((secs-prevsecs)/60) - 1, " steps between timestamps", prevsecs, " and ", secs); 
			end
			
			prevsecs = secs;
			
			-- retrieve the quotes:
			res = handler:getQuotes{"MSFT","AAPL","EURUSD=X"}
			log:debug1("Retrieved quotes are: ",res)
			
			for sym,data in pairs(res) do
				item.Symbol = sym
				item.Bid = data.BidRealtime or data.Bid
				item.Ask = data.AskRealtime or data.Ask
				item.TradeTime = secs
				item.Price = data.LastTradePriceOnly
				
				-- now insert this item in the quote table:
				db:insertTable(tname,item)
			end
			
			-- log:info(("All quotes handled in %.3f seconds for timestamp %d"):format(tm:delta_s(start_tick),secs))
			log:info(("All quotes handled in %.3f seconds for timestamp %d"):format((os.clock()-start_tick),secs))
			collectgarbage('step')
		end
	end 
	
	log:info("Exiting quote thread.")
end

function Class:run()
	Class.main_loop()
end

function Class:initialize(options)
	self:check(options,"Invalid options table.")
	self:info("Setting up StockRetriever.")
end

return Class -- return class instance.
