--------------------------------------------------------------------------------
---------------------- ##       #####    #####   ######  -----------------------
---------------------- ##      ##   ##  ##   ##  ##   ## -----------------------
---------------------- ##      ##   ##  ##   ##  ######  -----------------------
---------------------- ##      ##   ##  ##   ##  ##      -----------------------
---------------------- ######   #####    #####   ##      -----------------------
----------------------                                   -----------------------
----------------------- Lua Object-Oriented Programming ------------------------
--------------------------------------------------------------------------------
-- Project: LOOP - Lua Object-Oriented Programming                            --
-- Release: 2.3 beta                                                          --
-- Title  : Base Class Model                                                  --
-- Author : Renato Maia <maia@inf.puc-rio.br>                                 --
--------------------------------------------------------------------------------
-- Exported API:                                                              --
--   class(class)                                                             --
--   new(class, ...)                                                          --
--   classof(object)                                                          --
--   isclass(class)                                                           --
--   instanceof(object, class)                                                --
--   memberof(class, name)                                                    --
--   members(class)                                                           --
--------------------------------------------------------------------------------

local pairs        = pairs
local unpack       = unpack
local rawget       = rawget
local setmetatable = setmetatable
local getmetatable = getmetatable

local Class = {}

--------------------------------------------------------------------------------
function Class.rawnew(class, object)
	return setmetatable(object or {}, class)
end
--------------------------------------------------------------------------------
function Class.new(class, ...)
	if class.__init
		then return class:__init(...)
		else return Class.rawnew(class, ...)
	end
end
--------------------------------------------------------------------------------
function Class.initclass(class)
	if class == nil then class = {} end
	if class.__index == nil then class.__index = class end
	return class
end
--------------------------------------------------------------------------------
local MetaClass = { __call = Class.new }
function Class.class(class)
	return setmetatable(Class.initclass(class), MetaClass)
end
--------------------------------------------------------------------------------
Class.classof = getmetatable
--------------------------------------------------------------------------------
function Class.isclass(class)
	return classof(class) == MetaClass
end
--------------------------------------------------------------------------------
function Class.instanceof(object, class)
	return classof(object) == class
end
--------------------------------------------------------------------------------
Class.memberof = rawget
--------------------------------------------------------------------------------
Class.members = pairs

return Class
