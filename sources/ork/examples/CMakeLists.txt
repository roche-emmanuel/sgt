SET(TARGET_DIR "./")

set(TARGET_NAME ork-examples)

link_directories(${GLUT_LIB_DIR})
link_directories(${PTHREADS_LIB_DIR})

# Sources
include_directories("../" "../libraries" "${CMAKE_CURRENT_SOURCE_DIR}")
file(GLOB SOURCE_FILES *.cpp)

add_executable(${TARGET_NAME} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} ork)

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

COMPRESS_BINARY()
