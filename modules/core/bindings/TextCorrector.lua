local oo = require "loop.cached"

local Object = require "base.Object"
local Map = require "std.Map"
local OrderedMap = require "std.OrderedMap"


--- Class used to correct the names of various elements, for instance classes 
-- or types. If the input name matches a given pattern then the correction function is
-- applied on it.
local TextCorrector = oo.class({},Object)

TextCorrector.CLASS_NAME = "bindings.TextCorrector"

function TextCorrector:__init()
	local obj = Object:__init()
    obj = oo.rawnew(self,obj)
    obj._correctorMap = Map(); 
    obj._TRACE_ = "TextCorrector"
    obj:debug3("Created TextCorrector object.")
    
    obj:addCorrector("filename","%*","_ptr_")
    obj:addCorrector("filename","&","_ref_")
    obj:addCorrector("filename","[:<>%s%*,]","_")
    obj:addCorrector("filename","__+","_")
    obj:addCorrector("filename","^_+","")
    obj:addCorrector("filename","_+$","")
 
    return obj
end

function TextCorrector:getOrCreateCategory(cat)
	self:check(type(cat)=="string","Invalid category argument")
	
	self:debug4_v("Entering TextCorrector:getOrCreateCategory(cat) with cat='",cat,"'")
	
	local category = self._correctorMap:get(cat)
	if not category then
		self:debug2("Creating TextCorrector category ",cat,".")
		category = OrderedMap(); -- needed to be sure the correctors are applied in proper order.
		self._correctorMap:set(cat,category)
	end
	
	self:debug4_v("Leaving TextCorrector:getOrCreateCategory().")
	return category		
end

function TextCorrector:correctText(text,pattern,corrector)
	self:check(type(text)=="string","Invalid section argument")
	self:check(type(pattern)=="string","Invalid pattern argument")
	self:check(type(corrector)=="string" or type(corrector)=="function","Invalid corrector argument")
	
	self:debug4_v("Entering TextCorrector:correctText(text,pattern,corrector) with text='",text,"' pattern='",pattern,"' and corrector=",corrector)
	
	if type(corrector)=="string" then
		-- just apply a string substitution:
		text=text:gsub(pattern,corrector)
	else
		-- apply the corrector as a function taking the text and pattern:
		text=corrector(text,pattern)
	end
	
	-- check the correction result:
	self:check(type(text)=="string","Invalid text correction result with text=",text,", pattern=",pattern," and corrector=",corrector)
	
	-- Error if we get an empty string (?)
	self:check(text~="","Empty string result for text correction with text=",text,", pattern=",pattern," and corrector=",corrector)
	
	self:debug4_v("Leaving TextCorrector:correctText() with corrected text='",text,"'")
	return text		
end

function TextCorrector:addCorrector(cat,pattern,corrector)
	self:check(type(cat)=="string","Invalid cat argument")
	self:check(type(pattern)=="string","Invalid pattern argument")
	self:check(type(corrector)=="string" or type(corrector)=="function","Invalid corrector argument")

	self:debug4_v("Entering TextCorrector:addCorrector(cat,pattern,corrector) with cat=",cat,", pattern=",pattern," and corrector=",corrector)
	
	local category = self:getOrCreateCategory(cat)
	-- check if we are overriding:
	local prevCorrector = category:get(pattern)
	if prevCorrector then
		self:warn("Overriding old corrector=",prevCorrector," with new corrector=",corrector," for pattern=",pattern," in category=",cat); 
	end
	
	category:set(pattern,corrector)
	
	self:debug4_v("Leaving CodeInjector:addFragment().")	
end

function TextCorrector:correct(cat,text)
	self:check(type(cat)=="string","Invalid cat argument.")
	self:check(type(text)=="string","Invalid text argument.")
	
	self:debug4_v("Entering TextCorrector:correct(cat,text) with cat=",cat," and text=",text)
	
	-- retrieve the correctors:
	local correctors = self:getOrCreateCategory(cat);
	-- self:debug3("Testing ", correctors:size(), " patterns for category ",cat)
	
	for pattern,corrector in correctors:sequence() do
		if text:find(pattern) then
			text=self:correctText(text,pattern,corrector)
		end
	end
	
	self:debug4_v("Leaving TextCorrector:correct() with corrected text=",text)	
	return text
end

return TextCorrector()

