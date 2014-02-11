local Class = require("classBuilder"){name="ConfigProvider",bases="gui.Provider"};

local cfg = require "config"
 
--- Initialize the mainframe display:
function Class:initialize(options)
	self._container = cfg;
end

return Class
