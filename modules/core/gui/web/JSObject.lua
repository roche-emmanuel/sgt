local Class = require("classBuilder"){name="JSGlobalObject",bases="base.Object"};

local awe = require "Awesomium"

function Class:initialize(options)
	self:check(options and options.name,"Invalid name for JS global object.")
	self:check(options and options.view,"Invalid view for JS global object.")
	
	self:info("Creating JSObject with name ", options.name)
	
	self._withReturnFuncs = {} -- This will hold the list of method with a return value.
	self._ignoredFuncs = {} -- Functions that should be ignored for javascript.
	
	-- create the object:
	local view = options.view
	self._name = options.name
	self._obj = view:CreateGlobalJavascriptObject(self._name)
	self:check(self._obj:IsObject(),"Could not create JS global object, error code is: ", view:last_error());
	self._obj = self._obj:ToObject()
	
	-- retrieve the object remote ID:
	self._id = self._obj:remote_id()
	self:check(self._id~=0,"id==0 : Global object should not be local.")
	
	self:getWebManager():setObject(view, self._id, self)
	
	for k,func in self:getAllClassMembers() do
		if type(func) == "function" and not self._ignoredFuncs[k] then
			self:debug4("Registering custom function: ", self._CLASSNAME_,"::",k)
			self._obj:SetCustomMethod(k,self._withReturnFuncs[k] or false)
		end
	end
end

function Class:invoke(fname,...)
	self._obj:Invoke(fname,awe.JSArray.fromTable{...})
end

return Class
