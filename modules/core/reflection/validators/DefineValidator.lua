local Class = require("classBuilder"){name="DefineValidator",bases="reflection.validators.BasicValidator"};

local im = require "reflection.IgnoreManager"

function Class:validate(object)	
	local str = object:getInitString()

	if im:ignoreDefine(self) then
		return false;
	end

	if not str then
		return false
	end

	if str:find("|") then
		return true;
	end
	
	if not tonumber(str) then
		return false;
	end		
	
	return false;
end

return Class
