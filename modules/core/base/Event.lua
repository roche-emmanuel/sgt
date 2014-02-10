-- Default filesystem handler based on luafilesystem.
local Class = require("classBuilder"){name="Event",bases="base.Object"};

-- filepath types:
Class.APP_CLOSING="AppClosing"
Class.FRAME="Frame"

Class.default_front = {}
Class.default_front.AppClosing = true

function Class.isFront(ename)
	return Class.default_front[ename]
end

return Class
