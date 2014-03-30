#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_float_float {
public:
	typedef Luna< std::pair< float, float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3653432) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< float, float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< float, float >* rhs =(Luna< std::pair< float, float > >::check(L,2));
		std::pair< float, float >* self=(Luna< std::pair< float, float > >::check(L,1));
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

		std::pair< float, float >* self=(Luna< std::pair< float, float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< float, float >");
		
		return luna_dynamicCast(L,converters,"std::pair< float, float >",name);
	}

};

std::pair< float, float >* LunaTraits< std::pair< float, float > >::_bind_ctor(lua_State *L) {
	return new std::pair< float, float >();
}

void LunaTraits< std::pair< float, float > >::_bind_dtor(std::pair< float, float >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< float, float > >::className[] = "std_pair_float_float";
const char LunaTraits< std::pair< float, float > >::fullName[] = "std::pair< float, float >";
const char LunaTraits< std::pair< float, float > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< float, float > >::parents[] = {0};
const int LunaTraits< std::pair< float, float > >::hash = 3653432;
const int LunaTraits< std::pair< float, float > >::uniqueIDs[] = {3653432,0};

luna_RegType LunaTraits< std::pair< float, float > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_float_float::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_float_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< float, float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< float, float > >::enumValues[] = {
	{0,0}
};


