local Class = require("classBuilder"){name="WebBookApp",bases="gui.wx.NotebookApp"};

function Class:initialize(options)
	-- self:addWebPage("http://www.google.fr")
	-- self:addWebPage("http://www.youtube.fr")
	
	for _,val in pairs(options.pages or {}) do
		self:addWebPage(val[1],nil,val)
	end
	
	-- obj:loadURL("http://www.smashcat.org/av/canvas_test/")
	-- obj:loadURL("http://oos.moxiecode.com/js_webgl/woods_xmas/")
	-- obj:loadURL("http://www.asterank.com/3d/")
	-- obj:loadURL("http://asmallgame.com/labsopen/webgl_impact/")
	-- obj:loadURL("http://www.doesmybrowsersupportwebgl.com/")
end

function Class:addWebPage(url,webview,options)
	local WebPage = require "gui.web.WebPage"
	local page = WebPage{parent=self:getMainBook(),webView=webview,transparent=options and options.transparent}
	self:addPage{window=page:getWindow(),caption="My page"}
	
	-- attach the event handlers:
	local tile = page:getWebTile()
	
	tile:onChangeTitle(function(caller,title)
		self:setPageCaption(page:getWindow(),title)
	end)
	
	tile:onChangeTargetURL(function(caller,url)
		self:getFrame():GetStatusBar():SetStatusText(url,0)
	end)
	
	tile:onShowCreatedWebView(function(caller,new_view,opener_url,target_url,initial_pos,is_popup)
		self:addWebPage(target_url,new_view)
	end)
	
	page:loadURL(url)
	--self._page = page
end

return Class 
