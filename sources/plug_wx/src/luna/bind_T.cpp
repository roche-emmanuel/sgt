#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_T {
public:
	typedef Luna< T > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(T*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		T* rhs =(Luna< T >::check(L,2));
		T* self=(Luna< T >::check(L,1));
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

		T* self=(Luna< T >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("T");
		
		return luna_dynamicCast(L,converters,"T",name);
	}

};

T* LunaTraits< T >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< T >::_bind_dtor(T* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< T >::className[] = "T";
const char LunaTraits< T >::fullName[] = "T";
const char LunaTraits< T >::moduleName[] = "wx";
const char* LunaTraits< T >::parents[] = {0};
const int LunaTraits< T >::hash = 84;
const int LunaTraits< T >::uniqueIDs[] = {84,0};

luna_RegType LunaTraits< T >::methods[] = {
	{"dynCast", &luna_wrapper_T::_bind_dynCast},
	{"__eq", &luna_wrapper_T::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< T >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< T >::enumValues[] = {
	{0,0}
};


