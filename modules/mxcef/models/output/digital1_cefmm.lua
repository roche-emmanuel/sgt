local cfg = require "utils.OutputModel" ()

local Rect = require "display.Rect"

cfg:set("windows",{
	{id="win1", title="MovingMap",rect={x=-1200,y=-200, width=800, height=600}},
})

cfg:set("outputs",{
	{type="output",channel=1,analog=false,rect=Rect.normLTWH(0.0,0.0,1.0,1.0)},
	{class="cef.MovingMap",rect=Rect.normLTWH(0.0,0.0,1.0,1.0),window="win1"},
})

return cfg
