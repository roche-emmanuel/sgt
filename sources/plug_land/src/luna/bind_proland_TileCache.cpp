#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileCache.h>

class luna_wrapper_proland_TileCache {
public:
	typedef Luna< proland::TileCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		proland::TileCache* self= (proland::TileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TileCache* ptr= dynamic_cast< proland::TileCache* >(Luna< ork::Object >::check(L,1));
		proland::TileCache* ptr= luna_caster< ork::Object, proland::TileCache >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,4) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getStorage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScheduler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileCache::TileCache(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)
	static proland::TileCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::TileCache(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL) function, expected prototype:\nproland::TileCache::TileCache(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)\nClass arguments details:\narg 1 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileStorage > storage = Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Scheduler > scheduler = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,3);

		return new proland::TileCache(storage, name, scheduler);
	}

	// proland::TileCache::TileCache(lua_Table * data, ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)
	static proland::TileCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::TileCache(lua_Table * data, ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL) function, expected prototype:\nproland::TileCache::TileCache(lua_Table * data, ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)\nClass arguments details:\narg 2 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileStorage > storage = Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		ork::ptr< ork::Scheduler > scheduler = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,4);

		return new wrapper_proland_TileCache(L,NULL, storage, name, scheduler);
	}

	// Overload binder for proland::TileCache::TileCache
	static proland::TileCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileCache, cannot match any of the overloads for function TileCache:\n  TileCache(ork::ptr< proland::TileStorage >, std::string, ork::ptr< ork::Scheduler >)\n  TileCache(lua_Table *, ork::ptr< proland::TileStorage >, std::string, ork::ptr< ork::Scheduler >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< proland::TileStorage > proland::TileCache::getStorage()
	static int _bind_getStorage(lua_State *L) {
		if (!_lg_typecheck_getStorage(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileStorage > proland::TileCache::getStorage() function, expected prototype:\nork::ptr< proland::TileStorage > proland::TileCache::getStorage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileStorage > proland::TileCache::getStorage(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileStorage > lret = self->getStorage();
		Luna< proland::TileStorage >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Scheduler > proland::TileCache::getScheduler()
	static int _bind_getScheduler(lua_State *L) {
		if (!_lg_typecheck_getScheduler(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Scheduler > proland::TileCache::getScheduler() function, expected prototype:\nork::ptr< ork::Scheduler > proland::TileCache::getScheduler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Scheduler > proland::TileCache::getScheduler(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Scheduler > lret = self->getScheduler();
		Luna< ork::Scheduler >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TileCache::getUsedTiles()
	static int _bind_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileCache::getUsedTiles() function, expected prototype:\nint proland::TileCache::getUsedTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileCache::getUsedTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUsedTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TileCache::getUnusedTiles()
	static int _bind_getUnusedTiles(lua_State *L) {
		if (!_lg_typecheck_getUnusedTiles(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileCache::getUnusedTiles() function, expected prototype:\nint proland::TileCache::getUnusedTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileCache::getUnusedTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUnusedTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false) function, expected prototype:\nproland::TileCache::Tile * proland::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		bool includeCache=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileCache::findTile(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->findTile(producerId, level, tx, ty, includeCache);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL) function, expected prototype:\nproland::TileCache::Tile * proland::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		unsigned int deadline=(unsigned int)lua_tointeger(L,6);
		int* users=luatop>6 ? (int*)Luna< void >::check(L,7) : (int*)NULL;

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileCache::getTile(int, int, int, int, unsigned int, int *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->getTile(producerId, level, tx, ty, deadline, users);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// ork::ptr< ork::Task > proland::TileCache::prefetchTile(int producerId, int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::TileCache::prefetchTile(int producerId, int level, int tx, int ty) function, expected prototype:\nork::ptr< ork::Task > proland::TileCache::prefetchTile(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::TileCache::prefetchTile(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->prefetchTile(producerId, level, tx, ty);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TileCache::putTile(proland::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileCache::putTile(proland::TileCache::Tile * t) function, expected prototype:\nint proland::TileCache::putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileCache::putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->putTile(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TileCache::invalidateTiles(int producerId)
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileCache::invalidateTiles(int producerId) function, expected prototype:\nvoid proland::TileCache::invalidateTiles(int producerId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileCache::invalidateTiles(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles(producerId);

		return 0;
	}

	// void proland::TileCache::invalidateTile(int producerId, int level, int tx, int ty)
	static int _bind_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileCache::invalidateTile(int producerId, int level, int tx, int ty) function, expected prototype:\nvoid proland::TileCache::invalidateTile(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);

		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileCache::invalidateTile(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTile(producerId, level, tx, ty);

		return 0;
	}

	// const char * proland::TileCache::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileCache::base_toString() function, expected prototype:\nconst char * proland::TileCache::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache* self=Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileCache::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileCache::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::TileCache* LunaTraits< proland::TileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileCache::_bind_ctor(L);
}

void LunaTraits< proland::TileCache >::_bind_dtor(proland::TileCache* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileCache >::className[] = "TileCache";
const char LunaTraits< proland::TileCache >::fullName[] = "proland::TileCache";
const char LunaTraits< proland::TileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::TileCache >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileCache >::hash = 4906634;
const int LunaTraits< proland::TileCache >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileCache >::methods[] = {
	{"getStorage", &luna_wrapper_proland_TileCache::_bind_getStorage},
	{"getScheduler", &luna_wrapper_proland_TileCache::_bind_getScheduler},
	{"getUsedTiles", &luna_wrapper_proland_TileCache::_bind_getUsedTiles},
	{"getUnusedTiles", &luna_wrapper_proland_TileCache::_bind_getUnusedTiles},
	{"findTile", &luna_wrapper_proland_TileCache::_bind_findTile},
	{"getTile", &luna_wrapper_proland_TileCache::_bind_getTile},
	{"prefetchTile", &luna_wrapper_proland_TileCache::_bind_prefetchTile},
	{"putTile", &luna_wrapper_proland_TileCache::_bind_putTile},
	{"invalidateTiles", &luna_wrapper_proland_TileCache::_bind_invalidateTiles},
	{"invalidateTile", &luna_wrapper_proland_TileCache::_bind_invalidateTile},
	{"base_toString", &luna_wrapper_proland_TileCache::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_TileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileCache >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileCache::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileCache >::enumValues[] = {
	{0,0}
};


