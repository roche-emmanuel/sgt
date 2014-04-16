#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_ork_vec2i {
public:
	typedef Luna< vector< ork::vec2i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55797744) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< ork::vec2i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::vec2i >* rhs =(Luna< vector< ork::vec2i > >::check(L,2));
		vector< ork::vec2i >* self=(Luna< vector< ork::vec2i > >::check(L,1));
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

		vector< ork::vec2i >* self=(Luna< vector< ork::vec2i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< ork::vec2i >");
		
		return luna_dynamicCast(L,converters,"vector< ork::vec2i >",name);
	}

};

vector< ork::vec2i >* LunaTraits< vector< ork::vec2i > >::_bind_ctor(lua_State *L) {
	return new vector< ork::vec2i >();
}

void LunaTraits< vector< ork::vec2i > >::_bind_dtor(vector< ork::vec2i >* obj) {
	delete obj;
}

const char LunaTraits< vector< ork::vec2i > >::className[] = "vector_ork_vec2i";
const char LunaTraits< vector< ork::vec2i > >::fullName[] = "vector< ork::vec2i >";
const char LunaTraits< vector< ork::vec2i > >::moduleName[] = "land";
const char* LunaTraits< vector< ork::vec2i > >::parents[] = {0};
const int LunaTraits< vector< ork::vec2i > >::hash = 55797744;
const int LunaTraits< vector< ork::vec2i > >::uniqueIDs[] = {55797744,0};

luna_RegType LunaTraits< vector< ork::vec2i > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_ork_vec2i::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_ork_vec2i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< ork::vec2i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< ork::vec2i > >::enumValues[] = {
	{0,0}
};


