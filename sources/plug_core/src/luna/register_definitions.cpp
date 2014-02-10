#include <plug_common.h>

#include <osg/Referenced>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,OSG_REFERENCED); lua_setfield(L,-2,"OSG_REFERENCED");
}

#ifdef __cplusplus
}
#endif

