
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
    COMMAND echo "Compressing ${THE_TARGET}..."
    COMMAND ${UPX} --best "$<TARGET_FILE:${THE_TARGET}>"
    COMMAND echo "Compression done."
  )   
ENDMACRO(COMPRESS_BINARY_TARGET)
