SET(TARGET_NAME "Launcher")
SET(TARGET_DIR "./")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../ModuleLoader/include)

ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-DLAUNCHER_VERSION="${PROJECT_VERSION}")

# Build this app as a windows app or not:
SET(WINDOWS_APP TRUE)

IF(WINDOWS_APP)
ADD_DEFINITIONS(-DWINDOWS_APP)
ENDIF()

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("launcher.h" "launcher.cpp" SOURCE_FILES)

ADD_CUSTOM_TARGET(${TARGET_NAME}_images)

GENERATE_LIBRARY_IMAGE(ModuleLoader moduleloader_dll "" SOURCE_FILES)
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

COMPRESS_BINARY_TARGET()

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})
	
