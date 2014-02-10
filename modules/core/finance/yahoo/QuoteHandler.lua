local Class = require("classBuilder"){name="YahooQuoteHandler",bases="base.Object"};

local http = require("socket.http")
local Set = require "std.Set"
local Map = require "std.Map"

local property_map = {}
property_map.AfterHoursChangeRealtime="c8"
property_map.AnnualizedGain="g3"
property_map.Ask="a0"
property_map.AskRealtime="b2"
property_map.AskSize="a5"
property_map.AverageDailyVolume="a2"
property_map.Bid="b0"
property_map.BidRealtime="b3"
property_map.BidSize="b6"
property_map.BookValuePerShare="b4"
property_map.Change="c1"
property_map.Change_ChangeInPercent="c0"
property_map.ChangeFromFiftydayMovingAverage="m7"
property_map.ChangeFromTwoHundreddayMovingAverage="m5"
property_map.ChangeFromYearHigh="k4"
property_map.ChangeFromYearLow="j5"
property_map.ChangeInPercent="p2"
property_map.ChangeInPercentRealtime="k2"
property_map.ChangeRealtime="c6"
property_map.Commission="c3"
property_map.Currency="c4"
property_map.DaysHigh="h0"
property_map.DaysLow="g0"
property_map.DaysRange="m0"
property_map.DaysRangeRealtime="m2"
property_map.DaysValueChange="w1"
property_map.DaysValueChangeRealtime="w4"
property_map.DividendPayDate="r1"
property_map.TrailingAnnualDividendYield="d0"
property_map.TrailingAnnualDividendYieldInPercent="y0"
property_map.DilutedEPS="e0"
property_map.EBITDA="j4"
property_map.EPSEstimateCurrentYear="e7"
property_map.EPSEstimateNextQuarter="e9"
property_map.EPSEstimateNextYear="e8"
property_map.ExDividendDate="q0"
property_map.FiftydayMovingAverage="m3"
property_map.SharesFloat="f6"
property_map.HighLimit="l2"
property_map.HoldingsGain="g4"
property_map.HoldingsGainPercent="g1"
property_map.HoldingsGainPercentRealtime="g5"
property_map.HoldingsGainRealtime="g6"
property_map.HoldingsValue="v1"
property_map.HoldingsValueRealtime="v7"
property_map.LastTradeDate="d1"
property_map.LastTradePriceOnly="l1"
property_map.LastTradeRealtimeWithTime="k1"
property_map.LastTradeSize="k3"
property_map.LastTradeTime="t1"
property_map.LastTradeWithTime="l0"
property_map.LowLimit="l3"
property_map.MarketCapitalization="j1"
property_map.MarketCapRealtime="j3"
property_map.MoreInfo="i0"
property_map.Name="n0"
property_map.Notes="n4"
property_map.OneyrTargetPrice="t8"
property_map.Open="o0"
property_map.OrderBookRealtime="i5"
property_map.PEGRatio="r5"
property_map.PERatio="r0"
property_map.PERatioRealtime="r2"
property_map.PercentChangeFromFiftydayMovingAverage="m8"
property_map.PercentChangeFromTwoHundreddayMovingAverage="m6"
property_map.ChangeInPercentFromYearHigh="k5"
property_map.PercentChangeFromYearLow="j6"
property_map.PreviousClose="p0"
property_map.PriceBook="p6"
property_map.PriceEPSEstimateCurrentYear="r6"
property_map.PriceEPSEstimateNextYear="r7"
property_map.PricePaid="p1"
property_map.PriceSales="p5"
property_map.Revenue="s6"
property_map.SharesOwned="s1"
property_map.SharesOutstanding="j2"
property_map.ShortRatio="s7"
property_map.StockExchange="x0"
property_map.Symbol="s0"
property_map.TickerTrend="t7"
property_map.TradeDate="d2"
property_map.TradeLinks="t6"
property_map.TradeLinksAdditional="f0"
property_map.TwoHundreddayMovingAverage="m4"
property_map.Volume="v0"
property_map.YearHigh="k0"
property_map.YearLow="j0"
property_map.YearRange="w0"

function Class:initialize(options)
	self:setProperties{"Ask","Bid","AskRealtime","BidRealtime","LastTradePriceOnly"} -- set the default properties.
end

function Class:setProperties(props)
	self:check(props,"Invalid properties argument.")
	props = type(props)=="string" and {props} or props
	
	self:check(#props >= 1,"Empty property table.")
	self._properties = props
	
	-- update the property string accordingly:
	
	local str = ""
	for _,prop in ipairs(self._properties) do
		local code = property_map[prop]
		self:check(code,"Invalid code for property ",prop)
		str = str .. code
	end
	
	self._propertyStr = str
end

function Class:retrieveCSV(symbols)
	-- assuming symbols is a table here.
	 -- build the url:
	 local url = "http://download.finance.yahoo.com/d/quotes.csv?s=%s&f=%s"
	 url = url:format(table.concat(symbols,"+"),self._propertyStr)
	 
	 self:debug1_v("Requesting quotes from url=",url)
	 
	local body, res = http.request(url)
	self:check(body,"Invalid body in HTTP request. Error: ", res)

	return body;
end

function Class:getQuotes(symbols)
	symbols = type(symbols)=="string" and {symbols} or symbols
	
	-- retrieve the csv result:
	local input = self:retrieveCSV(symbols)
	
	local result = {}
	local numprops = #self._properties
	
	for _,sym in ipairs(symbols) do
		local symdata = {}
		
		for k,prop in ipairs(self._properties) do
			local sep = k==numprops and "\n" or ","
			local startIndex = input:sub(1,1)=='"' and input:find('"',2) or 1
			local index = input:find(sep,startIndex)
			self:check(index,"Invalid index while reading property ",prop," for symbol ",sym);
			
			local val = input:sub(1,index-1)
			input = input:sub(index+1)
			val = val:gsub('^"(.-)"$',"%1") -- remove quotations.
			
			if val:find("^N/A") then
				val = nil
				self:debug2_v("Ignoring N/A value for property ",prop," for symbol ",sym) 
			else
				val = tonumber(val) or val
				self:debug2_v("Setting ",prop,"=",val," for symbol ",sym)
				symdata[prop] = val
			end
		end
		
		result[sym] = symdata
	end
	
	return result
end

return Class
