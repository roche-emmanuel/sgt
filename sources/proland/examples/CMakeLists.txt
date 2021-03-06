SET(TARGET_NAME "proland-core-example")
SET(TARGET_DIR "./")

# INCLUDE_DIRECTORIES(../../sgtLuna/include)
INCLUDE_DIRECTORIES(../../ork/libraries)
INCLUDE_DIRECTORIES(../../ork)

INCLUDE_DIRECTORIES(${PTHREADS_INC_DIR})
LINK_DIRECTORIES(${PTHREADS_LIB_DIR})

INCLUDE_DIRECTORIES(${GLEW_INC_DIR})
LINK_DIRECTORIES(${GLEW_LIB_DIR})

INCLUDE_DIRECTORIES(${GLUT_INC_DIR})
LINK_DIRECTORIES(${GLUT_LIB_DIR})

INCLUDE_DIRECTORIES(${ATB_INC_DIR})
LINK_DIRECTORIES(${ATB_LIB_DIR})

INCLUDE_DIRECTORIES(${TIFF_INC_DIR})
LINK_DIRECTORIES(${TIFF_LIB_DIR})

INCLUDE_DIRECTORIES(../sources)
INCLUDE_DIRECTORIES(../sources/core)
INCLUDE_DIRECTORIES(../sources/terrain)
INCLUDE_DIRECTORIES(../sources/atmo)
INCLUDE_DIRECTORIES(../sources/ocean)
INCLUDE_DIRECTORIES(../sources/graph)
INCLUDE_DIRECTORIES(../sources/forest)
INCLUDE_DIRECTORIES(../sources/river)
INCLUDE_DIRECTORIES(../sources/edit)

ADD_DEFINITIONS("-D_CRT_SECURE_NO_WARNINGS" "-DTIXML_USE_STL")

ADD_SUBDIRECTORY(core)
ADD_SUBDIRECTORY(glut)
ADD_SUBDIRECTORY(terrain/terrain1)
ADD_SUBDIRECTORY(terrain/terrain2)
ADD_SUBDIRECTORY(terrain/terrain3)
ADD_SUBDIRECTORY(terrain/terrain4)
ADD_SUBDIRECTORY(terrain/terrain5)

ADD_SUBDIRECTORY(terrain/exercise1)
ADD_SUBDIRECTORY(terrain/exercise2)
ADD_SUBDIRECTORY(terrain/exercise3)
ADD_SUBDIRECTORY(terrain/exercise4)
ADD_SUBDIRECTORY(terrain/exercise5)

ADD_SUBDIRECTORY(terrain/preprocess)

ADD_SUBDIRECTORY(atmo/atmo)
ADD_SUBDIRECTORY(ocean/ocean1)
ADD_SUBDIRECTORY(ocean/ocean2)

ADD_SUBDIRECTORY(graph/graph1)
ADD_SUBDIRECTORY(forest/trees1)

ADD_SUBDIRECTORY(river/river1)

ADD_SUBDIRECTORY(edit/edit1)
ADD_SUBDIRECTORY(edit/edit2)
ADD_SUBDIRECTORY(edit/edit3)
ADD_SUBDIRECTORY(edit/edit4)
