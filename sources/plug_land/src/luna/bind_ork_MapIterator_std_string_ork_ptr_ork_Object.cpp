#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Object {
public:
	typedef Luna< ork::MapIterator< std::string, ork::ptr< ork::Object > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17237157) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::MapIterator< std::string, ork::ptr< ork::Object > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::MapIterator< std::string, ork::ptr< ork::Object > >* rhs =(Luna< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::check(L,2));
		ork::MapIterator< std::string, ork::ptr< ork::Object > >* self=(Luna< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::check(L,1));
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

		ork::MapIterator< std::string, ork::ptr< ork::Object > >* self=(Luna< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::MapIterator< std::string, ork::ptr< ork::Object > >");
		
		return luna_dynamicCast(L,converters,"ork::MapIterator< std::string, ork::ptr< ork::Object > >",name);
	}

};

ork::MapIterator< std::string, ork::ptr< ork::Object > >* LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::_bind_ctor(lua_State *L) {
	return new ork::MapIterator< std::string, ork::ptr< ork::Object > >();
}

void LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::_bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Object > >* obj) {
	delete obj;
}

const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::className[] = "ork_MapIterator_std_string_ork_ptr_ork_Object";
const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::fullName[] = "ork::MapIterator< std::string, ork::ptr< ork::Object > >";
const char LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::moduleName[] = "land";
const char* LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::parents[] = {0};
const int LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::hash = 17237157;
const int LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::uniqueIDs[] = {17237157,0};

luna_RegType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Object::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_MapIterator_std_string_ork_ptr_ork_Object::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::enumValues[] = {
	{0,0}
};


