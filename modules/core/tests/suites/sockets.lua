module(..., package.seeall)

local log = require "tracer"

function test_https_connection()
	log:info("Tests","Testing HTTPS connection")
	
	local https = require "ssl.https"
	
	local res, code, headers, status = https.request("https://www.google.fr/")
	
	log:info("Tests","res=",res,", code=",code,", headers=",headers,", status=",status);
	
	log:info("Tests","HTTPS connection test done.")
end
