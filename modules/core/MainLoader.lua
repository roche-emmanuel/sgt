local Class = createClass{"MainLoader"}

-- load the compat module to get access to package.searchpath
require "utils.compat"

--[[
Class: MainLoader

Class used as the main entry point to execute the software logic. The behavior
of the software will then depend on the provided arguments in the constructor method.

This class inherits from <core.Object>.

Arguments:
	The loader will accept the following arguments and flags:

	*--mode xxxx* (or -m) : provide the core execution mode of the software, depending on this value the behavior of
the software will be completely different. Current possible values are:
 	- "lunagen" : used to perform binding generation for a library. When is mode is provided, then any parameter received as argument
will be considered as a file to execute to start the binding generation process.
 	- "enigma" : used to enigma encapsulation using the provided configuration for the package.

  *--log xxxx* : used to specify the desired target log file for the execution of the software. 
  
  *--loglevel xxxx* (or -l) : Use to specify the desired log level for this session. Default value is DEBUG0, possible options are : 
 "FATAL","ERROR","WARNING","NOTICE","INFO","DEBUG0","DEBUG1","DEBUG2","DEBUG3","DEBUG4","DEBUG5"

	*--verbose* (or -v): toggle verbose log output mode ON if specified.

	*--profiling*: toggle the profiling of the application on if specified.
]]

local flags_with_value = {
	mode=true,
	log=true,
	loglevel=true,
	evbfile=true,
}

local aliases = {
	m="mode",
	l="loglevel",
	v="verbose",
	evb="evbfile",
}

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
	self._flags, self._params = app.parse_args(self._args,flags_with_value,aliases)
	
	self._log_file = "sgt.log"
	self._log_level = self._flags.loglevel or "DEBUG0"
	self._verbose = self._flags.verbose or false

	-- retrieve config:
	_G.config = require "config"

	config.profiler_enabled = self._flags.profiling or false

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

	self:debug("Setting log level to ",self._log_level," and verbose = ",self._verbose)
	sgt.LogManager.instance():setNotifyLevel(sgt.LogManager[self._log_level])
	sgt.LogManager.instance():setVerbose(self._verbose)

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

	-- return code should always be an integer:
	if type(res)~='number' or res ~= math.floor(res+0.5)then
		self:warn("Invalid return code received : '",res,"'")
		res = 1
	end

	return res
end

--[[
Function: doExecute

Actual implementation for the execution of the loader.
This implementation will be called in a protected environment by <execute>
]]
function Class:doExecute()
	local m = self._flags.mode

	if not m then
		self:warn("No execution mode provided.")
		return 1
	end

	-- We use the provided execution mode to retrieve the appropriate loader.
	self:debug("Selecting loader for execution mode ",m)

	-- to select the module we should capitalize the first letter of the mode name:
	local mname = "loaders." .. m:sub(1,1):upper() .. m:sub(2)
	local fpath = package.searchpath(mname,package.path)
	if not fpath then
		self:warn("Could not find loader for execution mode '",m,"'")
		return 1
	end

	-- loader file is supposed to be available, so we may try to load it:
	local Loader = require(mname)

	-- Now create an instance of the loader and execute it:
	local l = Loader {self._flags, self._params}

	return l:execute()
end

return Class
