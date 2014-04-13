#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform4_ork_VEC4I_int_int_ork_uniform4i_ork_value4i {
public:
	typedef Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9726470) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* rhs =(Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::check(L,2));
		ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* self=(Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::check(L,1));
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

		ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* self=(Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >",name);
	}

};

ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::_bind_dtor(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::className[] = "ork_Uniform4_ork_VEC4I_int_int_ork_uniform4i_ork_value4i";
const char LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::fullName[] = "ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >";
const char LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::parents[] = {0};
const int LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::hash = 9726470;
const int LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::uniqueIDs[] = {9726470,0};

luna_RegType LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform4_ork_VEC4I_int_int_ork_uniform4i_ork_value4i::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform4_ork_VEC4I_int_int_ork_uniform4i_ork_value4i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::enumValues[] = {
	{0,0}
};


