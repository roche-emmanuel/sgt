SET(PLUG_NAME "cef")
SET(TARGET_NAME "plug_${PLUG_NAME}")
SET(TARGET_DIR "./modules")
#SET(TARGET_DIR "bin/${FLAVOR}/modules")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtLuna/include)

INCLUDE_DIRECTORIES(${CEF_INC_DIR})
LINK_DIRECTORIES (${CEF_LIB_DIR})

INCLUDE_DIRECTORIES(${DX_INC_DIR})
LINK_DIRECTORIES(${DX_LIB_DIR})

ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(${OSG_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES} )

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtLuna ${LUA_LIBS} ${OSG_LIBS} ${GL_LIBS} ${DX_LIBS} ${CEF_LIBS})

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# reflection settings:	
SET(INTF_FILES)

LIST(APPEND INTF_FILES "${CMAKE_CURRENT_SOURCE_DIR}/../interface")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")
ADD_FILES(INTF_FILES "../include/CEFManager.h")
ADD_FILES(INTF_FILES "../include/CEFViewBase.h")
# ADD_FILES(INTF_FILES "../include/RenderTarget.h")
# ADD_FILES(INTF_FILES "../include/DX9RenderTarget.h")
ADD_FILES(INTF_FILES "../include/DX9CEFManager.h")
# ADD_FILES(INTF_FILES "../interface/helpers.h")

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	OUTPUT_NAME "${PLUG_NAME}"
	PREFIX ""
	SUFFIX ".sgp")

SET(DOXY_PREDEFINED _WIN32 _MSC_VER) 
SET(FILE_PATTERNS )
SET(INCLUDE_PATH "${DEP_CEF}/include;${DEP_CEF}")


GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)

# misc operations:
# WARNING : No compression for compatibility with MXEngine memory module loading.
# COMPRESS_BINARY()
#INSTALL_PDB(${TARGET_NAME} "modules/")
