#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_proland_seg2_float {
public:
	typedef Luna< proland::seg2< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30985879) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::seg2< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::seg2< float >* rhs =(Luna< proland::seg2< float > >::check(L,2));
		proland::seg2< float >* self=(Luna< proland::seg2< float > >::check(L,1));
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

		proland::seg2< float >* self=(Luna< proland::seg2< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::seg2< float >");
		
		return luna_dynamicCast(L,converters,"proland::seg2< float >",name);
	}

};

proland::seg2< float >* LunaTraits< proland::seg2< float > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< proland::seg2< float > >::_bind_dtor(proland::seg2< float >* obj) {
	delete obj;
}

const char LunaTraits< proland::seg2< float > >::className[] = "proland_seg2_float";
const char LunaTraits< proland::seg2< float > >::fullName[] = "proland::seg2< float >";
const char LunaTraits< proland::seg2< float > >::moduleName[] = "land";
const char* LunaTraits< proland::seg2< float > >::parents[] = {0};
const int LunaTraits< proland::seg2< float > >::hash = 30985879;
const int LunaTraits< proland::seg2< float > >::uniqueIDs[] = {30985879,0};

luna_RegType LunaTraits< proland::seg2< float > >::methods[] = {
	{"dynCast", &luna_wrapper_proland_seg2_float::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_seg2_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< proland::seg2< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::seg2< float > >::enumValues[] = {
	{0,0}
};


