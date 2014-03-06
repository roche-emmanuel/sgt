local Class = createClass{"MainLoader"}

function Class:initialize(options)
	self._args = options.args or options[1] or {}

	--  parse the arguments:
	local app = require "utils.app"
	self._flags, self._params = app.parse_args(self._args,{mode=true,log=true})
	
	self._log_file = "sgt.log"

	if self._flags.log then
		-- change the log file:
		local sink = sgt.LogManager.instance():getSink("main_log_file_sink")
		if not sink then
			self:error("Could not find main log file sink")
		else
			self._log_file = self._flags.log
			sink:dynCast("sgt::FileLogger"):init(self._log_file,false)
		end
	end

	self:info("Received flags: ", self._flags, " and parameters: ", self._params)
end

--[[
Function: execute

Main method called to execute the process. Should return the application exit code.
]]
function Class:execute()
	local status,res = pcall(Class.doExecute,self)
	if not status then
		self:error("Error occured in protected call, now exiting: ",res)
		sgt.showError('A fatal error occured, the application will now be closed.\nPlease check the log file "' .. self._log_file .. '" for details.')
		return 1
	end

	return res
end

--[[
Function: doExecute

Actual implementation for the execution of the loader.
This implementation will be called in a protected environment by <execute>
]]
function Class:doExecute()
	if self._flags.mode == "lunagen" then
		self:debug("Entering lunagen mode...")
	else
		self:debug("Not entering any mode.")
	end

	return 0
end

return Class
