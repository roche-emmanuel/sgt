SET(DEPS_DIR "W:/Cloud/Dev/Deps" CACHE STRING "Folder containing all the needed dependencies")
SET(CMAKE_INSTALL_PREFIX "W:/Cloud/Projects/sgt/software" CACHE STRING "Installation folder" FORCE)
SET(TOOLS_DIR "${PROJECT_SOURCE_DIR}/tools" CACHE STRING "Folder containing all the needed dev tools")

SET(USE_GLOBAL_COMPRESSION FALSE)

# Tools path:
SET(UPX "${TOOLS_DIR}/upx.exe" CACHE STRING "UPX executable")
SET(LUA "${TOOLS_DIR}/luajit.exe" CACHE STRING "LUA executable")
SET(DOXYGEN "${TOOLS_DIR}/doxygen.exe" CACHE STRING "Doxygen executable")

# Temporary hack using external sgt launcher for reflection generation:
SET(EXT_TOOLS_DIR "W:/Cloud/Dev/Common/Tools/win32" CACHE STRING "Folder containing all the external tools")
SET(SGTLAUNCHER "${EXT_TOOLS_DIR}/singularity-0.2.0/bin/win32/sgtLauncher.exe" CACHE STRING "Singularity launcher")

# Dependencies paths:
SET(DEP_BOOST ${DEPS_DIR}/${FLAVOR}/boost-1.53.0 CACHE STRING "boost path")
SET(DEP_LUA ${DEPS_DIR}/${FLAVOR}/LuaJIT-2.0.1 CACHE STRING "lua path")
SET(DEP_OSG ${DEPS_DIR}/${FLAVOR}/OpenSceneGraph-3.1.5 CACHE STRING "osg path")


# Depdencies definitions:
SET(BOOST_INC_DIR 	${DEP_BOOST}/include)
SET(BOOST_LIB_DIR 	${DEP_BOOST}/lib)
SET(BOOST_LIBS 		)

SET(LUA_INC_DIR 	${DEP_LUA}/include)
SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
SET(LUA_LIBS 			lua51)

SET(OSG_INC_DIR 	${DEP_OSG}/include)
SET(OSG_LIB_DIR 	${DEP_OSG}/lib)
SET(OSG_LIBS     	OpenThreads osg osgUtil osgDB osgGA osgText osgViewer osgParticle)
