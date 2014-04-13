#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value4_ork_VEC4B_double_ork_value4d {
public:
	typedef Luna< ork::Value4< ork::VEC4B, double, ork::value4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91515427) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value4< ork::VEC4B, double, ork::value4d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value4< ork::VEC4B, double, ork::value4d >* rhs =(Luna< ork::Value4< ork::VEC4B, double, ork::value4d > >::check(L,2));
		ork::Value4< ork::VEC4B, double, ork::value4d >* self=(Luna< ork::Value4< ork::VEC4B, double, ork::value4d > >::check(L,1));
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

		ork::Value4< ork::VEC4B, double, ork::value4d >* self=(Luna< ork::Value4< ork::VEC4B, double, ork::value4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value4< ork::VEC4B, double, ork::value4d >");
		
		return luna_dynamicCast(L,converters,"ork::Value4< ork::VEC4B, double, ork::value4d >",name);
	}

};

ork::Value4< ork::VEC4B, double, ork::value4d >* LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::_bind_dtor(ork::Value4< ork::VEC4B, double, ork::value4d >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::className[] = "ork_Value4_ork_VEC4B_double_ork_value4d";
const char LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::fullName[] = "ork::Value4< ork::VEC4B, double, ork::value4d >";
const char LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::moduleName[] = "land";
const char* LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::parents[] = {0};
const int LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::hash = 91515427;
const int LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::uniqueIDs[] = {91515427,0};

luna_RegType LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value4_ork_VEC4B_double_ork_value4d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value4_ork_VEC4B_double_ork_value4d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > >::enumValues[] = {
	{0,0}
};


