local Class = createClass{"MainLoader"}

local Class = require("classBuilder"){name="MainLoader",bases={"core.Object"}};

--[[
Class: MainLoader

Class used as the main entry point to execute the software logic. The behavior
of the software will then depend on the provided arguments in the constructor method.

This class inherits from <core.Object>.

Arguments:
	The loader will accept the following arguments and flags:

	*--mode xxxx* : provide the core execution mode of the software, depending on this value the behavior of
the software will be completely different. Current possible values are:
 	- "lunagen" : used to perform binding generation for a library. When is mode is provided, then any parameter received as argument
will be considered as a file to execute to start the binding generation process.

  *--log xxxx* : used to specify the desired target log file for the execution of the software. 
]]

--[=[
--[[
Constructor: MainLoader

Create an instance of the class.

Parameters:
	 options.args or options[1] - list of arguments that should be passed to the loader for parsing.
]]
function MainLoader(options)
]=]
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

	self:debug("Received flags: ", self._flags, " and parameters: ", self._params)
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
		--  Here we should have receive a parameter, and this parameter should be considered as a file to execute to perform 
		-- the binding generation process:
		self:check(#self._params==1,"Should receive 1 parameter for lunagen mode: params=",self._params)

		-- execute the file:
		self:debug("Executing file: ",self._params[1])
		dofile(self._params[1])
	else
		self:debug("Not entering any mode.")
	end

	return 0
end

return Class
