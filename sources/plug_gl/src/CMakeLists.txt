SET(TARGET_DIR "./modules")

INCLUDE_DIRECTORIES(../include)

INCLUDE_DIRECTORIES(${LUA_INC_DIR})
LINK_DIRECTORIES (${LUA_LIB_DIR})

ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE)

# GL plugin
SET(PLUG_NAME "luagl")
SET(TARGET_NAME "plug_${PLUG_NAME}")

SET(SOURCE_FILES luagl.c 
	luagl_util.c
	luagl_const.c
	luagl.def
	../include/luagl.h
	../include/luagl_const.h
	../include/luagl_util.h)
SET(LIBS ${GL_LIBS})

BUILD_LUA_PLUGIN()

# mysql plugin
SET(PLUG_NAME "luaglu")
SET(TARGET_NAME "plug_${PLUG_NAME}")

SET(SOURCE_FILES luaglu.c
	luagl.c
	luagl_util.c
	luagl_const.c
	luaglu.def
	../include/luagl.h
	../include/luagl_const.h
	../include/luagl_util.h
	../include/luaglu.h)
SET(LIBS ${GL_LIBS} plug_luagl)

BUILD_LUA_PLUGIN()


