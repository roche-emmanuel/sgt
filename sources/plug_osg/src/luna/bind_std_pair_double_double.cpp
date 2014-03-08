#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_double_double {
public:
	typedef Luna< std::pair< double, double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95974838) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< double, double >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< double, double >* rhs =(Luna< std::pair< double, double > >::check(L,2));
		std::pair< double, double >* self=(Luna< std::pair< double, double > >::check(L,1));
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

		std::pair< double, double >* self=(Luna< std::pair< double, double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< double, double >");
		
		return luna_dynamicCast(L,converters,"std::pair< double, double >",name);
	}

};

std::pair< double, double >* LunaTraits< std::pair< double, double > >::_bind_ctor(lua_State *L) {
	return new std::pair< double, double >();
}

void LunaTraits< std::pair< double, double > >::_bind_dtor(std::pair< double, double >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< double, double > >::className[] = "std_pair_double_double";
const char LunaTraits< std::pair< double, double > >::fullName[] = "std::pair< double, double >";
const char LunaTraits< std::pair< double, double > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< double, double > >::parents[] = {0};
const int LunaTraits< std::pair< double, double > >::hash = 95974838;
const int LunaTraits< std::pair< double, double > >::uniqueIDs[] = {95974838,0};

luna_RegType LunaTraits< std::pair< double, double > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_double_double::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_double_double::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< double, double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< double, double > >::enumValues[] = {
	{0,0}
};


