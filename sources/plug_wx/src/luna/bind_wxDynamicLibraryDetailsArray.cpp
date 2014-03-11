#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxDynamicLibraryDetailsArray {
public:
	typedef Luna< wxDynamicLibraryDetailsArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75547918) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDynamicLibraryDetailsArray*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDynamicLibraryDetailsArray* rhs =(Luna< wxDynamicLibraryDetailsArray >::check(L,2));
		wxDynamicLibraryDetailsArray* self=(Luna< wxDynamicLibraryDetailsArray >::check(L,1));
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

		wxDynamicLibraryDetailsArray* self=(Luna< wxDynamicLibraryDetailsArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDynamicLibraryDetailsArray");
		
		return luna_dynamicCast(L,converters,"wxDynamicLibraryDetailsArray",name);
	}

};

wxDynamicLibraryDetailsArray* LunaTraits< wxDynamicLibraryDetailsArray >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxDynamicLibraryDetailsArray >::_bind_dtor(wxDynamicLibraryDetailsArray* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxDynamicLibraryDetailsArray >::className[] = "wxDynamicLibraryDetailsArray";
const char LunaTraits< wxDynamicLibraryDetailsArray >::fullName[] = "wxDynamicLibraryDetailsArray";
const char LunaTraits< wxDynamicLibraryDetailsArray >::moduleName[] = "wx";
const char* LunaTraits< wxDynamicLibraryDetailsArray >::parents[] = {0};
const int LunaTraits< wxDynamicLibraryDetailsArray >::hash = 75547918;
const int LunaTraits< wxDynamicLibraryDetailsArray >::uniqueIDs[] = {75547918,0};

luna_RegType LunaTraits< wxDynamicLibraryDetailsArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxDynamicLibraryDetailsArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDynamicLibraryDetailsArray::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxDynamicLibraryDetailsArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDynamicLibraryDetailsArray >::enumValues[] = {
	{0,0}
};


