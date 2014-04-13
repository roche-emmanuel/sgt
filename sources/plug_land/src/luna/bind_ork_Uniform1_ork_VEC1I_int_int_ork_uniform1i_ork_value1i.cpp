#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform1_ork_VEC1I_int_int_ork_uniform1i_ork_value1i {
public:
	typedef Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86556118) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* rhs =(Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::check(L,2));
		ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* self=(Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::check(L,1));
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

		ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* self=(Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >",name);
	}

};

ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::_bind_dtor(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::className[] = "ork_Uniform1_ork_VEC1I_int_int_ork_uniform1i_ork_value1i";
const char LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::fullName[] = "ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >";
const char LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::parents[] = {0};
const int LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::hash = 86556118;
const int LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::uniqueIDs[] = {86556118,0};

luna_RegType LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform1_ork_VEC1I_int_int_ork_uniform1i_ork_value1i::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform1_ork_VEC1I_int_int_ork_uniform1i_ork_value1i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::enumValues[] = {
	{0,0}
};


