INCLUDE_DIRECTORIES(${BOOST_INC_DIR})
LINK_DIRECTORIES (${BOOST_LIB_DIR})

INCLUDE_DIRECTORIES(${OSG_INC_DIR})
LINK_DIRECTORIES (${OSG_LIB_DIR})

INCLUDE_DIRECTORIES(${LUA_INC_DIR})
LINK_DIRECTORIES (${LUA_LIB_DIR})

ADD_SUBDIRECTORY(ModuleLoader)
ADD_SUBDIRECTORY(sgtLuna)
ADD_SUBDIRECTORY(sgtCore)

ADD_SUBDIRECTORY(lua_core)
ADD_SUBDIRECTORY(lua_tests)

ADD_SUBDIRECTORY(plug_lfs)
ADD_SUBDIRECTORY(plug_core)

ADD_SUBDIRECTORY(plug_doxmlparser)
ADD_SUBDIRECTORY(plug_lpeg)

# ADD_SUBDIRECTORY(plug_osg)
# ADD_SUBDIRECTORY(plug_wx)

ADD_SUBDIRECTORY(plug_iconv)

ADD_SUBDIRECTORY(plug_gl)
ADD_SUBDIRECTORY(plug_opengl)
ADD_SUBDIRECTORY(plug_osgWX)

ADD_SUBDIRECTORY(sgtLauncher)

# Proland support experiment:
# ADD_SUBDIRECTORY(ork)
# ADD_SUBDIRECTORY(proland)
# ADD_SUBDIRECTORY(plug_land)


# Python support experiment:
# ADD_SUBDIRECTORY(lunatic_python27)

# DIrectX 9 support:
ADD_SUBDIRECTORY(plug_dx9)

# CEF support experiment:
ADD_SUBDIRECTORY(cef_process)
ADD_SUBDIRECTORY(plug_cef)

# CEF support for MXEngine:
ADD_SUBDIRECTORY(lua_mxcef)

# Not sure why this template_launcher project is here ?
# ADD_SUBDIRECTORY(template_launcher)
