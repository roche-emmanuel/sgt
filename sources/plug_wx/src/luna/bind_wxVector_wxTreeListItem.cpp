#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxVector_wxTreeListItem {
public:
	typedef Luna< wxVector< wxTreeListItem > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5676023) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxVector< wxTreeListItem >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxVector< wxTreeListItem >* rhs =(Luna< wxVector< wxTreeListItem > >::check(L,2));
		wxVector< wxTreeListItem >* self=(Luna< wxVector< wxTreeListItem > >::check(L,1));
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

		wxVector< wxTreeListItem >* self=(Luna< wxVector< wxTreeListItem > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVector< wxTreeListItem >");
		
		return luna_dynamicCast(L,converters,"wxVector< wxTreeListItem >",name);
	}

};

wxVector< wxTreeListItem >* LunaTraits< wxVector< wxTreeListItem > >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxVector< wxTreeListItem > >::_bind_dtor(wxVector< wxTreeListItem >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxVector< wxTreeListItem > >::className[] = "wxVector_wxTreeListItem";
const char LunaTraits< wxVector< wxTreeListItem > >::fullName[] = "wxVector< wxTreeListItem >";
const char LunaTraits< wxVector< wxTreeListItem > >::moduleName[] = "wx";
const char* LunaTraits< wxVector< wxTreeListItem > >::parents[] = {0};
const int LunaTraits< wxVector< wxTreeListItem > >::hash = 5676023;
const int LunaTraits< wxVector< wxTreeListItem > >::uniqueIDs[] = {5676023,0};

luna_RegType LunaTraits< wxVector< wxTreeListItem > >::methods[] = {
	{"dynCast", &luna_wrapper_wxVector_wxTreeListItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxVector_wxTreeListItem::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxVector< wxTreeListItem > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVector< wxTreeListItem > >::enumValues[] = {
	{0,0}
};


