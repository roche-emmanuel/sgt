#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_proland_CurveId {
public:
	typedef Luna< std::set< proland::CurveId > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31876471) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< proland::CurveId >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< proland::CurveId >* rhs =(Luna< std::set< proland::CurveId > >::check(L,2));
		std::set< proland::CurveId >* self=(Luna< std::set< proland::CurveId > >::check(L,1));
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

		std::set< proland::CurveId >* self=(Luna< std::set< proland::CurveId > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< proland::CurveId >");
		
		return luna_dynamicCast(L,converters,"std::set< proland::CurveId >",name);
	}

};

std::set< proland::CurveId >* LunaTraits< std::set< proland::CurveId > >::_bind_ctor(lua_State *L) {
	return new std::set< proland::CurveId >();
}

void LunaTraits< std::set< proland::CurveId > >::_bind_dtor(std::set< proland::CurveId >* obj) {
	delete obj;
}

const char LunaTraits< std::set< proland::CurveId > >::className[] = "std_set_proland_CurveId";
const char LunaTraits< std::set< proland::CurveId > >::fullName[] = "std::set< proland::CurveId >";
const char LunaTraits< std::set< proland::CurveId > >::moduleName[] = "land";
const char* LunaTraits< std::set< proland::CurveId > >::parents[] = {0};
const int LunaTraits< std::set< proland::CurveId > >::hash = 31876471;
const int LunaTraits< std::set< proland::CurveId > >::uniqueIDs[] = {31876471,0};

luna_RegType LunaTraits< std::set< proland::CurveId > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_proland_CurveId::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_proland_CurveId::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< proland::CurveId > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< proland::CurveId > >::enumValues[] = {
	{0,0}
};


