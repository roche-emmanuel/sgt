#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform2_ork_VEC2F_float_float_ork_uniform2f_ork_value2f {
public:
	typedef Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48312837) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* rhs =(Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::check(L,2));
		ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* self=(Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::check(L,1));
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

		ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* self=(Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >",name);
	}

};

ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::_bind_dtor(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::className[] = "ork_Uniform2_ork_VEC2F_float_float_ork_uniform2f_ork_value2f";
const char LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::fullName[] = "ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >";
const char LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::parents[] = {0};
const int LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::hash = 48312837;
const int LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::uniqueIDs[] = {48312837,0};

luna_RegType LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform2_ork_VEC2F_float_float_ork_uniform2f_ork_value2f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform2_ork_VEC2F_float_float_ork_uniform2f_ork_value2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::enumValues[] = {
	{0,0}
};


