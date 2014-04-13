#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ValueMatrix_ork_MAT3x4D_double_3_4_ork_valueMatrix3x4d {
public:
	typedef Luna< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1106228) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* rhs =(Luna< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::check(L,2));
		ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* self=(Luna< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::check(L,1));
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

		ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* self=(Luna< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >");
		
		return luna_dynamicCast(L,converters,"ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >",name);
	}

};

ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::_bind_dtor(ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* obj) {
	delete obj;
}

const char LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::className[] = "ork_ValueMatrix_ork_MAT3x4D_double_3_4_ork_valueMatrix3x4d";
const char LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::fullName[] = "ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >";
const char LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::moduleName[] = "land";
const char* LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::parents[] = {0};
const int LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::hash = 1106228;
const int LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::uniqueIDs[] = {1106228,0};

luna_RegType LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ValueMatrix_ork_MAT3x4D_double_3_4_ork_valueMatrix3x4d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ValueMatrix_ork_MAT3x4D_double_3_4_ork_valueMatrix3x4d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::enumValues[] = {
	{0,0}
};


