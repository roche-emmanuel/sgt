#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxSplashScreenWindow {
public:
	typedef Luna< wxSplashScreenWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86566893) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSplashScreenWindow*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxSplashScreenWindow* rhs =(Luna< wxSplashScreenWindow >::check(L,2));
		wxSplashScreenWindow* self=(Luna< wxSplashScreenWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxSplashScreenWindow* self=(Luna< wxSplashScreenWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSplashScreenWindow");
		
		return luna_dynamicCast(L,converters,"wxSplashScreenWindow",name);
	}

};

wxSplashScreenWindow* LunaTraits< wxSplashScreenWindow >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxSplashScreenWindow >::_bind_dtor(wxSplashScreenWindow* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxSplashScreenWindow >::className[] = "wxSplashScreenWindow";
const char LunaTraits< wxSplashScreenWindow >::fullName[] = "wxSplashScreenWindow";
const char LunaTraits< wxSplashScreenWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSplashScreenWindow >::parents[] = {0};
const int LunaTraits< wxSplashScreenWindow >::hash = 86566893;
const int LunaTraits< wxSplashScreenWindow >::uniqueIDs[] = {86566893,0};

luna_RegType LunaTraits< wxSplashScreenWindow >::methods[] = {
	{"dynCast", &luna_wrapper_wxSplashScreenWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSplashScreenWindow::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxSplashScreenWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplashScreenWindow >::enumValues[] = {
	{0,0}
};


