#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_proland_CurvePart_ptr {
public:
	typedef Luna< vector< proland::CurvePart * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60197354) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< proland::CurvePart * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::CurvePart * >* rhs =(Luna< vector< proland::CurvePart * > >::check(L,2));
		vector< proland::CurvePart * >* self=(Luna< vector< proland::CurvePart * > >::check(L,1));
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

		vector< proland::CurvePart * >* self=(Luna< vector< proland::CurvePart * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< proland::CurvePart * >");
		
		return luna_dynamicCast(L,converters,"vector< proland::CurvePart * >",name);
	}

};

vector< proland::CurvePart * >* LunaTraits< vector< proland::CurvePart * > >::_bind_ctor(lua_State *L) {
	return new vector< proland::CurvePart * >();
}

void LunaTraits< vector< proland::CurvePart * > >::_bind_dtor(vector< proland::CurvePart * >* obj) {
	delete obj;
}

const char LunaTraits< vector< proland::CurvePart * > >::className[] = "vector_proland_CurvePart_ptr";
const char LunaTraits< vector< proland::CurvePart * > >::fullName[] = "vector< proland::CurvePart * >";
const char LunaTraits< vector< proland::CurvePart * > >::moduleName[] = "land";
const char* LunaTraits< vector< proland::CurvePart * > >::parents[] = {0};
const int LunaTraits< vector< proland::CurvePart * > >::hash = 60197354;
const int LunaTraits< vector< proland::CurvePart * > >::uniqueIDs[] = {60197354,0};

luna_RegType LunaTraits< vector< proland::CurvePart * > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_proland_CurvePart_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_proland_CurvePart_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< proland::CurvePart * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< proland::CurvePart * > >::enumValues[] = {
	{0,0}
};


