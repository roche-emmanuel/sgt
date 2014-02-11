local Class = require("classBuilder"){name="DataManager",bases="base.Object"};

local cfg = require "config"
local utils = require "utils"

-- By default a container will create its own table as data Holder 
-- if not provided another value in its constructor
function Class:initialize(options)

end

function Class:getMainContainer()
	self:no_impl()
end

return Class()
