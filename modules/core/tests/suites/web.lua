module(..., package.seeall)

local log = require "logger"
local fs = require "base.FileSystem"

function test_awesomium()
	log:info("Testing awesomium.")
	
	local awe = require "Awesomium"
	
	log:info("Retrieving WebCore...")
	local core = awe.WebCore.Initialize(awe.WebConfig())
	
	log:info("Creating WebView...")
	local view = core:CreateWebView(800,600);
	
	log:info("Loading URL...")
	local url = awe.WebURL("http://www.google.fr");
	view:LoadURL(url)
	
	--log:info("Setting webview focus.")
	--view:focus();
	
	log:info("Now waiting for result...")
	local apr = require "apr"
	--core:update()
	--apr.sleep(4.0)
	
	while(view:IsLoading()) do
		log:info("Performing update cycle...")
		apr.sleep(0.05)
		core:Update()
	end
	
	apr.sleep(0.3)
	
	log:info("Rendering...")
	local buffer = view:surface();
	assert_not_equal(nil,buffer,"Invalid buffer object 1.")
	
	log:info("Casting surface...")
	buffer = buffer:dynCast("Awesomium::BitmapSurface");
	
	assert_not_equal(nil,buffer,"Invalid buffer object.")
	
	log:info("Writing PNG file.")
	local file = fs:getRootPath(true).."tests/capture.png"
	buffer:SaveToPNG(file,true)
	
	log:info("Destroying webview...")
	view:Destroy();
	
	core:Update()
	
	log:info("Destroying webcore...")
	awe.WebCore.Shutdown()
	
	log:info("Done testing awesomium.")
end


function awesomium_old() --test_
	log:info("Testing awesomium.")
	
	local awe = require "Awesomium"
	
	log:info("Creating WebCore...")
	local core = awe.WebCore()
	
	log:info("Creating WebView...")
	local view = core:createWebView(800,600);
	
	log:info("Loading URL...")
	view:loadURL("http://www.google.fr")
	
	log:info("Setting webview focus.")
	view:focus();
	
	log:info("Now waiting for result...")
	local apr = require "apr"
	core:update()
	apr.sleep(4.0)
	
	while(view:isLoadingPage()) do
		log:info("Performing update cycle...")
		core:update()
		apr.sleep(1.0)
	end
	
	log:info("Rendering...")
	local buffer = view:render();
	
	log:info("Writing PNG file.")
	local file = fs:getRootPath(true).."tests/capture.png"
	buffer:saveToPNG(file,true)
	
	log:info("Destroying webview...")
	view:destroy();
	
	log:info("Destroying webcore...")
	core:delete()
	
	log:info("Done testing awesomium.")
end
