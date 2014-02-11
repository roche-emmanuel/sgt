local Class = createClass{name="ImageManager",bases="core.Object"};

local wx = require "wx"

local Map = require "std.Map"
local fs = require "base.FileSystem"
local evtman = require "base.EventManager"
local Set = require "std.Set"
local assert = require "utils.assert"
local path = require "utils.path"

local Event = require "base.Event"

--[[
Class: gui.wx.ImageManager

Singleton class used to manage the list of images used in the software.

This image manager also maintains a list of paths where to look for images.
When creating an images all the paths are searched for the proper file name.

This class inherits from <core.Object>.
]]
function Class:initialize(options)
	-- The images are saved locally in a map.
	self._images = Map();
	self._concatSeparator = "@"
	self._defaultSize = 16;
	self._bitmapType = wx.wxBITMAP_TYPE_PNG
	self._defaultExt = "png"
	self._defaultPath = fs:getRootPath(true).."data/icons/"
	self._paths = Set()
	self._paths:push_front(self._defaultPath)
	
	self._defaultQuality = wx.wxIMAGE_QUALITY_HIGH
	self._defaultLinkProp = 0.5 -- link taking half of the size of the image.
	
	self:info("Initializing all image handlers...")
	wx.wxInitAllImageHandlers();
	
	evtman:addListener{event=Event.APP_CLOSING,object=self}
end

--[[
Function: addImagePath

Add a new path to look for images.

Parameters:
	p - The path to add.  
]]
function Class:addImagePath(p)
	assert.nonEmptyString(p)
	
	p = path.normalize(p).."/"
	
	self._paths:push_front(p)
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Destroying cached images.")
	for k,img in self._images:sequence() do
		img:Destroy()
	end
end

local bitmapType = {}
bitmapType.png = wx.wxBITMAP_TYPE_PNG
bitmapType.cur = wx.wxBITMAP_TYPE_CUR
bitmapType.gif = wx.wxBITMAP_TYPE_GIF

--[[
Function: createImage

Create a new wxImage when required:

Parameters:
	options.name - image name
	options.size - (optional) image size
	options.path - (optional) path where to look for the image file
	options.ext - (optional) extension of the image file. 
	options.quality - (optional) quality of the wx image.
	
Returns:
	The newly created wxImage.
]]
function Class:createImage(options)
	options = type(options)=="string" and {name=options} or options
	
	self:check(options and (options.name or options[1]),"Invalid image name.")
	
	local name = options.name or options[1]
    local size = options.size or self._defaultSize
    local ipath = options.path --or self._defaultPath
	
    local ext = options.ext or self._defaultExt
    local btype = options.bitmapType or bitmapType[ext] or self._bitmapType
    local quality = options.quality or self._defaultQuality
    local linkProp = options.linkProp or self._defaultLinkProp
	
    -- check if the image name contains an "@" symbol:
    local index = name:find(self._concatSeparator)
    local link = nil;
    if index then
        link = name:sub(index+1)
        name = name:sub(1,index-1)
        self:debug("Using link image: ",link," with main image: ", name);
    end
    
	-- if there is no path provided, we should look for the image in all the image paths:
	if not ipath then
		for k,imgpath in self._paths:sequence() do
			-- self:info("Checking path: ",imgpath..name.."."..ext)
			if path.isFile(imgpath..name.."."..ext) then
				ipath = imgpath
				break
			end
		end
	end
	
	self:check(ipath,"Could not find path for image : ", name,".",ext)
	
    --[[if ext ~= "png" then
        self:warn("Support for non PNG images not implemented yet here, need to set the BITMAP_TYPE flag to the appropriate type.")
        return;
    end]]
    
	-- self:info("loading image from : ",ipath..name.."."..ext)
    local img = wx.wxImage(ipath..name.."."..ext,btype)
    
	self:check(img,"Invalid image loaded.")
	
    if size > 0 then -- could specify negative size to prevent rescale.
        -- self:info("Rescaling image to ",size,"x",size)
        img:Rescale(size,size,quality);
    end

    if link then
		-- self:info("Getting link image from ",ipath..link.."."..ext)
        local linkimg = wx.wxImage(ipath..link.."."..ext,btype) --self:getImage(link) --
        linkimg:Rescale(img:GetWidth()*linkProp,img:GetHeight()*linkProp,quality);
 
		-- self:info("Composing with link image.")
 		img:composeWith(linkimg);
    end
    
    return img;
end

--[[
Function: getImage

Main method to retrieve an image or create it if it doesn't exist yet.
Calling <createImage> internally if required.
  
Returns:
	The wxImage object.
]]
function Class:getImage(options)
	options = type(options)=="string" and {name=options} or options
	self:check(options and (options.name or options[1]),"Invalid image name.")
	
	local img = self._images:get(options.name)
	if not img then
		img = self:createImage(options)
		self._images:set(options.name,img)
	end
	
	return img	
end

--[[
Function: getBitmap

Retrieve a bitmap. Internally call <getImage> then convert this
image to a bitmap.

Parameters:
	options - <getImage> options
  
Returns:
	The created wxBitmap() object.
]]
function Class:getBitmap(options)
    local img = self:getImage(options);
    return wx.wxBitmap(img,-1);
end

function Class:getCursor(options)
	options = type(options)=="string" and {name=options} or options
	options.path = options.path or fs:getDataPath("cursors/")
	options.ext = options.ext or "cur"
	options.size = options.size or -1 -- do not resize.
    local img = self:getImage(options);
    return wx.wxCursor(img);
end

return Class()
