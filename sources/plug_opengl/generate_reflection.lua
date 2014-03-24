local ReflectionGenerator = require "bindings.LunaReflectionGenerator"

local tm = require "bindings.TypeManager"
tm:registerDeleter("osg::Referenced","osg::ref_ptr<osg::Referenced> refptr = ${1};")
tm:registerExternals(root_project_path .. "sources/plug_core/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_core/functions.luna")
tm:registerExternals(root_project_path .. "sources/plug_osg/classes.luna")
tm:registerExternalFunctions(root_project_path .. "sources/plug_osg/functions.luna")

ReflectionGenerator.generate{
	xmlpath=xml_path,
	modName=project,
	luaOpenName=project,
	headers={"plug_common.h"},
	destpath=dest_path,
	ignoreFunctions={
		"GLsync ",
		"glPopDebugGroup",
		"glVertexArrayVertexAttribBindingEXT",
		"glVertexArrayBindVertexBufferEXT",
		"glVertexArrayVertexAttribFormatEXT",
		"glVertexArrayVertexAttribIFormatEXT",
		"glVertexArrayVertexAttribLFormatEXT",
		"glVertexArrayVertexAttribBFormatEXT",
		"glVertexArrayVertexBindingDivisorEXT",
	},
	ignoreDefines={
		"GL_CLIP_DISTANCE6",
		"GL_CLIP_DISTANCE7",
		"GL_COPY_READ_BUFFER_BINDING",
		"GL_COPY_WRITE_BUFFER_BINDING",
		"GL_TRANSFORM_FEEDBACK_PAUSED",
		"GL_TRANSFORM_FEEDBACK_ACTIVE",
		"GL_MAX_COMPUTE_LOCAL_INVOCATIONS",
		"GL_COMPUTE_LOCAL_WORK_SIZE",
	},
	ignoreHeaders={"helpers%.h"},
	ignoreClassDeclarations={},
	locationPrefixes={
		dest_path.."interface/",
	}
}




