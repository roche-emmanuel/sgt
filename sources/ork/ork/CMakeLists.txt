set(TARGET_NAME "ork")
SET(TARGET_DIR "./")

# Sources
include_directories("../" "../libraries" "../libraries/*")
file(GLOB SOURCE_FILES *.cpp */*.cpp)

ADD_MSVC_PRECOMPILED_HEADER("ork_common.h" "ork_common.cpp" SOURCE_FILES)

include_directories(${GLUT_INC_DIR})
include_directories(${PTHREADS_INC_DIR})

link_directories(${GLUT_LIB_DIR})
link_directories(${PTHREADS_LIB_DIR})

# Libraries
set(LIBS ${GLEW_LIBS} ${GLUT_LIBS} ${PTHREADS_LIBS} ${OSG_LIBS} stb_image tinyxml sgtLuna)

if(UNIX)
	set(LIBS ${LIBS} rt)
endif(UNIX)

ADD_DEFINITIONS(-DORK_LIBRARY)

# Static or shared?
set(LIBTYPE SHARED)

# Create a static library
add_library(${TARGET_NAME} ${LIBTYPE} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} ${LIBS})

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

COMPRESS_BINARY()
