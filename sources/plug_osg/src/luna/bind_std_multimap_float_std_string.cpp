#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_multimap_float_std_string {
public:
	typedef Luna< std::multimap< float, std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49716686) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::multimap< float, std::string >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::multimap< float, std::string >* rhs =(Luna< std::multimap< float, std::string > >::check(L,2));
		std::multimap< float, std::string >* self=(Luna< std::multimap< float, std::string > >::check(L,1));
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

		std::multimap< float, std::string >* self=(Luna< std::multimap< float, std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::multimap< float, std::string >");
		
		return luna_dynamicCast(L,converters,"std::multimap< float, std::string >",name);
	}

};

std::multimap< float, std::string >* LunaTraits< std::multimap< float, std::string > >::_bind_ctor(lua_State *L) {
	return new std::multimap< float, std::string >();
}

void LunaTraits< std::multimap< float, std::string > >::_bind_dtor(std::multimap< float, std::string >* obj) {
	delete obj;
}

const char LunaTraits< std::multimap< float, std::string > >::className[] = "std_multimap_float_std_string";
const char LunaTraits< std::multimap< float, std::string > >::fullName[] = "std::multimap< float, std::string >";
const char LunaTraits< std::multimap< float, std::string > >::moduleName[] = "osg";
const char* LunaTraits< std::multimap< float, std::string > >::parents[] = {0};
const int LunaTraits< std::multimap< float, std::string > >::hash = 49716686;
const int LunaTraits< std::multimap< float, std::string > >::uniqueIDs[] = {49716686,0};

luna_RegType LunaTraits< std::multimap< float, std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_std_multimap_float_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_std_multimap_float_std_string::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::multimap< float, std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::multimap< float, std::string > >::enumValues[] = {
	{0,0}
};


