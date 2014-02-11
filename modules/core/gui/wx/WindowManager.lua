local Class = require("classBuilder"){name="WindowManager",bases="base.Object"};

local wx = require "wx"

local Set = require "std.Set"

local Event = require "base.Event"

-- Main class to manager all the windows/interfaces.
function Class:initialize(options)
	self._interfaces = Set();
	self._lastID = wx.wxID_HIGHEST+100
	
	local eman = require "base.EventManager"
	eman:addListener{event=Event.APP_CLOSING,object=self}
end

function Class:onAppClosing()
	-- release all the images:
	if self._auiManager then
		self:info("Uninitializing AuiManager.")
		self._auiManager:UnInit()
	end
end

-- Return a new ID wxWIdgets ID which is incremented on each call.
function Class:getNewID()
	self._lastID = self._lastID+1
	return self._lastID
end

function Class:setMainFrame(frame)
	self._mainFrame = frame
end

function Class:getMainFrame()
	return self._mainFrame
end

function Class:getAuiManager()
	if not self._auiManager then
		self._auiManager = wx.wxAuiManager();
	end
	
	return self._auiManager -- no AUI manager by default.
end

function Class:togglePane(intf,doShow)
	local mgr = self:getAuiManager()
	if not mgr then
		return -- nothing to do.
	end
	
	local pinfo = intf:getPaneInfo()
	if not pinfo then
		return
	end
	    
    local pane = mgr:GetPane(pinfo.name)
    if not pane:IsOk() then
        self:warn("Invalid AUI pane with name ", pinfo.name)
    else
        if doShow==nil then
            pane:Show(not pane:IsShown())
        else
            pane:Show(doShow)
        end
        mgr:Update()
    end    
end

return Class()
