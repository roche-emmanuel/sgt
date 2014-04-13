#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ValueMatrix3_ork_MAT3F_float_ork_valueMatrix3f {
public:
	typedef Luna< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27913274) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* rhs =(Luna< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::check(L,2));
		ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* self=(Luna< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::check(L,1));
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

		ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* self=(Luna< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >");
		
		return luna_dynamicCast(L,converters,"ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >",name);
	}

};

ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::_bind_dtor(ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* obj) {
	delete obj;
}

const char LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::className[] = "ork_ValueMatrix3_ork_MAT3F_float_ork_valueMatrix3f";
const char LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::fullName[] = "ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >";
const char LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::moduleName[] = "land";
const char* LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::parents[] = {0};
const int LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::hash = 27913274;
const int LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::uniqueIDs[] = {27913274,0};

luna_RegType LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ValueMatrix3_ork_MAT3F_float_ork_valueMatrix3f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ValueMatrix3_ork_MAT3F_float_ork_valueMatrix3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::enumValues[] = {
	{0,0}
};


