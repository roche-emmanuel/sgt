local Class = require("classBuilder"){name="View",bases="cef.ViewTextureObject"};

-- This is the DX9 Manager
local manager = require "cef.Manager"
local log = require "logger"

function Class:initialize(options)
	-- to collect the messages we need a vector of ProcessMessage objects.
	self._messages = cef.std_vector_CefRefPtr_CefProcessMessage()
	
	self._listeners = {}

	options = options or {}
	
	local size = options.size or osg.Vec2f(1280,720)
	local url = options.url or "http://www.google.fr"

	-- first we prepare the traits for the view:
	local traits = cef.CEFViewBase_Traits()
	self:info("Creating CEFView of size ",size:x(),"x",size:y())

	traits:size(size:x(),size:y());

	-- Also set the target URL for the view:
	-- traits:url("http://www.google.fr")
	traits:url(url)

	-- Now we may create the web view from those traits:
	self._viewbase = manager:CreateView(traits);
	self:check(self._viewbase,"Invalid view created.");
end

-- helper method used to convert from lua values to CEf values:
local setListValue = function(list,index,item)
	if type(item)=="null" then
		-- add a null element:
		list:SetNull(index)
	elseif type(item)=="number" then
		if item == math.floor(item) then
			-- treat this as an integer:
			list:SetInt(index,item)
		else
			-- treat this as a double:
			list:SetDouble(index,item)
		end
	elseif type(item)=="boolean" then
		list:SetBool(index,item)
	elseif type(item)=="string" then
		list:SetString(index,item)
	elseif type(item)=="table" then
		-- Receiving a table is a special case.
		-- as we can either generate a list or a dictionary for that table.
		-- to decide which one we need, we have the check the table keys.
		-- So we assume here that we will not try to mix integer indexes with string indexes.
		-- and we simply test the content of item[1]
		if item[1] then
			-- Assume this is to be treated as an array.
			local sublist = cef.CefListValue.Create()
			local num = #item
			sublist:SetSize(num)

			-- Assign each argument:
			for i=1,num do
				setListValue(sublist,i-1,item[i]) -- note that the argument list uses 0-based indices.
			end

			-- assign the sublist:
			list:SetList(index,sublist)
		else
			-- otherwise, we consider this table as a dictionary:
			local dict = cef.CefDictionaryValue.Create()

			for k,v in pairs(item) do
				setListValue(dict,k,v) -- note that we can use the setListValue here, because dictionaries and lists
				-- have the same API, except that the keys are integer or strings.
			end

			list:SetDictionary(index,dict)
		end
	else
		log:error("Unsupported type for CEF boxing: ", type(item))
		list:SetNull(index)
	end	
end

local getListValue = function(list, index)
	local vtype = list:GetType(index)
	if vtype == cef.VTYPE_INVALID or vtype == cef.VTYPE_NULL or vtype == cef.VTYPE_BINARY then
		log:error("Invalid or NULL or binary value received.")
		return nil;
		-- these values are not supported because they will mess the number of arguments in the table received.
	elseif vtype == cef.VTYPE_BOOL then
		return list:GetBool(index)
	elseif vtype == cef.VTYPE_INT then
		return list:GetInt(index)
	elseif vtype == cef.VTYPE_DOUBLE then
		return list:GetDouble(index)
	elseif vtype == cef.VTYPE_STRING then
		return list:GetString(index)
	elseif vtype == cef.VTYPE_DICTIONARY then
		local dict = list:GetDictionary(index)
		-- when we receive a dictionary we have to get all the keys in it:
		local keys = cef.std_vector_CefString()
		if not dict:GetKeys(keys) then
			log:error("Could not get list of keys from dictionary")
			return;
		end

		-- prepare a sub table for this dictionary:
		local tt = {}

		-- now populate the values for each key:
		local num = keys:size()
		for i=1,num do
			local key = keys:at(i-1)
			tt[key] = getListValue(dict,key)
		end

		return tt
	elseif vtype == cef.VTYPE_LIST then
		local sublist = list:GetList(index)

		-- prepare a sub table for this listionary:
		local tt = {}

		-- now populate the values for each key:
		local num = sublist:GetSize()
		for i=1,num do
			tt[i] = getListValue(sublist,i-1)
		end

		return tt
	end
end

function Class:postMessage(mname,...)
	-- send a new message to the renderer process for processing in javascript.
	self:check(self._viewbase:isBrowserReady(),"Browser is not ready.")
	self:check(mname,"Invalid message name")

	-- Here we should prepare a new process message object:
	local msg = cef.CefProcessMessage.Create(mname)
	self:check(msg,"Cannot create process message")

	-- now retrieve the argument list:
	local arglist = msg:GetArgumentList()

	local num = select('#', ...)

	if num>0 then
		-- Set the target size of the argument list:
		arglist:SetSize(num)

		-- Assign each argument:
		for i=1,num do
			setListValue(arglist,i-1,select(i, ...)) -- note that the argument list uses 0-based indices.
		end	
	end

	-- Now that the message is ready, post it:
	self._viewbase:PostMessage(msg)
end

--[[
Function: collectMessages

This method must be called from time to time to collect the messages
received on the browser process of this CEF view.

Once collected, the event listener will be called for each of the messages received.
]]
function Class:collectMessages()
	-- first we retrieve all the pending messages in our local list.
	-- at the same time, this will clear the list on the CEFViewBase object.
	-- note that this method will also return the number of messages received:
	-- self:debug("Collecting messages...")
	self._viewbase:CollectMessages(self._messages)

	-- self:check(num==messages:size(),"Invalid number of messages in vector: ",num,"!=",messages:size())
	local num = self._messages:size()

	-- now we try to process each message we received (if any)
	for i=1,num do
		self:debug("Processing message ",i,"...")
		local msg = self._messages:at(i-1) -- note that the vector uses 0-based indices.
		
		self:debug("Checking if process message is valid.")
		if(not msg or not msg:IsValid()) then
			log:error("Received invalid process message.")
			return;
		end
		self:debug("Process message is valid.")

		-- extract the arguments from the message argument list object:
		local args = {}

		self:debug("Retrieving argument list.")
		local list = msg:GetArgumentList()
		
		self:debug("Checking if arg list is valid.")
		if list:IsValid() then
			-- This is a List value:
			self:debug("Retrieving arg list size.")
			local num = list:GetSize()
			self:debug("Process message contains ", num, " arguments.")
			for j=1,num do
				self:debug("Retrieving argument ",j-1)
				args[j] = getListValue(list,j-1)
			end
		else
			self:debug("Found arg list to be invalid.")
		end

		self:debug("Calling onMessageReceived for message ",msg:GetName())
		self:onMessageReceived(msg:GetName(),unpack(args))
		self:debug("Message handled properly.")
	end

	-- when done processing the messages, we can clear the local list:
	self._messages:clear()
end

--[[
Function: onMessageReceived

This method is called for each message received from the browser.
It is responsible for calling the registered listeners for the given message:
]]
function Class:onMessageReceived(ename, ...)
	local list = self._listeners[ename]

	if not list then
		self:debug("Message ",ename," discarded.")
		return
	end

	for _,func in ipairs(list) do
		-- call the function with the received arguments:
		func(...)
	end
end

--[[
Function: addListener

Method used to add a message listener to this view.

Parameters:
  ename - event name
  func - the callbacl to call on that event.
]]
function Class:addListener(ename,func)
	self:check(type(func)=="function","Invalid callback function.")

	self._listeners[ename] = self._listeners[ename] or {}

	local tt = self._listeners[ename]
	tt[#tt+1] = func
end

--[[
Function: removeListener

Method called to remove a given listener function from the list of listeners for a given event.

This method returns true if the callback was indeed removed.
]]
function Class:removeListener(ename,func)
	self:check(type(func)=="function","Invalid callback function.")
	
	local list = self._listeners[ename]
	if not list then
		return; -- nothing to do.
	end

	for i=1,#list do
		if list[i] == func then
			table.remove(list,i)
			return true;
		end
	end

	return false
end

--[[
Function: removeAllListeners

Remove all the listeners for a given event name, or all events if no argument is provided.
]]
function Class:removeAllListeners(ename)
	if ename then
		self._listeners[ename] = nil
	else
		self._listeners = {}
	end
end

return Class
