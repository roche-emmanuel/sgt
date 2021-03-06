#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_unsigned_int_unsigned_int {
public:
	typedef Luna< std::pair< unsigned int, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52265949) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< unsigned int, unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< unsigned int, unsigned int >* rhs =(Luna< std::pair< unsigned int, unsigned int > >::check(L,2));
		std::pair< unsigned int, unsigned int >* self=(Luna< std::pair< unsigned int, unsigned int > >::check(L,1));
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

		std::pair< unsigned int, unsigned int >* self=(Luna< std::pair< unsigned int, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< unsigned int, unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::pair< unsigned int, unsigned int >",name);
	}

};

std::pair< unsigned int, unsigned int >* LunaTraits< std::pair< unsigned int, unsigned int > >::_bind_ctor(lua_State *L) {
	return new std::pair< unsigned int, unsigned int >();
}

void LunaTraits< std::pair< unsigned int, unsigned int > >::_bind_dtor(std::pair< unsigned int, unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< unsigned int, unsigned int > >::className[] = "std_pair_unsigned_int_unsigned_int";
const char LunaTraits< std::pair< unsigned int, unsigned int > >::fullName[] = "std::pair< unsigned int, unsigned int >";
const char LunaTraits< std::pair< unsigned int, unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< unsigned int, unsigned int > >::parents[] = {0};
const int LunaTraits< std::pair< unsigned int, unsigned int > >::hash = 52265949;
const int LunaTraits< std::pair< unsigned int, unsigned int > >::uniqueIDs[] = {52265949,0};

luna_RegType LunaTraits< std::pair< unsigned int, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_unsigned_int_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_unsigned_int_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< unsigned int, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< unsigned int, unsigned int > >::enumValues[] = {
	{0,0}
};


