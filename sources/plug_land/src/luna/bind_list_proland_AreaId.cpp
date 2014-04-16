#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_list_proland_AreaId {
public:
	typedef Luna< list< proland::AreaId > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63279285) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(list< proland::AreaId >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		list< proland::AreaId >* rhs =(Luna< list< proland::AreaId > >::check(L,2));
		list< proland::AreaId >* self=(Luna< list< proland::AreaId > >::check(L,1));
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

		list< proland::AreaId >* self=(Luna< list< proland::AreaId > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("list< proland::AreaId >");
		
		return luna_dynamicCast(L,converters,"list< proland::AreaId >",name);
	}

};

list< proland::AreaId >* LunaTraits< list< proland::AreaId > >::_bind_ctor(lua_State *L) {
	return new list< proland::AreaId >();
}

void LunaTraits< list< proland::AreaId > >::_bind_dtor(list< proland::AreaId >* obj) {
	delete obj;
}

const char LunaTraits< list< proland::AreaId > >::className[] = "list_proland_AreaId";
const char LunaTraits< list< proland::AreaId > >::fullName[] = "list< proland::AreaId >";
const char LunaTraits< list< proland::AreaId > >::moduleName[] = "land";
const char* LunaTraits< list< proland::AreaId > >::parents[] = {0};
const int LunaTraits< list< proland::AreaId > >::hash = 63279285;
const int LunaTraits< list< proland::AreaId > >::uniqueIDs[] = {63279285,0};

luna_RegType LunaTraits< list< proland::AreaId > >::methods[] = {
	{"dynCast", &luna_wrapper_list_proland_AreaId::_bind_dynCast},
	{"__eq", &luna_wrapper_list_proland_AreaId::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< list< proland::AreaId > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< list< proland::AreaId > >::enumValues[] = {
	{0,0}
};


