set(TARGET_NAME "ork")
SET(TARGET_DIR "./")

# Sources
include_directories("../" "../libraries" "../libraries/*")
file(GLOB SOURCE_FILES *.cpp */*.cpp)

include_directories(${GLUT_INC_DIR})
include_directories(${PTHREADS_INC_DIR})

link_directories(${GLUT_LIB_DIR})
link_directories(${PTHREADS_LIB_DIR})

# Libraries
set(LIBS ${GLEW_LIBS} ${GLUT_LIBS} ${PTHREADS_LIBS} stb_image tinyxml)

if(UNIX)
	set(LIBS ${LIBS} rt)
endif(UNIX)

add_definitions("-DORK_API=__declspec(dllexport)")

# Static or shared?
# set(LIBTYPE STATIC)
set(LIBTYPE SHARED)
# if(BUILD_SHARED)
# 	set(LIBTYPE SHARED)
# endif(BUILD_SHARED)

# Create a static library
add_library(${TARGET_NAME} ${LIBTYPE} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} ${LIBS})

# Adds SO Version and subversion. To be added to ensure ABI/API compatibility.
#SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES SOVERSION ${ORK_VERSION_MAJOR} VERSION ${ORK_VERSION})

# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# link_directories(${PROJECT_SOURCE_DIR}/lib)

# Install headers
# FOREACH(subdir core math render resource scenegraph taskgraph ui util)
#   FILE(GLOB include-files ${subdir}/*.h)
#   INSTALL(FILES ${include-files} DESTINATION include/ork/${subdir})
# ENDFOREACH(subdir)

# Install library
# INSTALL(TARGETS ork LIBRARY DESTINATION ${LIB_INSTALL_DIR} ARCHIVE DESTINATION ${LIB_INSTALL_DIR})

# SET(ORK_CFLAGS "-DORK_API= -DTIXML_USE_STL")

# CONFIGURE_FILE(ork.pc.in ${PROJECT_BINARY_DIR}/ork.pc @ONLY)
# INSTALL(FILES ${PROJECT_BINARY_DIR}/ork.pc DESTINATION ${LIB_INSTALL_DIR}/pkgconfig)

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

COMPRESS_BINARY()
