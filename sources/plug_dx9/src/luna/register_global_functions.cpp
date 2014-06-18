#include <plug_common.h>


// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

