#include <plug_common.h>

class luna_wrapper_proland_PlanetElevationTileCache {
public:
	typedef Luna< proland::PlanetElevationTileCache > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68434075) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::PlanetElevationTileCache*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::PlanetElevationTileCache* rhs =(Luna< proland::PlanetElevationTileCache >::check(L,2));
		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::PlanetElevationTileCache* self= (proland::PlanetElevationTileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::PlanetElevationTileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68434075) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::PlanetElevationTileCache");
		
		return luna_dynamicCast(L,converters,"proland::PlanetElevationTileCache",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float proland::PlanetElevationTileCache::getHeight(double sx, double sy, double sz)
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::PlanetElevationTileCache::getHeight(double sx, double sy, double sz) function, expected prototype:\nfloat proland::PlanetElevationTileCache::getHeight(double sx, double sy, double sz)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx=(double)lua_tonumber(L,2);
		double sy=(double)lua_tonumber(L,3);
		double sz=(double)lua_tonumber(L,4);

		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::PlanetElevationTileCache::getHeight(double, double, double). Got : '%s'\n%s",typeid(Luna< proland::PlanetElevationTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHeight(sx, sy, sz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::PlanetElevationTileCache::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::PlanetElevationTileCache::level() function, expected prototype:\nint proland::PlanetElevationTileCache::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::PlanetElevationTileCache::level(). Got : '%s'\n%s",typeid(Luna< proland::PlanetElevationTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::PlanetElevationTileCache::m()
	static int _bind_getM(lua_State *L) {
		if (!_lg_typecheck_getM(L)) {
			luaL_error(L, "luna typecheck failed in int proland::PlanetElevationTileCache::m() function, expected prototype:\nint proland::PlanetElevationTileCache::m()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::PlanetElevationTileCache::m(). Got : '%s'\n%s",typeid(Luna< proland::PlanetElevationTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::PlanetElevationTileCache::level(int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlanetElevationTileCache::level(int value) function, expected prototype:\nvoid proland::PlanetElevationTileCache::level(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlanetElevationTileCache::level(int). Got : '%s'\n%s",typeid(Luna< proland::PlanetElevationTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void proland::PlanetElevationTileCache::m(int value)
	static int _bind_setM(lua_State *L) {
		if (!_lg_typecheck_setM(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlanetElevationTileCache::m(int value) function, expected prototype:\nvoid proland::PlanetElevationTileCache::m(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::PlanetElevationTileCache* self=(Luna< proland::PlanetElevationTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlanetElevationTileCache::m(int). Got : '%s'\n%s",typeid(Luna< proland::PlanetElevationTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m = value;

		return 0;
	}


	// Operator binds:

};

proland::PlanetElevationTileCache* LunaTraits< proland::PlanetElevationTileCache >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::PlanetElevationTileCache >::_bind_dtor(proland::PlanetElevationTileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::PlanetElevationTileCache >::className[] = "PlanetElevationTileCache";
const char LunaTraits< proland::PlanetElevationTileCache >::fullName[] = "proland::PlanetElevationTileCache";
const char LunaTraits< proland::PlanetElevationTileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::PlanetElevationTileCache >::parents[] = {0};
const int LunaTraits< proland::PlanetElevationTileCache >::hash = 68434075;
const int LunaTraits< proland::PlanetElevationTileCache >::uniqueIDs[] = {68434075,0};

luna_RegType LunaTraits< proland::PlanetElevationTileCache >::methods[] = {
	{"getHeight", &luna_wrapper_proland_PlanetElevationTileCache::_bind_getHeight},
	{"getLevel", &luna_wrapper_proland_PlanetElevationTileCache::_bind_getLevel},
	{"getM", &luna_wrapper_proland_PlanetElevationTileCache::_bind_getM},
	{"setLevel", &luna_wrapper_proland_PlanetElevationTileCache::_bind_setLevel},
	{"setM", &luna_wrapper_proland_PlanetElevationTileCache::_bind_setM},
	{"dynCast", &luna_wrapper_proland_PlanetElevationTileCache::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_PlanetElevationTileCache::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_PlanetElevationTileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_PlanetElevationTileCache::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::PlanetElevationTileCache >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::PlanetElevationTileCache >::enumValues[] = {
	{0,0}
};


