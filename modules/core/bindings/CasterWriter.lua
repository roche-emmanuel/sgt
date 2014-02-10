local Class = require("classBuilder"){name="CasterWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local injector = require "bindings.CodeInjector"
local im = require "bindings.IgnoreManager"
local snippets = require "bindings.SnippetManager"
local utils = require "utils"
local tm = require "bindings.TypeManager"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local classes = rm:getClasses();
		
	local writtenTypes = Set();
	
	for _,v in classes:sequence() do
		local classname = v:getTypeName()
		if not writtenTypes:contains(classname) 
			and not im:ignore(classname,"class_declaration")
			and not v:isPolymorphic() then

			writtenTypes:push_back(classname)
			self:debug0_v("Writing static caster for non polymorphic class ", v:getFullName(), " (typename=",classname,")")

			buf:writeLine(snippets:getStaticCasterCode(classname))
		end
	end
	
	rm:writeHeader("luna_casters.h",buf)	
end

return Class