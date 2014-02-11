local Class = require("classBuilder"){name="MainFrame",bases="base.Object"};

local wx = require "wx"

local i18n = require "i18n"
local cfg = require "config"

--- Initialize the mainframe display:
function Class:initialize(options)
	self:debug4("Initializing mainframe.")
	
	-- create the mainframe:
    self._frame = wx.wxFrame:new( nil,            -- no parent for toplevel windows
                wx.wxID_ANY,          -- don't need a wxWindow ID
                i18n.mainframe_title,-- caption on the frame
                wx.wxPoint(-1,-1), -- let system place the frame
                wx.wxSize(450, 450),  -- set the size of the frame
                wx.wxDEFAULT_FRAME_STYLE ) -- use default frame styles
                
	-- Display mainframe:
	self._frame:Show(true)
	
	-- Set this frame as master application frame:
	wx.wxGetApp():SetTopWindow(frame)
    wx.wxGetApp():SetExitOnFrameDelete(true)
    
    self._frame:connect(wx.wxID_ANY,wx.wxEVT_CLOSE_WINDOW,function(event)
		self:debug4("Destroying mainframe."); 
		self._frame:Destroy(); 
	end)
	
	if cfg.mainframe_ribbon_enabled then
		self:buildRibbon()
	end
	
	if cfg.mainframe_menus_enabled then
		self:buildMenus()
	end
	
	self:buildStatusBar()

	-- ad a simple test OSG canvas:
	local canvas = require("gui.OSGCanvasTest"){parent=self._frame}
	--self:check(self._frame:GetSizer(),"Invalid sizer")
	--self._frame:GetSizer():Add(canvas._canvas,1,wx.wxEXPAND+wx.wxALL,2)
		
	self:debug4("Mainframe initialization done.")
end

function Class:buildMenus()
	self:debug4("Building mainframe menus.")
	
    -- create a simple file menu
    local fileMenu = wx.wxMenu:new()
    fileMenu:Append(wx.wxID_EXIT, 
    	i18n.mainframe_menuitem_exit, 
    	i18n.mainframe_menuitem_exit_hint)

    -- create a simple help menu
    local helpMenu = wx.wxMenu:new()
    helpMenu:Append(wx.wxID_ABOUT, 
    	i18n.mainframe_menuitem_about,
    	i18n.mainframe_menuitem_about_hint)

    -- create a menu bar and append the file and help menus
    local menuBar = wx.wxMenuBar:new()
    menuBar:Append(fileMenu, i18n.mainframe_menu_file)
    menuBar:Append(helpMenu, i18n.mainframe_menu_help)

    -- attach the menu bar into the frame
    self._frame:SetMenuBar(menuBar)
    
    -- connect the handlers:
    -- event handler that closes the window
    self._frame:connect(wx.wxID_EXIT, wx.wxEVT_COMMAND_MENU_SELECTED,
		function (event) 
			self._frame:Close(true) 
		end )
    	
    -- connect the selection event of the about menu item				
    self._frame:connect(wx.wxID_ABOUT, wx.wxEVT_COMMAND_MENU_SELECTED,
        function (event)
            wx.wxMessageBox(i18n.about_frame_message,
                            i18n.about_frame_title,
                            wx.wxOK + wx.wxICON_INFORMATION,
                            self._frame)
        end )  
end

function Class:buildStatusBar()
    -- create a simple status bar
    self._frame:CreateStatusBar(1)
    self._frame:SetStatusText(i18n.mainframe_init_message)
end

function Class:buildRibbon()
	-- create the ribbon bar:
	local ribbon = wx.wxRibbonBar:new(self._frame)
	
	local home = wx.wxRibbonPage:new(ribbon, 
		wx.wxID_ANY, 
		i18n.mainframe_ribbon_home) --, ribbon_xpm);
	
	local toolbar_panel = wx.wxRibbonPanel:new(home, wx.wxID_ANY, 
		i18n.mainframe_ribbon_panel_toolbar)
                                            
end

function Class:run()
	-- run the application event loop:
	self:debug4("Running application event loop...")
	wx.wxGetApp():MainLoop();
	self:debug4("Application event loop done.")
end

return Class() -- return class instance.
