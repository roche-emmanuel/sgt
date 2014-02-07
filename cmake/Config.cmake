SET(DEPS_DIR "W:/Cloud/Dev/Deps" CACHE STRING "Folder containing all the needed dependencies")
SET(CMAKE_INSTALL_PREFIX "W:/Cloud/Projects/sgt/software" CACHE STRING "Installation folder" FORCE)
SET(TOOLS_DIR "${PROJECT_SOURCE_DIR}/tools" CACHE STRING "Folder containing all the needed dev tools")



# Tools path:
SET(UPX "${TOOLS_DIR}/upx-3.91.exe" CACHE STRING "UPX executable")

# Dependencies paths:
SET(DEP_BOOST ${DEPS_DIR}/${FLAVOR}/boost-1.53.0 CACHE STRING "boost path")


# Depdencies definitions:
SET(BOOST_INC_DIR 	${DEP_BOOST}/include)
SET(BOOST_LIB_DIR 	${DEP_BOOST}/lib)
SET(BOOST_LIBS 		)