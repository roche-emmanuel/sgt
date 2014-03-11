#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sockaddr {
public:
	typedef Luna< sockaddr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99456016) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sockaddr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sockaddr* rhs =(Luna< sockaddr >::check(L,2));
		sockaddr* self=(Luna< sockaddr >::check(L,1));
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

		sockaddr* self=(Luna< sockaddr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sockaddr");
		
		return luna_dynamicCast(L,converters,"sockaddr",name);
	}

};

sockaddr* LunaTraits< sockaddr >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< sockaddr >::_bind_dtor(sockaddr* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< sockaddr >::className[] = "sockaddr";
const char LunaTraits< sockaddr >::fullName[] = "sockaddr";
const char LunaTraits< sockaddr >::moduleName[] = "wx";
const char* LunaTraits< sockaddr >::parents[] = {0};
const int LunaTraits< sockaddr >::hash = 99456016;
const int LunaTraits< sockaddr >::uniqueIDs[] = {99456016,0};

luna_RegType LunaTraits< sockaddr >::methods[] = {
	{"dynCast", &luna_wrapper_sockaddr::_bind_dynCast},
	{"__eq", &luna_wrapper_sockaddr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sockaddr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sockaddr >::enumValues[] = {
	{0,0}
};


