#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_proland_CurveId {
public:
	typedef Luna< vector< proland::CurveId > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61157517) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< proland::CurveId >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::CurveId >* rhs =(Luna< vector< proland::CurveId > >::check(L,2));
		vector< proland::CurveId >* self=(Luna< vector< proland::CurveId > >::check(L,1));
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

		vector< proland::CurveId >* self=(Luna< vector< proland::CurveId > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< proland::CurveId >");
		
		return luna_dynamicCast(L,converters,"vector< proland::CurveId >",name);
	}

};

vector< proland::CurveId >* LunaTraits< vector< proland::CurveId > >::_bind_ctor(lua_State *L) {
	return new vector< proland::CurveId >();
}

void LunaTraits< vector< proland::CurveId > >::_bind_dtor(vector< proland::CurveId >* obj) {
	delete obj;
}

const char LunaTraits< vector< proland::CurveId > >::className[] = "vector_proland_CurveId";
const char LunaTraits< vector< proland::CurveId > >::fullName[] = "vector< proland::CurveId >";
const char LunaTraits< vector< proland::CurveId > >::moduleName[] = "land";
const char* LunaTraits< vector< proland::CurveId > >::parents[] = {0};
const int LunaTraits< vector< proland::CurveId > >::hash = 61157517;
const int LunaTraits< vector< proland::CurveId > >::uniqueIDs[] = {61157517,0};

luna_RegType LunaTraits< vector< proland::CurveId > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_proland_CurveId::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_proland_CurveId::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< proland::CurveId > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< proland::CurveId > >::enumValues[] = {
	{0,0}
};


