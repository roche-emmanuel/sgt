#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditOrthoCPUProducer.h>

class luna_wrapper_proland_EditOrthoCPUProducer {
public:
	typedef Luna< proland::EditOrthoCPUProducer > luna_t;

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

		proland::EditOrthoCPUProducer* self= (proland::EditOrthoCPUProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditOrthoCPUProducer >::push(L,self,false);
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
		//proland::EditOrthoCPUProducer* ptr= dynamic_cast< proland::EditOrthoCPUProducer* >(Luna< ork::Object >::check(L,1));
		proland::EditOrthoCPUProducer* ptr= luna_caster< ork::Object, proland::EditOrthoCPUProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditOrthoCPUProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,1) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_editedTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditOrthoCPUProducer::EditOrthoCPUProducer(ork::ptr< proland::TileCache > cache, const char * name)
	static proland::EditOrthoCPUProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditOrthoCPUProducer::EditOrthoCPUProducer(ork::ptr< proland::TileCache > cache, const char * name) function, expected prototype:\nproland::EditOrthoCPUProducer::EditOrthoCPUProducer(ork::ptr< proland::TileCache > cache, const char * name)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		const char * name=(const char *)lua_tostring(L,2);

		return new proland::EditOrthoCPUProducer(cache, name);
	}

	// proland::EditOrthoCPUProducer::EditOrthoCPUProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name)
	static proland::EditOrthoCPUProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditOrthoCPUProducer::EditOrthoCPUProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name) function, expected prototype:\nproland::EditOrthoCPUProducer::EditOrthoCPUProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		const char * name=(const char *)lua_tostring(L,3);

		return new wrapper_proland_EditOrthoCPUProducer(L,NULL, cache, name);
	}

	// Overload binder for proland::EditOrthoCPUProducer::EditOrthoCPUProducer
	static proland::EditOrthoCPUProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditOrthoCPUProducer, cannot match any of the overloads for function EditOrthoCPUProducer:\n  EditOrthoCPUProducer(ork::ptr< proland::TileCache >, const char *)\n  EditOrthoCPUProducer(lua_Table *, ork::ptr< proland::TileCache >, const char *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::EditOrthoCPUProducer::editedTile(int level, int tx, int ty, int * deltaColor)
	static int _bind_editedTile(lua_State *L) {
		if (!_lg_typecheck_editedTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::editedTile(int level, int tx, int ty, int * deltaColor) function, expected prototype:\nvoid proland::EditOrthoCPUProducer::editedTile(int level, int tx, int ty, int * deltaColor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		int* deltaColor=(int*)Luna< void >::check(L,5);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::editedTile(int, int, int, int *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->editedTile(level, tx, ty, deltaColor);

		return 0;
	}

	// void proland::EditOrthoCPUProducer::updateTiles()
	static int _bind_updateTiles(lua_State *L) {
		if (!_lg_typecheck_updateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::updateTiles() function, expected prototype:\nvoid proland::EditOrthoCPUProducer::updateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::updateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateTiles();

		return 0;
	}

	// bool proland::EditOrthoCPUProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditOrthoCPUProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditOrthoCPUProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditOrthoCPUProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditOrthoCPUProducer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::reset() function, expected prototype:\nvoid proland::EditOrthoCPUProducer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// const char * proland::EditOrthoCPUProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditOrthoCPUProducer::base_toString() function, expected prototype:\nconst char * proland::EditOrthoCPUProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditOrthoCPUProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditOrthoCPUProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditOrthoCPUProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::setRootQuadSize(size);

		return 0;
	}

	// ork::ptr< proland::TileCache > proland::EditOrthoCPUProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::EditOrthoCPUProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::EditOrthoCPUProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::EditOrthoCPUProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->EditOrthoCPUProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::EditOrthoCPUProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditOrthoCPUProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::EditOrthoCPUProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditOrthoCPUProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditOrthoCPUProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::EditOrthoCPUProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditOrthoCPUProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditOrthoCPUProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditOrthoCPUProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditOrthoCPUProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditOrthoCPUProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::putTile(t);

		return 0;
	}

	// void proland::EditOrthoCPUProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::invalidateTiles();

		return 0;
	}

	// void proland::EditOrthoCPUProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::EditOrthoCPUProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::update(scene);

		return 0;
	}

	// void proland::EditOrthoCPUProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoCPUProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::EditOrthoCPUProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::EditOrthoCPUProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoCPUProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoCPUProducer::getReferencedProducers(producers);

		return 0;
	}

	// int proland::EditOrthoCPUProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditOrthoCPUProducer::base_getBorder() function, expected prototype:\nint proland::EditOrthoCPUProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditOrthoCPUProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->EditOrthoCPUProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::EditOrthoCPUProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditOrthoCPUProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditOrthoCPUProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoCPUProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoCPUProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditOrthoCPUProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditOrthoCPUProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditOrthoCPUProducer* LunaTraits< proland::EditOrthoCPUProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditOrthoCPUProducer::_bind_ctor(L);
}

void LunaTraits< proland::EditOrthoCPUProducer >::_bind_dtor(proland::EditOrthoCPUProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditOrthoCPUProducer >::className[] = "EditOrthoCPUProducer";
const char LunaTraits< proland::EditOrthoCPUProducer >::fullName[] = "proland::EditOrthoCPUProducer";
const char LunaTraits< proland::EditOrthoCPUProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::EditOrthoCPUProducer >::parents[] = {"proland.OrthoCPUProducer", 0};
const int LunaTraits< proland::EditOrthoCPUProducer >::hash = 61243404;
const int LunaTraits< proland::EditOrthoCPUProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditOrthoCPUProducer >::methods[] = {
	{"editedTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_editedTile},
	{"updateTiles", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_updateTiles},
	{"hasTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_hasTile},
	{"reset", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_reset},
	{"base_toString", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_toString},
	{"base_setRootQuadSize", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_getCache},
	{"base_findTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_getReferencedProducers},
	{"base_getBorder", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_base_hasTile},
	{"fromVoid", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditOrthoCPUProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditOrthoCPUProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditOrthoCPUProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditOrthoCPUProducer >::enumValues[] = {
	{0,0}
};


