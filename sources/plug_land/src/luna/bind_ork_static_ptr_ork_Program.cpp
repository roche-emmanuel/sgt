#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_static_ptr_ork_Program {
public:
	typedef Luna< ork::static_ptr< ork::Program > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56225570) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::static_ptr< ork::Program >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Program >* rhs =(Luna< ork::static_ptr< ork::Program > >::check(L,2));
		ork::static_ptr< ork::Program >* self=(Luna< ork::static_ptr< ork::Program > >::check(L,1));
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

		ork::static_ptr< ork::Program >* self=(Luna< ork::static_ptr< ork::Program > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::static_ptr< ork::Program >");
		
		return luna_dynamicCast(L,converters,"ork::static_ptr< ork::Program >",name);
	}

};

ork::static_ptr< ork::Program >* LunaTraits< ork::static_ptr< ork::Program > >::_bind_ctor(lua_State *L) {
	return new ork::static_ptr< ork::Program >();
}

void LunaTraits< ork::static_ptr< ork::Program > >::_bind_dtor(ork::static_ptr< ork::Program >* obj) {
	delete obj;
}

const char LunaTraits< ork::static_ptr< ork::Program > >::className[] = "ork_static_ptr_ork_Program";
const char LunaTraits< ork::static_ptr< ork::Program > >::fullName[] = "ork::static_ptr< ork::Program >";
const char LunaTraits< ork::static_ptr< ork::Program > >::moduleName[] = "land";
const char* LunaTraits< ork::static_ptr< ork::Program > >::parents[] = {0};
const int LunaTraits< ork::static_ptr< ork::Program > >::hash = 56225570;
const int LunaTraits< ork::static_ptr< ork::Program > >::uniqueIDs[] = {56225570,0};

luna_RegType LunaTraits< ork::static_ptr< ork::Program > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_static_ptr_ork_Program::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_static_ptr_ork_Program::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::static_ptr< ork::Program > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::static_ptr< ork::Program > >::enumValues[] = {
	{0,0}
};


