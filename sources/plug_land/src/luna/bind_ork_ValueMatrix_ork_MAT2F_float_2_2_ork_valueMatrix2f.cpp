#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ValueMatrix_ork_MAT2F_float_2_2_ork_valueMatrix2f {
public:
	typedef Luna< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45019609) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* rhs =(Luna< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::check(L,2));
		ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* self=(Luna< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::check(L,1));
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

		ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* self=(Luna< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >");
		
		return luna_dynamicCast(L,converters,"ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >",name);
	}

};

ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::_bind_dtor(ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* obj) {
	delete obj;
}

const char LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::className[] = "ork_ValueMatrix_ork_MAT2F_float_2_2_ork_valueMatrix2f";
const char LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::fullName[] = "ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >";
const char LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::moduleName[] = "land";
const char* LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::parents[] = {0};
const int LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::hash = 45019609;
const int LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::uniqueIDs[] = {45019609,0};

luna_RegType LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ValueMatrix_ork_MAT2F_float_2_2_ork_valueMatrix2f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ValueMatrix_ork_MAT2F_float_2_2_ork_valueMatrix2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::enumValues[] = {
	{0,0}
};


