#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_ptr_proland_Graph {
public:
	typedef Luna< ork::ptr< proland::Graph > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65799894) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::ptr< proland::Graph >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Graph >* rhs =(Luna< ork::ptr< proland::Graph > >::check(L,2));
		ork::ptr< proland::Graph >* self=(Luna< ork::ptr< proland::Graph > >::check(L,1));
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

		ork::ptr< proland::Graph >* self=(Luna< ork::ptr< proland::Graph > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::ptr< proland::Graph >");
		
		return luna_dynamicCast(L,converters,"ork::ptr< proland::Graph >",name);
	}

};

ork::ptr< proland::Graph >* LunaTraits< ork::ptr< proland::Graph > >::_bind_ctor(lua_State *L) {
	return new ork::ptr< proland::Graph >();
}

void LunaTraits< ork::ptr< proland::Graph > >::_bind_dtor(ork::ptr< proland::Graph >* obj) {
	delete obj;
}

const char LunaTraits< ork::ptr< proland::Graph > >::className[] = "ork_ptr_proland_Graph";
const char LunaTraits< ork::ptr< proland::Graph > >::fullName[] = "ork::ptr< proland::Graph >";
const char LunaTraits< ork::ptr< proland::Graph > >::moduleName[] = "land";
const char* LunaTraits< ork::ptr< proland::Graph > >::parents[] = {0};
const int LunaTraits< ork::ptr< proland::Graph > >::hash = 65799894;
const int LunaTraits< ork::ptr< proland::Graph > >::uniqueIDs[] = {65799894,0};

luna_RegType LunaTraits< ork::ptr< proland::Graph > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_ptr_proland_Graph::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_ptr_proland_Graph::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::ptr< proland::Graph > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ptr< proland::Graph > >::enumValues[] = {
	{0,0}
};


