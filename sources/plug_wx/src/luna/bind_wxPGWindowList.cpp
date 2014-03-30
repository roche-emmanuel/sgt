#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxPGWindowList {
public:
	typedef Luna< wxPGWindowList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58315813) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGWindowList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGWindowList* rhs =(Luna< wxPGWindowList >::check(L,2));
		wxPGWindowList* self=(Luna< wxPGWindowList >::check(L,1));
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

		wxPGWindowList* self=(Luna< wxPGWindowList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGWindowList");
		
		return luna_dynamicCast(L,converters,"wxPGWindowList",name);
	}

};

wxPGWindowList* LunaTraits< wxPGWindowList >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxPGWindowList >::_bind_dtor(wxPGWindowList* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxPGWindowList >::className[] = "wxPGWindowList";
const char LunaTraits< wxPGWindowList >::fullName[] = "wxPGWindowList";
const char LunaTraits< wxPGWindowList >::moduleName[] = "wx";
const char* LunaTraits< wxPGWindowList >::parents[] = {0};
const int LunaTraits< wxPGWindowList >::hash = 58315813;
const int LunaTraits< wxPGWindowList >::uniqueIDs[] = {58315813,0};

luna_RegType LunaTraits< wxPGWindowList >::methods[] = {
	{"dynCast", &luna_wrapper_wxPGWindowList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGWindowList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxPGWindowList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGWindowList >::enumValues[] = {
	{0,0}
};


