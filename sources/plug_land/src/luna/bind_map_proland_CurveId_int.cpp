#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_map_proland_CurveId_int {
public:
	typedef Luna< map< proland::CurveId, int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87264125) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(map< proland::CurveId, int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		map< proland::CurveId, int >* rhs =(Luna< map< proland::CurveId, int > >::check(L,2));
		map< proland::CurveId, int >* self=(Luna< map< proland::CurveId, int > >::check(L,1));
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

		map< proland::CurveId, int >* self=(Luna< map< proland::CurveId, int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("map< proland::CurveId, int >");
		
		return luna_dynamicCast(L,converters,"map< proland::CurveId, int >",name);
	}

};

map< proland::CurveId, int >* LunaTraits< map< proland::CurveId, int > >::_bind_ctor(lua_State *L) {
	return new map< proland::CurveId, int >();
}

void LunaTraits< map< proland::CurveId, int > >::_bind_dtor(map< proland::CurveId, int >* obj) {
	delete obj;
}

const char LunaTraits< map< proland::CurveId, int > >::className[] = "map_proland_CurveId_int";
const char LunaTraits< map< proland::CurveId, int > >::fullName[] = "map< proland::CurveId, int >";
const char LunaTraits< map< proland::CurveId, int > >::moduleName[] = "land";
const char* LunaTraits< map< proland::CurveId, int > >::parents[] = {0};
const int LunaTraits< map< proland::CurveId, int > >::hash = 87264125;
const int LunaTraits< map< proland::CurveId, int > >::uniqueIDs[] = {87264125,0};

luna_RegType LunaTraits< map< proland::CurveId, int > >::methods[] = {
	{"dynCast", &luna_wrapper_map_proland_CurveId_int::_bind_dynCast},
	{"__eq", &luna_wrapper_map_proland_CurveId_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< map< proland::CurveId, int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< map< proland::CurveId, int > >::enumValues[] = {
	{0,0}
};


