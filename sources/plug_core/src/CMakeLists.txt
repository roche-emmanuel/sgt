SET(PLUG_NAME "core")
SET(TARGET_NAME "plug_${PLUG_NAME}")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtLuna/include)
INCLUDE_DIRECTORIES (../../sgtCore/include)
INCLUDE_DIRECTORIES (../../ModuleLoader/include)

ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(${OSG_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtCore sgtLuna)  

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	OUTPUT_NAME "${PLUG_NAME}"
	PREFIX ""
	SUFFIX ".sgp")

# step needed for the generation of the XML documentation:
SET(INTF_FILES)
SET(INCLUDE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../sgtCore/include" "${CMAKE_CURRENT_SOURCE_DIR}/../../sgtLuna/include")

ADD_FILES(INTF_FILES "../../sgtLuna/include/lunaCommon.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/lua/ModuleProvider.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/log/LogManager.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/log/LogSink.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/log/FileLogger.h")
LIST(APPEND INTF_FILES "${OSG_INC_DIR}/osg/Referenced")
ADD_FILES(INTF_FILES "../../sgtCore/include/kernel.h")

# LIST(APPEND INTF_FILES "${OSG_INC_DIR}/osg/CopyOp")
ADD_FILES(INTF_FILES "../interface/helpers.h")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")

SET(EXPAND_AS_DEFINED META_Object META_Node META_StateAttribute META_NodeVisitor META_Shape Object_META Object_META_DEF)

GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)

# INSTALL_PDB(${TARGET_NAME} "modules/")

