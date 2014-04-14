#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_AbstractTileCache.h>

class luna_wrapper_proland_AbstractTileCache {
public:
	typedef Luna< proland::AbstractTileCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::AbstractTileCache,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98663171) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::AbstractTileCache*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::AbstractTileCache* rhs =(Luna< proland::AbstractTileCache >::check(L,2));
		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
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

		proland::AbstractTileCache* self= (proland::AbstractTileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::AbstractTileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98663171) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::AbstractTileCache >::check(L,1));
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

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::AbstractTileCache");
		
		return luna_dynamicCast(L,converters,"proland::AbstractTileCache",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChannels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTileColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::AbstractTileCache::AbstractTileCache(lua_Table * data, int width, int height, int tileSize, int channels, int capacity = 20)
	static proland::AbstractTileCache* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::AbstractTileCache::AbstractTileCache(lua_Table * data, int width, int height, int tileSize, int channels, int capacity = 20) function, expected prototype:\nproland::AbstractTileCache::AbstractTileCache(lua_Table * data, int width, int height, int tileSize, int channels, int capacity = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);
		int channels=(int)lua_tointeger(L,5);
		int capacity=luatop>5 ? (int)lua_tointeger(L,6) : (int)20;

		return new wrapper_proland_AbstractTileCache(L,NULL, width, height, tileSize, channels, capacity);
	}


	// Function binds:
	// int proland::AbstractTileCache::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::getWidth() function, expected prototype:\nint proland::AbstractTileCache::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::getWidth(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AbstractTileCache::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::getHeight() function, expected prototype:\nint proland::AbstractTileCache::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::getHeight(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AbstractTileCache::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::getTileSize() function, expected prototype:\nint proland::AbstractTileCache::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::getTileSize(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AbstractTileCache::getChannels()
	static int _bind_getChannels(lua_State *L) {
		if (!_lg_typecheck_getChannels(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AbstractTileCache::getChannels() function, expected prototype:\nint proland::AbstractTileCache::getChannels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AbstractTileCache::getChannels(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getChannels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * proland::AbstractTileCache::getTile(int tx, int ty)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * proland::AbstractTileCache::getTile(int tx, int ty) function, expected prototype:\nunsigned char * proland::AbstractTileCache::getTile(int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tx=(int)lua_tointeger(L,2);
		int ty=(int)lua_tointeger(L,3);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * proland::AbstractTileCache::getTile(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getTile(tx, ty);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// float proland::AbstractTileCache::getTileHeight(int x, int y)
	static int _bind_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AbstractTileCache::getTileHeight(int x, int y) function, expected prototype:\nfloat proland::AbstractTileCache::getTileHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AbstractTileCache::getTileHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec4f proland::AbstractTileCache::getTileColor(int x, int y)
	static int _bind_getTileColor(lua_State *L) {
		if (!_lg_typecheck_getTileColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::AbstractTileCache::getTileColor(int x, int y) function, expected prototype:\nork::vec4f proland::AbstractTileCache::getTileColor(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::AbstractTileCache::getTileColor(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getTileColor(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::AbstractTileCache::reset(int width, int height, int tileSize)
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AbstractTileCache::reset(int width, int height, int tileSize) function, expected prototype:\nvoid proland::AbstractTileCache::reset(int width, int height, int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AbstractTileCache::reset(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset(width, height, tileSize);

		return 0;
	}

	// float proland::AbstractTileCache::base_getTileHeight(int x, int y)
	static int _bind_base_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AbstractTileCache::base_getTileHeight(int x, int y) function, expected prototype:\nfloat proland::AbstractTileCache::base_getTileHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AbstractTileCache::base_getTileHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->AbstractTileCache::getTileHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec4f proland::AbstractTileCache::base_getTileColor(int x, int y)
	static int _bind_base_getTileColor(lua_State *L) {
		if (!_lg_typecheck_base_getTileColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::AbstractTileCache::base_getTileColor(int x, int y) function, expected prototype:\nork::vec4f proland::AbstractTileCache::base_getTileColor(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::AbstractTileCache::base_getTileColor(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->AbstractTileCache::getTileColor(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::AbstractTileCache::base_reset(int width, int height, int tileSize)
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AbstractTileCache::base_reset(int width, int height, int tileSize) function, expected prototype:\nvoid proland::AbstractTileCache::base_reset(int width, int height, int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AbstractTileCache::base_reset(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AbstractTileCache::reset(width, height, tileSize);

		return 0;
	}


	// Operator binds:

};

proland::AbstractTileCache* LunaTraits< proland::AbstractTileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_AbstractTileCache::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned char * proland::AbstractTileCache::readTile(int tx, int ty)
}

void LunaTraits< proland::AbstractTileCache >::_bind_dtor(proland::AbstractTileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::AbstractTileCache >::className[] = "AbstractTileCache";
const char LunaTraits< proland::AbstractTileCache >::fullName[] = "proland::AbstractTileCache";
const char LunaTraits< proland::AbstractTileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::AbstractTileCache >::parents[] = {0};
const int LunaTraits< proland::AbstractTileCache >::hash = 98663171;
const int LunaTraits< proland::AbstractTileCache >::uniqueIDs[] = {98663171,0};

luna_RegType LunaTraits< proland::AbstractTileCache >::methods[] = {
	{"getWidth", &luna_wrapper_proland_AbstractTileCache::_bind_getWidth},
	{"getHeight", &luna_wrapper_proland_AbstractTileCache::_bind_getHeight},
	{"getTileSize", &luna_wrapper_proland_AbstractTileCache::_bind_getTileSize},
	{"getChannels", &luna_wrapper_proland_AbstractTileCache::_bind_getChannels},
	{"getTile", &luna_wrapper_proland_AbstractTileCache::_bind_getTile},
	{"getTileHeight", &luna_wrapper_proland_AbstractTileCache::_bind_getTileHeight},
	{"getTileColor", &luna_wrapper_proland_AbstractTileCache::_bind_getTileColor},
	{"reset", &luna_wrapper_proland_AbstractTileCache::_bind_reset},
	{"base_getTileHeight", &luna_wrapper_proland_AbstractTileCache::_bind_base_getTileHeight},
	{"base_getTileColor", &luna_wrapper_proland_AbstractTileCache::_bind_base_getTileColor},
	{"base_reset", &luna_wrapper_proland_AbstractTileCache::_bind_base_reset},
	{"dynCast", &luna_wrapper_proland_AbstractTileCache::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_AbstractTileCache::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_AbstractTileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_AbstractTileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_AbstractTileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::AbstractTileCache >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::AbstractTileCache >::enumValues[] = {
	{0,0}
};


