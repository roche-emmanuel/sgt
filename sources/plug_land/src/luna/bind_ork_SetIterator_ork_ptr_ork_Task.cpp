#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_SetIterator_ork_ptr_ork_Task {
public:
	typedef Luna< ork::SetIterator< ork::ptr< ork::Task > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16689971) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::SetIterator< ork::ptr< ork::Task > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::SetIterator< ork::ptr< ork::Task > >* rhs =(Luna< ork::SetIterator< ork::ptr< ork::Task > > >::check(L,2));
		ork::SetIterator< ork::ptr< ork::Task > >* self=(Luna< ork::SetIterator< ork::ptr< ork::Task > > >::check(L,1));
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

		ork::SetIterator< ork::ptr< ork::Task > >* self=(Luna< ork::SetIterator< ork::ptr< ork::Task > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::SetIterator< ork::ptr< ork::Task > >");
		
		return luna_dynamicCast(L,converters,"ork::SetIterator< ork::ptr< ork::Task > >",name);
	}

};

ork::SetIterator< ork::ptr< ork::Task > >* LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::_bind_ctor(lua_State *L) {
	return new ork::SetIterator< ork::ptr< ork::Task > >();
}

void LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::_bind_dtor(ork::SetIterator< ork::ptr< ork::Task > >* obj) {
	delete obj;
}

const char LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::className[] = "ork_SetIterator_ork_ptr_ork_Task";
const char LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::fullName[] = "ork::SetIterator< ork::ptr< ork::Task > >";
const char LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::moduleName[] = "land";
const char* LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::parents[] = {0};
const int LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::hash = 16689971;
const int LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::uniqueIDs[] = {16689971,0};

luna_RegType LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_SetIterator_ork_ptr_ork_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_SetIterator_ork_ptr_ork_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > >::enumValues[] = {
	{0,0}
};


