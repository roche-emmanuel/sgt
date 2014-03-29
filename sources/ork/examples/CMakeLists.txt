SET(TARGET_DIR "ork")

set(EXENAME ork-examples)

link_directories(${GLUT_LIB_DIR})
link_directories(${PTHREADS_LIB_DIR})

# Sources
include_directories("../" "../libraries" "${CMAKE_CURRENT_SOURCE_DIR}")
file(GLOB SOURCE_FILES *.cpp)

add_definitions("-DORK_API=")

add_executable(${EXENAME} ${SOURCE_FILES})
target_link_libraries(${EXENAME} ork)

INSTALL(TARGETS ${EXENAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})
