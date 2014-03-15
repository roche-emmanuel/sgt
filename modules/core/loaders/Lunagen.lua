local Class = createClass{"LunagenLoader",bases="loaders.LoaderBase"}

--[[
Class: loaders.lunagen

Loader used to perform the generation of libray bindings.

This class inherits from <loaders.LoaderBase>.
]]

--[[
Function: execute

Re-implementation of <loaders.LoaderBase.execute>.
]]
function Class:execute()
	self:debug("Entering lunagen mode...")
	--  Here we should have receive a parameter, and this parameter should be considered as a file to execute to perform 
	-- the binding generation process:
	self:check(#self._params==1,"Should receive 1 parameter for lunagen mode: params=",self._params)

	-- execute the file:
	self:debug("Executing file: ",self._params[1])
	dofile(self._params[1])
	return 0
end

return Class
