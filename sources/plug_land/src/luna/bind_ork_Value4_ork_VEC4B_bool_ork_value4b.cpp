#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value4_ork_VEC4B_bool_ork_value4b {
public:
	typedef Luna< ork::Value4< ork::VEC4B, bool, ork::value4b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14375118) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value4< ork::VEC4B, bool, ork::value4b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value4< ork::VEC4B, bool, ork::value4b >* rhs =(Luna< ork::Value4< ork::VEC4B, bool, ork::value4b > >::check(L,2));
		ork::Value4< ork::VEC4B, bool, ork::value4b >* self=(Luna< ork::Value4< ork::VEC4B, bool, ork::value4b > >::check(L,1));
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

		ork::Value4< ork::VEC4B, bool, ork::value4b >* self=(Luna< ork::Value4< ork::VEC4B, bool, ork::value4b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value4< ork::VEC4B, bool, ork::value4b >");
		
		return luna_dynamicCast(L,converters,"ork::Value4< ork::VEC4B, bool, ork::value4b >",name);
	}

};

ork::Value4< ork::VEC4B, bool, ork::value4b >* LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::_bind_dtor(ork::Value4< ork::VEC4B, bool, ork::value4b >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::className[] = "ork_Value4_ork_VEC4B_bool_ork_value4b";
const char LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::fullName[] = "ork::Value4< ork::VEC4B, bool, ork::value4b >";
const char LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::moduleName[] = "land";
const char* LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::parents[] = {0};
const int LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::hash = 14375118;
const int LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::uniqueIDs[] = {14375118,0};

luna_RegType LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value4_ork_VEC4B_bool_ork_value4b::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value4_ork_VEC4B_bool_ork_value4b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > >::enumValues[] = {
	{0,0}
};


