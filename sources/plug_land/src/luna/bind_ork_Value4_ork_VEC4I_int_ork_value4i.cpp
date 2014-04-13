#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value4_ork_VEC4I_int_ork_value4i {
public:
	typedef Luna< ork::Value4< ork::VEC4I, int, ork::value4i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34553147) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value4< ork::VEC4I, int, ork::value4i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value4< ork::VEC4I, int, ork::value4i >* rhs =(Luna< ork::Value4< ork::VEC4I, int, ork::value4i > >::check(L,2));
		ork::Value4< ork::VEC4I, int, ork::value4i >* self=(Luna< ork::Value4< ork::VEC4I, int, ork::value4i > >::check(L,1));
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

		ork::Value4< ork::VEC4I, int, ork::value4i >* self=(Luna< ork::Value4< ork::VEC4I, int, ork::value4i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value4< ork::VEC4I, int, ork::value4i >");
		
		return luna_dynamicCast(L,converters,"ork::Value4< ork::VEC4I, int, ork::value4i >",name);
	}

};

ork::Value4< ork::VEC4I, int, ork::value4i >* LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::_bind_dtor(ork::Value4< ork::VEC4I, int, ork::value4i >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::className[] = "ork_Value4_ork_VEC4I_int_ork_value4i";
const char LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::fullName[] = "ork::Value4< ork::VEC4I, int, ork::value4i >";
const char LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::moduleName[] = "land";
const char* LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::parents[] = {0};
const int LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::hash = 34553147;
const int LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::uniqueIDs[] = {34553147,0};

luna_RegType LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value4_ork_VEC4I_int_ork_value4i::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value4_ork_VEC4I_int_ork_value4i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > >::enumValues[] = {
	{0,0}
};


