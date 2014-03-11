#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxDirFilterListCtrl {
public:
	typedef Luna< wxDirFilterListCtrl > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63024827) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDirFilterListCtrl*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDirFilterListCtrl* rhs =(Luna< wxDirFilterListCtrl >::check(L,2));
		wxDirFilterListCtrl* self=(Luna< wxDirFilterListCtrl >::check(L,1));
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

		wxDirFilterListCtrl* self=(Luna< wxDirFilterListCtrl >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDirFilterListCtrl");
		
		return luna_dynamicCast(L,converters,"wxDirFilterListCtrl",name);
	}

};

wxDirFilterListCtrl* LunaTraits< wxDirFilterListCtrl >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxDirFilterListCtrl >::_bind_dtor(wxDirFilterListCtrl* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxDirFilterListCtrl >::className[] = "wxDirFilterListCtrl";
const char LunaTraits< wxDirFilterListCtrl >::fullName[] = "wxDirFilterListCtrl";
const char LunaTraits< wxDirFilterListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDirFilterListCtrl >::parents[] = {0};
const int LunaTraits< wxDirFilterListCtrl >::hash = 63024827;
const int LunaTraits< wxDirFilterListCtrl >::uniqueIDs[] = {63024827,0};

luna_RegType LunaTraits< wxDirFilterListCtrl >::methods[] = {
	{"dynCast", &luna_wrapper_wxDirFilterListCtrl::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDirFilterListCtrl::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxDirFilterListCtrl >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDirFilterListCtrl >::enumValues[] = {
	{0,0}
};


