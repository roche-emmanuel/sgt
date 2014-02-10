local Class = require("classBuilder"){name="MainHeaderWriter",bases="base.Object"};

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
	
	-- write all the headers:
	local headers = Set();
	for _,v in classes:sequence() do
		local header = v:getHeaderFile()
		if header and v:isValidForWrapping() and not im:ignoreHeader(header) then
			headers:push_back(header)
		end		
	end
	
	for _,v in headers:sequence() do
		buf:writeLine("#include <"..v..">")
	end
	buf:newLine()
	
	injector:inject(buf,"after_headers") -- code injection stage.
	
	local writtenTypes = Set();
	
	-- write the classes declaration on the buf:
	local add = "\n\tstatic luna_ConverterType converters[];"
	
	for _,v in classes:sequence() do
		local classname = v:getTypeName()
		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class declaration for ", v:getFullName(), " (typename=",classname,")")
			local abname = tm:getAbsoluteBaseName(v:getFirstAbsoluteBase()) --:getFullName();
			buf:writeLine("// Class: "..classname)
			buf:writeLine(snippets:getLunaTraitsCode(classname,abname,add))
		else
			self:notice("Ignoring class declaration for ", v:getFullName(), " (typename=",classname,")")
		end
	end
	
	buf:newLine()
	
	local types = tm:getRegisteredMappedTypes()
	
	for _,classname in types:sequence() do
		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class declaration for type ",classname)
			buf:writeLine("// Mapped type: "..classname)
			buf:writeLine(snippets:getLunaTraitsCode(classname,classname,add))
		else
			self:notice("Ignoring class declaration for type ", classname)
		end
	end
	
	buf:newLine()
	
	local types = tm:getReferencedExternals()
	
	for _,classname in types:sequence() do
		if not writtenTypes:contains(classname) then
			writtenTypes:push_back(classname)
		else
			classname = nil	
		end
		
		if classname and not im:ignore(classname,"class_declaration") then
			self:debug0_v("Writing class declaration for type ",classname)
			local abname = tm:getExternalBase(classname)
			buf:writeLine("// Referenced external: "..classname)
			buf:writeLine(snippets:getLunaTraitsCode(classname,abname,add))
		else
			self:notice("Ignoring class declaration for type ", classname)
		end
	end
	
	-- write the LunaTypes for all the absolute base classes:
	local writtenTypes = Set();
	
	for k,v in classes:sequence() do
		if v:getBases():empty() then
			local cname = v:getFullName()
			local hash = utils.getHash(cname)
			if not writtenTypes:contains(hash) and not im:ignore(cname,"class_declaration") then
				buf:writeLine(snippets:getLunaTypeCode(hash,cname))
				writtenTypes:push_back(hash)
			else
				self:warn("Luna type already written for hash=",hash," type=",v:getFullName())
			end
		end
	end
	
	local types = tm:getRegisteredMappedTypes()
	for _,cname in types:sequence() do
		local hash = utils.getHash(cname)
		if not writtenTypes:contains(hash) and not im:ignore(cname,"class_declaration") then
			buf:writeLine(snippets:getLunaTypeCode(hash,cname))
			writtenTypes:push_back(hash)
		else
			self:warn("Luna type already written for hash=",hash," type=",cname)
		end
	end
	
	local types = tm:getReferencedExternals()
	for _,cname in types:sequence() do
		local hash = utils.getHash(cname)
		if not writtenTypes:contains(hash) and not im:ignore(cname,"class_declaration") then
			buf:writeLine(snippets:getLunaTypeCode(hash,cname))
			writtenTypes:push_back(hash)
		else
			self:warn("Luna type already written for hash=",hash," type=",cname)
		end
	end
	
	rm:writeHeader("luna_types.h",buf)	
end

return Class