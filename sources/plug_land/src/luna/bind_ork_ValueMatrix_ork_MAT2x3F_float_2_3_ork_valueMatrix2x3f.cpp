#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ValueMatrix_ork_MAT2x3F_float_2_3_ork_valueMatrix2x3f {
public:
	typedef Luna< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43912679) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* rhs =(Luna< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::check(L,2));
		ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* self=(Luna< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::check(L,1));
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

		ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* self=(Luna< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >");
		
		return luna_dynamicCast(L,converters,"ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >",name);
	}

};

ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::_bind_dtor(ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* obj) {
	delete obj;
}

const char LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::className[] = "ork_ValueMatrix_ork_MAT2x3F_float_2_3_ork_valueMatrix2x3f";
const char LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::fullName[] = "ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >";
const char LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::moduleName[] = "land";
const char* LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::parents[] = {0};
const int LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::hash = 43912679;
const int LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::uniqueIDs[] = {43912679,0};

luna_RegType LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ValueMatrix_ork_MAT2x3F_float_2_3_ork_valueMatrix2x3f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ValueMatrix_ork_MAT2x3F_float_2_3_ork_valueMatrix2x3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::enumValues[] = {
	{0,0}
};


