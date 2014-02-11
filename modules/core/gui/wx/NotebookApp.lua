local Class = require("classBuilder"){name="NotebookApp",bases="gui.wx.SimpleApp"};

local wx = require "wx"

local i18n = require "i18n"
local cfg = require "config"
local evtman = require "base.EventManager"
local winman = require "gui.wx.WindowManager"
local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Initialize the mainframe display:
function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"
	local im = require "gui.wx.ImageManager"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()	
end

function Class:buildInterface(intf,options)
	-- Add a status bar to the frame:
	local statusBar = self:getFrame():CreateStatusBar(3);
	statusBar:SetFieldsCount{-2,-1,100}
	
	local mgr = winman:getAuiManager()
	mgr:SetManagedWindow(self:getFrame());
	
	local style = bit.band(wx.wxAUI_NB_TOP, 
						   wx.wxAUI_NB_CLOSE_ON_ACTIVE_TAB, 
						   wx.wxAUI_NB_TAB_MOVE, 
						   wx.wxAUI_NB_SCROLL_BUTTONS, 
						   wx.wxAUI_NB_TAB_SPLIT, 
						   wx.wxAUI_NB_TAB_EXTERNAL_MOVE, 
						   wx.wxBORDER_NONE, 
						   wx.wxAUI_NB_WINDOWLIST_BUTTON);
	
	self._book = wx.wxAuiNotebook:new(self:getFrame(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,style);
	
	mgr:AddPane(self._book, wx.wxAuiPaneInfo():Name("mainbook"):Show():CentrePane():Layer(0):MinSize(400,300));
	mgr:Update();
		
	self:getWindowManager():getMainFrame():SetSize(options.size or wx.wxSize(1280,720))	
end

function Class:getMainBook()
	return self._book
end

function Class:setPageCaption(window,caption)
	self:check(window,"Invalid window object.")
	local index = self._book:GetPageIndex(window)
	if index == wx.wxNOT_FOUND then
		self:notice("Could not find the page for the window ", window, " to set caption ", caption)
		return;
	end
	
	self._book:SetPageText(index,caption)
end

function Class:addPage(options)
	self._book:AddPage(options.window,options.caption)
end

return Class -- return class instance.
