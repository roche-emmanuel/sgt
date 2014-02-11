local Class = require("classBuilder"){name="NumericalEntry",bases="gui.wx.Entry"};

--local wx = require "wx"
local osg = require "osg"
require "extensions.osg"
require "extensions.wx"

local im = require "gui.wx.ImageManager"
local winman = require "gui.wx.WindowManager"

local slidingCursor = wx.wxCursor(im:getImage("sliding_cursor"));

local num_slider_bg_normal = im:getBitmap("num_slider_bg_normal",16);
local num_slider_bg_hover = im:getBitmap("num_slider_bg_hover",16);
local num_slider_bg_pressed = im:getBitmap("num_slider_bg_pressed",16);
local num_slider_arrow = im:getBitmap("num_slider_arrow",16);
local num_slider_arrow_expanded = im:getBitmap("num_slider_arrow_expanded",16);

local color_swatch_checker = im:getBitmap{name="color_swatch_checker",size=-1}; -- do not resize the image;


function Class:initialize(options)
    self:check(options and options.caption,"A valid 'caption' is needed to build a Numerical entry.");
    self:check(options and options.name,"A valid 'name' is needed to build a Numerical entry.");
    self:check(options and options.type,"A valid 'type' is needed to build a Numerical entry.");

    -- overrride some values:
    self._range = self._range
    	or (self._type=="integer" and {0,100})
    	or (self._type=="color" and {0,100})
    	or {0.0,1.0}
    if self._type=="vec3d" and #self._range == 2 then
       self._range = {{self._range[1],self._range[2]},{self._range[1],self._range[2]},{self._range[1],self._range[2]}}
    end
    self._subcaptions = options.subcaptions or {"X","Y","Z"}
    self._noSlider = options.noSlider
    self._noLabelHandler = options.noLabelHandler
    
    self._precision = (self._type=="color" and 0) 
        or (self._type=="integer" and 0) 
        or options.precision 
        or 6
    self._numFormat = (self._type=="color" and "%.0f") 
        or (self._type=="integer" and "%.0f") 
        or options.numFormat 
        or (self._precision and "%.".. self._precision .."f") 
        or "%.6f" 
    self._defaultValue = self._defaultValue 
        or (self._type=="color" and osg.Vec4f(0.0,1.0,0.0,1.0)) 
        or (self._type=="vec3d" and osg.Vec3d(self._range[1][1],self._range[2][1],self._range[3][1])) 
        or self._range[1] -- use the minimum value by default 
    self._unit = options.unit 
        or (self._type=="color" and "%") 
        or "";
    self._dragcover = options.dragcover or 150; -- cover the complete range with 200 pixels of dragging.
    if not self._expfactor then
        local v2 = (self._type=="vec3d" and self._range[1][2]) or self._range[2]
        local v1 = (self._type=="vec3d" and self._range[1][1]) or self._range[1]
        
        self._expfactor = math.log(math.pow(10,-self._precision)/(v2-v1))/(1.0/self._dragcover - 1.0)
    end
    
    if self._type == "vec3d" then
        self._offset = 3
        self._comps = 3;
    end

    -- prepare the regex friendly unit
    local punit = self._unit
    for _,v in ipairs({"%","^","$","(",")",".","[","]","*","+","-","?"}) do
        punit = punit:gsub("%"..v,"%"..v) -- replace the pattern symbols with escape "%".
    end
    self._punit = punit;

    -- retrieve the proper parsed value:
    self._numPattern = ((self._type== "double" or self._type=="color" or self._type=="vec3d") and "^(%-?[0-9]*%.?[0-9]*)") or "^(%-?[0-9]*)";       

	self:create()
end

function Class:checkValue(matched,ctrl,str)
    --the value is valid, but we still need to check if we are in the limits:
    -- but only if we have hard limits:
    --local origStr = str or (matched.."")
    local curVal = (self._type == "color" and self:getValue():w()*100.0) or self:getValue();
    
    if not self._softRange then
        
        local range = (self._type=="vec3d" and self._range[ctrl:GetId()+1]) or self._range
        if matched < range[1] then
            -- retrieve the current value
            local overrideVal = (curVal ~= range[1]) and range[1]
            if overrideVal then
                ctrl:ChangeValue(string.format(self._numFormat,overrideVal) .. self._unit)
                ctrl:SetSelection(-1,-1)
            end
            return overrideVal;
        end

        if matched > range[2] then
            -- retrieve the current value
            local overrideVal = (curVal ~= range[2]) and range[2]
            if overrideVal then
                ctrl:ChangeValue(string.format(self._numFormat,overrideVal) .. self._unit)
                ctrl:SetSelection(-1,-1)
            end
            return overrideVal;
        end
    end
    
    -- Also check the format of the value in the text area:
    local val = ctrl:GetValue();
    --val = (self._type == "color" and val[3]*100.0) or self:getValue();
    
    local newVal = string.format(self._numFormat,matched) .. self._unit
    if val ~= newVal then
        local pos = ctrl:GetInsertionPoint()
        ctrl:ChangeValue(newVal)
        ctrl:SetInsertionPoint(pos);
        -- set the insertion point just after the text already created:
        --local index1,index2 = newVal:find(origStr)
        --ctrl:SetInsertionPoint(index2);
        --ctrl:SetSelection(-1,-1)
    end
    
    -- The numerical value was retrieved:
    return matched;   
end

function Class:parseValue(val,ctrl)
    val = val:gsub("%.%.",".");
    --wx.wxLogMessage("the value is: "..val)
    
    local matched = string.match(val,self._numPattern.. self._punit .."$") or string.match(val,self._numPattern .."$");
    local curVal = (self._type == "color" and self:getValue()[3]*100.0) or self:getValue();
    
    if not matched then
        -- could not match the given pattern; so this is not a valid entry, restore the previous and select all the text:
        --wx.wxMessageBox("Invalid numerical entry for the value of '".. self._name.."', restoring previous valid value.");
        local pos = ctrl:GetInsertionPoint()
        --wx.wxLogMessage("The Curval is: ".. curVal)
        ctrl:ChangeValue(string.format(self._numFormat,curVal) .. self._unit)
        ctrl:SetInsertionPoint(pos);
        wx.wxBell()
        return;
    end
    
    matched = (matched == "" and string.format(self._numFormat,self._range[1])) or (matched=="." and "0.") or matched;
    
    return self:checkValue(matched+0,ctrl,matched)
end

function Class:extractNumericalValue(prev,id)
    return (self._type == "color" and prev:w()*100.0) 
        or (self._type == "vec3d" and prev:_v(id))
        or prev
end

function Class:computeVec3dValue(prev,val,id)
    local vec = prev
    if id==0 then
        vec = osg.Vec3d(val,vec:y(),vec:z())
    elseif id == 1 then
        vec = osg.Vec3d(vec:x(),val,vec:z())
    else
        vec = osg.Vec3d(vec:x(),vec:y(),val)
    end
    return vec
end

function Class:computeNewValue(val,id)
    local prev = self:getValue()
    if not prev then
        return nil; -- this is not a valid entry state ?
    end
    return (self._type == "color" and osg.Vec4f(prev:x(),prev:y(),prev:z(),val/100.0)) 
        or (self._type == "vec3d" and self:computeVec3dValue(prev,val,id))
        or val
end

function Class:setupNumericalText(txt,id,index)
    function textHandler(intf,event)
        -- get the initial "new value":
        local val = event:GetString();        

        --wx.wxLogMessage("The text content is: "..val);
        val = self:parseValue(val,txt)
        
        if not val then 
            return -- do not proceed with updating anything.
        end
        
        val = self:computeNewValue(val,id)
        
        if self._type == "color" then
            self._controls[index+2]:Refresh()
        end
        
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    self._intf:connectHandler(txt,wx.wxEVT_COMMAND_TEXT_UPDATED,textHandler)
    
    local OnMouseWheel = function(intf,event)
        local val = self:extractNumericalValue(self:getValue(),id)

        local delta = event:GetWheelRotation()/120.0;
        val = val + delta;
 
        val = self:checkValue(val,txt,string.format(self._numFormat,val));
        
        if not val then 
            return -- do not proceed with updating anything.
        end
    
        val = (self._type == "integer" and math.floor(val+0.5)) or val
        
        -- update the slider and the text ctrl:
        self._controls[index+3]:ChangeValue(string.format(self._numFormat,val) .. self._unit)
        
        val = self:computeNewValue(val,id)
        
        if self._type == "color" then
            self._controls[index+2]:Refresh()
        end
        
        -- send the command:
        self:setValue(val);        
    end
    self._intf:connectHandler(txt,wx.wxEVT_MOUSEWHEEL,OnMouseWheel)
    
    local OnKeyDown = function(intf,event)
        local delta = nil;
        if event:GetKeyCode() == wx.WXK_UP then
            delta = 1.0;
        elseif event:GetKeyCode() == wx.WXK_DOWN then
            delta = -1.0;
        else
            event:Skip();
        end
        
        if delta then
            local val = self:extractNumericalValue(self:getValue(),id)
            
            val = val + delta;
     
            val = self:checkValue(val,txt,string.format(self._numFormat,val));
            
            if not val then 
                return -- do not proceed with updating anything.
            end
        
            val = (self._type == "integer" and math.floor(val+0.5)) or val
            
            -- update the slider and the text ctrl:
            self._controls[index+3]:ChangeValue(string.format(self._numFormat,val) .. self._unit)

            val = self:computeNewValue(val,id)
            
            if self._type == "color" then
                self._controls[index+2]:Refresh()
            end
            
            -- send the command:
            self:setValue(val);          
        end
    end
    self._intf:connectHandler(txt,wx.wxEVT_KEY_DOWN,OnKeyDown)
end

function Class:setupColorSwatch(area)

    local size = wx.wxSize(color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
    area:SetMinSize(size)
    area:SetMaxSize(size)
    area:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND))
    
    local OnEraseBg = function(intf,event)
        -- don't do anything here.
    end
    self._intf:connectHandler(area,wx.wxEVT_ERASE_BACKGROUND,OnEraseBg)
    
    local OnPaint = function(intf,event)
        --wx.wxLogMessage("I'm in the paint handler!");
        --local bmp = wx.wxBitmap(color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        
        local val = self:getValue();
        --self:info("Painting color swatch area with color ",val)

        if not val then
            local dc = wx.wxPaintDC:new(area)
            local brush = wx.wxBrush(wx.wxWHITE,wx.wxFDIAGONAL_HATCH ) --wx.wxTRANSPARENT);
            dc:SetPen(wx.wxBLACK_PEN)
            dc:SetBrush(brush)
            brush:delete()

            dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
            dc:delete()
            event:Skip()
            return;
        end
        
        local whiteBase = osg.Vec4f(1.0,1.0,1.0,1.0);
        local greyBase = osg.Vec4f(204.0/255.0,204.0/255.0,204.0/255.0,1.0);
        
        local alpha = val:w()
        local white =(whiteBase * (1.0-alpha) + val * alpha):toColour();
        local grey = (greyBase * (1.0-alpha) + val * alpha):toColour();
        
        --local memdc = wx.wxMemoryDC();
        
        local dc = wx.wxPaintDC:new(area)
        local brush = wx.wxBrush:new(white,wx.wxBRUSHSTYLE_SOLID) --wx.wxTRANSPARENT);
        dc:SetPen(wx.wxTRANSPARENT_PEN)
        dc:SetBrush(brush)
        brush:delete()
        
        dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        
        --dc:DrawBitmap(color_swatch_checker,0,0,true)
        --self:info("Painting white rect of size ",color_swatch_checker:GetWidth(),"x",color_swatch_checker:GetHeight())
        
        local brush = wx.wxBrush:new(grey,wx.wxBRUSHSTYLE_SOLID) --wx.wxTRANSPARENT);
        dc:SetBrush(brush)
        brush:delete()
        
        local size = color_swatch_checker:GetHeight()/4.0;
        
        for i=0,11 do
            for j=0,3 do
                if math.fmod(i+j,2)==1 then
                    -- this is a grey square:
                    dc:DrawRectangle(i*size,j*size,size,size);
                end
            end
        end
        
       	dc:SetPen(wx.wxBLACK_PEN)
        dc:SetBrush(wx.wxTRANSPARENT_BRUSH);
        dc:DrawRectangle(0,0,color_swatch_checker:GetWidth(),color_swatch_checker:GetHeight());
        
        --[[
        dc:DrawBitmap(color_swatch_checker,0,0,true)
        -- draw the color 
        local val = self:getValue();
        local col = general.tools.vec4ToColour(val);
        --dc:DrawBitmap((self._sliderButPressed and num_slider_arrow_expanded) or num_slider_arrow,0,0,true)
        ]]
        
        dc:delete()
        
        event:Skip()
    end
    
    self._intf:connectHandler(area,wx.wxEVT_PAINT,OnPaint)

    local OnMouseLeftDown = function(intf,event)
        -- display the color dialog:
        local val = self:getValue();
        local col = val:toColour();
       
        col = wx.wxGetColourFromUser(area, col, "Select the color for ".. self._caption)
        
        if col:IsOk() then
            local vec = col:toVec4f(val:w());
            self:setValue(vec);
            area:Refresh()
        end
        
        event:Skip()
    end
    self._intf:connectHandler(area,wx.wxEVT_LEFT_DOWN,OnMouseLeftDown)
    self._intf:connectHandler(area,wx.wxEVT_LEFT_DCLICK,OnMouseLeftDown)
    self._intf:connectHandler(area,wx.wxEVT_RIGHT_DOWN,OnMouseLeftDown)
    self._intf:connectHandler(area,wx.wxEVT_RIGHT_DCLICK,OnMouseLeftDown)   
end

function Class:setupPopupButton(but,subframe,updateFunc)
    local OnEraseBg = function(intf,event)
        -- don't do anything here.
    end
    self._intf:connectHandler(but,wx.wxEVT_ERASE_BACKGROUND,OnEraseBg)
    
    local OnPaint = function(intf,event)
        --self:info("Painting button...")

        local dc = wx.wxPaintDC:new(but)
        dc:DrawBitmap((self._sliderButPressed and num_slider_bg_pressed) or (self._mouseOnSliderBut and num_slider_bg_hover) or num_slider_bg_normal,0,0,true)
        dc:DrawBitmap((self._sliderButPressed and num_slider_arrow_expanded) or num_slider_arrow,0,0,true)
        dc:delete()
        
        if self._sliderButPressed then
            local pos = but:GetScreenPosition();
            
            --wx.wxLogMessage("The mouse position is: (".. pos.x .. ",".. pos.y ..")")
            subframe:SetSize(pos:GetX()-150+16,pos:GetY()+17,150,24);
            subframe:Layout();
            
            updateFunc()

            subframe:Show(true)
        else
            subframe:Show(false)
        end
        
        event:Skip()
    end
    self._intf:connectHandler(but,wx.wxEVT_PAINT,OnPaint)
        
    local OnMouseEnter = function(intf,event)
        self._mouseOnSliderBut = true;
        but:Refresh()
    end
    self._intf:connectHandler(but,wx.wxEVT_ENTER_WINDOW,OnMouseEnter)
    
    local OnMouseLeave = function(intf,event)
        self._mouseOnSliderBut = false;
        but:Refresh()
    end
    self._intf:connectHandler(but,wx.wxEVT_LEAVE_WINDOW,OnMouseLeave)

    local OnMouseLeftDown = function(intf,event)
        self._sliderButPressed = not self._sliderButPressed;
        but:Refresh()
        
        event:Skip()
    end
    
    self._intf:connectHandler(but,wx.wxEVT_LEFT_DOWN,OnMouseLeftDown)
    self._intf:connectHandler(but,wx.wxEVT_LEFT_DCLICK,OnMouseLeftDown)
    self._intf:connectHandler(but,wx.wxEVT_RIGHT_DOWN,OnMouseLeftDown)
    self._intf:connectHandler(but,wx.wxEVT_RIGHT_DCLICK,OnMouseLeftDown)   
end


function Class:setupPopupSlider(slider,but,subframe,id,index)
    
    local updateFunc = function()
        local val = self:extractNumericalValue(self:getValue(),id)
        
        local range = (self._type=="vec3d" and self._range[id+1]) or self._range;
        slider:SetValue(math.floor(0.5 + (val-range[1])/(range[2]-range[1])*10000))
        slider:SetFocus();
    end
    
    self:setupPopupButton(but,subframe,updateFunc)
    
    function sliderHandler(intf,event)            
        local pos = event:GetPosition()/10000.0;
        
        -- convert the value to the corresponding range:
        local range = (self._type=="vec3d" and self._range[id+1]) or self._range;
        local val = range[1] + (range[2]-range[1])*pos;
       
        val = (self._type == "integer" and math.floor(val+0.5)) or val
              
        -- update the text ctrl value:
        self._controls[index+3]:ChangeValue(string.format(self._numFormat,val) .. self._unit);

        if self._type == "color" then
            self._controls[index+2]:Refresh()
        end
        
        val = self:computeNewValue(val,id)
        
        -- update the new value sending this to the provider:
        self:setValue(val);
    end
    self._intf:connectHandler(slider,wx.wxEVT_SCROLL_THUMBTRACK,sliderHandler)
    self._intf:connectHandler(slider,wx.wxEVT_SCROLL_CHANGED,sliderHandler)
    
    local OnFocusLost = function(intf,event)
        --wx.wxLogMessage("Slider focus lost.")
        subframe:Show(false);
        local pos = wx.wxGetMousePosition()
        local rect = but:GetScreenRect();
        
        if not rect:Contains(pos) then
            --wx.wxLogMessage("Not clicking on slider button.")
            self._sliderButPressed = false;
        end
        but:Refresh();
    end
    self._intf:connectHandler(slider,wx.wxEVT_KILL_FOCUS,OnFocusLost)
end

function Class:setupSlidingLabel(label,id,index)

    function labelHandler(intf,event)
        if(self._pressedLabel) then
            --wx.wxLogMessage("Label handler on entry ".. self._name)
            --wx.wxLogMessage("Range max val ".. self._range[2])
            local range = self._type=="vec3d" and self._range[id+1] or self._range
            local length = range[2]-range[1]; -- the complete length to cover.
            
            --local cname = event:GetClassInfo():GetClassName()
            --self:info("Classname=",cname)
            --self:info("calling GetX()...")
            local delta = (event:GetX() - self._posX);
            --self:info("GetX called, value is:",event:GetX())
            
            local sign = delta > 0.0 and 1.0 or -1.0;
            
            local offset = sign * math.exp(self._expfactor*math.abs(delta)/self._dragcover)/math.exp(self._expfactor)*length;
            
            -- wrap the pointer back at its origin location:
            if event:RightIsDown() then
                event:GetEventObject():dynCast("wxWindow"):WarpPointer(self._posX,self._posY)
            end
            
            -- work only on the alpha component if this is a color:
            local curVal = self:extractNumericalValue(self._prevValue,id) 
          
            local val = self:checkValue(curVal+offset,self._controls[index+3],string.format(self._numFormat,curVal+offset));
            
            if not val then 
                return -- do not proceed with updating anything.
            end
        
            val = (self._type == "integer" and math.floor(val+0.5)) or val;
            
            -- update the text ctrl:
            self._controls[index+3]:ChangeValue(string.format(self._numFormat,val) .. self._unit)
            if self._type == "color" then
                self._controls[index+2]:Refresh()
            end
            
            val = self:computeNewValue(val,id)

            -- send the command:
            self:setValue(val);
        end
    end
    
    if not self._noLabelHandler  then -- [ticket #55: restoring dragging support] -- and platform=="win32"
        local intf = self._intf
        
        -- Provider an handling system for the label drag support:    
        --txt:SetCursor(wx.wxCursor(wx.wxCURSOR_HAND));
        label:SetCursor(slidingCursor)
        intf:connectHandler(label,wx.wxEVT_MOUSE_CAPTURE_LOST,function(intff,event)
            event:GetEventObject():dynCast("wxWindow"):ReleaseMouse();
            self._pressedLabel = nil;
        end)
        intf:connectHandler(label,wx.wxEVT_LEFT_DOWN,function(intff,event)
            self._pressedLabel = true;
            self._posX = event:GetX();
            self._posY = event:GetY();
            self._prevDelta = 0.0;
            self._prevValue = self:getValue()
            event:GetEventObject():dynCast("wxWindow"):CaptureMouse();
            event:Skip();
        end);
        intf:connectHandler(label,wx.wxEVT_LEFT_UP, function(intff,event)
            self._pressedLabel = nil;
            event:GetEventObject():dynCast("wxWindow"):ReleaseMouse();
            event:Skip();
        end);
        --[[label:Connect(wx.wxID_ANY,wx.wxEVT_RIGHT_DOWN, function(event)
            if self._pressedLabel then
                event:GetEventObject():DynamicCast("wxWindow"):WarpPointer(self._posX,self._posY)
                self._prevBaseValue = self:getValue();
            end
            event:Skip();
        end);
        ]]
        intf:connectHandler(label,wx.wxEVT_RIGHT_DOWN, function(intff,event)
            if self._pressedLabel then
                event:GetEventObject():dynCast("wxWindow"):WarpPointer(self._posX,self._posY)
                local curVal = self:extractNumericalValue(self._prevValue,id)
                self._controls[index+3]:ChangeValue(string.format(self._numFormat,curVal) .. (self._unit or ""))
                -- restore the previous value:
                self:setValue(self._prevValue)
                self._controls[index+3]:SetSelection(-1,-1)
            end
            event:Skip();
        end);
        self._intf:connectHandler(label,wx.wxEVT_MOTION,labelHandler)
    end        
end

function Class:createNumericalSlot(k,cap)
    
    local ctrls = self._controls;
    local id = k and k-1 or wx.wxID_ANY
    local index = k and id*self._comps or 0
    
    local intf = self._intf
    intf:pushSizer{right=self._right,orient=wx.wxHORIZONTAL,prop=self._prop or 0,flags=wx.wxEXPAND}
    
    ctrls[index+1] = intf:addStaticText{text=(cap or self._caption)..": ",tip=self._tip,id=id};
    self:setupSlidingLabel(ctrls[index+1],id,index)
    
    -- add a spacer between the controls:
    intf:addSpacer{prop=1}
    
    if self._type == "color" then
        --if intf:isToolbar() then
            ctrls[index+2] = wx.wxControl:new(intf:getCurrentParent(),id,wx.wxDefaultPosition,wx.wxSize(48,16),wx.wxBORDER_NONE);
        --else
        --    ctrls[index+2] = wx.wxPanel:new(intf:getCurrentParent(),id,wx.wxDefaultPosition,wx.wxSize(48,16));
        --end
        intf:addControl(ctrls[index+2],{prop=0,flags=wx.wxALIGN_CENTER_VERTICAL+wx.wxALL})
        self:setupColorSwatch(ctrls[index+2]);
        intf:addStaticText{text=" "}; -- add a small space just after, use static text to work also in toolbars.
    end
    
    --local val = (self._type == "color" and self:getValue()[3]*100.0) or self:getValue()
    local val = (self._type == "color" and self._defaultValue:w()*100.0) 
        or (self._type == "vec3d" and self._defaultValue:_v(id))
        or self._defaultValue
    
    -- compute the needed text extend:
    --local maxValStr = (self._numchar and string.rep("0",self._numchar)) or string.format(self._numFormat, (k and self._range[k][2]) or self._range[2]) .. (self._unit or "")
    --local txt = wx.wxTextCtrl(self:getCurrentParent(),wx.wxID_ANY,"",wx.wxDefaultPosition,wx.wxDefaultSize);
    
    --local x, y, descent, externalLeading = txt:GetTextExtent(maxValStr)
    --txt:Destroy();
    
    local txtsize = wx.wxSize(-1,-1)  --wx.wxSize(x+10,-1)
    
    --if not val then
    --    wx.wxLogWarning("Invalid default value for entry ".. self._name .. " using 0.0");
    --    val = 0.0;
    --end
    ctrls[index+3] = intf:addTextCtrl{size=txtsize,style=wx.wxTE_NOHIDESEL+wx.wxTE_RIGHT,text=self._numFormat:format(val)..(self._unit or ""),id=id}
    ctrls[index+3]:SetMinSize(txtsize);
    ctrls[index+3]:SetMaxSize(txtsize);

    self:setupNumericalText(ctrls[index+3],id,index)
    
    if not self._noSlider then
        --if intf:isToolbar() then
            ctrls[index+4] = wx.wxControl:new(intf:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxSize(16,16),wx.wxBORDER_NONE);
        --else
        --    ctrls[index+4] = wx.wxPanel:new(intf:getCurrentParent(),wx.wxID_ANY,wx.wxDefaultPosition,wx.wxSize(16,16));
        --end
        intf:addControl(ctrls[index+4],{prop=0,flags=wx.wxALIGN_CENTER_VERTICAL+wx.wxALL})
        
        -- Prepare the slider container:
        -- need to bypass toolbar settings:
        local wasToolbar = intf:isToolbar();
        intf:setIsToolbar(false);
        
        local subframe = wx.wxFrame:new(winman:getMainFrame(),wx.wxID_ANY,"Slider helper",wx.wxDefaultPosition,wx.wxSize(150,20),flavor~="win32" and wx.wxFRAME_NO_TASKBAR+wx.wxSTAY_ON_TOP+wx.wxBORDER_NONE or wx.wxFRAME_NO_TASKBAR+wx.wxSTAY_ON_TOP+wx.wxBORDER_SUNKEN); --
        local sizer = wx.wxBoxSizer:new(wx.wxVERTICAL);
        subframe:SetSizer(sizer);
        intf:pushParent(subframe,sizer);
            intf:pushPanel{prop=1,flags=wx.wxEXPAND+wx.wxALIGN_CENTER_VERTICAL}
            intf:addSpacer{prop=1}
            ctrls[index+5] = intf:addSlider{size=wx.wxSize(150,20),prop=0,flags=wx.wxEXPAND+wx.wxALIGN_CENTER_VERTICAL,id=id}
            intf:addSpacer{prop=1}
            intf:popParent(true)
        intf:popParent(true)
        
        subframe:Layout()
        
        intf:setIsToolbar(wasToolbar);
        
        self:setupPopupSlider(ctrls[index+5],ctrls[index+4],subframe,id,index)
    end
   
    intf:popSizer() 
end

function Class:create()    
    
    local intf = self._intf
    if self._type == "vec3d" then
        intf:pushSizer{right=self._right,orient=wx.wxVERTICAL,text=self._caption,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
            for id,cap in ipairs(self._subcaptions) do
                self:createNumericalSlot(id,cap)
            end
        intf:popSizer() -- end sizer
    else
        self:createNumericalSlot()
    end
end

return Class
