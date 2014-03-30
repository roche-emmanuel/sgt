#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxToolBarBase {
public:
	typedef Luna< wxToolBarBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72996730) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxToolBarBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxToolBarBase* rhs =(Luna< wxToolBarBase >::check(L,2));
		wxToolBarBase* self=(Luna< wxToolBarBase >::check(L,1));
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

		wxToolBarBase* self=(Luna< wxToolBarBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxToolBarBase");
		
		return luna_dynamicCast(L,converters,"wxToolBarBase",name);
	}

};

wxToolBarBase* LunaTraits< wxToolBarBase >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxToolBarBase >::_bind_dtor(wxToolBarBase* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxToolBarBase >::className[] = "wxToolBarBase";
const char LunaTraits< wxToolBarBase >::fullName[] = "wxToolBarBase";
const char LunaTraits< wxToolBarBase >::moduleName[] = "wx";
const char* LunaTraits< wxToolBarBase >::parents[] = {0};
const int LunaTraits< wxToolBarBase >::hash = 72996730;
const int LunaTraits< wxToolBarBase >::uniqueIDs[] = {72996730,0};

luna_RegType LunaTraits< wxToolBarBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxToolBarBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxToolBarBase::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxToolBarBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolBarBase >::enumValues[] = {
	{0,0}
};


