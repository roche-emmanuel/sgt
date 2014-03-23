local Class = createClass{"Logger"}

local log = require "log"

for lname,v in pairs(log.levels) do
	for sorig, sdest in pairs{[""]="",_f="_f",_v="_v"} do
		local oname = lname..sorig
		local dname = lname..sdest
		Class[dname] = function(self,...) return log[oname](...); end
	end
end

return Class()

