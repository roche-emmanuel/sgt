#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_ork_ptr_ork_Task {
public:
	typedef Luna< std::set< ork::ptr< ork::Task > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71786532) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< ork::ptr< ork::Task > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< ork::ptr< ork::Task > >* rhs =(Luna< std::set< ork::ptr< ork::Task > > >::check(L,2));
		std::set< ork::ptr< ork::Task > >* self=(Luna< std::set< ork::ptr< ork::Task > > >::check(L,1));
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

		std::set< ork::ptr< ork::Task > >* self=(Luna< std::set< ork::ptr< ork::Task > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< ork::ptr< ork::Task > >");
		
		return luna_dynamicCast(L,converters,"std::set< ork::ptr< ork::Task > >",name);
	}

};

std::set< ork::ptr< ork::Task > >* LunaTraits< std::set< ork::ptr< ork::Task > > >::_bind_ctor(lua_State *L) {
	return new std::set< ork::ptr< ork::Task > >();
}

void LunaTraits< std::set< ork::ptr< ork::Task > > >::_bind_dtor(std::set< ork::ptr< ork::Task > >* obj) {
	delete obj;
}

const char LunaTraits< std::set< ork::ptr< ork::Task > > >::className[] = "std_set_ork_ptr_ork_Task";
const char LunaTraits< std::set< ork::ptr< ork::Task > > >::fullName[] = "std::set< ork::ptr< ork::Task > >";
const char LunaTraits< std::set< ork::ptr< ork::Task > > >::moduleName[] = "land";
const char* LunaTraits< std::set< ork::ptr< ork::Task > > >::parents[] = {0};
const int LunaTraits< std::set< ork::ptr< ork::Task > > >::hash = 71786532;
const int LunaTraits< std::set< ork::ptr< ork::Task > > >::uniqueIDs[] = {71786532,0};

luna_RegType LunaTraits< std::set< ork::ptr< ork::Task > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_ork_ptr_ork_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_ork_ptr_ork_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< ork::ptr< ork::Task > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< ork::ptr< ork::Task > > >::enumValues[] = {
	{0,0}
};


