#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_int_int {
public:
	typedef Luna< std::map< int, int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79429939) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< int, int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< int, int >* rhs =(Luna< std::map< int, int > >::check(L,2));
		std::map< int, int >* self=(Luna< std::map< int, int > >::check(L,1));
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

		std::map< int, int >* self=(Luna< std::map< int, int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< int, int >");
		
		return luna_dynamicCast(L,converters,"std::map< int, int >",name);
	}

};

std::map< int, int >* LunaTraits< std::map< int, int > >::_bind_ctor(lua_State *L) {
	return new std::map< int, int >();
}

void LunaTraits< std::map< int, int > >::_bind_dtor(std::map< int, int >* obj) {
	delete obj;
}

const char LunaTraits< std::map< int, int > >::className[] = "std_map_int_int";
const char LunaTraits< std::map< int, int > >::fullName[] = "std::map< int, int >";
const char LunaTraits< std::map< int, int > >::moduleName[] = "sgt";
const char* LunaTraits< std::map< int, int > >::parents[] = {0};
const int LunaTraits< std::map< int, int > >::hash = 79429939;
const int LunaTraits< std::map< int, int > >::uniqueIDs[] = {79429939,0};

luna_RegType LunaTraits< std::map< int, int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_int_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_int_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< int, int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< int, int > >::enumValues[] = {
	{0,0}
};


