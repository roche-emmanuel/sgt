#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxGridCellCoordsArray {
public:
	typedef Luna< wxGridCellCoordsArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30821760) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellCoordsArray*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellCoordsArray* rhs =(Luna< wxGridCellCoordsArray >::check(L,2));
		wxGridCellCoordsArray* self=(Luna< wxGridCellCoordsArray >::check(L,1));
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

		wxGridCellCoordsArray* self=(Luna< wxGridCellCoordsArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCellCoordsArray");
		
		return luna_dynamicCast(L,converters,"wxGridCellCoordsArray",name);
	}

};

wxGridCellCoordsArray* LunaTraits< wxGridCellCoordsArray >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxGridCellCoordsArray >::_bind_dtor(wxGridCellCoordsArray* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxGridCellCoordsArray >::className[] = "wxGridCellCoordsArray";
const char LunaTraits< wxGridCellCoordsArray >::fullName[] = "wxGridCellCoordsArray";
const char LunaTraits< wxGridCellCoordsArray >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellCoordsArray >::parents[] = {0};
const int LunaTraits< wxGridCellCoordsArray >::hash = 30821760;
const int LunaTraits< wxGridCellCoordsArray >::uniqueIDs[] = {30821760,0};

luna_RegType LunaTraits< wxGridCellCoordsArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxGridCellCoordsArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridCellCoordsArray::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellCoordsArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellCoordsArray >::enumValues[] = {
	{0,0}
};


