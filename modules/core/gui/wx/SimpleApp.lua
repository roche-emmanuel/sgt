local Class = createClass{"SimpleApp"}

local wx = require "wx"
local i18n = require "i18n"
local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Initialize the mainframe display:
function Class:initialize(options)
	self:info("Initializing mainframe.")
	
	options = options or {}
	self._onStartFunc = options.onStart;
	self._profileFile = options.profileFile
	
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
  
  local eman = require("base.EventManager")
  self._frame:connect(wx.wxID_ANY,wx.wxEVT_CLOSE_WINDOW,function(event)
		eman:fireEvent(Event.APP_CLOSING)
		self:debug("Destroying mainframe."); 
		self._frame:Destroy();
	end)
	
    --[[self._frame:connect(wx.wxID_ANY,wx.wxEVT_IDLE,function(event)
		collectgarbage('collect')
		local mem = collectgarbage("count")
		self:info("(idle) Memory usage: ", mem, " KBs")
	end)]]

	local winman = require "gui.wx.WindowManager"
	winman:setMainFrame(self._frame)
	
	local Scheduler = require "gui.wx.Scheduler" -- ensure the scheduler gets initialized.
	
	self:debug("Mainframe initialization done.")
end

function Class:getFrame()
	return self._frame
end

function Class:onStart()
	if self._onStartFunc then
		self._onStartFunc(self._frame)
	end
end

function Class:onStop()
	-- Do nothing.
end

function Class:start()
	prof:begin()
	self:onStart()
end

function Class:stop()
	self:onStop()

	-- cleanup:
	self:info("Cleaning up.")
	wx.wxEntryCleanup()
	collectgarbage('collect')
	
	prof:finish()
	prof:writeReport(self._profileFile or "profile.log")
end

function Class:run()

	self:start()
	
	-- run the application event loop:
	self:debug4("Running application event loop...")
	
	prof:start("MainLoop")
	wx.wxGetApp():MainLoop();
	prof:stop("MainLoop")
	
	self:debug4("Application event loop done.")

	self:stop()
end

return Class -- return class instance.
