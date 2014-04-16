#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_set_proland_AreaId {
public:
	typedef Luna< set< proland::AreaId > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22882411) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(set< proland::AreaId >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::AreaId >* rhs =(Luna< set< proland::AreaId > >::check(L,2));
		set< proland::AreaId >* self=(Luna< set< proland::AreaId > >::check(L,1));
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

		set< proland::AreaId >* self=(Luna< set< proland::AreaId > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("set< proland::AreaId >");
		
		return luna_dynamicCast(L,converters,"set< proland::AreaId >",name);
	}

};

set< proland::AreaId >* LunaTraits< set< proland::AreaId > >::_bind_ctor(lua_State *L) {
	return new set< proland::AreaId >();
}

void LunaTraits< set< proland::AreaId > >::_bind_dtor(set< proland::AreaId >* obj) {
	delete obj;
}

const char LunaTraits< set< proland::AreaId > >::className[] = "set_proland_AreaId";
const char LunaTraits< set< proland::AreaId > >::fullName[] = "set< proland::AreaId >";
const char LunaTraits< set< proland::AreaId > >::moduleName[] = "land";
const char* LunaTraits< set< proland::AreaId > >::parents[] = {0};
const int LunaTraits< set< proland::AreaId > >::hash = 22882411;
const int LunaTraits< set< proland::AreaId > >::uniqueIDs[] = {22882411,0};

luna_RegType LunaTraits< set< proland::AreaId > >::methods[] = {
	{"dynCast", &luna_wrapper_set_proland_AreaId::_bind_dynCast},
	{"__eq", &luna_wrapper_set_proland_AreaId::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< set< proland::AreaId > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< set< proland::AreaId > >::enumValues[] = {
	{0,0}
};


