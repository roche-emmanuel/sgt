#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_set_int {
public:
	typedef Luna< set< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13198241) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(set< int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		set< int >* rhs =(Luna< set< int > >::check(L,2));
		set< int >* self=(Luna< set< int > >::check(L,1));
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

		set< int >* self=(Luna< set< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("set< int >");
		
		return luna_dynamicCast(L,converters,"set< int >",name);
	}

};

set< int >* LunaTraits< set< int > >::_bind_ctor(lua_State *L) {
	return new set< int >();
}

void LunaTraits< set< int > >::_bind_dtor(set< int >* obj) {
	delete obj;
}

const char LunaTraits< set< int > >::className[] = "set_int";
const char LunaTraits< set< int > >::fullName[] = "set< int >";
const char LunaTraits< set< int > >::moduleName[] = "land";
const char* LunaTraits< set< int > >::parents[] = {0};
const int LunaTraits< set< int > >::hash = 13198241;
const int LunaTraits< set< int > >::uniqueIDs[] = {13198241,0};

luna_RegType LunaTraits< set< int > >::methods[] = {
	{"dynCast", &luna_wrapper_set_int::_bind_dynCast},
	{"__eq", &luna_wrapper_set_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< set< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< set< int > >::enumValues[] = {
	{0,0}
};


