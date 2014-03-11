#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxWindowList {
public:
	typedef Luna< wxWindowList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85025491) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxWindowList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxWindowList* rhs =(Luna< wxWindowList >::check(L,2));
		wxWindowList* self=(Luna< wxWindowList >::check(L,1));
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

		wxWindowList* self=(Luna< wxWindowList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWindowList");
		
		return luna_dynamicCast(L,converters,"wxWindowList",name);
	}

};

wxWindowList* LunaTraits< wxWindowList >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxWindowList >::_bind_dtor(wxWindowList* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxWindowList >::className[] = "wxWindowList";
const char LunaTraits< wxWindowList >::fullName[] = "wxWindowList";
const char LunaTraits< wxWindowList >::moduleName[] = "wx";
const char* LunaTraits< wxWindowList >::parents[] = {0};
const int LunaTraits< wxWindowList >::hash = 85025491;
const int LunaTraits< wxWindowList >::uniqueIDs[] = {85025491,0};

luna_RegType LunaTraits< wxWindowList >::methods[] = {
	{"dynCast", &luna_wrapper_wxWindowList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxWindowList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowList >::enumValues[] = {
	{0,0}
};


