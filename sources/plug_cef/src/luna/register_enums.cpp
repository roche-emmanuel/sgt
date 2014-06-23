#include <plug_common.h>


#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum cef_value_type_t

	lua_pushnumber(L,::VTYPE_INVALID); lua_setfield(L,-2,"VTYPE_INVALID");
	lua_pushnumber(L,::VTYPE_NULL); lua_setfield(L,-2,"VTYPE_NULL");
	lua_pushnumber(L,::VTYPE_BOOL); lua_setfield(L,-2,"VTYPE_BOOL");
	lua_pushnumber(L,::VTYPE_INT); lua_setfield(L,-2,"VTYPE_INT");
	lua_pushnumber(L,::VTYPE_DOUBLE); lua_setfield(L,-2,"VTYPE_DOUBLE");
	lua_pushnumber(L,::VTYPE_STRING); lua_setfield(L,-2,"VTYPE_STRING");
	lua_pushnumber(L,::VTYPE_BINARY); lua_setfield(L,-2,"VTYPE_BINARY");
	lua_pushnumber(L,::VTYPE_DICTIONARY); lua_setfield(L,-2,"VTYPE_DICTIONARY");
	lua_pushnumber(L,::VTYPE_LIST); lua_setfield(L,-2,"VTYPE_LIST");

	lua_setfield(L,-2,"cef_value_type_t");

	lua_pushnumber(L,::VTYPE_INVALID); lua_setfield(L,-2,"VTYPE_INVALID");
	lua_pushnumber(L,::VTYPE_NULL); lua_setfield(L,-2,"VTYPE_NULL");
	lua_pushnumber(L,::VTYPE_BOOL); lua_setfield(L,-2,"VTYPE_BOOL");
	lua_pushnumber(L,::VTYPE_INT); lua_setfield(L,-2,"VTYPE_INT");
	lua_pushnumber(L,::VTYPE_DOUBLE); lua_setfield(L,-2,"VTYPE_DOUBLE");
	lua_pushnumber(L,::VTYPE_STRING); lua_setfield(L,-2,"VTYPE_STRING");
	lua_pushnumber(L,::VTYPE_BINARY); lua_setfield(L,-2,"VTYPE_BINARY");
	lua_pushnumber(L,::VTYPE_DICTIONARY); lua_setfield(L,-2,"VTYPE_DICTIONARY");
	lua_pushnumber(L,::VTYPE_LIST); lua_setfield(L,-2,"VTYPE_LIST");


}

#ifdef __cplusplus
}
#endif


