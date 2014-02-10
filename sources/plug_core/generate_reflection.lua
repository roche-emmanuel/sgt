dofile(sgt_path .. "scripts/generate_common.lua")

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")

-- tm:registerMappedType("unsigned __int64");
tm:setTypeConstructor("OpenThreads::ScopedLock< OpenThreads::Mutex >","NULL;")

local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName="sgt",
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
		"boost::any",
		"slot_type",
		"registerKeyObserver",
		" Any ",
		"DECLARE_SINGLETON"
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={"SingletonHolder"},
	locationPrefixes={
		sgt_path.."sources/sgtCore/include/",
		"W:/Cloud/Dev/Deps/ds411/OpenSceneGraph-3.0.1/include/",
		dest_path.."interface/",
	}
}




