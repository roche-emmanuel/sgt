local Class = require("classBuilder"){name="ControlInterface",bases="gui.wx.BasicInterface"};

--[[
Class: gui.wx.ControlInterface

GUI interface used to manage wx controls.

This class inherits from <gui.wx.BasicInterface>.
]]
local im = require "gui.wx.ImageManager"
local utils = require "utils"
local wx = require "wx"
require "extensions.wx"

local assert = require "utils.assert"
local winman = require "gui.wx.WindowManager"

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:info("Executing initialize for ControlInterface...")
	self._controls = {}
end

function Class:close()
	self:debug("Closing ControlInterface...")
	require("gui.wx.BasicInterface").close(self)
end

function Class:debugShowEvent(event)
	local etype = event:GetClassInfo():GetClassName()
	wx.wxMessageBox("Received event "..etype)
end

function Class:addControl(ctrl,options)
    self:check(ctrl,"Invalid control object")
	
	if self:isToolbar() then
        local obj = ctrl:dynCast("wxControl");
        if obj then
            self:getRootWindow():AddControl(obj);
        else
            self:warn("Ignoring non-wxControl object for ToolBar interface. Object type is: ",utils.typeEx(obj));
        end
    else
    	--self:info("Adding new control to current sizer.")
        self:getCurrentSizer():Add(ctrl,options.prop or 0,options.flags or wx.wxALL,options.border or 2);
        self:addLicensedItem(ctrl,options.right)
    end
    
    if options.tip then
		-- Test of advanced tool tip:
		-- local desc = type(options.tip)=="table" and options.tip or {options.name or "Description",options.tip}
		-- local tip = wx.wxRichToolTip(desc[1],desc[2]);
		-- tip:SetIcon(wx.wxICON_INFORMATION);
		-- tip:ShowFor(ctrl);
		
		-- Setup the tool tip system:
		-- wx.wxToolTip.Enable(true)
		-- wx.wxToolTip.SetDelay(10)
		-- wx.wxToolTip.SetAutoPop(6000)
		-- wx.wxToolTip.SetReshow(10)
		
        ctrl:SetToolTip(options.tip)
    end
    
    if options.name then
        self._controls[options.name] = ctrl
    end
    
    if options.minsize then
        ctrl:SetMinSize(options.minsize)
    end
    
    return ctrl;    
end

--[[
Function: addCustomWindow

Add a custom window to the interface.

Parameters:
	options[1] - The name of the class to use to create the window. This class should derive from <gui.wx.BasicWindow>.

Returns:
	The window object itself and the <gui.wx.BasicWindow> object.
]]
function Class:addCustomWindow(options)
	local className = options[1]
	self:check(className,"Invalid custom window class name.")
	
	-- create a new instance of the class:
	options.parent = self:getCurrentParent() 
	local win = require(className)(options)
	
	self:addControl(win:getWindow(),options)
	return win:getWindow(), win
end

function Class:pushPanel(options)
    self:debug3("Building an panel parent")
    local parent = self:getCurrentParent()
    self:check(parent,"Invalid parent object")
    local panel = wx.wxPanel:new(self:getCurrentParent(),options.id or wx.wxID_ANY);
    self:addControl(panel,options)
    
    -- assign a sizer to this panel:
    local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
    panel:SetSizer(sizer)
    self:pushParent(panel,sizer)
    return panel
end

function Class:addStaticText(options)
	--self:info("Adding static text.")
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxStaticText.")
    local ctrl = wx.wxStaticText:new(self:getCurrentParent(),wx.wxID_ANY,options.text);
    if options.font then
    	ctrl:SetFont(options.font);
    end
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    return self:addControl(ctrl,options)
end

function Class:addStaticLine(options)
    local ctrl = wx.wxStaticLine:new(self:getCurrentParent(),wx.wxID_ANY);       
    options.flags = options.flags or wx.wxALL+wx.wxEXPAND
    return self:addControl(ctrl,options)
end

function Class:addStaticBitmap(options)
    self:check(options and options.bitmap,"A valid 'bitmap' entry is needed to build a wxStaticBitmap.")
    local ctrl = wx.wxStaticBitmap:new(self:getCurrentParent(),wx.wxID_ANY,options.bitmap);       
    options.flags = options.flags or 0
    return self:addControl(ctrl,options)
end

function Class:addSlider(options)
    options = options or {}
    local ctrl = wx.wxSlider:new(self:getCurrentParent(),options.id or wx.wxID_ANY,0,0,options.range or 10000);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_SCROLL_CHANGED,options.handler)  --THUMBRELEASE
    end     
    return self:addControl(ctrl,options)
end

function Class:addButton(options)
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxButton.")
    local ctrl = wx.wxButton:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_BUTTON_CLICKED,options.handler)
    end        
    return self:addControl(ctrl,options)
end

function Class:addHyperlinkCtrl(options)
    local ctrl = wx.wxHyperlinkCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text,options.url,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHL_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_HYPERLINK,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addHTMLWindow(options)
    local ctrl = wx.wxHtmlWindow:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxHW_SCROLLBAR_NEVER);       
    options.flags = options.flags or wx.wxALL
    return self:addControl(ctrl,options)
end
    
function Class:addTextCtrl(options)
    local ctrl = wx.wxTextCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxTE_RICH2,options.validator or wx.wxDefaultValidator);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.font then
    	ctrl:SetFont(options.font);
    end
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_TEXT_UPDATED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addSpinCtrl(options)
    local ctrl = wx.wxSpinCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.defaultValue.."",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxSP_ARROW_KEYS,options.range[1],options.range[2]);
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_SPINCTRL_UPDATED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
    
function Class:addFilePickerCtrl(options)
    local ctrl = wx.wxFilePickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a file", options.wildcard or "*.*",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxFLP_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_FILEPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
      
function Class:addDirPickerCtrl(options)
    local ctrl = wx.wxDirPickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.text or "",options.message or "Select a folder",wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxDIRP_DEFAULT_STYLE);       
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_DIRPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
    
function Class:addColorCtrl(options)
    local ctrl = wx.wxColourPickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxGREEN,wx.wxDefaultPosition,options.size or wx.wxDefaultSize,options.style or wx.wxCLRP_USE_TEXTCTRL)
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COLOURPICKER_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addMediaCtrl(options)
    local ctrl = wx.wxMediaCtrl:new(self:getCurrentParent(),wx.wxID_ANY);       
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_MEDIA_STATECHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

function Class:addListBox(options)
    options = options or {}
    local ctrl = wx.wxListBox:new(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_EXTENDED);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,options.handler)
    end
    return self:addControl(ctrl,options)
end

function Class:addGrid(options)
    options = options or {}
    local ctrl = wx.wxGrid:new(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize);
    return self:addControl(ctrl,options)
end
 
function Class:addCheckListBox(options)
    options = options or {}
    options.prop = options.prop or 1
    options.flags = options.flags or wx.wxEXPAND+wx.wxALL;
    local ctrl = wx.wxCheckListBox:new(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},options.style or wx.wxLB_SINGLE);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,options.handler)
    end
    return self:addControl(ctrl,options)
end
    
function Class:addRadioBox(options)
    self:check(options and options.text, "a valid 'text' entry is required to build a wxRadioBox.")
    local ctrl = wx.wxRadioBox:new(self:getCurrentParent(),wx.wxID_ANY,options.text,wx.wxDefaultPosition,wx.wxDefaultSize,options.choices or {},0,options.style or wx.wxRA_SPECIFY_ROWS);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_RADIOBOX_SELECTED,options.handler)
    end
    return self:addControl(ctrl,options)
end
    
function Class:addComboBox(options)
    options = options or {}
	local arr = wx.wxArrayString()
	for _,v in ipairs(options.choices or {}) do
		arr:Add(v)
	end
    local ctrl = wx.wxComboBox:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.defaultValue or (options.choices and options.choices[1]) or "",wx.wxDefaultPosition,options.size or wx.wxSize(-1,-1),arr,options.style or bit.bor(wx.wxCB_DROPDOWN,wx.wxCB_READONLY));
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_COMBOBOX_SELECTED,options.handler)
    end
	options.flags = options.flags or wx.wxALIGN_CENTER_VERTICAL
    return self:addControl(ctrl,options)
end
    
function Class:addListCtrl(options)
    options = options or {}
    local ctrl = nil
    if options.style and bit.band(options.style,wx.wxLC_VIRTUAL) ~= 0 then
        self:no_impl();
        --self:check(options.callback,"A valid 'callback' entry must be provided to create a virtual listctrl.")
        -- create a virtual list ctrl object
        --ctrl = giDisplay.LuaVirtualListCtrl(wx2intro(self:getCurrentParent()),wx.wxID_ANY,this_env,options.style);
        --registerVirtualListCtrlFunction(ctrl,options.callback)
        --ctrl:setItemCount(options.count or 0)
        -- convert the control into a regular wx window:
        --ctrl = intro2wx(ctrl):DynamicCast("wxListCtrl")
    else
        -- create a regular listctrl directly:
        ctrl = wx.wxListCtrl:new(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxLC_REPORT+wx.wxLC_HRULES+wx.wxLC_VRULES);
    end
    
    -- add the columns if any:
    if options.columns then
        for k,v in ipairs(options.columns) do
            ctrl:InsertColumn(k-1,v)
        end
    end
    
    if options.images then
        -- assign the image list to the control.
        local butsize = options and options.butsize or 16
    
        local imglist = wx.wxImageList:new(butsize,butsize,true);
        for k,v in ipairs(options.images) do
            imglist:Add(im:getBitmap{name=v,size=butsize})
        end
        ctrl:AssignImageList(imglist,wx.wxIMAGE_LIST_SMALL) --wxIMAGE_LIST_NORMAL);
    end
    
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_LIST_ITEM_ACTIVATED,options.handler)
    end 
    
    return self:addControl(ctrl,options)
end

function Class:pushWizard(options)
    self:debug3("Building a Wizard")
    local parent = options.parent or winman:getMainFrame();
    local wiz = wx.wxWizard:new(parent);
    local title = options.title or ""
    wiz:SetTitle(title);
    wiz:SetPageSize(options.size or wx.wxSize(500,200));
    self:pushParent(wiz)
    -- also connect the finsh handler is any:
    if options.handler then 
        self:connectHandler(wiz,options.eventType or wx.wxEVT_WIZARD_FINISHED,options.handler)
    end
    
    return wiz
end

function Class:pushWizardPage(options)
    --wx.wxLogMessage("Building a wizard page")
    local page = wx.wxWizardPageSimple:new(self:getCurrentParent());
    -- assign a sizer to this panel:
    local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
    page:SetSizer(sizer)
    self:pushParent(page,sizer)
    
    -- Also add that page to the wizard page list:
    self.wiz_pages = self.wiz_pages or {}
    table.insert(self.wiz_pages,page);
    return page
end

function Class:runWizard()
    --ensure the wizard pages are properly chained:
    local pages = self.wiz_pages or {};
    if #pages == 0 then
        self:error("No page in wizard!");
        return;
    end

    for i=2,#pages do 
        wx.wxWizardPageSimple.Chain(pages[i-1],pages[i]);
    end
    
    local wiz = self:getCurrentParent()
    
    wiz:RunWizard(pages[1]);
    wiz:Destroy();
    self:popParent()
    self.wiz_pages = nil;
end
    
function Class:pushCollapsiblePanel(options)
    self:debug3("Building an callpsible panel parent")
    if options.topline then
        -- Add a top horizontal line to the previous parent:
        self:addStaticLine(options);
    end
    
    -- Here we add the body of the collapsable panel:
    -- prepare the bitmaps to use:
    local extendbmp = im:getBitmap{name="arrow_extend",size=10};
    local collapsebmp = im:getBitmap{name="arrow_collapse",size=10};
    
    -- first we have the main line on the previous parent:
    self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
        local bmpbut = self:addStaticBitmap{bitmap=options.collapsedByDefault and extendbmp or collapsebmp,flags=wx.wxALIGN_CENTER_VERTICAL}
        self:addSpacer{size=3}
        if options.text then
            self:addStaticText{text=options.text,flags=wx.wxALIGN_CENTER_VERTICAL}
        end
        if options.entryfunc and options.entryargs then
            -- Here we might also want to add a regulare entry:
            options.entryfunc(self,options.entryargs)
        end
    self:popSizer() -- end sizer
    
    -- Now add the panel container:
    local panel = wx.wxPanel:new(self:getCurrentParent(),options.id or wx.wxID_ANY);
    local oldflags = options.flags
    options.flags = wx.wxALL+wx.wxEXPAND
    options.border=5
    self:addControl(panel,options)
    options.flags = oldflags
    options.border=nil
    -- assign a sizer to this panel:
    local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
    panel:SetSizer(sizer)
    
    -- keep an handle on the previous parent:
    local parent = self:getCurrentParent()
    local toggleFunction = function()
        local parent2 = parent:GetParent()
        parent2:Freeze()
        panel:Show(not panel:IsShown());
        parent:GetSizer():Layout()
        if parent2:GetSizer() then
            parent2:GetSizer():Layout(); -- to be able to add collapsable panel inside a collapsible panel.
        end
        parent2:Thaw();
        
        -- this is a tweak needed in to force the update of the collapsible panel in NG3DV
        self:warn("We might need to fix the frame size here ???")
        --local size = self.frame:GetSize()
        --local pos = self.frame:GetPosition()
        --self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight()+1);
        --self.frame:SetSize(pos.x,pos.y,size:GetWidth(),size:GetHeight());
        
        return panel:IsShown()
    end
    
    -- toggle the panel visibility right now:
    panel:Show(not options.collapsedByDefault);
    
    -- Now assign a click event handler on the bitmap button:
    local toggleHandler = function(intf,event)
        local visible = toggleFunction();
        --wx.wxLogMessage("Setting bitmap to " .. (visible and "Collapse" or "Extend"))
        bmpbut:SetBitmap((visible and collapsebmp) or extendbmp);
        bmpbut:Refresh(true)
    end
    
    self:connectHandler(bmpbut,wx.wxEVT_LEFT_UP,toggleHandler)
    
    -- Change the cursor for the bitmap button:
    bmpbut:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
    
    if options.bottomline then
        -- Add a bottom horizontal line to the previous parent:
        self:addStaticLine(options);
    end

    -- Only push the new panel parent AFTER adding the bottom line:
    self:pushParent(panel,sizer)
    return panel
end

function Class:addCheckBox(options)
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxCheckBox.")
    local ctrl = wx.wxCheckBox:new(self:getCurrentParent(),wx.wxID_ANY,options.text,wx.wxDefaultPosition, wx.wxDefaultSize, options.style or wx.wxCHK_2STATE);
    if options.font then
    	ctrl:SetFont(options.font)
    end
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_CHECKBOX_CLICKED,options.handler)
    end        
    --options.flags = wx.wxALIGN_CENTER_VERTICAL
    return self:addControl(ctrl,options)
end

function Class:addToggleButton(options)
    self:check(options and options.text,"A valid 'text' entry is needed to build a wxCheckBox.")
    local ctrl = wx.wxToggleButton:new(self:getCurrentParent(),wx.wxID_ANY,options.text,wx.wxDefaultPosition, wx.wxDefaultSize, options.style or 0);
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,options.handler)
    end      
    --options.flags = wx.wxALIGN_CENTER_VERTICAL
    return self:addControl(ctrl,options)
end

function Class:addDatePickerCtrl(options)
    local ctrl = wx.wxDatePickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultDateTime,wx.wxDefaultPosition,wx.wxSize(-1,20),options.style or wx.wxDP_DROPDOWN)
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_DATE_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end
		
function Class:addFontPickerCtrl(options)
	local ctrl = wx.wxFontPickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,options.font or wx.wxNullFont,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxFNTP_DEFAULT_STYLE);       
	options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
	if options.handler then
		self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_FONTPICKER_CHANGED,options.handler)
	end  
	return self:addControl(ctrl,options)
end

function Class:addOSGCtrl(options)
    --self:check(options.root,"a valid 'root' entry is needed to build an OSGCtrl")
    
    --options.intf = options.intf or self
    options.parent = self:getCurrentParent();
    
    local canvas = require("gui.wx.OSGCanvas")(options) 
    local win = canvas:getWindow()
    self:check(win,"Invalid OSG window object.")

    options.flags = options.flags or wx.wxALL+wx.wxEXPAND
    options.prop = options.prop or 1
    
    return self:addControl(win,options), canvas
end

function Class:addGLCtrl(options)
	--self:check(options.root,"a valid 'root' entry is needed to build an OSGCtrl")
	
	--options.intf = options.intf or self
	options.parent = self:getCurrentParent();
	
	local canvas = require("gui.wx.GLCanvas")(options)	
	local win = canvas:getWindow()
	self:check(win,"Invalid GL window object.")

	options.flags = options.flags or wx.wxALL+wx.wxEXPAND
	options.prop = options.prop or 1
	
	return self:addControl(win,options), canvas
end

function Class:addOutputPanel(options)
	
	options[1] = options[1] or "gui.wx.OutputPanel"
	options.flags = options.flags or wx.wxALL+wx.wxEXPAND
	options.prop = options.prop or 1
	
	return self:addCustomWindow(options)
	
	-- options.parent = self:getCurrentParent();
	-- local panel = require()(options)
	-- return panel:getWindow(), panel
end

function Class:addTimePickerCtrl(options)
    local ctrl = wx.wxTimePickerCtrl:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultDateTime,wx.wxDefaultPosition) --,wx.wxSize(-1,20)
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL
    if options.handler then
        self:connectHandler(ctrl,options.eventType or wx.wxEVT_TIME_CHANGED,options.handler)
    end  
    return self:addControl(ctrl,options)
end

--[[
function Class:addAuiNotebook(options)
    local ctrl = wx.wxAuiNotebook:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultDateTime,wx.wxDefaultPosition,options.style or wx.wxAUI_NB_DEFAULT_STYLE)
	
    options.flags = options.flags or wx.wxALL+wx.wxALIGN_CENTER_VERTICAL

    return self:addControl(ctrl,options)
end
]]

function Class:addSTCCtrl(options)
	local ctrl = wx.wxStyledTextCtrl:new(self:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition, wx.wxDefaultSize, options.style or 0);
	return self:addControl(ctrl,options)
end

function Class:addBitmapButton(options)
	assert(options and options.src,"A valid 'src' entry is needed to build a wxBitmapButton.")
	
	-- prepare the bitmap first:
	local butSize = options.size or 16;
	local bmp = im:getBitmap{name=options.src,size=butSize}
	
	if self:isToolbar() then
		
		-- if this is a toolbar then register a regular tool button instead of a bitmapbutton:
		local id = winman:getNewID() 
		if options.name then
			self.tool_ids[options.name] = id
		end
		
		local tool = self:getRootWindow():AddTool(id, options.caption or "", bmp, options.tip or options.caption or "",options.kind or wx.wxITEM_NORMAL);
		if options.handler then
			self:connectHandler(self:getRootWindow(),options.eventType or wx.wxEVT_COMMAND_MENU_SELECTED,options.handler,id,options.name or options.src)
		end
		return tool, true -- return true to notify that this is a tool object and not a regular control.
	else
		local ctrl = wx.wxBitmapButton:new(self:getCurrentParent(),options.id or wx.wxID_ANY,bmp,wx.wxDefaultPosition,wx.wxSize(butSize+8,butSize+8),options.style or wx.wxBU_AUTODRAW);
		--ctrl:SetMinSize(wx.wxSize(butSize+8,butSize+8))
		
		if options.handler then
			self:connectHandler(ctrl,options.eventType or wx.wxEVT_COMMAND_BUTTON_CLICKED,options.handler,nil,options.name)
		end
		-- this refs ticket #316: force a default tip value if non is available:
		options.tip = options.tip or options.caption or options.name or options.src
		return self:addControl(ctrl,options)
	end        
end

--[[
Function: pushNotebook

Add a notebook container.

Parameters:
	options - Notebook construction options.
]]
function Class:pushNotebook(options)
	local book = nil;
	if options.type == "aui" then
		book = wx.wxAuiNotebook:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxAUI_NB_SCROLL_BUTTONS +wx.wxAUI_NB_TOP);
	else
		book = wx.wxNotebook:new(self:getCurrentParent(),options.id or wx.wxID_ANY,wx.wxDefaultPosition,wx.wxDefaultSize,options.style or wx.wxNB_TOP);
	end
	
	self:addControl(book,options)
	self:pushParent(book)
	
	if options.images then
		local butsize = options and options.butsize or 16
	
		local imglist = wx.wxImageList:new(butsize,butsize,true);
		for k,v in ipairs(options.images) do
			imglist:Add(im:getBitmap(v,butsize))
		end
		book:AssignImageList(imglist);
	end
	return book
end

--[[
Function: pushChoicebook

Added a choicebook container on the current container.

Parameters:
	options.name - If this is provided, a choice entry will be created for this
choice.
]]
function Class:pushChoicebook(options)
	local book = wx.wxChoicebook:new(self:getCurrentParent(),
									 options.id or wx.wxID_ANY,
									 wx.wxDefaultPosition,
									 options.size or wx.wxDefaultSize,
									 options.style or wx.wxBK_DEFAULT);
	self:addControl(book,options)
	self:pushParent(book)
	
	-- if we have a valid name, then build a choice entry from the underlying choice control:
	if(options.name) then
		-- note here that we assume this interface will be an entry interface.
		options.choiceBook = book
		self:addChoiceEntry(options)
	end
	return book
end

--[[
Function: pushBookPage

Add a book page to the current parent book container.

Parameters:
	options.caption - The caption used for the tab of this book page.
	options.selected - {bool} (optional) Specify if this tab should be selected by default or not. Default value is false.
	options.imageId - {int} (optional) The id to use to retrieve the image for this tab from the image list
assigned to the parent book container (if available)
	options.butsize - {int} (optional) The size of the image for this tab if any. Default value is 16 pixels.
	options.src - {string} (optional) The name of the image to use if it is not registered in the image list yet.
]]
function Class:pushBookPage(options)
	assert(options and options.caption,"A valid 'caption' entry is needed to build a book page.")
	
	local selected = options.selected or false
	local imageId = options.imageId or -1;
	local butsize = options.butsize or 16
	local bmpname = options.src
	local caption = options.caption
	
	-- Check if this is an aui notebook or not:
	local isaui = self:getCurrentParent():GetClassInfo():GetClassName() == "wxAuiNotebook"

	local panel = (isaui and wx.wxScrolledWindow or wx.wxPanel):new(self:getCurrentParent(),options.id or wx.wxID_ANY);
	if isaui then
		self:no_impl() -- this path is not validated yet.
		self:addScrolledWindow(panel);
		panel:SetScrollbars(self.noHScroll and 0 or 20, 20, self.noHScroll and 0 or 50, 50,0,0,false);
	end
	
	local bmp=wx.wxNullBitmap; 
	
	if bmpname then
		if self.cfg.hide_tab_captions then
			caption = "";
		end
		
		if isaui then
			bmp  = im:getBitmap{name=bmpname,size=butsize};
		else
			local imglist = self:getCurrentParent():GetImageList() -- the parent is a book.
			if not imglist then
				imglist = wx.wxImageList:new(butsize,butsize,true,0)
				self:getCurrentParent():AssignImageList(imglist)
			end
			
			-- add the new image:
			local bmp = im:getBitmap{name=bmpname,size=butsize};
			imglist:Add(bmp,bmp);
			imageId = imglist:GetImageCount()-1;
			--wx.wxLogMessage("Using image ID: ".. imageId)
			--self:getCurrentParent():SetPadding(wx.wxSize(-1,-1));
		end
	end
	
	
	-- Assume the current parent is a proper book:
	if options.subPage then
		self:getCurrentParent():AddSubPage(panel,options.caption,selected,isaui and bmp or imageId)
	else
		self:getCurrentParent():AddPage(panel,options.caption,selected,isaui and bmp or imageId)
	end
	
	--[[
	if options.tip then
		local page = self:getCurrentParent():GetPage(self:getCurrentParent():GetPageCount()-1)
		page:SetToolTip(options.tip)
		wx.wxLogMessage("Added page tip ".. options.tip)
	end
	]]
	
	-- Always save the page in the page list with the needed details to toggle the license if there is a license right associated:
	if options.right then            
		-- keep the panel for later reference is needed:
		table.insert(self.licensedBookPages,{page=panel,
											 index=self:getCurrentParent():GetPageCount()-1,
										     book=self:getCurrentParent(),
										     isSub=options.subPage,
										     right=options.right,
										     caption=options.caption,
										     visible=true,
										     selected=selected,
										     img=isaui and bmp or imageId}) -- this page is visible by default.
	end

	-- assign a sizer to this panel:
	local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL)
	panel:SetSizer(sizer)
	self:pushParent(panel,sizer)
	
	
	return panel
end

return Class
