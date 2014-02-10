local i18n = {}

local locale = nil;
local translate = function(id,...)
	locale = locale or require("base.Locale")
	return locale:translate(id,...)
end

setmetatable(i18n, {
	__call = function(_,id,...) return translate(id,...) end,
	__index = function(_,id) return translate(id) end})
	
return i18n
