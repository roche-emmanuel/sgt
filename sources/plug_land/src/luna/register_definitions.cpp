#include <plug_common.h>

#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/DrawPlantsShadowTask.h>
#include <ork/core/FileLogger.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowTile.h>
#include <ork/core/Object.h>
#include <ork/render/Texture.h>
#include <proland/particles/WorldParticleLayer.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,MAX_SHADOW_MAPS); lua_setfield(L,-2,"MAX_SHADOW_MAPS");
	lua_pushnumber(L,BUFFER_SIZE); lua_setfield(L,-2,"BUFFER_SIZE");
	lua_pushnumber(L,MAX_BANK_NUMBER); lua_setfield(L,-2,"MAX_BANK_NUMBER");
	lua_pushnumber(L,MAX_NUM_DIST_CELLS); lua_setfield(L,-2,"MAX_NUM_DIST_CELLS");
	lua_pushnumber(L,NULL); lua_setfield(L,-2,"NULL");
	lua_pushnumber(L,MAX_TEXTURE_UNITS); lua_setfield(L,-2,"MAX_TEXTURE_UNITS");
	lua_pushnumber(L,UNINITIALIZED); lua_setfield(L,-2,"UNINITIALIZED");
}

#ifdef __cplusplus
}
#endif

