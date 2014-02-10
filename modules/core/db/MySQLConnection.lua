local luasql = require"luasql.mysql"
	
local Class = require("classBuilder"){name="MySQLConnection",bases="base.Object"};
	
function Class:initialize(options)
	self._env = luasql.mysql()
	self:check(self._env,"Invalid MySQL environment.")
	
	-- establish a connection
	self:check(options,"Invalid mysql connection options.")

	self:setHost(options.host or "localhost")
	self:setPort(options.port or 3306)
	
	if (options.database or options.user) and options.password then
		self:connect(options)
	end
end

function Class:setHost(host)
	self:checkNonEmptyString(host,"Invalid mysql host");
	self._host = host;
end

function Class:setPort(port)
	self:check(tonumber(port),"Invalid mysql port");
	self._port = port;
end

function Class:disconnect()
	if self._connection then
		local res = self._connection:close()
		self:check(res,"Could not close the MySQL connection.")
		self._connection = nil;
	end
end

function Class:connect(options)	
	self:check(options,"Invalid options table for mysql connect");
	self:check(options.database or options.user,"missing database/user name.")
	self:check(options.password,"missing password.")
	self:check(self._host,"Invalid host for mysql connection.")
	self:check(self._port,"Invalid port for mysql connection.")
	
	self:disconnect();

	self._database = options.database or options.user
	self._username = options.user or options.database
	self._password = options.password
	
	self._connection = self._env:connect(self._database, self._username,self._password,self._host,self._port);
	
	self:check(self._connection,"Invalid mysql connection object")
	--if not self._connection then
	--	self:error("Invalid mysql connection object")
	--end
end

function Class:isConnected()
	return self._connection~=nil
end

function Class:hasTable(tbname)
	self:check(self:isConnected(),"Connection not established.")
	
	local cursor = self._connection:execute(([[
		SELECT COUNT(*)
		FROM information_schema.tables 
		WHERE table_schema = '%s' 
		AND table_name = '%s';]]):format(self._database, tbname));
		
	self:check(cursor,"Invalid cursor value.")
	--self:info("table existence cursor result is: count=",cursor:numrows())
	self:check(cursor:numrows()==1,"Invalid cursor value.")
	
	local item = {}
	cursor:fetch(item,"a")
	local result = (tonumber(item["COUNT(*)"])~=0)
	
	cursor:close()
	return result;
end

function Class:execute(cmd,...)
	self:check(self:isConnected(),"Connection not established.")
	cmd = cmd:format(...)
	
	self:debug1("Executing command: ",cmd)
	local res = self._connection:execute(cmd)
	--self:info("SQL command executed.")
	return res;
end

function Class:createTable(tbname,fields)
	self:checkNonEmptyString(tbname,"Invalid table name for table creation.")
	self:check(fields and #fields > 0,"Invalid fields for table creation.")
	
	local cmd = ("CREATE TABLE %s (%s)"):format(tbname, table.concat(fields,", "))
	local result = self:execute(cmd)
	self:check(result==0,"Invalid result value while creating table.")
	
--[[
-- convert to UTF-8
ALTER DATABASE nomDeLaBase CHARACTER SET UTF8 ; (la base)
ALTER TABLE nomDeLaTable CHARACTER SET UTF8 ; (la table)
ALTER TABLE nomDeLaTable CONVERT TO CHARACTER SET UTF8 ; (les colonnes de la table)
]]	
end

function Class:dropTable(tbname)
	self:check(self:isConnected(),"Connection not established.")
	self:checkNonEmptyString(tbname,"Invalid table name for table creation.")

	local result = self:execute("DROP TABLE %s",tbname)
	self:check(result==0,"Invalid result value while droping table: ",result)
end

function Class:insertInto(tname,keys,values)
	local num = 1
	if type(values)=="table" then
		num = #values
		values = "(" .. table.concat(values,"), (") .. ")"
	else
		values = "(" .. values .. ")"
	end
		
	local result = self:execute("INSERT INTO %s (%s) values %s",tname,keys,values)
	self:check(result==num,"Invalid result value for value insertion :",result)
end

function Class:insertTable(tname,item)
	local keys = {}
	local vals = {}
	
	for k,v in pairs(item) do
		table.insert(keys,k)
		table.insert(vals,tonumber(v) or ('"' .. v .. '"'));
	end
	
	return self:insertInto(tname,table.concat(keys,","),table.concat(vals,","))
end

return Class
