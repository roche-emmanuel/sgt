#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_ork_ptr_ork_Module {
public:
	typedef Luna< std::vector< ork::ptr< ork::Module > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8893137) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< ork::ptr< ork::Module > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< ork::Module > >* rhs =(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,2));
		std::vector< ork::ptr< ork::Module > >* self=(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,1));
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

		std::vector< ork::ptr< ork::Module > >* self=(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< ork::ptr< ork::Module > >");
		
		return luna_dynamicCast(L,converters,"std::vector< ork::ptr< ork::Module > >",name);
	}

};

std::vector< ork::ptr< ork::Module > >* LunaTraits< std::vector< ork::ptr< ork::Module > > >::_bind_ctor(lua_State *L) {
	return new std::vector< ork::ptr< ork::Module > >();
}

void LunaTraits< std::vector< ork::ptr< ork::Module > > >::_bind_dtor(std::vector< ork::ptr< ork::Module > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< ork::ptr< ork::Module > > >::className[] = "std_vector_ork_ptr_ork_Module";
const char LunaTraits< std::vector< ork::ptr< ork::Module > > >::fullName[] = "std::vector< ork::ptr< ork::Module > >";
const char LunaTraits< std::vector< ork::ptr< ork::Module > > >::moduleName[] = "land";
const char* LunaTraits< std::vector< ork::ptr< ork::Module > > >::parents[] = {0};
const int LunaTraits< std::vector< ork::ptr< ork::Module > > >::hash = 8893137;
const int LunaTraits< std::vector< ork::ptr< ork::Module > > >::uniqueIDs[] = {8893137,0};

luna_RegType LunaTraits< std::vector< ork::ptr< ork::Module > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_ork_ptr_ork_Module::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_ork_ptr_ork_Module::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< ork::ptr< ork::Module > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< ork::ptr< ork::Module > > >::enumValues[] = {
	{0,0}
};


