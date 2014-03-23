#include <plug_common.h>

#include <plug_extensions.h>

// Function checkers:
inline static bool _lg_typecheck_createGLCanvas(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( lua_istable(L,3)==0 ) return false;
	return true;
}


// Function binds:
// wxGLCanvas * createGLCanvas(wxWindow * parent, int id, lua_Table * attribList, lua_State * L)
static int _bind_createGLCanvas(lua_State *L) {
	if (!_lg_typecheck_createGLCanvas(L)) {
		luaL_error(L, "luna typecheck failed in wxGLCanvas * createGLCanvas(wxWindow * parent, int id, lua_Table * attribList, lua_State * L) function, expected prototype:\nwxGLCanvas * createGLCanvas(wxWindow * parent, int id, lua_Table * attribList, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
	int id=(int)lua_tointeger(L,2);

	wxGLCanvas * lret = ::createGLCanvas(parent, id, NULL, L);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxGLCanvas >::push(L,lret,false);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"osgWX");
	lua_pushcfunction(L, _bind_createGLCanvas); lua_setfield(L,-2,"createGLCanvas");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

