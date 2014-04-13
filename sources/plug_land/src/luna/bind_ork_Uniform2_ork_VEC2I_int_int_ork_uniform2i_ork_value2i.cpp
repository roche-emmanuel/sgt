#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Uniform2_ork_VEC2I_int_int_ork_uniform2i_ork_value2i {
public:
	typedef Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87244058) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* rhs =(Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::check(L,2));
		ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* self=(Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::check(L,1));
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

		ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* self=(Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >");
		
		return luna_dynamicCast(L,converters,"ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >",name);
	}

};

ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::_bind_dtor(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* obj) {
	delete obj;
}

const char LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::className[] = "ork_Uniform2_ork_VEC2I_int_int_ork_uniform2i_ork_value2i";
const char LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::fullName[] = "ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >";
const char LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::moduleName[] = "land";
const char* LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::parents[] = {0};
const int LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::hash = 87244058;
const int LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::uniqueIDs[] = {87244058,0};

luna_RegType LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Uniform2_ork_VEC2I_int_int_ork_uniform2i_ork_value2i::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Uniform2_ork_VEC2I_int_int_ork_uniform2i_ork_value2i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::enumValues[] = {
	{0,0}
};


