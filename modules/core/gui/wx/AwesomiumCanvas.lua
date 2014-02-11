local Class = require("classBuilder"){name="AwesomiumCanvas",bases="gui.wx.OSGCanvas"};


--- Create an OSG Canvas:
function Class:initialize(options)

	self:create()
end

function Class:create()
	-- the underlying window is already created at that point.
	
end


return Class
