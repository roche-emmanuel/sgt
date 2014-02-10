local Class = require("classBuilder"){name="ExternalWriter",bases="base.Object"};

local rm = require "bindings.ReflectionManager"
local im = require "bindings.IgnoreManager"
local corr = require "bindings.TextCorrector"
local tm = require "bindings.TypeManager"

local utils = require "utils"

local Set = require "std.Set"

function Class:writeFile()
	local buf = require("io.BufferWriter")()
	
	local written = Set();
	local classes = rm:getClasses()
	
	for _,v in classes:sequence() do
		local tname = v:getTypeName()
		if not im:ignore(tname,"class_declaration") and not written:contains(tname) and v:isExternal() then
			written:push_back(tname)
			self:debug0_v("writing external declaration for class ", v:getFullName(), " with Typename: ", tname)
			
			local modName = v:getModule()
			local cname = v:getFullName()
			local className = tname
			if className:sub(1,modName:len()+2) == modName.."::" then
				className = className:sub(modName:len()+3)
			end
			
			buf:writeSubLine('const char LunaTraits< ${1} >::className[] = "${2}";',cname,corr:correct("filename",className)); --v:getName()
			buf:writeSubLine('const char LunaTraits< ${1} >::fullName[] = "${1}";',tname);
			buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname,v:getModule() or self:getModuleName());
			--buf:writeSubLine('const char* LunaTraits< ${1} >::parents[] = {${2}0};',cname,parentList);
			buf:writeSubLine('const int LunaTraits< ${1} >::hash = ${2};',cname,utils.getHash(v:getFullName()));
			buf:writeSubLine('const int LunaTraits< ${1} >::uniqueIDs[] = {${2},0};',cname,table.concat(v:getAllAbsoluteBaseHashes(),", "));
			buf:newLine()
		end
	end
		
	for _,tname in tm:getReferencedExternals():sequence() do
		local modName = tm._externals:get(tname)
		if not im:ignore(tname,"class_declaration") and modName and not written:contains(tname) then
			written:push_back(tname)
			self:debug0_v("writing external declaration for type ", tname)
			
			local cname = tname
			
			local className = tname
			if className:sub(1,modName:len()+2) == modName.."::" then
				className = className:sub(modName:len()+3)
			end
			
			--local name = tname:gsub("(.*::)","")
			
			buf:writeSubLine('const char LunaTraits< ${1} >::className[] = "${2}";',cname,corr:correct("filename",className));
			buf:writeSubLine('const char LunaTraits< ${1} >::fullName[] = "${1}";',cname);
			buf:writeSubLine('const char LunaTraits< ${1} >::moduleName[] = "${2}";',cname, tm._externals:get(tname));
			--buf:writeSubLine('const char* LunaTraits< ${1} >::parents[] = {${2}0};',cname,parentList);
			buf:writeSubLine('const int LunaTraits< ${1} >::hash = ${2};',cname,utils.getHash(tname));
			local hash = utils.getHash(tm:getExternalBase(tname) or tname)
			buf:writeSubLine('const int LunaTraits< ${1} >::uniqueIDs[] = {${2},0};',cname,hash);
			buf:newLine()
		end
	end
	
	rm:writeSource("register_externals.cpp",buf)	
end

return Class