SET(PLUG_NAME "land")
SET(TARGET_NAME "plug_${PLUG_NAME}")
SET(TARGET_DIR "./modules")
#SET(TARGET_DIR "bin/${FLAVOR}/modules")


INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtLuna/include)

INCLUDE_DIRECTORIES(../../ork)
INCLUDE_DIRECTORIES(../../ork/libraries)
INCLUDE_DIRECTORIES(../../proland/sources)
INCLUDE_DIRECTORIES(../../proland/sources/core)
INCLUDE_DIRECTORIES(../../proland/sources/terrain)
INCLUDE_DIRECTORIES(../../proland/sources/atmo)
INCLUDE_DIRECTORIES(../../proland/sources/ocean)
INCLUDE_DIRECTORIES(../../proland/sources/forest)
INCLUDE_DIRECTORIES(../../proland/sources/graph)
INCLUDE_DIRECTORIES(../../proland/sources/river)
INCLUDE_DIRECTORIES(../../proland/sources/edit)

#INCLUDE_DIRECTORIES(${MYDEP_INC_DIR})
#LINK_DIRECTORIES (${MYDEP_LIB_DIR})

INCLUDE_DIRECTORIES (${GLEW_INC_DIR})
LINK_DIRECTORIES (${GLEW_LIB_DIR})

LINK_DIRECTORIES (${GLUT_LIB_DIR})
LINK_DIRECTORIES (${PTHREADS_LIB_DIR})

INCLUDE_DIRECTORIES(${ATB_INC_DIR})
LINK_DIRECTORIES(${ATB_LIB_DIR})

INCLUDE_DIRECTORIES(${TIFF_INC_DIR})
LINK_DIRECTORIES(${TIFF_LIB_DIR})

add_definitions(-DNDEBUG)
ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-DLUNA_BINDINGS)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS("-DTIXML_USE_STL" "-D_CRT_SECURE_NO_WARNINGS")
ADD_DEFINITIONS(${OSG_FLAGS})
ADD_DEFINITIONS(${GLEW_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES} )

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtCore ${LUA_LIBS} ${OSG_LIBS} ${GL_LIBS} ork proland ${GLEW_LIBS})

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# reflection settings:	
SET(INTF_FILES)

# LIST(APPEND INTF_FILES "${MYDEP_INC_DIR}")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/core")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/math")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/render")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/util")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/resource")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/taskgraph")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/scenegraph")
# LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/ork/ork/ui")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/core")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/terrain")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/atmo")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/ocean")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/forest")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/graph")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/river")
LIST(APPEND INTF_FILES "${PROJECT_SOURCE_DIR}/sources/proland/sources/edit")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")
ADD_FILES(INTF_FILES "../interface/helpers.h")



SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	OUTPUT_NAME "${PLUG_NAME}"
	PREFIX ""
	SUFFIX ".sgp")

SET(DOXY_PREDEFINED ORK_API NDEBUG TIXML_USE_STL PROLAND_API) 
SET(FILE_PATTERNS "*.h")
SET(INCLUDE_PATH 
	"../../ork" 
	"../../proland/sources" 
	"../../proland/sources/core" 
	"../../proland/sources/terrain" 
	"../../proland/sources/atmo"
	"../../proland/sources/ocean"
	"../../proland/sources/forest"
	"../../proland/sources/graph"
	"../../proland/sources/river"
	"../../proland/sources/edit"
)

GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)

# misc operations:
COMPRESS_BINARY()
#INSTALL_PDB(${TARGET_NAME} "modules/")
