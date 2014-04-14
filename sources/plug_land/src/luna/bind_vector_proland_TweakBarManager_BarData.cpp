#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_proland_TweakBarManager_BarData {
public:
	typedef Luna< vector< proland::TweakBarManager::BarData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40535768) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< proland::TweakBarManager::BarData >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::TweakBarManager::BarData >* rhs =(Luna< vector< proland::TweakBarManager::BarData > >::check(L,2));
		vector< proland::TweakBarManager::BarData >* self=(Luna< vector< proland::TweakBarManager::BarData > >::check(L,1));
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

		vector< proland::TweakBarManager::BarData >* self=(Luna< vector< proland::TweakBarManager::BarData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< proland::TweakBarManager::BarData >");
		
		return luna_dynamicCast(L,converters,"vector< proland::TweakBarManager::BarData >",name);
	}

};

vector< proland::TweakBarManager::BarData >* LunaTraits< vector< proland::TweakBarManager::BarData > >::_bind_ctor(lua_State *L) {
	return new vector< proland::TweakBarManager::BarData >();
}

void LunaTraits< vector< proland::TweakBarManager::BarData > >::_bind_dtor(vector< proland::TweakBarManager::BarData >* obj) {
	delete obj;
}

const char LunaTraits< vector< proland::TweakBarManager::BarData > >::className[] = "vector_proland_TweakBarManager_BarData";
const char LunaTraits< vector< proland::TweakBarManager::BarData > >::fullName[] = "vector< proland::TweakBarManager::BarData >";
const char LunaTraits< vector< proland::TweakBarManager::BarData > >::moduleName[] = "land";
const char* LunaTraits< vector< proland::TweakBarManager::BarData > >::parents[] = {0};
const int LunaTraits< vector< proland::TweakBarManager::BarData > >::hash = 40535768;
const int LunaTraits< vector< proland::TweakBarManager::BarData > >::uniqueIDs[] = {40535768,0};

luna_RegType LunaTraits< vector< proland::TweakBarManager::BarData > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_proland_TweakBarManager_BarData::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_proland_TweakBarManager_BarData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< proland::TweakBarManager::BarData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< proland::TweakBarManager::BarData > >::enumValues[] = {
	{0,0}
};


