local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(root_project_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_core/functions.luna")
tm:registerExternals(root_project_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_osg/functions.luna")
tm:registerExternals(root_project_path .. "sources/plug_wx/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_wx/functions.luna")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	mappedModules={
	},
	ignoreFiles={
	},
	ignoreFunctions={
	},
	ignoreDefines={
	},
	ignoreClasses={
	},
	ignoreClassDeclarations={
	},
	ignoreConverters={ },
	ignoreHeaders = { "helpers%.h" },
	corrections = {
		type_name = {
		},
	},
	locationPrefixes={"/interface/"}
}
