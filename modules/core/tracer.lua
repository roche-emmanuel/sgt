local Class = createClass{"Tracer"}

local log = require "log"

for lname,v in pairs(log.levels) do
	for sorig, sdest in pairs{_t="",_tf="_f",_tv="_v"} do
		local oname = lname..sorig
		local dname = lname..sdest
		Class[dname] = function(self,...) return log[oname](...); end
	end
end

return Class()
