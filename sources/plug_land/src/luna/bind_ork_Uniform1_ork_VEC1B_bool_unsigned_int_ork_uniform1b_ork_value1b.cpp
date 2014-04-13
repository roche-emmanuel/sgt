#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform1_ork_VEC1B_bool_unsigned_int_ork_uniform1b_ork_value1b {
public:
	typedef Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63958889) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* rhs =(Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::check(L,2));
		ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* self=(Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::check(L,1));
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

		ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* self=(Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >",name);
	}

};

ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::_bind_dtor(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::className[] = "ork_Uniform1_ork_VEC1B_bool_unsigned_int_ork_uniform1b_ork_value1b";
const char LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::fullName[] = "ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >";
const char LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::parents[] = {0};
const int LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::hash = 63958889;
const int LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::uniqueIDs[] = {63958889,0};

luna_RegType LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform1_ork_VEC1B_bool_unsigned_int_ork_uniform1b_ork_value1b::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform1_ork_VEC1B_bool_unsigned_int_ork_uniform1b_ork_value1b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::enumValues[] = {
	{0,0}
};


