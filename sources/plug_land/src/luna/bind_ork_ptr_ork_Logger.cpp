#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ptr_ork_Logger {
public:
	typedef Luna< ork::ptr< ork::Logger > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10729317) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ptr< ork::Logger >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Logger >* rhs =(Luna< ork::ptr< ork::Logger > >::check(L,2));
		ork::ptr< ork::Logger >* self=(Luna< ork::ptr< ork::Logger > >::check(L,1));
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

		ork::ptr< ork::Logger >* self=(Luna< ork::ptr< ork::Logger > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ptr< ork::Logger >");
		
		return luna_dynamicCast(L,converters,"ork::ptr< ork::Logger >",name);
	}

};

ork::ptr< ork::Logger >* LunaTraits< ork::ptr< ork::Logger > >::_bind_ctor(lua_State *L) {
	return new ork::ptr< ork::Logger >();
}

void LunaTraits< ork::ptr< ork::Logger > >::_bind_dtor(ork::ptr< ork::Logger >* obj) {
	delete obj;
}

const char LunaTraits< ork::ptr< ork::Logger > >::className[] = "ork_ptr_ork_Logger";
const char LunaTraits< ork::ptr< ork::Logger > >::fullName[] = "ork::ptr< ork::Logger >";
const char LunaTraits< ork::ptr< ork::Logger > >::moduleName[] = "land";
const char* LunaTraits< ork::ptr< ork::Logger > >::parents[] = {0};
const int LunaTraits< ork::ptr< ork::Logger > >::hash = 10729317;
const int LunaTraits< ork::ptr< ork::Logger > >::uniqueIDs[] = {10729317,0};

luna_RegType LunaTraits< ork::ptr< ork::Logger > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ptr_ork_Logger::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ptr_ork_Logger::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ptr< ork::Logger > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ptr< ork::Logger > >::enumValues[] = {
	{0,0}
};


