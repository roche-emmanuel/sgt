#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_ork_ptr_ork_TaskFactory {
public:
	typedef Luna< std::vector< ork::ptr< ork::TaskFactory > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41801658) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< ork::ptr< ork::TaskFactory > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< ork::TaskFactory > >* rhs =(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,2));
		std::vector< ork::ptr< ork::TaskFactory > >* self=(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,1));
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

		std::vector< ork::ptr< ork::TaskFactory > >* self=(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< ork::ptr< ork::TaskFactory > >");
		
		return luna_dynamicCast(L,converters,"std::vector< ork::ptr< ork::TaskFactory > >",name);
	}

};

std::vector< ork::ptr< ork::TaskFactory > >* LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::_bind_ctor(lua_State *L) {
	return new std::vector< ork::ptr< ork::TaskFactory > >();
}

void LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::_bind_dtor(std::vector< ork::ptr< ork::TaskFactory > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::className[] = "std_vector_ork_ptr_ork_TaskFactory";
const char LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::fullName[] = "std::vector< ork::ptr< ork::TaskFactory > >";
const char LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::moduleName[] = "land";
const char* LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::parents[] = {0};
const int LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::hash = 41801658;
const int LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::uniqueIDs[] = {41801658,0};

luna_RegType LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_ork_ptr_ork_TaskFactory::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_ork_ptr_ork_TaskFactory::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > >::enumValues[] = {
	{0,0}
};


