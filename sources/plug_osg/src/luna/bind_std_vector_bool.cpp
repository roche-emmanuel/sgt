#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_bool {
public:
	typedef Luna< std::vector< bool > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61721661) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< bool >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< bool >* rhs =(Luna< std::vector< bool > >::check(L,2));
		std::vector< bool >* self=(Luna< std::vector< bool > >::check(L,1));
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

		std::vector< bool >* self=(Luna< std::vector< bool > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< bool >");
		
		return luna_dynamicCast(L,converters,"std::vector< bool >",name);
	}

};

std::vector< bool >* LunaTraits< std::vector< bool > >::_bind_ctor(lua_State *L) {
	return new std::vector< bool >();
}

void LunaTraits< std::vector< bool > >::_bind_dtor(std::vector< bool >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< bool > >::className[] = "std_vector_bool";
const char LunaTraits< std::vector< bool > >::fullName[] = "std::vector< bool >";
const char LunaTraits< std::vector< bool > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< bool > >::parents[] = {0};
const int LunaTraits< std::vector< bool > >::hash = 61721661;
const int LunaTraits< std::vector< bool > >::uniqueIDs[] = {61721661,0};

luna_RegType LunaTraits< std::vector< bool > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_bool::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_bool::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< bool > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< bool > >::enumValues[] = {
	{0,0}
};


