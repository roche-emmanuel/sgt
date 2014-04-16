#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ptr_proland_Curve {
public:
	typedef Luna< ork::ptr< proland::Curve > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17549196) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ptr< proland::Curve >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Curve >* rhs =(Luna< ork::ptr< proland::Curve > >::check(L,2));
		ork::ptr< proland::Curve >* self=(Luna< ork::ptr< proland::Curve > >::check(L,1));
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

		ork::ptr< proland::Curve >* self=(Luna< ork::ptr< proland::Curve > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ptr< proland::Curve >");
		
		return luna_dynamicCast(L,converters,"ork::ptr< proland::Curve >",name);
	}

};

ork::ptr< proland::Curve >* LunaTraits< ork::ptr< proland::Curve > >::_bind_ctor(lua_State *L) {
	return new ork::ptr< proland::Curve >();
}

void LunaTraits< ork::ptr< proland::Curve > >::_bind_dtor(ork::ptr< proland::Curve >* obj) {
	delete obj;
}

const char LunaTraits< ork::ptr< proland::Curve > >::className[] = "ork_ptr_proland_Curve";
const char LunaTraits< ork::ptr< proland::Curve > >::fullName[] = "ork::ptr< proland::Curve >";
const char LunaTraits< ork::ptr< proland::Curve > >::moduleName[] = "land";
const char* LunaTraits< ork::ptr< proland::Curve > >::parents[] = {0};
const int LunaTraits< ork::ptr< proland::Curve > >::hash = 17549196;
const int LunaTraits< ork::ptr< proland::Curve > >::uniqueIDs[] = {17549196,0};

luna_RegType LunaTraits< ork::ptr< proland::Curve > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ptr_proland_Curve::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ptr_proland_Curve::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ptr< proland::Curve > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ptr< proland::Curve > >::enumValues[] = {
	{0,0}
};


