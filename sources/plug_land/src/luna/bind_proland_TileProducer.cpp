#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileProducer.h>

class luna_wrapper_proland_TileProducer {
public:
	typedef Luna< proland::TileProducer > luna_t;

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

		proland::TileProducer* self= (proland::TileProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileProducer >::push(L,self,false);
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
		//proland::TileProducer* ptr= dynamic_cast< proland::TileProducer* >(Luna< ork::Object >::check(L,1));
		proland::TileProducer* ptr= luna_caster< ork::Object, proland::TileProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,3) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,4) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isGpuProducer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
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

	inline static bool _lg_typecheck_hasChildren(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateTileMap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304240) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLayerCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasLayers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileProducer::TileProducer(const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer)
	static proland::TileProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileProducer::TileProducer(const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer) function, expected prototype:\nproland::TileProducer::TileProducer(const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		const char * taskType=(const char *)lua_tostring(L,2);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,3);
		bool gpuProducer=(bool)(lua_toboolean(L,4)==1);

		return new proland::TileProducer(type, taskType, cache, gpuProducer);
	}

	// proland::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer)
	static proland::TileProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer) function, expected prototype:\nproland::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, ork::ptr< proland::TileCache > cache, bool gpuProducer)\nClass arguments details:\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);
		const char * taskType=(const char *)lua_tostring(L,3);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,4);
		bool gpuProducer=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_proland_TileProducer(L,NULL, type, taskType, cache, gpuProducer);
	}

	// Overload binder for proland::TileProducer::TileProducer
	static proland::TileProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileProducer, cannot match any of the overloads for function TileProducer:\n  TileProducer(const char *, const char *, ork::ptr< proland::TileCache >, bool)\n  TileProducer(lua_Table *, const char *, const char *, ork::ptr< proland::TileCache >, bool)\n");
		return NULL;
	}


	// Function binds:
	// float proland::TileProducer::getRootQuadSize()
	static int _bind_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TileProducer::getRootQuadSize() function, expected prototype:\nfloat proland::TileProducer::getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TileProducer::getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TileProducer::setRootQuadSize(float size)
	static int _bind_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::setRootQuadSize(float size) function, expected prototype:\nvoid proland::TileProducer::setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootQuadSize(size);

		return 0;
	}

	// int proland::TileProducer::getId()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileProducer::getId() function, expected prototype:\nint proland::TileProducer::getId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileProducer::getId(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	static int _bind_getCache(lua_State *L) {
		if (!_lg_typecheck_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::TileProducer::getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::TileProducer::getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::TileProducer::getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::TileProducer::isGpuProducer()
	static int _bind_isGpuProducer(lua_State *L) {
		if (!_lg_typecheck_isGpuProducer(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::isGpuProducer() function, expected prototype:\nbool proland::TileProducer::isGpuProducer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::isGpuProducer(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isGpuProducer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::TileProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileProducer::getBorder() function, expected prototype:\nint proland::TileProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TileProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::TileProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TileProducer::hasChildren(int level, int tx, int ty)
	static int _bind_hasChildren(lua_State *L) {
		if (!_lg_typecheck_hasChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::hasChildren(int level, int tx, int ty) function, expected prototype:\nbool proland::TileProducer::hasChildren(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::hasChildren(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasChildren(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileProducer::findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileProducer::getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::TileProducer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::TileProducer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileProducer::putTile(proland::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::TileProducer::putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putTile(t);

		return 0;
	}

	// void proland::TileProducer::invalidateTiles()
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::invalidateTiles() function, expected prototype:\nvoid proland::TileProducer::invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles();

		return 0;
	}

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	static int _bind_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileProducer::invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::TileProducer::update(ork::ptr< ork::SceneManager > scene)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::TileProducer::update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(scene);

		return 0;
	}

	// bool proland::TileProducer::updateTileMap(float splitDistance, ork::vec2f camera, int maxLevel)
	static int _bind_updateTileMap(lua_State *L) {
		if (!_lg_typecheck_updateTileMap(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::updateTileMap(float splitDistance, ork::vec2f camera, int maxLevel) function, expected prototype:\nbool proland::TileProducer::updateTileMap(float splitDistance, ork::vec2f camera, int maxLevel)\nClass arguments details:\narg 2 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		float splitDistance=(float)lua_tonumber(L,2);
		ork::vec2f* camera_ptr=(Luna< ork::vec2f >::check(L,3));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in proland::TileProducer::updateTileMap function");
		}
		ork::vec2f camera=*camera_ptr;
		int maxLevel=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::updateTileMap(float, ork::vec2f, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->updateTileMap(splitDistance, camera, maxLevel);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TileProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TileProducer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// int proland::TileProducer::getLayerCount() const
	static int _bind_getLayerCount(lua_State *L) {
		if (!_lg_typecheck_getLayerCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileProducer::getLayerCount() const function, expected prototype:\nint proland::TileProducer::getLayerCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileProducer::getLayerCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayerCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileLayer > proland::TileProducer::getLayer(int index) const
	static int _bind_getLayer(lua_State *L) {
		if (!_lg_typecheck_getLayer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileLayer > proland::TileProducer::getLayer(int index) const function, expected prototype:\nork::ptr< proland::TileLayer > proland::TileProducer::getLayer(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileLayer > proland::TileProducer::getLayer(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileLayer > lret = self->getLayer(index);
		Luna< proland::TileLayer >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::TileProducer::hasLayers() const
	static int _bind_hasLayers(lua_State *L) {
		if (!_lg_typecheck_hasLayers(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::hasLayers() const function, expected prototype:\nbool proland::TileProducer::hasLayers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::hasLayers() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasLayers();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileProducer::addLayer(ork::ptr< proland::TileLayer > l)
	static int _bind_addLayer(lua_State *L) {
		if (!_lg_typecheck_addLayer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::addLayer(ork::ptr< proland::TileLayer > l) function, expected prototype:\nvoid proland::TileProducer::addLayer(ork::ptr< proland::TileLayer > l)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileLayer > l = Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::addLayer(ork::ptr< proland::TileLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addLayer(l);

		return 0;
	}

	// const char * proland::TileProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileProducer::base_toString() function, expected prototype:\nconst char * proland::TileProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TileProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::TileProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::setRootQuadSize(size);

		return 0;
	}

	// ork::ptr< proland::TileCache > proland::TileProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::TileProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::TileProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::TileProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->TileProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TileProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileProducer::base_getBorder() function, expected prototype:\nint proland::TileProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TileProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TileProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::TileProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TileProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->TileProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::TileProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->TileProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::TileProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::TileProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TileProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::TileProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::putTile(t);

		return 0;
	}

	// void proland::TileProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::TileProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::invalidateTiles();

		return 0;
	}

	// void proland::TileProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::TileProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::TileProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::update(scene);

		return 0;
	}

	// void proland::TileProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TileProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TileProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TileProducer* self=Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::getReferencedProducers(producers);

		return 0;
	}


	// Operator binds:

};

proland::TileProducer* LunaTraits< proland::TileProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileProducer::_bind_ctor(L);
}

void LunaTraits< proland::TileProducer >::_bind_dtor(proland::TileProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileProducer >::className[] = "TileProducer";
const char LunaTraits< proland::TileProducer >::fullName[] = "proland::TileProducer";
const char LunaTraits< proland::TileProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::TileProducer >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileProducer >::hash = 65411232;
const int LunaTraits< proland::TileProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileProducer >::methods[] = {
	{"getRootQuadSize", &luna_wrapper_proland_TileProducer::_bind_getRootQuadSize},
	{"setRootQuadSize", &luna_wrapper_proland_TileProducer::_bind_setRootQuadSize},
	{"getId", &luna_wrapper_proland_TileProducer::_bind_getId},
	{"getCache", &luna_wrapper_proland_TileProducer::_bind_getCache},
	{"isGpuProducer", &luna_wrapper_proland_TileProducer::_bind_isGpuProducer},
	{"getBorder", &luna_wrapper_proland_TileProducer::_bind_getBorder},
	{"hasTile", &luna_wrapper_proland_TileProducer::_bind_hasTile},
	{"hasChildren", &luna_wrapper_proland_TileProducer::_bind_hasChildren},
	{"findTile", &luna_wrapper_proland_TileProducer::_bind_findTile},
	{"getTile", &luna_wrapper_proland_TileProducer::_bind_getTile},
	{"prefetchTile", &luna_wrapper_proland_TileProducer::_bind_prefetchTile},
	{"putTile", &luna_wrapper_proland_TileProducer::_bind_putTile},
	{"invalidateTiles", &luna_wrapper_proland_TileProducer::_bind_invalidateTiles},
	{"invalidateTile", &luna_wrapper_proland_TileProducer::_bind_invalidateTile},
	{"update", &luna_wrapper_proland_TileProducer::_bind_update},
	{"updateTileMap", &luna_wrapper_proland_TileProducer::_bind_updateTileMap},
	{"getReferencedProducers", &luna_wrapper_proland_TileProducer::_bind_getReferencedProducers},
	{"getLayerCount", &luna_wrapper_proland_TileProducer::_bind_getLayerCount},
	{"getLayer", &luna_wrapper_proland_TileProducer::_bind_getLayer},
	{"hasLayers", &luna_wrapper_proland_TileProducer::_bind_hasLayers},
	{"addLayer", &luna_wrapper_proland_TileProducer::_bind_addLayer},
	{"base_toString", &luna_wrapper_proland_TileProducer::_bind_base_toString},
	{"base_setRootQuadSize", &luna_wrapper_proland_TileProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_proland_TileProducer::_bind_base_getCache},
	{"base_getBorder", &luna_wrapper_proland_TileProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_TileProducer::_bind_base_hasTile},
	{"base_findTile", &luna_wrapper_proland_TileProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_TileProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_proland_TileProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_proland_TileProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_TileProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_TileProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_TileProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_TileProducer::_bind_base_getReferencedProducers},
	{"fromVoid", &luna_wrapper_proland_TileProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileProducer >::enumValues[] = {
	{0,0}
};


