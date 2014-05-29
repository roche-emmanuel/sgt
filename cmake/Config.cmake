SET(DEPS_DIR "W:/Cloud/Dev/Deps" CACHE STRING "Folder containing all the needed dependencies")
SET(CMAKE_INSTALL_PREFIX "W:/Cloud/Projects/sgt/software" CACHE STRING "Installation folder" FORCE)
SET(TOOLS_DIR "${PROJECT_SOURCE_DIR}/tools" CACHE STRING "Folder containing all the needed dev tools")

SET(USE_COMPRESSION TRUE)

# Tools path:
SET(UPX "${TOOLS_DIR}/upx.exe" CACHE STRING "UPX executable")
SET(LUA "${TOOLS_DIR}/luajit.exe" CACHE STRING "LUA executable")
SET(DOXYGEN "${TOOLS_DIR}/doxygen.exe" CACHE STRING "Doxygen executable")

# Temporary hack using external sgt launcher for reflection generation:
# SET(EXT_TOOLS_DIR "W:/Cloud/Dev/Common/Tools/win32" CACHE STRING "Folder containing all the external tools")
# SET(SGTLAUNCHER "${EXT_TOOLS_DIR}/singularity-0.2.0/bin/win32/sgtLauncher.exe" CACHE STRING "Singularity launcher")
# SET(SGTLAUNCHER "${TOOLS_DIR}/sgt-0.0.1.exe" CACHE STRING "Singularity launcher")
SET(SGTLAUNCHER "${TOOLS_DIR}/sgtgen.exe" CACHE STRING "Singularity launcher")

# Dependencies paths:
SET(DEP_BOOST ${DEPS_DIR}/${FLAVOR}/boost-1.53.0 CACHE STRING "boost path")
SET(DEP_LUA ${DEPS_DIR}/${FLAVOR}/LuaJIT-2.0.1 CACHE STRING "lua path")
SET(DEP_OSG ${DEPS_DIR}/${FLAVOR}/OpenSceneGraph-3.1.5 CACHE STRING "osg path")
SET(DEP_WX ${DEPS_DIR}/${FLAVOR}/wxWidgets-2.9.3 CACHE STRING "wx path")
SET(DEP_GLEW ${DEPS_DIR}/${FLAVOR}/glew-1.9.0 CACHE STRING "GLEW path")
# SET(DEP_GLUT ${DEPS_DIR}/${FLAVOR}/glut-3.7.6 CACHE STRING "GLUT path")
SET(DEP_GLUT ${DEPS_DIR}/${FLAVOR}/freeglut-2.8.1 CACHE STRING "GLUT path")
# SET(DEP_GLUT ${DEPS_DIR}/${FLAVOR}/freeglut-2.6.0 CACHE STRING "GLUT path")
SET(DEP_ICONV ${DEPS_DIR}/${FLAVOR}/libiconv-1.9.2-1 CACHE STRING "iconv path")
SET(DEP_PTHREADS ${DEPS_DIR}/${FLAVOR}/pthreads-w32-2.9.1 CACHE STRING "pthreads path")
SET(DEP_ATB ${DEPS_DIR}/${FLAVOR}/AntTweakBar-1.15 CACHE STRING "AntTweakBar path")
SET(DEP_TIFF ${DEPS_DIR}/${FLAVOR}/libtiff-3.8.2 CACHE STRING "TIFF path")

SET(DEP_PYTHON27 ${DEPS_DIR}/${FLAVOR}/Python-2.7.6 CACHE STRING "Python path")

# Include the macro definitions:
INCLUDE(cmake/Macros.cmake)

# Depdencies definitions:
IF(WIN32)
	SET(FLAVOR_LIBS rpcrt4 oleaut32 ole32 uuid winspool winmm shell32 comctl32 comdlg32 advapi32 ws2_32 wsock32 gdi32 wmvcore vfw32 strmiids)
	SET(GL_LIBS opengl32 GLU32)
	SET(IUP_FLAGS    -DIUP_DLL)
ELSE()
	SET(FLAVOR_LIBS dl)
	SET(GL_LIBS GL GLU)
ENDIF()

SET(BOOST_INC_DIR 	${DEP_BOOST}/include)
SET(BOOST_LIB_DIR 	${DEP_BOOST}/lib)
SET(BOOST_LIBS 		)

SET(LUA_INC_DIR 	${DEP_LUA}/include)
SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
SET(LUA_LIBS 			lua51)

SET(OSG_INC_DIR 	${DEP_OSG}/include)
SET(OSG_LIB_DIR 	${DEP_OSG}/lib)
SET(OSG_LIBS     	OpenThreads osg osgUtil osgDB osgGA osgText osgViewer osgParticle )
SET(OSG_FLAGS     )

SET(WX_INC_DIR 		${DEP_WX}/include ${DEP_WX}/lib/vc_dll/mswu)
SET(WX_LIB_DIR 		${DEP_WX}/lib/vc_dll)
SET(WX_LIBS     	wxmsw29u wxmsw29u_gl)
# result of: ./wx-config.exe --cxxflags --prefix=W:/Cloud/Dev/Deps/win32/wxWidgets-2.9.3 --wxcfg=vc_dll/mswu
SET(WX_FLAGS     	-D__NO_VC_CRTDBG__ -D__WXMSW__  -D_UNICODE -DWXUSINGDLL -D_WINDOWS) # /D__WXDEBUG__  /GR /EHsc

SET(GLEW_INC_DIR 	${DEP_GLEW}/include)
SET(GLEW_LIB_DIR 	${DEP_GLEW}/lib)
SET(GLEW_LIBS 		glew32.lib)
# SET(GLEW_LIBS 		glew32s.lib) #glew32.lib)
SET(GLEW_FLAGS 		) #-DGLEW_STATIC)

SET(ICONV_INC_DIR 	${DEP_ICONV}/include)
SET(ICONV_LIB_DIR 	${DEP_ICONV}/lib)
SET(ICONV_LIBS 			libiconv libcharset)

SET(GLUT_INC_DIR 	${DEP_GLUT}/include)
# SET(GLUT_LIB_DIR 	${DEP_GLUT}/lib)
SET(GLUT_LIB_DIR 	${DEP_GLUT}/lib/x86)
# SET(GLUT_LIBS 		glut32.lib)
SET(GLUT_LIBS 		freeglut_static.lib)
SET(GLUT_FLAGS 		-DUSEFREEGLUT -DFREEGLUT_STATIC)

SET(PTHREADS_INC_DIR 	${DEP_PTHREADS}/include)
SET(PTHREADS_LIB_DIR 	${DEP_PTHREADS}/lib/x86)
SET(PTHREADS_LIBS 		pthreadVCE2.lib)

SET(ATB_INC_DIR 	${DEP_ATB}/include)
SET(ATB_LIB_DIR 	${DEP_ATB}/lib)
SET(ATB_LIBS 			AntTweakBar.lib)

SET(TIFF_INC_DIR 	${DEP_TIFF}/include)
SET(TIFF_LIB_DIR 	${DEP_TIFF}/lib)
SET(TIFF_LIBS 		libtiff.lib)

SET(PYTHON27_INC_DIR 	${DEP_PYTHON27}/include)
SET(PYTHON27_LIB_DIR 	${DEP_PYTHON27}/libs)
SET(PYTHON27_LIBS 		python27.lib)
