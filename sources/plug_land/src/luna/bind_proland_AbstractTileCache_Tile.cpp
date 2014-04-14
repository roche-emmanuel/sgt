#include <plug_common.h>

class luna_wrapper_proland_AbstractTileCache_Tile {
public:
	typedef Luna< proland::AbstractTileCache::Tile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99111272) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::AbstractTileCache::Tile*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::AbstractTileCache::Tile* rhs =(Luna< proland::AbstractTileCache::Tile >::check(L,2));
		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
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

		proland::AbstractTileCache::Tile* self= (proland::AbstractTileCache::Tile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::AbstractTileCache::Tile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99111272) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::AbstractTileCache::Tile >::check(L,1));
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

		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::AbstractTileCache::Tile");
		
		return luna_dynamicCast(L,converters,"proland::AbstractTileCache::Tile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_key(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::AbstractTileCache::Tile::Tile(int tx, int ty, unsigned char * data = NULL)
	static proland::AbstractTileCache::Tile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::AbstractTileCache::Tile::Tile(int tx, int ty, unsigned char * data = NULL) function, expected prototype:\nproland::AbstractTileCache::Tile::Tile(int tx, int ty, unsigned char * data = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tx=(int)lua_tointeger(L,1);
		int ty=(int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));

		return new proland::AbstractTileCache::Tile(tx, ty, &data);
	}


	// Function binds:
	// int proland::AbstractTileCache::Tile::key(int width)
	static int _bind_key(lua_State *L) {
		if (!_lg_typecheck_key(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::Tile::key(int width) function, expected prototype:\nint proland::AbstractTileCache::Tile::key(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::Tile::key(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->key(width);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AbstractTileCache::Tile::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::Tile::tx() function, expected prototype:\nint proland::AbstractTileCache::Tile::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::Tile::tx(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AbstractTileCache::Tile::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::Tile::ty() function, expected prototype:\nint proland::AbstractTileCache::Tile::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::Tile::ty(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * proland::AbstractTileCache::Tile::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * proland::AbstractTileCache::Tile::data() function, expected prototype:\nunsigned char * proland::AbstractTileCache::Tile::data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * proland::AbstractTileCache::Tile::data(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->data;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void proland::AbstractTileCache::Tile::tx(int value)
	static int _bind_setTx(lua_State *L) {
		if (!_lg_typecheck_setTx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AbstractTileCache::Tile::tx(int value) function, expected prototype:\nvoid proland::AbstractTileCache::Tile::tx(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AbstractTileCache::Tile::tx(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tx = value;

		return 0;
	}

	// void proland::AbstractTileCache::Tile::ty(int value)
	static int _bind_setTy(lua_State *L) {
		if (!_lg_typecheck_setTy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AbstractTileCache::Tile::ty(int value) function, expected prototype:\nvoid proland::AbstractTileCache::Tile::ty(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AbstractTileCache::Tile::ty(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ty = value;

		return 0;
	}

	// void proland::AbstractTileCache::Tile::data(unsigned char * value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AbstractTileCache::Tile::data(unsigned char * value) function, expected prototype:\nvoid proland::AbstractTileCache::Tile::data(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		proland::AbstractTileCache::Tile* self=(Luna< proland::AbstractTileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AbstractTileCache::Tile::data(unsigned char *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data = &value;

		return 0;
	}


	// Operator binds:

};

proland::AbstractTileCache::Tile* LunaTraits< proland::AbstractTileCache::Tile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_AbstractTileCache_Tile::_bind_ctor(L);
}

void LunaTraits< proland::AbstractTileCache::Tile >::_bind_dtor(proland::AbstractTileCache::Tile* obj) {
	delete obj;
}

const char LunaTraits< proland::AbstractTileCache::Tile >::className[] = "AbstractTileCache_Tile";
const char LunaTraits< proland::AbstractTileCache::Tile >::fullName[] = "proland::AbstractTileCache::Tile";
const char LunaTraits< proland::AbstractTileCache::Tile >::moduleName[] = "proland";
const char* LunaTraits< proland::AbstractTileCache::Tile >::parents[] = {0};
const int LunaTraits< proland::AbstractTileCache::Tile >::hash = 99111272;
const int LunaTraits< proland::AbstractTileCache::Tile >::uniqueIDs[] = {99111272,0};

luna_RegType LunaTraits< proland::AbstractTileCache::Tile >::methods[] = {
	{"key", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_key},
	{"getTx", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_getTx},
	{"getTy", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_getTy},
	{"getData", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_getData},
	{"setTx", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_setTx},
	{"setTy", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_setTy},
	{"setData", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_setData},
	{"dynCast", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_AbstractTileCache_Tile::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_AbstractTileCache_Tile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::AbstractTileCache::Tile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::AbstractTileCache::Tile >::enumValues[] = {
	{0,0}
};


