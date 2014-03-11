#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxScopedCharTypeBuffer_char {
public:
	typedef Luna< wxScopedCharTypeBuffer< char > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59324013) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxScopedCharTypeBuffer< char >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxScopedCharTypeBuffer< char >* rhs =(Luna< wxScopedCharTypeBuffer< char > >::check(L,2));
		wxScopedCharTypeBuffer< char >* self=(Luna< wxScopedCharTypeBuffer< char > >::check(L,1));
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

		wxScopedCharTypeBuffer< char >* self=(Luna< wxScopedCharTypeBuffer< char > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxScopedCharTypeBuffer< char >");
		
		return luna_dynamicCast(L,converters,"wxScopedCharTypeBuffer< char >",name);
	}

};

wxScopedCharTypeBuffer< char >* LunaTraits< wxScopedCharTypeBuffer< char > >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxScopedCharTypeBuffer< char > >::_bind_dtor(wxScopedCharTypeBuffer< char >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxScopedCharTypeBuffer< char > >::className[] = "wxScopedCharTypeBuffer_char";
const char LunaTraits< wxScopedCharTypeBuffer< char > >::fullName[] = "wxScopedCharTypeBuffer< char >";
const char LunaTraits< wxScopedCharTypeBuffer< char > >::moduleName[] = "wx";
const char* LunaTraits< wxScopedCharTypeBuffer< char > >::parents[] = {0};
const int LunaTraits< wxScopedCharTypeBuffer< char > >::hash = 59324013;
const int LunaTraits< wxScopedCharTypeBuffer< char > >::uniqueIDs[] = {59324013,0};

luna_RegType LunaTraits< wxScopedCharTypeBuffer< char > >::methods[] = {
	{"dynCast", &luna_wrapper_wxScopedCharTypeBuffer_char::_bind_dynCast},
	{"__eq", &luna_wrapper_wxScopedCharTypeBuffer_char::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxScopedCharTypeBuffer< char > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxScopedCharTypeBuffer< char > >::enumValues[] = {
	{0,0}
};


