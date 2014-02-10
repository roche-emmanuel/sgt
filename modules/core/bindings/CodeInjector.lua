local oo = require "loop.cached"

local Object = require "base.Object"
local Set = require "std.Set"
local Map = require "std.Map"

local BufferWriter = require "io.BufferWriter"

--- Class used to inject some code in various location during the binding generation process.
local CodeInjector = oo.class({},Object)

CodeInjector.CLASS_NAME = "bindings.CodeInjector"

function CodeInjector:__init()
	local obj = Object:__init()
    obj = oo.rawnew(self,obj)
    obj._codeInjections = Map();
    obj._TRACE_ = "CodeInjector"
    obj:debug3("Created CodeInjector object.")
    return obj
end

function CodeInjector:getOrCreateSection(section)
	self:check(type(section)=="string","Invalid section argument")
	
	self:debug4_v("Entering CodeInjector:getOrCreateSection(section) with section='",section,"'")
	
	local fragments = self._codeInjections:get(section)
	if not fragments then
		self:debug2("No code fragment list found for section ",section, ". Now creating list.")
		fragments = Set();
		self._codeInjections:set(section,fragments)
	end
	
	self:debug4_v("Leaving CodeInjector:getOrCreateSection().")
	return fragments		
end

function CodeInjector:inject(writer,section)
	self:check(type(section)=="string","Invalid section argument.")
	self:check(self:isInstanceOf(BufferWriter,writer),"Invalid writer argument.")
	
	self:debug4_v("Entering CodeInjector:inject() with section='",section,"'")
	
	local fragments = self._codeInjections:get(section)
	if not fragments then
		self:debug2("No code fragments found for section ",section)
	else
		self:debug3("Writing ", fragments:size(), " code fragments for section ",section)
		for _,code in fragments:sequence() do
			self:debug4("Writing fragment {{{", code, "}}}")
			writer:writeLine(code)
		end 
	end
	
	self:debug4_v("Leaving CodeInjector:inject().")	
end

function CodeInjector:addFragment(section,fragment)
	self:check(type(section)=="string","Invalid section argument")
	self:check(type(fragment)=="string", "Invalid fragment argument")
	self:check(fragment~="", "Invalid empty fragment argument")
	
	self:debug4_v("Entering CodeInjector:addFragment(section,fragment) with section='",section,"' and fragment='",fragment,"'")
	
	local fragments = self:getOrCreateSection(section)
	fragments:push_back(fragment)
	
	self:debug4_v("Leaving CodeInjector:addFragment().")	
end

return CodeInjector()

