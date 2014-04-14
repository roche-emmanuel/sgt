#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Value {
public:
	typedef Luna< ork::MapIterator< std::string, ork::ptr< ork::Value > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26450461) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::MapIterator< std::string, ork::ptr< ork::Value > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::MapIterator< std::string, ork::ptr< ork::Value > >* rhs =(Luna< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::check(L,2));
		ork::MapIterator< std::string, ork::ptr< ork::Value > >* self=(Luna< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::check(L,1));
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

		ork::MapIterator< std::string, ork::ptr< ork::Value > >* self=(Luna< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::MapIterator< std::string, ork::ptr< ork::Value > >");
		
		return luna_dynamicCast(L,converters,"ork::MapIterator< std::string, ork::ptr< ork::Value > >",name);
	}

};

ork::MapIterator< std::string, ork::ptr< ork::Value > >* LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::_bind_ctor(lua_State *L) {
	return new ork::MapIterator< std::string, ork::ptr< ork::Value > >();
}

void LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::_bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Value > >* obj) {
	delete obj;
}

const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::className[] = "ork_MapIterator_std_string_ork_ptr_ork_Value";
const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::fullName[] = "ork::MapIterator< std::string, ork::ptr< ork::Value > >";
const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::moduleName[] = "land";
const char* LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::parents[] = {0};
const int LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::hash = 26450461;
const int LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::uniqueIDs[] = {26450461,0};

luna_RegType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Value::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Value::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::enumValues[] = {
	{0,0}
};


