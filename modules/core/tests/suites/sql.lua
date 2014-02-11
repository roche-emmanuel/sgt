module(..., package.seeall)

local log = require "tracer"
--if flavor=="ds411" then
--	log:notice("Tests","Ignoring Yahoo Finance tests on ds411.")
--	return
--end

--[=[

local fs = require "base.FileSystem"

function test_mysql_connection()
	log:info("Tests","Testing MySQL connection establishment.")
	-- local con = require("db.MySQLConnection"){host="192.168.0.50",port=3306}
	local db = require("db.MySQLConnection"){host="singularityworld.info.tm",port=3306}
	
	log:info("Tests","Connecting MySQL connection.")
	db:connect{user="finance_data",password="7finance81rD"}
	
	local tname = "test_quotes"
	
	-- check if we have the quotes table:
	local res = db:hasTable(tname)
	assert_equal(false,res,tname .. " table was found before creation.")
	
	-- test creating the test_quotes table:
	db:createTable(tname,{"Symbol char(10)","Bid real","Ask real","Price real","TradeTime datetime"})
	
	local res = db:hasTable(tname)
	assert_equal(true,res,tname .. " table was not found after creation.")
	
	-- drop the table
	db:dropTable(tname)

	local res = db:hasTable(tname)
	assert_equal(false,res,tname .. " table was found after drop.")
	
	log:info("Tests","Disconnecting MySQL connection.")
	db:disconnect()
	
	log:info("Tests","Done testing MySQL connection establishment.")
end

function test_mysql_saving_loading_data()
	log:info("Tests","Testing saving loading mysql data.")

	local luasql = require"luasql.mysql"
	local env = luasql.mysql()
	assert_not_equal(nil,env,"Invalid MySQL environment.")
	
	local conn = env:connect("finance_data", "finance_data","7finance81rD","192.168.0.50",3306)
	assert_not_equal(nil,conn,"Invalid connection object")
	
	-- Create the data table.
	log:info("Tests","Creating data table...")
	local result = conn:execute("CREATE TABLE mytest2 (Symbol char(10), Bid real, Ask real, Price real, TradeTime datetime)")
	assert_equal("number",type(result),"Invalid result type for table creation.")
	assert_equal(0,result,"Invalid result value for table creation.")
	
	-- Insert some data in the table:
	log:info("Tests","Inserting entry in table.")
	result = conn:execute([[insert into mytest2 (Symbol,Bid,Ask,Price,TradeTime) values ('EURUSD=X',1.3123,1.3045,1.3108,NOW()),
	('GOOG',1.333333,1.444444,1.555555,'2006-04-12 13:47:36'),
	('AAPL',1.3,1.4,1.5,'2006-06-12 11:47:36');]])
	assert_equal(3,result,"Invalid result value for value insertion.")
	
	-- Read back the items:
	log:info("Tests","Reading back the data rows...")
	local cursor = conn:execute("select * from mytest2")
	assert_not_equal(nil,cursor,"Invalid selection result.")
	
	-- iterate on the rows:
	local item = {}
	local count = 0
	while(cursor:fetch(item,"a")) do
		count = count + 1
		log:info("Tests","Read item ",count,": symbol='",item.Symbol,"', bid=",item.Bid,", Ask=",item.Ask,", Price=",item.Price,", TradeTime=",item.TradeTime)	
	end
	
	-- Destroy the data table.
	log:info("Tests","Destroying data table...")
	result = conn:execute("DROP table mytest2")
	assert_equal("number",type(result),"Invalid result type for table destruction.")
	
	-- destroy connection:
	result = conn:close()
	assert_equal(true,result,"Cannot destroy connection.")
	
	-- destry environment:
	result = env:close()
	assert_equal(true,result,"Cannot destroy environment.")	
	
	log:info("Tests","Saving loading mysql data test done.")
end

]=]
