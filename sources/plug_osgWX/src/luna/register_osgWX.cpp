#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_osgWX(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"osgWX");
	Luna< GraphicsWindowWX >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"osgWX");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"osgWX");

	luna_pushModule(L,"osgWX");
	return 1;
}

#ifdef __cplusplus
}
#endif

