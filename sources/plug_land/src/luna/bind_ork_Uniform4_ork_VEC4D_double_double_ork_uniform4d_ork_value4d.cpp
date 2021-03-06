#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform4_ork_VEC4D_double_double_ork_uniform4d_ork_value4d {
public:
	typedef Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11698505) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* rhs =(Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::check(L,2));
		ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* self=(Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::check(L,1));
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

		ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* self=(Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >",name);
	}

};

ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::_bind_dtor(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::className[] = "ork_Uniform4_ork_VEC4D_double_double_ork_uniform4d_ork_value4d";
const char LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::fullName[] = "ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >";
const char LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::parents[] = {0};
const int LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::hash = 11698505;
const int LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::uniqueIDs[] = {11698505,0};

luna_RegType LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform4_ork_VEC4D_double_double_ork_uniform4d_ork_value4d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform4_ork_VEC4D_double_double_ork_uniform4d_ork_value4d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::enumValues[] = {
	{0,0}
};


