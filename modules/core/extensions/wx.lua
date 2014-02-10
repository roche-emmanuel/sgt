
local osg = require "osg"

wx.wxColour.toVec4f = function(self,alpha)
	alpha = alpha or self:Alpha()/255.0;
	return osg.Vec4f(self:Red()/255.0,self:Green()/255.0,self:Blue()/255.0,alpha)
end

wx.wxDefaultPosition = wx.wxPoint(-1,-1);
wx.wxDefaultSize = wx.wxSize(-1,-1);
wx.wxDefaultValidator = wx.wxValidator();
wx.wxDefaultDateTime = wx.wxDateTime()
wx.wxNullFont = wx.wxFont()

wx.wxBLACK = wx.wxColour(0,0,0)
wx.wxWHITE = wx.wxColour(255,255,255)
wx.wxRED = wx.wxColour(255,0,0)
wx.wxGREEN = wx.wxColour(0,255,0)
wx.wxDARK_GREEN = wx.wxColour(0,255,100)
wx.wxBLUE = wx.wxColour(0,0,255)
wx.wxORANGE = wx.wxColour(255,128,0)
wx.wxPURPLE = wx.wxColour(255,0,255)

wx.wxBLACK_PEN = wx.wxPen(wx.wxBLACK)
wx.wxTRANSPARENT_PEN = wx.wxPen(wx.wxWHITE,1,wx.wxPENSTYLE_TRANSPARENT)

wx.wxTRANSPARENT_BRUSH = wx.wxBrush(wx.wxWHITE,wx.wxBRUSHSTYLE_TRANSPARENT)

wx.wxStatusBar.SetFieldsCount = function(self,widths)
	-- widths is passed here as a table.concat
	local vec = sgt.IntVector.fromTable(widths)
	self:setFieldsCountVector(vec)
end

wx.wxStatusBar.SetStatusWidths = function(self,widths)
	-- widths is passed here as a table.concat
	local vec = sgt.IntVector.fromTable(widths)
	self:setStatusWidthsVector(vec)
end

wx.wxStatusBar.SetStatusStyles = function(self,styles)
	-- widths is passed here as a table.concat
	local vec = sgt.IntVector.fromTable(styles)
	self:setStatusStylesVector(vec)
end

wx.wxNullCursor = wx.wxCursor();

wx.wxNullBitmap = wx.wxBitmap();

local iman = require "gui.wx.ImageManager"
wx.wxCURSOR_DEFAULT = wx.wxNullCursor

wx.wxCURSOR_HAND = iman:getCursor{name="hand",ext="png"}


