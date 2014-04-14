#include <plug_common.h>

class luna_wrapper_proland_FloatTileCache_FloatTile {
public:
	typedef Luna< proland::FloatTileCache::FloatTile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66358430) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::FloatTileCache::FloatTile*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FloatTileCache::FloatTile* rhs =(Luna< proland::FloatTileCache::FloatTile >::check(L,2));
		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
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

		proland::FloatTileCache::FloatTile* self= (proland::FloatTileCache::FloatTile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::FloatTileCache::FloatTile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66358430) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
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

		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::FloatTileCache::FloatTile");
		
		return luna_dynamicCast(L,converters,"proland::FloatTileCache::FloatTile",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_key(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int proland::FloatTileCache::FloatTile::key()
	static int _bind_key(lua_State *L) {
		if (!_lg_typecheck_key(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FloatTileCache::FloatTile::key() function, expected prototype:\nint proland::FloatTileCache::FloatTile::key()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FloatTileCache::FloatTile::key(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->key();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::FloatTileCache::FloatTile::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FloatTileCache::FloatTile::level() function, expected prototype:\nint proland::FloatTileCache::FloatTile::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FloatTileCache::FloatTile::level(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::FloatTileCache::FloatTile::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FloatTileCache::FloatTile::tx() function, expected prototype:\nint proland::FloatTileCache::FloatTile::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FloatTileCache::FloatTile::tx(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::FloatTileCache::FloatTile::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FloatTileCache::FloatTile::ty() function, expected prototype:\nint proland::FloatTileCache::FloatTile::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FloatTileCache::FloatTile::ty(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::FloatTileCache::FloatTile::level(int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FloatTileCache::FloatTile::level(int value) function, expected prototype:\nvoid proland::FloatTileCache::FloatTile::level(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FloatTileCache::FloatTile::level(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void proland::FloatTileCache::FloatTile::tx(int value)
	static int _bind_setTx(lua_State *L) {
		if (!_lg_typecheck_setTx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FloatTileCache::FloatTile::tx(int value) function, expected prototype:\nvoid proland::FloatTileCache::FloatTile::tx(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FloatTileCache::FloatTile::tx(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tx = value;

		return 0;
	}

	// void proland::FloatTileCache::FloatTile::ty(int value)
	static int _bind_setTy(lua_State *L) {
		if (!_lg_typecheck_setTy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FloatTileCache::FloatTile::ty(int value) function, expected prototype:\nvoid proland::FloatTileCache::FloatTile::ty(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::FloatTileCache::FloatTile* self=(Luna< proland::FloatTileCache::FloatTile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FloatTileCache::FloatTile::ty(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache::FloatTile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ty = value;

		return 0;
	}


	// Operator binds:

};

proland::FloatTileCache::FloatTile* LunaTraits< proland::FloatTileCache::FloatTile >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::FloatTileCache::FloatTile >::_bind_dtor(proland::FloatTileCache::FloatTile* obj) {
	delete obj;
}

const char LunaTraits< proland::FloatTileCache::FloatTile >::className[] = "FloatTileCache_FloatTile";
const char LunaTraits< proland::FloatTileCache::FloatTile >::fullName[] = "proland::FloatTileCache::FloatTile";
const char LunaTraits< proland::FloatTileCache::FloatTile >::moduleName[] = "proland";
const char* LunaTraits< proland::FloatTileCache::FloatTile >::parents[] = {0};
const int LunaTraits< proland::FloatTileCache::FloatTile >::hash = 66358430;
const int LunaTraits< proland::FloatTileCache::FloatTile >::uniqueIDs[] = {66358430,0};

luna_RegType LunaTraits< proland::FloatTileCache::FloatTile >::methods[] = {
	{"key", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_key},
	{"getLevel", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_getLevel},
	{"getTx", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_getTx},
	{"getTy", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_getTy},
	{"setLevel", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_setLevel},
	{"setTx", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_setTx},
	{"setTy", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_setTy},
	{"dynCast", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_FloatTileCache_FloatTile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::FloatTileCache::FloatTile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::FloatTileCache::FloatTile >::enumValues[] = {
	{0,0}
};


