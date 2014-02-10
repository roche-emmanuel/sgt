 
local DefaultTracer = require "logging.DefaultTracer"
local LOG = DefaultTracer()

-- override the global print method:
_G.old_print = _G.print

_G.print = function(...)
	LOG:info("Print",...)
end

return LOG;
