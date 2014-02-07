
MACRO(ADD_MSVC_PRECOMPILED_HEADER PrecompiledHeader PrecompiledSource SourcesVar)
  IF(MSVC)
  	file(GLOB_RECURSE to_remove "*${PrecompiledSource}")
  	list(REMOVE_ITEM ${SourcesVar} ${to_remove})

    GET_FILENAME_COMPONENT(PrecompiledBasename ${PrecompiledHeader} NAME_WE)
    SET(PrecompiledBinary "${CMAKE_CURRENT_BINARY_DIR}/${PrecompiledBasename}.pch")
    SET(Sources ${${SourcesVar}})

    SET_SOURCE_FILES_PROPERTIES(${PrecompiledSource}
                                PROPERTIES COMPILE_FLAGS "/Yc\"${PrecompiledHeader}\" /Fp\"${PrecompiledBinary}\""
                                           OBJECT_OUTPUTS "${PrecompiledBinary}")
    SET_SOURCE_FILES_PROPERTIES(${Sources}
                                PROPERTIES COMPILE_FLAGS "/Yu\"${PrecompiledBinary}\" /FI\"${PrecompiledBinary}\" /Fp\"${PrecompiledBinary}\""
                                           OBJECT_DEPENDS "${PrecompiledBinary}")  
    # Add precompiled header to SourcesVar
    LIST(APPEND ${SourcesVar} ${PrecompiledSource})
  ENDIF(MSVC)
ENDMACRO(ADD_MSVC_PRECOMPILED_HEADER)


MACRO(COMPRESS_BINARY_TARGET)
  SET(THE_TARGET "${TARGET_NAME}")
  # MESSAGE("Adding compression for ${THE_TARGET}")
  
  ADD_CUSTOM_COMMAND(
    TARGET ${THE_TARGET}
    POST_BUILD
    COMMAND echo Compressing ${THE_TARGET}...
    COMMAND ${UPX} --best "$<TARGET_FILE:${THE_TARGET}>"
    COMMAND echo Compression done.
  )   
ENDMACRO(COMPRESS_BINARY_TARGET)

MACRO(GENERATE_LIBRARY_IMAGE dep libName libFile sourceVar)
  SET(destFile "${CMAKE_CURRENT_BINARY_DIR}/${libName}.cpp")

  LIST(APPEND ${sourceVar} ${destFile})
  
  # MESSAGE("Current target name is: ${TARGET_NAME}, dep is: ${dep}")
  
  SET(targetPath "${PROJECT_SOURCE_DIR}/${libFile}")
  SET(depList "")
  SET(lua_script "${PROJECT_SOURCE_DIR}/cmake/generate_binary_image.lua")

  # if a dependency is provided then we use it directly as source library file (when the target is available):
  IF(TARGET ${dep})
    get_property(lib_location TARGET ${dep} PROPERTY LOCATION)
    SET(targetPath "${lib_location}")
    SET(depList "${dep}")
    IF("${targetPath}" STREQUAL "")
      # restore library file name in that case:
      SET(targetPath "${PROJECT_SOURCE_DIR}/${libFile}")
    ENDIF()
    # MESSAGE("Target location is: ${targetPath}")
  ENDIF()
  
  ADD_CUSTOM_COMMAND(OUTPUT ${destFile}
    COMMAND echo "Generating library image ${libName}..."
    COMMAND ${LUA} -e "libFile='${targetPath}'; libName='${libName}'; destFile='${destFile}';" ${lua_script} 
    DEPENDS ${targetPath})
  
  # SET_SOFT_DEPENDENCIES(${TARGET_NAME}_images depList)
ENDMACRO(GENERATE_LIBRARY_IMAGE)
