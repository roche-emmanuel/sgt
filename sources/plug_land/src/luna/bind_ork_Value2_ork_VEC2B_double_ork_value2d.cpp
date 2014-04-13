#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value2_ork_VEC2B_double_ork_value2d {
public:
	typedef Luna< ork::Value2< ork::VEC2B, double, ork::value2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87392890) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value2< ork::VEC2B, double, ork::value2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value2< ork::VEC2B, double, ork::value2d >* rhs =(Luna< ork::Value2< ork::VEC2B, double, ork::value2d > >::check(L,2));
		ork::Value2< ork::VEC2B, double, ork::value2d >* self=(Luna< ork::Value2< ork::VEC2B, double, ork::value2d > >::check(L,1));
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

		ork::Value2< ork::VEC2B, double, ork::value2d >* self=(Luna< ork::Value2< ork::VEC2B, double, ork::value2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value2< ork::VEC2B, double, ork::value2d >");
		
		return luna_dynamicCast(L,converters,"ork::Value2< ork::VEC2B, double, ork::value2d >",name);
	}

};

ork::Value2< ork::VEC2B, double, ork::value2d >* LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::_bind_dtor(ork::Value2< ork::VEC2B, double, ork::value2d >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::className[] = "ork_Value2_ork_VEC2B_double_ork_value2d";
const char LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::fullName[] = "ork::Value2< ork::VEC2B, double, ork::value2d >";
const char LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::moduleName[] = "land";
const char* LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::parents[] = {0};
const int LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::hash = 87392890;
const int LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::uniqueIDs[] = {87392890,0};

luna_RegType LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value2_ork_VEC2B_double_ork_value2d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value2_ork_VEC2B_double_ork_value2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > >::enumValues[] = {
	{0,0}
};


