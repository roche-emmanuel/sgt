local Class = createClass{name="BoolEntry",bases="gui.wx.Entry"};

--[[
Class: gui.wx.entries.ActionButtonEntry

Create a simple action button entry.

This class inherits from <gui.wx.Entry>.
]]

--[=[
--[[
Constructor: ActionButtonEntry

Create a new instance of the class.
]]
function ActionButtonEntry(options)
]=]
function Class:initialize(options)
    self:check(options and (options.caption or options.src),"A valid 'caption' or 'src' option is needed to build a Action button entry.");

    -- overrride some values:
    self._type = "void"
        
    self:create(options)
end

function Class:create(options)    
	local intf = self._intf
	
	-- prepare the handlers we will need here:
	function butHandler(intf,event)            
		self:handle(); -- just handle the event. no value to save here.
	end
	
	if options.src then
		self._controls[1], istool = intf:addBitmapButton{tip=options.tip, kind=options.kind, 
														 caption=options.caption, name=options.name, 
														 src=options.src,size=options.size,
														 handler=butHandler,prop=0,
														 flags=options.flags,style=options.style};
		if not istool then
			self._controls[1]:SetToolTip(options.tip or options.caption)
		elseif platform~="win32" then
			self._classes[self._controls[1]] = "wxAuiToolBarItem"
		end
	else
		self._controls[1] = intf:addButton{text=options.caption,handler=butHandler,prop=options.prop,flags=options.flags};
	end
	
    -- intf:addLicensedItem(self._controls[1],self._right)
end

return Class
