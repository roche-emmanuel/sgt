#include <plug_common.h>

#include <ork/core/FileLogger.h>
#include <ork/core/Object.h>
#include <ork/core/pstdint.h>
#include <ork/render/Texture.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,BUFFER_SIZE); lua_setfield(L,-2,"BUFFER_SIZE");
	lua_pushnumber(L,NULL); lua_setfield(L,-2,"NULL");
	lua_pushnumber(L,UINT8_MAX); lua_setfield(L,-2,"UINT8_MAX");
	lua_pushnumber(L,INT8_MAX); lua_setfield(L,-2,"INT8_MAX");
	lua_pushnumber(L,UINT16_MAX); lua_setfield(L,-2,"UINT16_MAX");
	lua_pushnumber(L,INT16_MAX); lua_setfield(L,-2,"INT16_MAX");
	lua_pushnumber(L,MAX_TEXTURE_UNITS); lua_setfield(L,-2,"MAX_TEXTURE_UNITS");
}

#ifdef __cplusplus
}
#endif

