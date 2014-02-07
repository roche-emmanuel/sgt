CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# The name of this project:
PROJECT(SGT)
SET(PROJECT_VERSION 1.0)

# Include the macro definitions:
INCLUDE(cmake/Macros.cmake)

# Include the config:
INCLUDE(cmake/Config.cmake)

# Include the dependencies definitions:
INCLUDE(cmake/Dependencies.cmake)

SET(CMAKE_MODULE_PATH "cmake ${CMAKE_MODULE_PATH}")

ADD_SUBDIRECTORY(sources)
