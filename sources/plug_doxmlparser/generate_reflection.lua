local tm = require "bindings.TypeManager"
tm:registerExternals(root_project_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_core/functions.luna")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	luaOpenName=project,
	modName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={
	},
	locationPrefixes={
		"interface/",
	}
}




