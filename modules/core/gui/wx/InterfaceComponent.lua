local Class = require("classBuilder"){name="InterfaceComponent",bases="base.Object"};

function Class:initialize(options)
	self:check(options and options[1],"Invalid interface to build component")
	self._intf = options[1]
	self:build(options[1],options)
end

function Class:build(intf,options)
	-- assign the current object as handler:
	local prev_handler = intf:setHandler(self)
	
	self:buildComponent(intf,options)
	
	-- restore the previous handler:
	intf:setHandler(prev_handler)
end

function Class:buildComponent(intf)
	-- to be re-implemented.
end
 
return Class
