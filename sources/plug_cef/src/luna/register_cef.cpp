#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_cef(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"cef");
	Luna< CefBase >::Register(L);
	Luna< CefRefCount >::Register(L);
	Luna< cef::CEFManager::Traits >::Register(L);
	Luna< cef::CEFViewBase::Traits >::Register(L);
	Luna< cef::CEFManager >::Register(L);
	Luna< cef::CEFViewBase >::Register(L);
	Luna< cef::DX9CEFManager >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"cef");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"cef");

	luna_pushModule(L,"cef");
	return 1;
}

#ifdef __cplusplus
}
#endif

