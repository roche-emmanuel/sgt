#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_ork_Program_ptr {
public:
	typedef Luna< std::set< ork::Program * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31285358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< ork::Program * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::Program * >* rhs =(Luna< std::set< ork::Program * > >::check(L,2));
		std::set< ork::Program * >* self=(Luna< std::set< ork::Program * > >::check(L,1));
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

		std::set< ork::Program * >* self=(Luna< std::set< ork::Program * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< ork::Program * >");
		
		return luna_dynamicCast(L,converters,"std::set< ork::Program * >",name);
	}

};

std::set< ork::Program * >* LunaTraits< std::set< ork::Program * > >::_bind_ctor(lua_State *L) {
	return new std::set< ork::Program * >();
}

void LunaTraits< std::set< ork::Program * > >::_bind_dtor(std::set< ork::Program * >* obj) {
	delete obj;
}

const char LunaTraits< std::set< ork::Program * > >::className[] = "std_set_ork_Program_ptr";
const char LunaTraits< std::set< ork::Program * > >::fullName[] = "std::set< ork::Program * >";
const char LunaTraits< std::set< ork::Program * > >::moduleName[] = "land";
const char* LunaTraits< std::set< ork::Program * > >::parents[] = {0};
const int LunaTraits< std::set< ork::Program * > >::hash = 31285358;
const int LunaTraits< std::set< ork::Program * > >::uniqueIDs[] = {31285358,0};

luna_RegType LunaTraits< std::set< ork::Program * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_ork_Program_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_ork_Program_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< ork::Program * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< ork::Program * > >::enumValues[] = {
	{0,0}
};


