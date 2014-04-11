-- Implementation of the locale management system.
local Class = createClass{"Locale"}

local assert = require "utils.assert"

local locale_list = { "en", "fr" }

local currentLocale = nil -- the default locale as global variable.
local locales = {} -- the locale maps.

function Class:initialize(options)
	-- load at least one locale here.
	self:info("Loading available locales...")
	
	-- if _,lang in pairs(locale_list) do
	-- 	if sgt.ModuleManager.instance().hasModule("locales."..lang)
	-- 		self:debug("Loading locale ",lang,"...")
	-- 		local map = require ("locales." .. lang)
	-- 		self:addLocaleMap(lang,map)	
	-- 	end	
	-- end

	local fs = require "base.FileSystem"
	local path = fs:getRootPath(true).."locales"
	
	local loader = function(data)
		-- extract locale name from filename:
		local lang = data.file:gsub("(.-)%.lua$","%1")
		
		self:debug("Loading locale ",lang," from file ",data.fullpath)
		
		local func, msg = loadfile(data.fullpath)
		self:check(func,msg);
		-- run the function:
		local map = func();
		
		self:addLocaleMap(lang,map)
	end
	
	fs:traverse{path=path,func=loader,pattern="%.lua$"}

	self:info("Selecting default locale ",config.default_locale)
	currentLocale=config.default_locale
	self:check(locales[currentLocale],"Invalid current locale map")
	
	-- restore the numeric locale applied for lua itself:
	--os.setlocale("C","numeric")
	
	self:info("locales loaded.")
end

function Class:addLocaleMap(lang,map)
	assert.nonEmptyString(lang,"Invalid locale.")
	assert.isTable(map,"Invalid locale map")
	
	locales[lang] = locales[map] or {}
	
	local dest = locales[lang]
	for k,v in pairs(map) do
		if dest[k] and dest[k]~=v then
			self:warn("Overriding translation '",dest[k],"' with '",v,"' for index ",k)
		end	
		dest[k]=v
	end
end

function Class:setLocale(locale)
  	assert.nonEmptyString(locale,"Invalid locale code");
  	self:check(locales[locale],"No locale map found for locale ",locale)

  	currentLocale = locale
end

function Class:translate(id,...)
	assert.nonEmptyString(id,"Invalid id")
	assert.nonEmptyString(currentLocale,"Invalid current locale")
  	self:check(locales[currentLocale],"No locale map found for locale ",currentLocale)

	self:debug("Translating id=",id," for locale ",currentLocale)
	
	local result = locales[currentLocale][id]
	
	if assert.isString(result) then
		for id,v in ipairs({...}) do
			result = result:gsub("%${"..id.."}",v)
		end
	else
		result = "Missing translation for "..currentLocale.."."..id
	end
	
	return result
end

return Class()
