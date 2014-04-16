#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ptr_proland_Area {
public:
	typedef Luna< ork::ptr< proland::Area > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72385761) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ptr< proland::Area >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Area >* rhs =(Luna< ork::ptr< proland::Area > >::check(L,2));
		ork::ptr< proland::Area >* self=(Luna< ork::ptr< proland::Area > >::check(L,1));
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

		ork::ptr< proland::Area >* self=(Luna< ork::ptr< proland::Area > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ptr< proland::Area >");
		
		return luna_dynamicCast(L,converters,"ork::ptr< proland::Area >",name);
	}

};

ork::ptr< proland::Area >* LunaTraits< ork::ptr< proland::Area > >::_bind_ctor(lua_State *L) {
	return new ork::ptr< proland::Area >();
}

void LunaTraits< ork::ptr< proland::Area > >::_bind_dtor(ork::ptr< proland::Area >* obj) {
	delete obj;
}

const char LunaTraits< ork::ptr< proland::Area > >::className[] = "ork_ptr_proland_Area";
const char LunaTraits< ork::ptr< proland::Area > >::fullName[] = "ork::ptr< proland::Area >";
const char LunaTraits< ork::ptr< proland::Area > >::moduleName[] = "land";
const char* LunaTraits< ork::ptr< proland::Area > >::parents[] = {0};
const int LunaTraits< ork::ptr< proland::Area > >::hash = 72385761;
const int LunaTraits< ork::ptr< proland::Area > >::uniqueIDs[] = {72385761,0};

luna_RegType LunaTraits< ork::ptr< proland::Area > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ptr_proland_Area::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ptr_proland_Area::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ptr< proland::Area > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ptr< proland::Area > >::enumValues[] = {
	{0,0}
};


