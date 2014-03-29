
# Ork sources can be visualized from : https://gforge.inria.fr/scm/viewvc.php/trunk/?root=ork
# and retrieved with: svn checkout svn://scm.gforge.inria.fr/svnroot/ork/trunk .

# and proland:  svn checkout svn://scm.gforge.inria.fr/svnroot/proland/trunk .

SET(ORK_VERSION_MAJOR 3)
SET(ORK_VERSION_MINOR 2)
SET(ORK_VERSION "${ORK_VERSION_MAJOR}.${ORK_VERSION_MINOR}")

# Avoid source tree pollution
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR "In-source builds are not permitted. Make a separate folder for building:\nmkdir build; cd build; cmake ..\nBefore that, remove the files already created:\nrm -rf CMakeCache.txt CMakeFiles")
endif(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)

# Add a sensible build type default and warning because empty means no optimization and no debug info.
if(NOT CMAKE_BUILD_TYPE)
	message("WARNING: CMAKE_BUILD_TYPE is not defined!\n         Defaulting to CMAKE_BUILD_TYPE=RelWithDebInfo. Use ccmake to set a proper value.")
	set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

# Common deps
# find_package(PkgConfig)

# PKG_CHECK_MODULES(Glew glew REQUIRED)
include_directories(${GLEW_INC_DIR})
link_directories(${GLEW_LIB_DIR})

# find_package(GLUT)

# set(LIB_INSTALL_DIR "lib" CACHE STRING "Library directory name (lib/lib32/lib64)" )

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_INSTALL_PREFIX}/ork)
add_definitions("-DORK_API=" "-DTIXML_USE_STL" "-D_CRT_SECURE_NO_WARNINGS") #"-fPIC"
add_definitions(${GLEW_FLAGS})

option(BUILD_SHARED      "Build shared library instead of static"   OFF)
option(BUILD_EXAMPLES    "Build examples"                           ON )
option(BUILD_TESTS       "Build tests"                              ON )

# Sub dirs
add_subdirectory(libraries)
add_subdirectory(ork)

if(BUILD_EXAMPLES)
	add_subdirectory(examples)
endif(BUILD_EXAMPLES)

# if(BUILD_TESTS)
# 	add_subdirectory(test)
# endif(BUILD_TESTS)
