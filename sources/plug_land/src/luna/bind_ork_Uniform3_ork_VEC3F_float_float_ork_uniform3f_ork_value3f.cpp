#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform3_ork_VEC3F_float_float_ork_uniform3f_ork_value3f {
public:
	typedef Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98586650) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* rhs =(Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::check(L,2));
		ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* self=(Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::check(L,1));
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

		ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* self=(Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >",name);
	}

};

ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::_bind_dtor(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::className[] = "ork_Uniform3_ork_VEC3F_float_float_ork_uniform3f_ork_value3f";
const char LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::fullName[] = "ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >";
const char LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::parents[] = {0};
const int LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::hash = 98586650;
const int LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::uniqueIDs[] = {98586650,0};

luna_RegType LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform3_ork_VEC3F_float_float_ork_uniform3f_ork_value3f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform3_ork_VEC3F_float_float_ork_uniform3f_ork_value3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::enumValues[] = {
	{0,0}
};


