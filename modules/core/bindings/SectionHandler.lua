
local oo = require "loop.cached"
 
local IteratorHandler = require "bindings.IteratorHandler"
local SectionHandler = oo.class({},IteratorHandler)

SectionHandler.CLASS_NAME = "bindings.SectionHandler"

function SectionHandler:__init(handler)
	local object = IteratorHandler:__init()
    object = oo.rawnew(self,object)  
	object._TRACE_ = "SectionHandler"
	object._handler = handler
    return object
end

function SectionHandler:handle(section,comp)
	self:foreachIterator(section:members(),self._handler,comp,section)
end

return SectionHandler

