SET(TARGET_NAME "sgt")
SET(TARGET_DIR "./")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../ModuleLoader/include)

ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-DLAUNCHER_VERSION="${PROJECT_VERSION}")

# Build this app as a windows app or not:
SET(WINDOWS_APP TRUE)
SET(LUNAGEN_SUPPORT TRUE)

IF(WINDOWS_APP)
ADD_DEFINITIONS(-DWINDOWS_APP)
ENDIF()

IF(LUNAGEN_SUPPORT)
ADD_DEFINITIONS(-DWITH_LUNAGEN_SUPPORT)
ENDIF()

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("launcher.h" "launcher.cpp" SOURCE_FILES)

ADD_CUSTOM_TARGET(${TARGET_NAME}_images)

# core dependencies:
GENERATE_LIBRARY_IMAGE(ModuleLoader moduleloader_dll SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(sgtLuna sgtluna_dll SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(sgtCore sgtcore_dll SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(plug_core plug_core_sgp SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(plug_lfs plug_lfs_sgp SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(core_pack lua_core_pak SOURCE_FILES)

GENERATE_EXT_LIBRARY_IMAGE(deps/lua51.dll lua51_dll SOURCE_FILES)
GENERATE_EXT_LIBRARY_IMAGE(deps/osg97-osg.dll osg97_osg_dll SOURCE_FILES)
GENERATE_EXT_LIBRARY_IMAGE(deps/osg97-osgDB.dll osg97_osgdb_dll SOURCE_FILES)
GENERATE_EXT_LIBRARY_IMAGE(deps/osg97-osgUtil.dll osg97_osgutil_dll SOURCE_FILES)
GENERATE_EXT_LIBRARY_IMAGE(deps/ot12-OpenThreads.dll ot12_openthreads_dll SOURCE_FILES)

IF(LUNAGEN_SUPPORT)
GENERATE_LIBRARY_IMAGE(plug_doxmlparser plug_doxmlparser_sgp SOURCE_FILES)
GENERATE_LIBRARY_IMAGE(plug_lpeg plug_lpeg_sgp SOURCE_FILES)
ENDIF()


# GENERATE_LIBRARY_IMAGE(TurretSim2_encrypted turretsim2_fusion plugins/TurretSim2.fusion SOURCE_FILES)

# just consider the configuration file as a binary file for now.
# GENERATE_EXT_LIBRARY_IMAGE(default_config configs/DefaultConfig.lua SOURCE_FILES)
# GENERATE_EXT_LIBRARY_IMAGE(vbs2_config configs/VBS2.cfg SOURCE_FILES)
# GENERATE_EXT_LIBRARY_IMAGE(mxseries_pbo addons/insyen_mxseries.pbo SOURCE_FILES)

IF(WINDOWS_APP)
ADD_EXECUTABLE (${TARGET_NAME} WIN32 ${PUBLIC_HEADERS} ${SOURCE_FILES} launcher.rc "../../ModuleLoader/src/MemoryModule.c")
ELSE()
ADD_EXECUTABLE (${TARGET_NAME} ${PUBLIC_HEADERS} ${SOURCE_FILES} launcher.rc "../../ModuleLoader/src/MemoryModule.c")
ENDIF()

ADD_DEPENDENCIES(${TARGET_NAME} ${TARGET_NAME}_images)

# SimKernel must be constructed to build this executable.
# ADD_DEPENDENCIES(${TARGET_NAME} SimKernel)

IF(USE_GLOBAL_COMPRESSION)
	COMPRESS_BINARY_TARGET()
ENDIF()

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})
	
