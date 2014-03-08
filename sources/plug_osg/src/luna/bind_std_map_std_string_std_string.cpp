#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_std_string {
public:
	typedef Luna< std::map< std::string, std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29293820) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, std::string >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, std::string >* rhs =(Luna< std::map< std::string, std::string > >::check(L,2));
		std::map< std::string, std::string >* self=(Luna< std::map< std::string, std::string > >::check(L,1));
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

		std::map< std::string, std::string >* self=(Luna< std::map< std::string, std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, std::string >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, std::string >",name);
	}

};

std::map< std::string, std::string >* LunaTraits< std::map< std::string, std::string > >::_bind_ctor(lua_State *L) {
	return new std::map< std::string, std::string >();
}

void LunaTraits< std::map< std::string, std::string > >::_bind_dtor(std::map< std::string, std::string >* obj) {
	delete obj;
}

const char LunaTraits< std::map< std::string, std::string > >::className[] = "std_map_std_string_std_string";
const char LunaTraits< std::map< std::string, std::string > >::fullName[] = "std::map< std::string, std::string >";
const char LunaTraits< std::map< std::string, std::string > >::moduleName[] = "osg";
const char* LunaTraits< std::map< std::string, std::string > >::parents[] = {0};
const int LunaTraits< std::map< std::string, std::string > >::hash = 29293820;
const int LunaTraits< std::map< std::string, std::string > >::uniqueIDs[] = {29293820,0};

luna_RegType LunaTraits< std::map< std::string, std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_std_string::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, std::string > >::enumValues[] = {
	{0,0}
};


