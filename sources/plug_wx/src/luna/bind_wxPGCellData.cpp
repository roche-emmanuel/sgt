#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxPGCellData {
public:
	typedef Luna< wxPGCellData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,966244) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGCellData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGCellData* rhs =(Luna< wxPGCellData >::check(L,2));
		wxPGCellData* self=(Luna< wxPGCellData >::check(L,1));
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

		wxPGCellData* self=(Luna< wxPGCellData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGCellData");
		
		return luna_dynamicCast(L,converters,"wxPGCellData",name);
	}

};

wxPGCellData* LunaTraits< wxPGCellData >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxPGCellData >::_bind_dtor(wxPGCellData* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxPGCellData >::className[] = "wxPGCellData";
const char LunaTraits< wxPGCellData >::fullName[] = "wxPGCellData";
const char LunaTraits< wxPGCellData >::moduleName[] = "wx";
const char* LunaTraits< wxPGCellData >::parents[] = {0};
const int LunaTraits< wxPGCellData >::hash = 966244;
const int LunaTraits< wxPGCellData >::uniqueIDs[] = {966244,0};

luna_RegType LunaTraits< wxPGCellData >::methods[] = {
	{"dynCast", &luna_wrapper_wxPGCellData::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGCellData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxPGCellData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGCellData >::enumValues[] = {
	{0,0}
};


