#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_ork_vec2d {
public:
	typedef Luna< vector< ork::vec2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55792939) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< ork::vec2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::vec2d >* rhs =(Luna< vector< ork::vec2d > >::check(L,2));
		vector< ork::vec2d >* self=(Luna< vector< ork::vec2d > >::check(L,1));
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

		vector< ork::vec2d >* self=(Luna< vector< ork::vec2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< ork::vec2d >");
		
		return luna_dynamicCast(L,converters,"vector< ork::vec2d >",name);
	}

};

vector< ork::vec2d >* LunaTraits< vector< ork::vec2d > >::_bind_ctor(lua_State *L) {
	return new vector< ork::vec2d >();
}

void LunaTraits< vector< ork::vec2d > >::_bind_dtor(vector< ork::vec2d >* obj) {
	delete obj;
}

const char LunaTraits< vector< ork::vec2d > >::className[] = "vector_ork_vec2d";
const char LunaTraits< vector< ork::vec2d > >::fullName[] = "vector< ork::vec2d >";
const char LunaTraits< vector< ork::vec2d > >::moduleName[] = "land";
const char* LunaTraits< vector< ork::vec2d > >::parents[] = {0};
const int LunaTraits< vector< ork::vec2d > >::hash = 55792939;
const int LunaTraits< vector< ork::vec2d > >::uniqueIDs[] = {55792939,0};

luna_RegType LunaTraits< vector< ork::vec2d > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_ork_vec2d::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_ork_vec2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< ork::vec2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< ork::vec2d > >::enumValues[] = {
	{0,0}
};


