
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

MACRO(COMPRESS_BINARY)
  IF(NOT USE_GLOBAL_COMPRESSION)
    COMPRESS_BINARY_TARGET()
  ENDIF()
ENDMACRO(COMPRESS_BINARY)

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
  ADD_DEPENDENCIES(${TARGET_NAME}_images ${dep})  
ENDMACRO(GENERATE_LIBRARY_IMAGE)

MACRO(GENERATE_EXT_LIBRARY_IMAGE libFile libName sourceVar)
  SET(destFile "${CMAKE_CURRENT_BINARY_DIR}/${libName}.cpp")
  LIST(APPEND ${sourceVar} ${destFile})

  SET(targetPath "${PROJECT_SOURCE_DIR}/${libFile}")
  GENERATE_BINARY_IMAGE(${libName} ${targetPath} sourceVar)    
ENDMACRO(GENERATE_EXT_LIBRARY_IMAGE)

MACRO(GENERATE_LUA_PACKAGE sourceVar)
  # Check if a source path is provided:
  SET(srcFolder "${ARGV1}")
  SET(destFolder "${CMAKE_CURRENT_BINARY_DIR}/")
  SET(destFile "${ARGV2}")
  
  IF("${srcFolder}" STREQUAL "")
    SET(srcFolder "${CMAKE_CURRENT_SOURCE_DIR}/../modules/")
  ENDIF()
  IF("${destFile}" STREQUAL "")
    SET(destFile "bindings")
  ENDIF()

  # write the complete file name:
  SET(destFileFull "${destFolder}${destFile}.cpp")
  SET(lua_script "${PROJECT_SOURCE_DIR}/cmake/generate_package.lua")

  # Add generated file to source list:
  LIST(APPEND ${sourceVar} ${destFileFull})
  
  # look for all the dependencies
  FILE(GLOB_RECURSE DEP_FILES "${srcFolder}*.lua" "${srcFolder}*.ttf" "${srcFolder}*.png" "${srcFolder}*.dll" "${srcFolder}*.hlsl" ) 
  # MESSAGE("Found dependencies: ${DEP_FILES}")
  
  ADD_CUSTOM_COMMAND(OUTPUT ${destFileFull}
    COMMAND echo "Generating lua package..."
    #COMMAND echo "Dep files: ${DEP_FILES}"
    COMMAND ${LUA} -e "project='${TARGET_NAME}'; src_path='${srcFolder}'; dest_path='${destFolder}'; dest_file='${destFile}';" ${lua_script}
    # COMMAND ${CMAKE_COMMAND} -E touch ${PROJECT_SOURCE_DIR}/cmake/Macros.cmake # touch the calling file
    DEPENDS ${DEP_FILES})

ENDMACRO(GENERATE_LUA_PACKAGE)

MACRO(GENERATE_REFLECTION STUB_NAME INTERFACE_FILES)
  SET(DOXFILE "doxyfile")
  
  STRING(REPLACE "/" "\\" DOX_TEMPLATE  "${PROJECT_SOURCE_DIR}/cmake/reflection_Doxyfile")
  SET(CAT_EXEC type)
  
  SET(CFGFILE generate.lua)
    
  ADD_CUSTOM_TARGET(
    ${TARGET_NAME}_gen
    # PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../include/luna
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../src/luna
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../include/luna/wrappers
    # COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../src/luna/wrappers
    COMMAND echo "Generating doxygen wrapper docs..."
    COMMAND echo INPUT=${${INTERFACE_FILES}} > ${DOXFILE}
    COMMAND echo FILE_PATTERNS=${FILE_PATTERNS} >> ${DOXFILE}
    COMMAND echo EXPAND_AS_DEFINED=${EXPAND_AS_DEFINED} >> ${DOXFILE}
    COMMAND echo PREDEFINED=_DOXYGEN=1 __DOXYGEN__=1 ${DOXY_PREDEFINED} >> ${DOXFILE}
    COMMAND echo INCLUDE_PATH=${${INTERFACE_FILES}} ${INCLUDE_PATH} >> ${DOXFILE}
    COMMAND echo INCLUDE_FILE_PATTERNS= >> ${DOXFILE}
    COMMAND echo EXCLUDE_PATTERNS= >> ${DOXFILE}
    COMMAND echo DOT_PATH=${DOT_DIR} >> ${DOXFILE}
    COMMAND ${CAT_EXEC} "${DOX_TEMPLATE}" >> ${DOXFILE}
    # Call doxygen on this file:
    COMMAND ${DOXYGEN} ${DOXFILE} > ${CMAKE_CURRENT_BINARY_DIR}/doxygen.log 2>&1
    # COMMAND ${DOXYGEN} ${DOXFILE}
    COMMAND echo "Generating lua reflection..."
    # cd ${SGT_PATH} && 
    COMMAND echo "project='${PLUG_NAME}'" > ${CFGFILE}
    COMMAND echo "sgt_path='${SGT2_DIR}/'" >> ${CFGFILE}
    COMMAND echo "root_project_path='${PROJECT_SOURCE_DIR}/'" >> ${CFGFILE}
    COMMAND echo "xml_path='${CMAKE_CURRENT_BINARY_DIR}/xml/'" >> ${CFGFILE}
    COMMAND echo "dofile('${PROJECT_SOURCE_DIR}/cmake/reflection_common.lua');" >> ${CFGFILE}
    COMMAND echo "dofile('${CMAKE_CURRENT_SOURCE_DIR}/../generate_reflection.lua');" >> ${CFGFILE}
    
    COMMAND echo "${SGTLAUNCHER} ${CFGFILE} --log sgt_reflection.log"
    COMMAND ${SGTLAUNCHER} ${CFGFILE} --log sgt_reflection.log > temp_log_file.log
    
    # COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt # touch the calling file.
    # COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/../CMakeLists.txt # touch the calling file.
    COMMAND echo "Reflection generation done."
  ) 
  
  ADD_DEPENDENCIES(${STUB_NAME} ${TARGET_NAME}_gen)
ENDMACRO(GENERATE_REFLECTION)

MACRO(ADD_FILES file_list regex)
    FILE(GLOB_RECURSE TEMP_FILES ${regex})
    LIST(APPEND ${file_list} ${TEMP_FILES})
ENDMACRO(ADD_FILES)

MACRO(REMOVE_FILES file_list regex)
    FILE(GLOB_RECURSE TEMP_FILES ${regex})
    LIST(REMOVE_ITEM ${file_list} ${TEMP_FILES})
ENDMACRO(REMOVE_FILES)
