local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(root_project_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_core/functions.luna")
tm:registerExternals(root_project_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_osg/functions.luna")

-- Add dependency on DX9 bindings:
tm:registerExternals(root_project_path .. "sources/plug_dx9/classes.luna")

local tc = require "bindings.TypeConverter"
local utils = require "utils"

local fromLua = function(buf,index,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:match("CefRefPtr< (.+) >")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("CefRefPtr< ${1} > ${2} = Luna< CefBase >::checkSubType< ${1} >(L,${3});",tname,argname,index)
	
	return false -- this is not a pointer result.
end

local toLua = function(buf,type,argname)
	local tname = type:getBaseName();
	--log:warn("Converter","Extracting osg ref from ", tname)
	tname = tname:match("CefRefPtr< (.+) >")
	--log:warn("Converter","Got extracted osg ref ", tname)
	
	buf:writeSubLine("Luna< ${1} >::push(L,${2},false);",tname,argname.. (type:isPointer() and "->get()" or ".get()"));
	
	-- here we have a problem: because the class referenced with tname might not be registered at all!
end

local ptrChecker = function(buf,index,type,defStr)
	local tname = type:getBaseName();
	-- log:warn("Converter","Extracting ork ref from '", tname, "'")

	tname = tname:match("CefRefPtr< (.+) >") --,"%1")
	-- log:warn("Converter","extracted ref is '", tname, "'")
	
	local bfname = "CefBase"
	local bhash = utils.getHash(bfname)
	
	buf:writeSubLine("if( !Luna<void>::has_uniqueid(L,${1},${2}) ) return false;",index,bhash);
	buf:writeSubLine("if( !Luna< ${3} >::checkSubType< ${2} >(L,${1}) ) return false;",index,tname,bfname);
	return false
end

local toWrapper = function(type,argName)
	local tname = type:getBaseName();
	tname = tname:match("CefRefPtr< (.+) >")
	
	if argName then
		-- this is a regular argument:
		local access = type:isPointer() and "->" or ".";
		return "(".. tname .."*)"..argName.. access .. "get()";
	else
		-- This is a function return type:
		return "return _obj.callFunction< " .. tname .."* >();"
	end
end

tc:setFromLuaConverter("^CefRefPtr<",fromLua)
tc:setFromLuaConverter("^const CefRefPtr<",fromLua)

tc:setToLuaConverter("^CefRefPtr<",toLua)
tc:setToLuaConverter("^const CefRefPtr<",toLua)

tc:setTypeChecker("^CefRefPtr<",ptrChecker)
tc:setTypeChecker("^const CefRefPtr<",ptrChecker)

tc:setWrapperConverter("^CefRefPtr<",toWrapper)
tc:setWrapperConverter("^const CefRefPtr<",toWrapper)

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFunctions={
	},
	ignoreClasses={
	},
	ignoreConverters={},
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={dest_path.."interface/"}
}
