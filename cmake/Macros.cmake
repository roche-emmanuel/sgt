
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

MACRO(GENERATE_BINARY_IMAGE libName libFile)
  SET(lua_script "${PROJECT_SOURCE_DIR}/cmake/generate_binary_image.lua")

  ADD_CUSTOM_COMMAND(OUTPUT ${destFile}
    COMMAND echo "Generating binary image ${libName}..."
    COMMAND ${LUA} -e "libFile='${libFile}'; libName='${libName}'; destFile='${destFile}';" ${lua_script} 
    DEPENDS ${libFile})
ENDMACRO(GENERATE_LIBRARY_IMAGE)

MACRO(GENERATE_LIBRARY_IMAGE dep libName sourceVar)
  SET(destFile "${CMAKE_CURRENT_BINARY_DIR}/${libName}.cpp")
  LIST(APPEND ${sourceVar} ${destFile})
   
  get_property(libFile TARGET ${dep} PROPERTY LOCATION)
  MESSAGE("Found library file ${libFile}")
  GENERATE_BINARY_IMAGE(${libName} ${libFile} sourceVar)    
ENDMACRO(GENERATE_LIBRARY_IMAGE)

MACRO(GENERATE_EXT_LIBRARY_IMAGE libFile libName sourceVar)
  SET(destFile "${CMAKE_CURRENT_BINARY_DIR}/${libName}.cpp")
  LIST(APPEND ${sourceVar} ${destFile})

  SET(targetPath "${PROJECT_SOURCE_DIR}/${libFile}")
  GENERATE_BINARY_IMAGE(${libName} ${targetPath} sourceVar)    
ENDMACRO(GENERATE_EXT_LIBRARY_IMAGE)
