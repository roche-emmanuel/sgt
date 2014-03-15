
-- local DefaultLogger = require "logging.DefaultLogger"

-- local LOG = DefaultLogger()

-- return LOG;

local Class = createClass{"Logger"}

local log = require "log"

for lname,v in pairs(log.levels) do
	-- for sorig, sdest in pairs{_t="",_tf="_f",_tv="_v"} do
	for sorig, sdest in pairs{[""]="",_f="_f",_v="_v"} do
		local oname = lname..sorig
		local dname = lname..sdest
		Class[dname] = function(self,...) return log[oname](self._TRACE_,...); end
	end
end

return Class()

