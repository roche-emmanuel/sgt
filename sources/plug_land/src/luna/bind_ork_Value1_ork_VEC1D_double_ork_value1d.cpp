#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value1_ork_VEC1D_double_ork_value1d {
public:
	typedef Luna< ork::Value1< ork::VEC1D, double, ork::value1d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64085620) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value1< ork::VEC1D, double, ork::value1d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value1< ork::VEC1D, double, ork::value1d >* rhs =(Luna< ork::Value1< ork::VEC1D, double, ork::value1d > >::check(L,2));
		ork::Value1< ork::VEC1D, double, ork::value1d >* self=(Luna< ork::Value1< ork::VEC1D, double, ork::value1d > >::check(L,1));
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

		ork::Value1< ork::VEC1D, double, ork::value1d >* self=(Luna< ork::Value1< ork::VEC1D, double, ork::value1d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value1< ork::VEC1D, double, ork::value1d >");
		
		return luna_dynamicCast(L,converters,"ork::Value1< ork::VEC1D, double, ork::value1d >",name);
	}

};

ork::Value1< ork::VEC1D, double, ork::value1d >* LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::_bind_dtor(ork::Value1< ork::VEC1D, double, ork::value1d >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::className[] = "ork_Value1_ork_VEC1D_double_ork_value1d";
const char LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::fullName[] = "ork::Value1< ork::VEC1D, double, ork::value1d >";
const char LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::moduleName[] = "land";
const char* LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::parents[] = {0};
const int LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::hash = 64085620;
const int LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::uniqueIDs[] = {64085620,0};

luna_RegType LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value1_ork_VEC1D_double_ork_value1d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value1_ork_VEC1D_double_ork_value1d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > >::enumValues[] = {
	{0,0}
};


