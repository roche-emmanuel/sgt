#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_int_std_pair_int_int {
public:
	typedef Luna< std::pair< int, std::pair< int, int > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67383368) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< int, std::pair< int, int > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< int, std::pair< int, int > >* rhs =(Luna< std::pair< int, std::pair< int, int > > >::check(L,2));
		std::pair< int, std::pair< int, int > >* self=(Luna< std::pair< int, std::pair< int, int > > >::check(L,1));
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

		std::pair< int, std::pair< int, int > >* self=(Luna< std::pair< int, std::pair< int, int > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< int, std::pair< int, int > >");
		
		return luna_dynamicCast(L,converters,"std::pair< int, std::pair< int, int > >",name);
	}

};

std::pair< int, std::pair< int, int > >* LunaTraits< std::pair< int, std::pair< int, int > > >::_bind_ctor(lua_State *L) {
	return new std::pair< int, std::pair< int, int > >();
}

void LunaTraits< std::pair< int, std::pair< int, int > > >::_bind_dtor(std::pair< int, std::pair< int, int > >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< int, std::pair< int, int > > >::className[] = "std_pair_int_std_pair_int_int";
const char LunaTraits< std::pair< int, std::pair< int, int > > >::fullName[] = "std::pair< int, std::pair< int, int > >";
const char LunaTraits< std::pair< int, std::pair< int, int > > >::moduleName[] = "land";
const char* LunaTraits< std::pair< int, std::pair< int, int > > >::parents[] = {0};
const int LunaTraits< std::pair< int, std::pair< int, int > > >::hash = 67383368;
const int LunaTraits< std::pair< int, std::pair< int, int > > >::uniqueIDs[] = {67383368,0};

luna_RegType LunaTraits< std::pair< int, std::pair< int, int > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_int_std_pair_int_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_int_std_pair_int_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< int, std::pair< int, int > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< int, std::pair< int, int > > >::enumValues[] = {
	{0,0}
};


