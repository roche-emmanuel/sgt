#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ValueMatrix3_ork_MAT3D_double_ork_valueMatrix3d {
public:
	typedef Luna< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9639623) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* rhs =(Luna< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::check(L,2));
		ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* self=(Luna< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::check(L,1));
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

		ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* self=(Luna< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >");
		
		return luna_dynamicCast(L,converters,"ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >",name);
	}

};

ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::_bind_dtor(ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* obj) {
	delete obj;
}

const char LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::className[] = "ork_ValueMatrix3_ork_MAT3D_double_ork_valueMatrix3d";
const char LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::fullName[] = "ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >";
const char LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::moduleName[] = "land";
const char* LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::parents[] = {0};
const int LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::hash = 9639623;
const int LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::uniqueIDs[] = {9639623,0};

luna_RegType LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ValueMatrix3_ork_MAT3D_double_ork_valueMatrix3d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ValueMatrix3_ork_MAT3D_double_ork_valueMatrix3d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::enumValues[] = {
	{0,0}
};


