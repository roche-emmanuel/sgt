#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditResidualProducer.h>

class luna_wrapper_proland_EditResidualProducer {
public:
	typedef Luna< proland::EditResidualProducer > luna_t;

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

		proland::EditResidualProducer* self= (proland::EditResidualProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditResidualProducer >::push(L,self,false);
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
		//proland::EditResidualProducer* ptr= dynamic_cast< proland::EditResidualProducer* >(Luna< ork::Object >::check(L,1));
		proland::EditResidualProducer* ptr= luna_caster< ork::Object, proland::EditResidualProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditResidualProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,1) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateResiduals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// proland::EditResidualProducer::EditResidualProducer(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)
	static proland::EditResidualProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditResidualProducer::EditResidualProducer(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0) function, expected prototype:\nproland::EditResidualProducer::EditResidualProducer(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		const char * name=(const char *)lua_tostring(L,2);
		int deltaLevel=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		float zscale=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0;

		return new proland::EditResidualProducer(cache, name, deltaLevel, zscale);
	}

	// proland::EditResidualProducer::EditResidualProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)
	static proland::EditResidualProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditResidualProducer::EditResidualProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0) function, expected prototype:\nproland::EditResidualProducer::EditResidualProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		const char * name=(const char *)lua_tostring(L,3);
		int deltaLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		float zscale=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0;

		return new wrapper_proland_EditResidualProducer(L,NULL, cache, name, deltaLevel, zscale);
	}

	// Overload binder for proland::EditResidualProducer::EditResidualProducer
	static proland::EditResidualProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditResidualProducer, cannot match any of the overloads for function EditResidualProducer:\n  EditResidualProducer(ork::ptr< proland::TileCache >, const char *, int, float)\n  EditResidualProducer(lua_Table *, ork::ptr< proland::TileCache >, const char *, int, float)\n");
		return NULL;
	}


	// Function binds:
	// void proland::EditResidualProducer::updateResiduals()
	static int _bind_updateResiduals(lua_State *L) {
		if (!_lg_typecheck_updateResiduals(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::updateResiduals() function, expected prototype:\nvoid proland::EditResidualProducer::updateResiduals()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::updateResiduals(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateResiduals();

		return 0;
	}

	// void proland::EditResidualProducer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::reset() function, expected prototype:\nvoid proland::EditResidualProducer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// const char * proland::EditResidualProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditResidualProducer::base_toString() function, expected prototype:\nconst char * proland::EditResidualProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditResidualProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditResidualProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditResidualProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::EditResidualProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::setRootQuadSize(size);

		return 0;
	}

	// ork::ptr< proland::TileCache > proland::EditResidualProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::EditResidualProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::EditResidualProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::EditResidualProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->EditResidualProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditResidualProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditResidualProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::EditResidualProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditResidualProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditResidualProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditResidualProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditResidualProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::EditResidualProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditResidualProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditResidualProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::EditResidualProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditResidualProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditResidualProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditResidualProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditResidualProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditResidualProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::EditResidualProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::putTile(t);

		return 0;
	}

	// void proland::EditResidualProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::EditResidualProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::invalidateTiles();

		return 0;
	}

	// void proland::EditResidualProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditResidualProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::EditResidualProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::EditResidualProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::update(scene);

		return 0;
	}

	// void proland::EditResidualProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditResidualProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::EditResidualProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::EditResidualProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditResidualProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditResidualProducer::getReferencedProducers(producers);

		return 0;
	}

	// int proland::EditResidualProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditResidualProducer::base_getBorder() function, expected prototype:\nint proland::EditResidualProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditResidualProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->EditResidualProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::EditResidualProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditResidualProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditResidualProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditResidualProducer* self=Luna< ork::Object >::checkSubType< proland::EditResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditResidualProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditResidualProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditResidualProducer* LunaTraits< proland::EditResidualProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditResidualProducer::_bind_ctor(L);
}

void LunaTraits< proland::EditResidualProducer >::_bind_dtor(proland::EditResidualProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditResidualProducer >::className[] = "EditResidualProducer";
const char LunaTraits< proland::EditResidualProducer >::fullName[] = "proland::EditResidualProducer";
const char LunaTraits< proland::EditResidualProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::EditResidualProducer >::parents[] = {"proland.ResidualProducer", 0};
const int LunaTraits< proland::EditResidualProducer >::hash = 44258915;
const int LunaTraits< proland::EditResidualProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditResidualProducer >::methods[] = {
	{"updateResiduals", &luna_wrapper_proland_EditResidualProducer::_bind_updateResiduals},
	{"reset", &luna_wrapper_proland_EditResidualProducer::_bind_reset},
	{"base_toString", &luna_wrapper_proland_EditResidualProducer::_bind_base_toString},
	{"base_setRootQuadSize", &luna_wrapper_proland_EditResidualProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_proland_EditResidualProducer::_bind_base_getCache},
	{"base_findTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_EditResidualProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_EditResidualProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_EditResidualProducer::_bind_base_getReferencedProducers},
	{"base_getBorder", &luna_wrapper_proland_EditResidualProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_EditResidualProducer::_bind_base_hasTile},
	{"fromVoid", &luna_wrapper_proland_EditResidualProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditResidualProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditResidualProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditResidualProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditResidualProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditResidualProducer >::enumValues[] = {
	{0,0}
};


