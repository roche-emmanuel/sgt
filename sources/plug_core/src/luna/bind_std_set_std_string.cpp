#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_std_string {
public:
	typedef Luna< std::set< std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74170402) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< std::string >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< std::string >* rhs =(Luna< std::set< std::string > >::check(L,2));
		std::set< std::string >* self=(Luna< std::set< std::string > >::check(L,1));
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

		std::set< std::string >* self=(Luna< std::set< std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< std::string >");
		
		return luna_dynamicCast(L,converters,"std::set< std::string >",name);
	}

};

std::set< std::string >* LunaTraits< std::set< std::string > >::_bind_ctor(lua_State *L) {
	return new std::set< std::string >();
}

void LunaTraits< std::set< std::string > >::_bind_dtor(std::set< std::string >* obj) {
	delete obj;
}

const char LunaTraits< std::set< std::string > >::className[] = "std_set_std_string";
const char LunaTraits< std::set< std::string > >::fullName[] = "std::set< std::string >";
const char LunaTraits< std::set< std::string > >::moduleName[] = "sgt";
const char* LunaTraits< std::set< std::string > >::parents[] = {0};
const int LunaTraits< std::set< std::string > >::hash = 74170402;
const int LunaTraits< std::set< std::string > >::uniqueIDs[] = {74170402,0};

luna_RegType LunaTraits< std::set< std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_std_string::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< std::string > >::enumValues[] = {
	{0,0}
};


