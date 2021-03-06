#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxMenuItemList {
public:
	typedef Luna< wxMenuItemList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4556242) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMenuItemList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItemList* rhs =(Luna< wxMenuItemList >::check(L,2));
		wxMenuItemList* self=(Luna< wxMenuItemList >::check(L,1));
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

		wxMenuItemList* self=(Luna< wxMenuItemList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMenuItemList");
		
		return luna_dynamicCast(L,converters,"wxMenuItemList",name);
	}

};

wxMenuItemList* LunaTraits< wxMenuItemList >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxMenuItemList >::_bind_dtor(wxMenuItemList* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxMenuItemList >::className[] = "wxMenuItemList";
const char LunaTraits< wxMenuItemList >::fullName[] = "wxMenuItemList";
const char LunaTraits< wxMenuItemList >::moduleName[] = "wx";
const char* LunaTraits< wxMenuItemList >::parents[] = {0};
const int LunaTraits< wxMenuItemList >::hash = 4556242;
const int LunaTraits< wxMenuItemList >::uniqueIDs[] = {4556242,0};

luna_RegType LunaTraits< wxMenuItemList >::methods[] = {
	{"dynCast", &luna_wrapper_wxMenuItemList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMenuItemList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuItemList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuItemList >::enumValues[] = {
	{0,0}
};


