module(..., package.seeall)

local log = require "tracer"
local utils = require "utils"
local fs = require "base.FileSystem"
local wx = require "wx"

local Container = require "gui.Container"

function logInfo(msg)
	log:info("Tests",msg)
end

function test_container()
	logInfo("Testing container")
	
	local cont = Container() 
	
	-- set a value:
	cont:set("key1.key2.key3.val",5)
	local val = cont:get("key1.key2.key3.val",0);
	assert_equal(5,val,"Invalid set/get behavior")
	
	local data = cont:getDataHolder() -- this is a simple table.
	assert_equal(5,data.key1.key2.key3.val,"Invalid data table")

	local sub = cont:getSubContainerForEntry("test.hello.world")
	assert_equal("table",type(sub),"Invalid sub container type.")
	
	logInfo("Container test done.")
end

function test_image_manager()
	logInfo("Testing ImageManager")

	local im = require "gui.wx.ImageManager"
	
	wx.wxInitAllImageHandlers()
	
	
	--local img = im:getImage("folder")
	--assert_not_equal(nil,img,"Invalid image")
	--assert_equal("wx.wxImage",utils.typeEx(img),"Invalid image type");
	
	--local file = fs:getRootPath(true).."tests/my_folder.png"
	--local res = img:SaveFile(file)
	--assert_equal(true,res,"Cannot write image file");
	
	img = im:getImage{name="folder",size=-1}
	assert_equal("wx.wxImage",utils.typeEx(img),"Invalid image type");
	local file = fs:getRootPath(true).."tests/my_folder_big.png"
	local res = img:SaveFile(file)
	assert_equal(true,res,"Cannot write image file 2");
	
	img = im:getImage{name="folder@add",size=-1}
	assert_equal("wx.wxImage",utils.typeEx(img),"Invalid image type");
	local file = fs:getRootPath(true).."tests/my_folder_add.png"
	local res = img:SaveFile(file)
	assert_equal(true,res,"Cannot write image file 3");

	img = im:getImage("folder@remove")
	assert_equal("wx.wxImage",utils.typeEx(img),"Invalid image type");
	local file = fs:getRootPath(true).."tests/my_folder_remove.png"
	local res = img:SaveFile(file)
	assert_equal(true,res,"Cannot write image file 4");

	local bmp = im:getBitmap("folder@remove")
	assert_equal("wx.wxBitmap",utils.typeEx(bmp),"Invalid bitmap type");
	
	logInfo("ImageManager tests done.")
end

function test_entry()
	logInfo("Testing Entry")
	local Entry = require "gui.wx.Entry"
	local Interface = require "gui.wx.EntryInterface"
	
	local intf = Interface{};
	local options = {}
	options.name="my_entry"
	options.intf = intf
	
	local entry = Entry(options)
	logInfo("Entry test done")
end

function simpleapp_twice() --test_
	logInfo("Testing SimpleAppFrame")

	local Frame = require "gui.wx.SimpleApp"
	
	local frame = Frame()
	frame:run()
	
	logInfo("Running app again.")
	
	local frame = Frame()
	frame:run()
		
	logInfo("SimpleAppFrame tests done.")
end

function simpleapp_basic_interface() --test_
	logInfo("Testing SimpleAppFrame")

	local App = require "gui.wx.SimpleApp"
	local BasicInterface = require "gui.wx.BasicInterface"
	
	local app = App()
	
	local intf = BasicInterface{root=app:getFrame()}
	
	local parent = app:getFrame()
    local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
    parent:SetSizer(sizer)
	
	local panel = wx.wxPanel(parent,wx.wxID_ANY);
    local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
    parent:GetSizer():Add(panel,1,wx.wxALL+wx.wxEXPAND,2)
    
    panel:SetSizer(sizer)
    intf:pushParent(panel,sizer)
    intf:popParent(true)
    
    --[[
    intf:addSpacer{size=10}
    
	local panel = wx.wxPanel(app:getFrame(),wx.wxID_ANY);
    local sizer = wx.wxBoxSizer(wx.wxVERTICAL)
    panel:SetSizer(sizer)
    intf:pushParent(panel,sizer)
    intf:popParent(true)
	]]
	
	app:run()
		
	logInfo("SimpleAppFrame tests done.")
end
