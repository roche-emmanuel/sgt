-- test the new Test system:
-- local assert = require "utils.assert"

local man = require("test.Manager")

local dummyVar = true

man:addSuite("Core new system tests",function()

	Test("Testing assert",function()
		assert.True(true,"Invalid value.")
	end)

	Test("xpcall behavior",function()
		local Exception = require "core.Exception"
		
		local err_handler = function(e)
			return e
		end
		
		local status, msg = pcall(function()
			error(Exception{"Hello Manu!"})
		end) --,err_handler)
		
		
		if not status then
			log.error("Error occured in : ", msg,", msg type=", type(msg))
		end
	end)

	Test("deprecated",function()
		local base = require "utils.base"
		
		local func = function()
			base.deprecated("Use func2 instead.")
		end
		
		func()
	end)
end)