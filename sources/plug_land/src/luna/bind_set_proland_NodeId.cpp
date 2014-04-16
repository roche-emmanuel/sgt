#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_set_proland_NodeId {
public:
	typedef Luna< set< proland::NodeId > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99348114) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(set< proland::NodeId >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::NodeId >* rhs =(Luna< set< proland::NodeId > >::check(L,2));
		set< proland::NodeId >* self=(Luna< set< proland::NodeId > >::check(L,1));
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

		set< proland::NodeId >* self=(Luna< set< proland::NodeId > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("set< proland::NodeId >");
		
		return luna_dynamicCast(L,converters,"set< proland::NodeId >",name);
	}

};

set< proland::NodeId >* LunaTraits< set< proland::NodeId > >::_bind_ctor(lua_State *L) {
	return new set< proland::NodeId >();
}

void LunaTraits< set< proland::NodeId > >::_bind_dtor(set< proland::NodeId >* obj) {
	delete obj;
}

const char LunaTraits< set< proland::NodeId > >::className[] = "set_proland_NodeId";
const char LunaTraits< set< proland::NodeId > >::fullName[] = "set< proland::NodeId >";
const char LunaTraits< set< proland::NodeId > >::moduleName[] = "land";
const char* LunaTraits< set< proland::NodeId > >::parents[] = {0};
const int LunaTraits< set< proland::NodeId > >::hash = 99348114;
const int LunaTraits< set< proland::NodeId > >::uniqueIDs[] = {99348114,0};

luna_RegType LunaTraits< set< proland::NodeId > >::methods[] = {
	{"dynCast", &luna_wrapper_set_proland_NodeId::_bind_dynCast},
	{"__eq", &luna_wrapper_set_proland_NodeId::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< set< proland::NodeId > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< set< proland::NodeId > >::enumValues[] = {
	{0,0}
};


