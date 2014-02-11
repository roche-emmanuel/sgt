local Class = require("classBuilder"){name="View",bases="base.Object"};

local awe = require "Awesomium"

--[[
Class: gui.web.View

Encapsulation of the awesomium WebView object.

This class inherits from <base.Object>.
]]

--[=[
--[[
Constructor: View

Create a new instance of the class.

Parameters:
	options.width - Width of the web view to create.
	options.height - height of the web view to create.
]]
function View(options)
]=]
function Class:initialize(options)
	options = options or {}
	
	local Map = require "std.Map"
	self._objectNameMap = Map()
	self._methodIDMap = Map()
	
	-- get or create the webview:
	self._width = options.width or 1280
	self._height = options.height or 720
	self._hwnd = options.windowHandle
	
	self:createWebView(options)	
end

function Class:createSurface(options)
	-- do nothing by default.
end

function Class:createWebView(options)
	self:doCreateWebView(options)
end

function Class:destroy()
	self:getManager():destroyWebView(self._webView)
	self._webView = nil
end

function Class:doCreateWebView(options)
	-- self:info("Building webview object...")
	self._webView = options.webView
	if not self._webView then
		self._webView = self:getManager():createWebView{width=self._width,height=self._height,window=self:getParentWindowHandle()}
		self:check(self._webView,"Invalid web view object.")
	else
		-- just ensure we use the proper dimensions:
		self._webView:Resize(self._width,self._height)
	end
	-- self:info("Done building webview object.")
	
	self:setupWebView(options)
end

function Class:setupWebView(options)
	-- Create the display surface here if applycable.
	self:createSurface(options)
	
	-- prepare source prefix list:
	self._sourcePrefixes = require "std.Set" ();
	
	-- set as transparent if needed:
	self._webView:SetTransparent(options.transparent or false)
	
	-- create the default handlers:
	self:setupDefaultHandlers()
	
	-- setup the listeners:
	self:setupListeners()
	
	-- setu the JS handler:
	self:setupJSHandler()
end

function Class:getParentWindowHandle()
	return self._hwnd
end

function Class:addSourcePrefix(prefix)
	self._sourcePrefixes:push_back(prefix)
end

function Class:initView()
	if not self._initialized then
		self._onInitialize()
	end
end

function Class:setupDefaultHandlers()
	-- Custom handlers:
	self._onInitialize = function()
		-- do nothing special.
	end
	
	-- Process handlers:
	self._onUnresponsive = function(caller, obj)
		self:warn("The webview process became unresponsive...")
	end
	
	self._onResponsive = function(caller, obj)
		self:notice("The webview process is now responsive again.")
	end

	self._onCrashed = function(caller, status, obj)
		self:error("The webview process has crashed with status: ",status)
	end
	
	-- View handlers:
	self._onChangeTitle = function(caller,title,obj)
		self:debug("Calling onChangeTitle().")
	end

	self._onChangeAddressBar = function(caller,url,obj)
		self:debug("Calling onChangeAddressBar().")
	end

	self._onChangeTooltip = function(caller,tooltip,obj)
		self:debug("Calling onChangeTooltip().")
	end

	self._onChangeTargetURL = function(caller,url,obj)
		self:debug("Calling onChangeTargetURL().")
	end

	self._onChangeCursor = function(caller,cursor,obj)
		self:debug("Calling onChangeCursor().")
	end

	self._onChangeFocus = function(caller,focused_type,obj)
		self:debug("Calling onChangeFocus().")
	end
	
	self._onAddConsoleMessage = function(caller, message, line_number, source, obj)
		
		local i1, i2
		for _,prefix in self._sourcePrefixes:sequence() do
			i1, i2 = source:find(prefix)
			if i2 then
				source = source:sub(i2+1) -- only keep the end of the source file name.
			end
		end
		
		if message:find("%[INFO%]%s+") then
			message = message:gsub("%[INFO%]%s+","")
			self:info(message," (",source,":",line_number,")")
		elseif message:find("%[DEBUG%]%s+") then
			message = message:gsub("%[DEBUG%]%s+","")
			self:debug(message," (",source,":",line_number,")")
		else
			self:warn(message," (",source,":",line_number,")")
		end
	end

	self._onShowCreatedWebView = function(caller,new_view,opener_url,target_url,initial_pos,is_popup,obj)
		self:warn("Calling onShowCreateWebView(): no concrete implementation.")
	end
	
	-- Load handlers:
	self._onBeginLoadingFrame = function(caller,frame_id,is_main_frame,url,is_error_page,obj)
		self:debug("Calling onBeginLoadingFrame().")
	end

	self._onFailLoadingFrame = function(caller,frame_id,is_main_frame,url,error_code,error_desc,obj)
		self:error("Failed loading frame from url='", url,"', error_code=",error_code,", desc=",error_desc);
	end
	
	self._onFinishLoadingFrame = function(caller,frame_id,is_main_frame,url,obj)
		self:debug("Calling onFinishLoadingFrame().")
	end
	
	self._onDocumentReady = function(caller,url,obj)
		self:initView()
		-- self:debug("Calling onDocumentReady().")
	end
end

--[[
Function: getWidth

Retrieve the width of this web view.
Width is in pixels
]]
function Class:getWidth()
	return self._width
end

--[[
Function: getHeight

Retrieve the height of this web view.
Height is in pixels
]]
function Class:getHeight()
	return self._height
end

--[[
Function: getManager

Retrieve the WebView manager for this kind of web view.
The manager class should inherit from <gui.web.WebManager>.

This method must be re-implemented by a derived class.

Returns:
	The <gui.web.Manager> object to use for this class.
]]
function Class:getManager()
	self:no_impl()
	-- return require "gui.web.Manager"
end

--[[
Function: loadURL

Load a new URL.

Parameters:
	url - The URL to load.
]]
function Class:loadURL(url)
	self:debug("Loading URL: ", url)
	self._webView:LoadURL(awe.WebURL(url))
end

--[[
Function: resize

Resize the webview.

Parameters:
	ww - New width for the webview
	hh - New height for the webview
]]
function Class:resize(ww,hh)
	if ww~=self._width or hh~=self._height then
		self._width = ww
		self._height = hh
		self._webView:Resize(self._width,self._height)
	end
end

local err_map = {
[awe.kError_None] = "No error (everything is cool!)",
[awe.kError_BadParameters] ="Bad parameters were supplied.",
[awe.kError_ObjectGone] ="The object no longer exists.",
[awe.kError_ConnectionGone] ="The IPC connection no longest exists.",
[awe.kError_TimedOut] ="The operation timed out.",
[awe.kError_WebViewGone] ="The WebView no longer exists.",
[awe.kError_Generic] 	="A generic error was encountered."
}

function Class:checkErrors(obj)
	local err = (obj or self._webView):last_error()
	if err ~= awe.kError_None  then
		-- self:backtrace()
		self:error("Error occured in last call: ",err_map[err] or "Unknown error?")
	end
end

--[[
Function: reload

Reload the last URL loaded.

Parameters:
	ignore_cache - (optional) If set to false, then the cache will not be reloaded. Default value is true.
]]
function Class:reload(ignore_cache)
	self:debug("Reloading...")
	self._webView:Reload(ignore_cache==nil or ignore_cache)
	-- self._webView:Reload(true)
	-- self:loadURL(self._webView:url():spec())
end

--[[
Function: registerObject

Register a JSObject with a list of custom methods.

Parameters:
	objName - The name to give to the object.
	methods - (optional) A table mapping method names to functions to be executed.
Those methods should not return any values (results will be discarded anyway).
	withReturnMethods - (optional) A table mapping method names to functions to be executed.
Those methods must return a result and this result will be sent to the Javascript engine. This
kind of method has some specific limitations and should be used carefully( see Awesomium documentation).
  
Returns:
	The JSObject just created. An error can be triggered if the object cannot be created.
	
]]
function Class:registerObject(objName,methods,withReturnMethods)
	self:check(not self._objectNameMap:get(objName),"Object with name ", objName," was already registered.")
	methods = methods or {}
	
	-- Now create the object:
	local obj = self._webView:CreateGlobalJavascriptObject(objName)
	self:check(obj:IsObject(),"Could not create JS global object, error code is: ", self._webView:last_error());
	
	-- convert to object:
	obj = obj:ToObject()
	
	-- keep reference on the object:
	self._objectNameMap:set(objName,obj)
	
	-- get the remove ID:
	local id = obj:remote_id()
	self:check(id~=0,"id==0 : Global object should not be local.")
	
	-- keep reference on the methods table:
	self._methodIDMap:set(id,methods)
	
	-- register the custom methods:
	for name,func in pairs(methods) do
		obj:SetCustomMethod(name,false)
	end
	
	-- now extend the methods table with the methods returning values
	-- and register them at the same time:
	for name,func in pairs(withReturnMethods or {}) do
		self:check(not methods[name],"A JS method named ", name," was already registered.")
		methods[name] = func
		obj:SetCustomMethod(name,true) -- this one returns a value.
	end
	
	return obj
end

function Class:getObject(name)
	return self._objectNameMap:get(name)
end

function Class:getMethods(id)
	return self._methodIDMap:get(id)
end

function Class:setupJSHandler()
	self._jsHandler = awe.JSMethodHandler{
		OnMethodCall = function(tt, obj, caller, objectId, method_name, args)
			self:onMethodCall(caller, objectId, method_name, args:asTable(), obj)
		end,
		
		OnMethodCallWithReturnValue = function(tt, obj, caller, objectId, method_name, args)
			local res = self:onMethodCall(caller, objectId, method_name, args:asTable(), obj)
			-- self:check(res~=nil,"Invalid return value for method call: ",method_name)
			return (res==nil and awe.JSValue.Null())
					or (res==awe.JSValue.Undefined() and res)
					or awe.JSValue.box(res)
		end,
	}
	
	self._webView:set_js_method_handler(self._jsHandler)
end

--[[
Function: setupListeners

Setup all the listeners for this webview.
This method is called internally.
]]
function Class:setupListeners()
	self:setupLoadListener()
	self:setupViewListener()
	self:setupProcessListener()
end

--[[
Function: setupLoadListener

Method called internally to setup the load listener.
]]
function Class:setupLoadListener()
	self._loadListener = awe.Load{
		OnBeginLoadingFrame = function(tt, obj, caller, frame_id,is_main_frame, url, is_error_page)
			self._onBeginLoadingFrame(caller,frame_id,is_main_frame,url:spec(),is_error_page,obj)
		end,
		
		OnFailLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url, error_code, error_desc)
			self._onFailLoadingFrame(caller,frame_id,is_main_frame,url:spec(),error_code,error_desc,obj)
		end,
 
		OnFinishLoadingFrame = function(tt, obj, caller, frame_id, is_main_frame, url)
			self._onFinishLoadingFrame(caller,frame_id,is_main_frame,url:spec(),obj)
		end,
 
		OnDocumentReady = function(tt, obj, caller, url)
			self._onDocumentReady(caller,url:spec(),obj)
		end
	}
	
	self._webView:set_load_listener(self._loadListener)
end

--[[
Function: setupProcessListener

Method called internally to setup the process listener.
]]
function Class:setupProcessListener()
	self._processListener = awe.Process{
		OnUnresponsive = function(tt, obj, caller)
			self._onUnresponsive(caller, obj)
		end,
		 
		OnResponsive = function(tt, obj, caller)
			self._onResponsive(caller, obj)
		end,
 
		OnCrashed = function(tt, obj, caller, status)
			self._onCrashed(caller, status, obj)
		end
	}
	
	self._webView:set_process_listener(self._processListener)
end

--[[
Function: setupViewListener

Method called internally to setup the view listener.
]]
function Class:setupViewListener()
	self._viewListener = awe.View{
		OnChangeTitle = function(tt, obj, caller, title) -- title: WebString
			self._onChangeTitle(caller,title,obj);
		end,
		
		OnChangeAddressBar = function (tt, obj, caller, url) -- url: WebURL
			self._onChangeAddressBar(caller,url:spec(),obj)
		end,
		
		OnChangeTooltip = function(tt, obj, caller, tooltip) -- tooltip: WebString
			self._onChangeTooltip(caller,tooltip,obj)
		end,
		
		OnChangeTargetURL = function(tt, obj, caller, url) -- url: WebURL
			self._onChangeTargetURL(caller,url:spec(),obj)
		end,
		
		OnChangeCursor = function(tt, obj, caller, cursor)
			self._onChangeCursor(caller,cursor,obj)
		end,
		
		OnChangeFocus = function(tt, obj, caller, focused_type)
			self._onChangeFocus(caller,focused_type,obj)
		end,
		
		OnAddConsoleMessage = function(tt, obj, caller, message, line_number, source)
			self._onAddConsoleMessage(caller, message, line_number, source, obj);
		end,
		
		OnShowCreatedWebView = function(tt, obj, caller, new_view, opener_url, target_url, initial_pos, is_popup)
			self._onShowCreatedWebView(caller,new_view,opener_url:spec(),target_url:spec(),initial_pos,is_popup,obj)
		end,
	}
	
	self._webView:set_view_listener(self._viewListener)
end

--[[
Function: onMethodCall

This event occurs whenever a custom JSObject method (with or wihout return value) is called from JavaScript.

Parameters:
	caller - The caller webview.
	objectID - The ID of the object where this method is called.
	method_name - The name of the method to call.
	args - The arguments passed to the method as a table.
	obj - the JS handler object.
]]
function Class:onMethodCall(caller, objectId, method_name, args, obj)
	-- We first retrieve the methods for this object:
	local methods = self:getMethods(objectId)
	self:check(methods,"No methods registered for object with ID=",objectId);
	
	-- retrieve the actual method that should be executed:
	local func = methods[method_name]
	self:check(func,"Could not retrieve custom method with name ", method_name," on object with ID=",objectId)
	
	-- call the callback:
	local status, res = pcall(func,unpack(args))
	
	if not status then
		self:error("Could not execute JS custom method ", method_name,": ",res)
		return awe.JSValue.Undefined()
	end
	
	-- Return the result if any:
	return res;
end

--[[
Function: onUnresponsive

This event occurs when the process hangs. 
]]
function Class:onUnresponsive(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onUnresponsive = func
end

--[[
Function: onResponsive

This event occurs when the process becomes responsive after a hang.
]]
function Class:onResponsive(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onResponsive = func
end

--[[
Function: onCrashed

This event occurs when the process crashes.
]]
function Class:onCrashed(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onCrashed = func
end

--[[
Function: onChangeTitle

This event occurs when the page title has changed.
]]
function Class:onChangeTitle(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeTitle = func
end

--[[
Function: onChangeAddressBar

This event occurs when the page URL has changed.
]]
function Class:onChangeAddressBar(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeAddressBar = func
end

--[[
Function: onChangeTooltip

This event occurs when the tooltip text has changed. 
You should hide the tooltip when the text is empty.
]]
function Class:onChangeTooltip(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeTooltip = func
end

--[[
Function: onChangeTargetURL

This event occurs when the target URL has changed. 
This is usually the result of hovering over a link on a page.
]]
function Class:onChangeTargetURL(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeTargetURL = func
end

--[[
Function: onChangeCursor

This event occurs when the cursor has changed. 
This is is usually the result of hovering over different content.
]]
function Class:onChangeCursor(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeCursor = func
end

--[[
Function: onChangeFocus

This event occurs when the focused element changes on the page. 
This is usually the result of textbox being focused or some other user-interaction event.
]]
function Class:onChangeFocus(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onChangeFocus = func
end

--[[
Function: onAddConsoleMessage

This event occurs when a message is added to the console on the page. 
This is usually the result of a JavaScript error being encountered on a page.
]]
function Class:onAddConsoleMessage(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onAddConsoleMessage = func
end

--[[
Function: onShowCreatedWebView

This event occurs when a WebView creates a new child WebView (usually the result of window.open or an external link). 
It is your responsibility to display this child WebView in your application. 
You should call Resize on the child WebView immediately after this event to make it match your container size.

If this is a child of a Windowed WebView, you should call WebView::set_parent_window on the new view immediately within this event.
]]
function Class:onShowCreatedWebView(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onShowCreatedWebView = func
end

--[[
Function: onBeginLoadingFrame

Set Load listener event handler for begin loading frame.

Callback parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	is_error_page - {boolean} True if this is an error page
	obj - the load listener object.  
]]
function Class:onBeginLoadingFrame(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onBeginLoadingFrame = func
end

--[[
Function: onFailLoadingFrame

Set Load listener event handler for failed loading frame.
This event occurs when a frame fails to load. See error_desc for additional information.

Callback parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	error_code - {int} The actual error code.
	error_desc - {string} The error description.
	obj - the load listener object.  
]]
function Class:onFailLoadingFrame(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onFailLoadingFrame = func
end

--[[
Function: onFinishLoadingFrame

Set Load listener event handler for finished frame loading.
This event occurs when the page finishes loading a frame. 
The main frame always finishes loading last for a given page load.

Callback parameters:
	caller - The awesomium WebView caller.
	frame_id - The frame_id.
	is_main_frame - {boolean} True if this is the main frame.
	url - {string} The URL being loaded.
	obj - the load listener object.  
]]
function Class:onFinishLoadingFrame(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onFinishLoadingFrame = func
end

--[[
Function: onInitialize

Method called the first time the DOM becomes ready by default.
]]
function Class:onInitialize(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onInitialize = func
end

--[[
Function: onDocumentReady

Set Load listener event handler for DOM ready.
This event occurs when the DOM has finished parsing and the window object is available for JavaScript execution.

Callback parameters:
	caller - The awesomium WebView caller.
	url - {string} The URL being loaded.
	obj - the load listener object.  
]]
function Class:onDocumentReady(func)
	self:check(type(func)=="function","Invalid function argument")
	self._onDocumentReady = func
end

function Class:focus()
	self._webView:Focus()
end

function Class:injectKeyboardEvent(ke)
	self._webView:InjectKeyboardEvent(ke)
end

function Class:injectMouseMove(x,y)
	self._webView:InjectMouseMove(x,y)
end

function Class:injectMouseDown(mb)
	self._webView:InjectMouseDown(mb)
end

function Class:injectMouseUp(mb)
	self._webView:InjectMouseUp(mb)
end

function Class:injectMouseWheel(vwm,hwm)
	self._webView:InjectMouseWheel(vwm,hwm)
end

function Class:executeJavascript(script,frame_xpath)
	self._webView:ExecuteJavascript(script,frame_xpath or "")
end

function Class:executeJavascriptWithResult(script,frame_xpath)
	return self._webView:ExecuteJavascriptWithResult(script,frame_xpath or "")
end

return Class

