#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_std_string {
public:
	typedef Luna< std::list< std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69347293) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< std::string >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< std::string >* rhs =(Luna< std::list< std::string > >::check(L,2));
		std::list< std::string >* self=(Luna< std::list< std::string > >::check(L,1));
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

		std::list< std::string >* self=(Luna< std::list< std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< std::string >");
		
		return luna_dynamicCast(L,converters,"std::list< std::string >",name);
	}

};

std::list< std::string >* LunaTraits< std::list< std::string > >::_bind_ctor(lua_State *L) {
	return new std::list< std::string >();
}

void LunaTraits< std::list< std::string > >::_bind_dtor(std::list< std::string >* obj) {
	delete obj;
}

const char LunaTraits< std::list< std::string > >::className[] = "std_list_std_string";
const char LunaTraits< std::list< std::string > >::fullName[] = "std::list< std::string >";
const char LunaTraits< std::list< std::string > >::moduleName[] = "osg";
const char* LunaTraits< std::list< std::string > >::parents[] = {0};
const int LunaTraits< std::list< std::string > >::hash = 69347293;
const int LunaTraits< std::list< std::string > >::uniqueIDs[] = {69347293,0};

luna_RegType LunaTraits< std::list< std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_std_string::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< std::string > >::enumValues[] = {
	{0,0}
};


