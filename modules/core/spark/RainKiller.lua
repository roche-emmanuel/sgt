local Class = require("classBuilder"){name="RainKiller",bases="base.Object"};

require "spark"
Class:generateWrapping(spark.GroupCustomUpdate)

function Class:initialize(options)	
	self:debug2("Creating RainKiller");

	self._func = options.func
end

function Class:op_call(particle, deltaTime)
    return self._func(particle, deltaTime)
end

return Class
