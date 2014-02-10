
local log = require "logger"
local Class = require("classBuilder"):create{name="UnitTester",bases="base.Object"};
local fs = require "base.FileSystem"

function Class:initialize(options)
	self:notice("Starting tests.")

	local tpath = options and options.path or "tests/suites"
	local mpath = tpath:gsub("/",".")
	
	self:info("Performing unit tests from path: ", tpath)
	
	require "lunatest"

	local func = function(data) 
		local path = mpath .. "." .. data.file:gsub("(.-)%.lua$","%1")
		log:info("Loading test suite ",path)
		lunatest.suite(path)
	end
	
	local sourcePath = options and options.sourcePath or root_path.."lua/modules"
	fs:traverse{path=sourcePath .. "/" .. tpath,
		func=func,
		pattern="%.lua$"}
	
	lunatest.run()		

	self:notice("Tests done.")
end

return Class
