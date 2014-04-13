#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform2_ork_VEC2B_bool_unsigned_int_ork_uniform2b_ork_value2b {
public:
	typedef Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96441088) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* rhs =(Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::check(L,2));
		ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* self=(Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::check(L,1));
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

		ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* self=(Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >",name);
	}

};

ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::_bind_dtor(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::className[] = "ork_Uniform2_ork_VEC2B_bool_unsigned_int_ork_uniform2b_ork_value2b";
const char LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::fullName[] = "ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >";
const char LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::parents[] = {0};
const int LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::hash = 96441088;
const int LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::uniqueIDs[] = {96441088,0};

luna_RegType LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform2_ork_VEC2B_bool_unsigned_int_ork_uniform2b_ork_value2b::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform2_ork_VEC2B_bool_unsigned_int_ork_uniform2b_ork_value2b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::enumValues[] = {
	{0,0}
};


