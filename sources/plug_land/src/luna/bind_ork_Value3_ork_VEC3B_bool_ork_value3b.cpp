#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value3_ork_VEC3B_bool_ork_value3b {
public:
	typedef Luna< ork::Value3< ork::VEC3B, bool, ork::value3b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29354763) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value3< ork::VEC3B, bool, ork::value3b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value3< ork::VEC3B, bool, ork::value3b >* rhs =(Luna< ork::Value3< ork::VEC3B, bool, ork::value3b > >::check(L,2));
		ork::Value3< ork::VEC3B, bool, ork::value3b >* self=(Luna< ork::Value3< ork::VEC3B, bool, ork::value3b > >::check(L,1));
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

		ork::Value3< ork::VEC3B, bool, ork::value3b >* self=(Luna< ork::Value3< ork::VEC3B, bool, ork::value3b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value3< ork::VEC3B, bool, ork::value3b >");
		
		return luna_dynamicCast(L,converters,"ork::Value3< ork::VEC3B, bool, ork::value3b >",name);
	}

};

ork::Value3< ork::VEC3B, bool, ork::value3b >* LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::_bind_dtor(ork::Value3< ork::VEC3B, bool, ork::value3b >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::className[] = "ork_Value3_ork_VEC3B_bool_ork_value3b";
const char LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::fullName[] = "ork::Value3< ork::VEC3B, bool, ork::value3b >";
const char LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::moduleName[] = "land";
const char* LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::parents[] = {0};
const int LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::hash = 29354763;
const int LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::uniqueIDs[] = {29354763,0};

luna_RegType LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value3_ork_VEC3B_bool_ork_value3b::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value3_ork_VEC3B_bool_ork_value3b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > >::enumValues[] = {
	{0,0}
};


