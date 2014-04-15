#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_PlantsProducer.h>

class luna_wrapper_proland_PlantsProducer {
public:
	typedef Luna< proland::PlantsProducer > luna_t;

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

		proland::PlantsProducer* self= (proland::PlantsProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::PlantsProducer >::push(L,self,false);
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
		//proland::PlantsProducer* ptr= dynamic_cast< proland::PlantsProducer* >(Luna< ork::Object >::check(L,1));
		proland::PlantsProducer* ptr= luna_caster< ork::Object, proland::PlantsProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::PlantsProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,8) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileSampler >(L,8) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,9) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_produceTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlantsMesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlantsProducer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalCameraPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentCameraPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreenToLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrustumZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZNear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentFrameToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentFrameToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentSpaceToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraRefPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTangentSunDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffsets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlantBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlantBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSlaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaster(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalCameraPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentCameraPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrustumZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZNear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentFrameToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentFrameToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentSpaceToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCameraRefPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTangentSunDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffsets(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSizes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlantBounds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55852521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlantBox(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSlaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,33653159) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaster(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
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
	// proland::PlantsProducer::PlantsProducer(ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache)
	static proland::PlantsProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::PlantsProducer::PlantsProducer(ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache) function, expected prototype:\nproland::PlantsProducer::PlantsProducer(ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		ork::ptr< proland::TerrainNode > terrain = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,3);
		ork::ptr< proland::TileSampler > lcc = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,4);
		ork::ptr< proland::TileSampler > z = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,5);
		ork::ptr< proland::TileSampler > n = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,6);
		ork::ptr< proland::TileSampler > occ = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,7);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,8);

		return new proland::PlantsProducer(node, terrain, plants, lcc, z, n, occ, cache);
	}

	// proland::PlantsProducer::PlantsProducer(proland::PlantsProducer * master)
	static proland::PlantsProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::PlantsProducer::PlantsProducer(proland::PlantsProducer * master) function, expected prototype:\nproland::PlantsProducer::PlantsProducer(proland::PlantsProducer * master)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::PlantsProducer* master=(Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1));

		return new proland::PlantsProducer(master);
	}

	// proland::PlantsProducer::PlantsProducer(lua_Table * data, ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache)
	static proland::PlantsProducer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::PlantsProducer::PlantsProducer(lua_Table * data, ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache) function, expected prototype:\nproland::PlantsProducer::PlantsProducer(lua_Table * data, ork::ptr< ork::SceneNode > node, ork::ptr< proland::TerrainNode > terrain, ork::ptr< proland::Plants > plants, ork::ptr< proland::TileSampler > lcc, ork::ptr< proland::TileSampler > z, ork::ptr< proland::TileSampler > n, ork::ptr< proland::TileSampler > occ, ork::ptr< proland::TileCache > cache)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = [unknown]\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		ork::ptr< proland::TerrainNode > terrain = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3);
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,4);
		ork::ptr< proland::TileSampler > lcc = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,5);
		ork::ptr< proland::TileSampler > z = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,6);
		ork::ptr< proland::TileSampler > n = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,7);
		ork::ptr< proland::TileSampler > occ = Luna< ork::Object >::checkSubType< proland::TileSampler >(L,8);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,9);

		return new wrapper_proland_PlantsProducer(L,NULL, node, terrain, plants, lcc, z, n, occ, cache);
	}

	// proland::PlantsProducer::PlantsProducer(lua_Table * data, proland::PlantsProducer * master)
	static proland::PlantsProducer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::PlantsProducer::PlantsProducer(lua_Table * data, proland::PlantsProducer * master) function, expected prototype:\nproland::PlantsProducer::PlantsProducer(lua_Table * data, proland::PlantsProducer * master)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::PlantsProducer* master=(Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,2));

		return new wrapper_proland_PlantsProducer(L,NULL, master);
	}

	// Overload binder for proland::PlantsProducer::PlantsProducer
	static proland::PlantsProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PlantsProducer, cannot match any of the overloads for function PlantsProducer:\n  PlantsProducer(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< proland::Plants >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileCache >)\n  PlantsProducer(proland::PlantsProducer *)\n  PlantsProducer(lua_Table *, ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< proland::Plants >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileSampler >, ork::ptr< proland::TileCache >)\n  PlantsProducer(lua_Table *, proland::PlantsProducer *)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::PlantsProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::PlantsProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::PlantsProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::PlantsProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::PlantsProducer::produceTiles()
	static int _bind_produceTiles(lua_State *L) {
		if (!_lg_typecheck_produceTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::produceTiles() function, expected prototype:\nvoid proland::PlantsProducer::produceTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::produceTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->produceTiles();

		return 0;
	}

	// ork::ptr< ork::MeshBuffers > proland::PlantsProducer::getPlantsMesh()
	static int _bind_getPlantsMesh(lua_State *L) {
		if (!_lg_typecheck_getPlantsMesh(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::MeshBuffers > proland::PlantsProducer::getPlantsMesh() function, expected prototype:\nork::ptr< ork::MeshBuffers > proland::PlantsProducer::getPlantsMesh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::MeshBuffers > proland::PlantsProducer::getPlantsMesh(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::MeshBuffers > lret = self->getPlantsMesh();
		Luna< ork::MeshBuffers >::push(L,lret.get(),false);

		return 1;
	}

	// static ork::ptr< proland::PlantsProducer > proland::PlantsProducer::getPlantsProducer(ork::ptr< ork::SceneNode > terrain, ork::ptr< proland::Plants > plants)
	static int _bind_getPlantsProducer(lua_State *L) {
		if (!_lg_typecheck_getPlantsProducer(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< proland::PlantsProducer > proland::PlantsProducer::getPlantsProducer(ork::ptr< ork::SceneNode > terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nstatic ork::ptr< proland::PlantsProducer > proland::PlantsProducer::getPlantsProducer(ork::ptr< ork::SceneNode > terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > terrain = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,2);

		ork::ptr< proland::PlantsProducer > lret = proland::PlantsProducer::getPlantsProducer(terrain, plants);
		Luna< proland::PlantsProducer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::SceneNode > proland::PlantsProducer::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > proland::PlantsProducer::node() function, expected prototype:\nork::ptr< ork::SceneNode > proland::PlantsProducer::node()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > proland::PlantsProducer::node(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->node;
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainNode > proland::PlantsProducer::terrain()
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainNode > proland::PlantsProducer::terrain() function, expected prototype:\nork::ptr< proland::TerrainNode > proland::PlantsProducer::terrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainNode > proland::PlantsProducer::terrain(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainNode > lret = self->terrain;
		Luna< proland::TerrainNode >::push(L,lret.get(),false);

		return 1;
	}

	// ork::vec3d proland::PlantsProducer::localCameraPos()
	static int _bind_getLocalCameraPos(lua_State *L) {
		if (!_lg_typecheck_getLocalCameraPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::PlantsProducer::localCameraPos() function, expected prototype:\nork::vec3d proland::PlantsProducer::localCameraPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::PlantsProducer::localCameraPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->localCameraPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::PlantsProducer::tangentCameraPos()
	static int _bind_getTangentCameraPos(lua_State *L) {
		if (!_lg_typecheck_getTangentCameraPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::PlantsProducer::tangentCameraPos() function, expected prototype:\nork::vec3d proland::PlantsProducer::tangentCameraPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::PlantsProducer::tangentCameraPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->tangentCameraPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::localToTangentFrame()
	static int _bind_getLocalToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_getLocalToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::localToTangentFrame() function, expected prototype:\nork::mat4d proland::PlantsProducer::localToTangentFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::localToTangentFrame(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->localToTangentFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::localToScreen()
	static int _bind_getLocalToScreen(lua_State *L) {
		if (!_lg_typecheck_getLocalToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::localToScreen() function, expected prototype:\nork::mat4d proland::PlantsProducer::localToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::localToScreen(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->localToScreen;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::screenToLocal()
	static int _bind_getScreenToLocal(lua_State *L) {
		if (!_lg_typecheck_getScreenToLocal(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::screenToLocal() function, expected prototype:\nork::mat4d proland::PlantsProducer::screenToLocal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::screenToLocal(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->screenToLocal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::vec4d proland::PlantsProducer::frustumZ()
	static int _bind_getFrustumZ(lua_State *L) {
		if (!_lg_typecheck_getFrustumZ(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d proland::PlantsProducer::frustumZ() function, expected prototype:\nork::vec4d proland::PlantsProducer::frustumZ()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d proland::PlantsProducer::frustumZ(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec4d* lret = &self->frustumZ;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,false);

		return 1;
	}

	// double proland::PlantsProducer::zNear()
	static int _bind_getZNear(lua_State *L) {
		if (!_lg_typecheck_getZNear(L)) {
			luaL_error(L, "luna typecheck failed in double proland::PlantsProducer::zNear() function, expected prototype:\ndouble proland::PlantsProducer::zNear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::PlantsProducer::zNear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->zNear;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::PlantsProducer::zRange()
	static int _bind_getZRange(lua_State *L) {
		if (!_lg_typecheck_getZRange(L)) {
			luaL_error(L, "luna typecheck failed in double proland::PlantsProducer::zRange() function, expected prototype:\ndouble proland::PlantsProducer::zRange()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::PlantsProducer::zRange(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->zRange;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::tangentFrameToScreen()
	static int _bind_getTangentFrameToScreen(lua_State *L) {
		if (!_lg_typecheck_getTangentFrameToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::tangentFrameToScreen() function, expected prototype:\nork::mat4d proland::PlantsProducer::tangentFrameToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::tangentFrameToScreen(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->tangentFrameToScreen;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::tangentFrameToWorld()
	static int _bind_getTangentFrameToWorld(lua_State *L) {
		if (!_lg_typecheck_getTangentFrameToWorld(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::tangentFrameToWorld() function, expected prototype:\nork::mat4d proland::PlantsProducer::tangentFrameToWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::tangentFrameToWorld(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->tangentFrameToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::mat3d proland::PlantsProducer::tangentSpaceToWorld()
	static int _bind_getTangentSpaceToWorld(lua_State *L) {
		if (!_lg_typecheck_getTangentSpaceToWorld(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d proland::PlantsProducer::tangentSpaceToWorld() function, expected prototype:\nork::mat3d proland::PlantsProducer::tangentSpaceToWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d proland::PlantsProducer::tangentSpaceToWorld(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat3d* lret = &self->tangentSpaceToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,false);

		return 1;
	}

	// ork::mat4d proland::PlantsProducer::cameraToTangentFrame()
	static int _bind_getCameraToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_getCameraToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::PlantsProducer::cameraToTangentFrame() function, expected prototype:\nork::mat4d proland::PlantsProducer::cameraToTangentFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::PlantsProducer::cameraToTangentFrame(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat4d* lret = &self->cameraToTangentFrame;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::PlantsProducer::cameraRefPos()
	static int _bind_getCameraRefPos(lua_State *L) {
		if (!_lg_typecheck_getCameraRefPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::PlantsProducer::cameraRefPos() function, expected prototype:\nork::vec3d proland::PlantsProducer::cameraRefPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::PlantsProducer::cameraRefPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->cameraRefPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::PlantsProducer::tangentSunDir()
	static int _bind_getTangentSunDir(lua_State *L) {
		if (!_lg_typecheck_getTangentSunDir(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::PlantsProducer::tangentSunDir() function, expected prototype:\nork::vec3d proland::PlantsProducer::tangentSunDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::PlantsProducer::tangentSunDir(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->tangentSunDir;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// int * proland::PlantsProducer::offsets()
	static int _bind_getOffsets(lua_State *L) {
		if (!_lg_typecheck_getOffsets(L)) {
			luaL_error(L, "luna typecheck failed in int * proland::PlantsProducer::offsets() function, expected prototype:\nint * proland::PlantsProducer::offsets()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int * proland::PlantsProducer::offsets(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int * lret = self->offsets;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int * proland::PlantsProducer::sizes()
	static int _bind_getSizes(lua_State *L) {
		if (!_lg_typecheck_getSizes(L)) {
			luaL_error(L, "luna typecheck failed in int * proland::PlantsProducer::sizes() function, expected prototype:\nint * proland::PlantsProducer::sizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int * proland::PlantsProducer::sizes(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int * lret = self->sizes;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int proland::PlantsProducer::count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::PlantsProducer::count() function, expected prototype:\nint proland::PlantsProducer::count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::PlantsProducer::count(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::PlantsProducer::total()
	static int _bind_getTotal(lua_State *L) {
		if (!_lg_typecheck_getTotal(L)) {
			luaL_error(L, "luna typecheck failed in int proland::PlantsProducer::total() function, expected prototype:\nint proland::PlantsProducer::total()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::PlantsProducer::total(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->total;
		lua_pushnumber(L,lret);

		return 1;
	}

	// vector< ork::vec4d > proland::PlantsProducer::plantBounds()
	static int _bind_getPlantBounds(lua_State *L) {
		if (!_lg_typecheck_getPlantBounds(L)) {
			luaL_error(L, "luna typecheck failed in vector< ork::vec4d > proland::PlantsProducer::plantBounds() function, expected prototype:\nvector< ork::vec4d > proland::PlantsProducer::plantBounds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call vector< ork::vec4d > proland::PlantsProducer::plantBounds(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const vector< ork::vec4d >* lret = &self->plantBounds;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< vector< ork::vec4d > >::push(L,lret,false);

		return 1;
	}

	// ork::box3d proland::PlantsProducer::plantBox()
	static int _bind_getPlantBox(lua_State *L) {
		if (!_lg_typecheck_getPlantBox(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d proland::PlantsProducer::plantBox() function, expected prototype:\nork::box3d proland::PlantsProducer::plantBox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d proland::PlantsProducer::plantBox(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::box3d* lret = &self->plantBox;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,false);

		return 1;
	}

	// vector< ork::ptr< proland::PlantsProducer > > proland::PlantsProducer::slaves()
	static int _bind_getSlaves(lua_State *L) {
		if (!_lg_typecheck_getSlaves(L)) {
			luaL_error(L, "luna typecheck failed in vector< ork::ptr< proland::PlantsProducer > > proland::PlantsProducer::slaves() function, expected prototype:\nvector< ork::ptr< proland::PlantsProducer > > proland::PlantsProducer::slaves()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call vector< ork::ptr< proland::PlantsProducer > > proland::PlantsProducer::slaves(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const vector< ork::ptr< proland::PlantsProducer > >* lret = &self->slaves;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< vector< ork::ptr< proland::PlantsProducer > > >::push(L,lret,false);

		return 1;
	}

	// proland::PlantsProducer * proland::PlantsProducer::master()
	static int _bind_getMaster(lua_State *L) {
		if (!_lg_typecheck_getMaster(L)) {
			luaL_error(L, "luna typecheck failed in proland::PlantsProducer * proland::PlantsProducer::master() function, expected prototype:\nproland::PlantsProducer * proland::PlantsProducer::master()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::PlantsProducer * proland::PlantsProducer::master(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::PlantsProducer * lret = self->master;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::PlantsProducer >::push(L,lret,false);

		return 1;
	}

	// void proland::PlantsProducer::node(ork::ptr< ork::SceneNode > value)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::node(ork::ptr< ork::SceneNode > value) function, expected prototype:\nvoid proland::PlantsProducer::node(ork::ptr< ork::SceneNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > value = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::node(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->node = value;

		return 0;
	}

	// void proland::PlantsProducer::terrain(ork::ptr< proland::TerrainNode > value)
	static int _bind_setTerrain(lua_State *L) {
		if (!_lg_typecheck_setTerrain(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::terrain(ork::ptr< proland::TerrainNode > value) function, expected prototype:\nvoid proland::PlantsProducer::terrain(ork::ptr< proland::TerrainNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainNode > value = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::terrain(ork::ptr< proland::TerrainNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrain = value;

		return 0;
	}

	// void proland::PlantsProducer::localCameraPos(ork::vec3d value)
	static int _bind_setLocalCameraPos(lua_State *L) {
		if (!_lg_typecheck_setLocalCameraPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::localCameraPos(ork::vec3d value) function, expected prototype:\nvoid proland::PlantsProducer::localCameraPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::localCameraPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::localCameraPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localCameraPos = value;

		return 0;
	}

	// void proland::PlantsProducer::tangentCameraPos(ork::vec3d value)
	static int _bind_setTangentCameraPos(lua_State *L) {
		if (!_lg_typecheck_setTangentCameraPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::tangentCameraPos(ork::vec3d value) function, expected prototype:\nvoid proland::PlantsProducer::tangentCameraPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::tangentCameraPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::tangentCameraPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tangentCameraPos = value;

		return 0;
	}

	// void proland::PlantsProducer::localToTangentFrame(ork::mat4d value)
	static int _bind_setLocalToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_setLocalToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::localToTangentFrame(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::localToTangentFrame(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::localToTangentFrame function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::localToTangentFrame(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToTangentFrame = value;

		return 0;
	}

	// void proland::PlantsProducer::localToScreen(ork::mat4d value)
	static int _bind_setLocalToScreen(lua_State *L) {
		if (!_lg_typecheck_setLocalToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::localToScreen(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::localToScreen(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::localToScreen function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::localToScreen(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localToScreen = value;

		return 0;
	}

	// void proland::PlantsProducer::screenToLocal(ork::mat4d value)
	static int _bind_setScreenToLocal(lua_State *L) {
		if (!_lg_typecheck_setScreenToLocal(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::screenToLocal(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::screenToLocal(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::screenToLocal function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::screenToLocal(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->screenToLocal = value;

		return 0;
	}

	// void proland::PlantsProducer::frustumZ(ork::vec4d value)
	static int _bind_setFrustumZ(lua_State *L) {
		if (!_lg_typecheck_setFrustumZ(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::frustumZ(ork::vec4d value) function, expected prototype:\nvoid proland::PlantsProducer::frustumZ(ork::vec4d value)\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4d* value_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::frustumZ function");
		}
		ork::vec4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::frustumZ(ork::vec4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->frustumZ = value;

		return 0;
	}

	// void proland::PlantsProducer::zNear(double value)
	static int _bind_setZNear(lua_State *L) {
		if (!_lg_typecheck_setZNear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::zNear(double value) function, expected prototype:\nvoid proland::PlantsProducer::zNear(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::zNear(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zNear = value;

		return 0;
	}

	// void proland::PlantsProducer::zRange(double value)
	static int _bind_setZRange(lua_State *L) {
		if (!_lg_typecheck_setZRange(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::zRange(double value) function, expected prototype:\nvoid proland::PlantsProducer::zRange(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::zRange(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zRange = value;

		return 0;
	}

	// void proland::PlantsProducer::tangentFrameToScreen(ork::mat4d value)
	static int _bind_setTangentFrameToScreen(lua_State *L) {
		if (!_lg_typecheck_setTangentFrameToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::tangentFrameToScreen(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::tangentFrameToScreen(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::tangentFrameToScreen function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::tangentFrameToScreen(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tangentFrameToScreen = value;

		return 0;
	}

	// void proland::PlantsProducer::tangentFrameToWorld(ork::mat4d value)
	static int _bind_setTangentFrameToWorld(lua_State *L) {
		if (!_lg_typecheck_setTangentFrameToWorld(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::tangentFrameToWorld(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::tangentFrameToWorld(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::tangentFrameToWorld function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::tangentFrameToWorld(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tangentFrameToWorld = value;

		return 0;
	}

	// void proland::PlantsProducer::tangentSpaceToWorld(ork::mat3d value)
	static int _bind_setTangentSpaceToWorld(lua_State *L) {
		if (!_lg_typecheck_setTangentSpaceToWorld(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::tangentSpaceToWorld(ork::mat3d value) function, expected prototype:\nvoid proland::PlantsProducer::tangentSpaceToWorld(ork::mat3d value)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat3d* value_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::tangentSpaceToWorld function");
		}
		ork::mat3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::tangentSpaceToWorld(ork::mat3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tangentSpaceToWorld = value;

		return 0;
	}

	// void proland::PlantsProducer::cameraToTangentFrame(ork::mat4d value)
	static int _bind_setCameraToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_setCameraToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::cameraToTangentFrame(ork::mat4d value) function, expected prototype:\nvoid proland::PlantsProducer::cameraToTangentFrame(ork::mat4d value)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* value_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::cameraToTangentFrame function");
		}
		ork::mat4d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::cameraToTangentFrame(ork::mat4d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraToTangentFrame = value;

		return 0;
	}

	// void proland::PlantsProducer::cameraRefPos(ork::vec3d value)
	static int _bind_setCameraRefPos(lua_State *L) {
		if (!_lg_typecheck_setCameraRefPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::cameraRefPos(ork::vec3d value) function, expected prototype:\nvoid proland::PlantsProducer::cameraRefPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::cameraRefPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::cameraRefPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cameraRefPos = value;

		return 0;
	}

	// void proland::PlantsProducer::tangentSunDir(ork::vec3d value)
	static int _bind_setTangentSunDir(lua_State *L) {
		if (!_lg_typecheck_setTangentSunDir(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::tangentSunDir(ork::vec3d value) function, expected prototype:\nvoid proland::PlantsProducer::tangentSunDir(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::tangentSunDir function");
		}
		ork::vec3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::tangentSunDir(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tangentSunDir = value;

		return 0;
	}

	// void proland::PlantsProducer::offsets(int * value)
	static int _bind_setOffsets(lua_State *L) {
		if (!_lg_typecheck_setOffsets(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::offsets(int * value) function, expected prototype:\nvoid proland::PlantsProducer::offsets(int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* value=(int*)Luna< void >::check(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::offsets(int *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsets = value;

		return 0;
	}

	// void proland::PlantsProducer::sizes(int * value)
	static int _bind_setSizes(lua_State *L) {
		if (!_lg_typecheck_setSizes(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::sizes(int * value) function, expected prototype:\nvoid proland::PlantsProducer::sizes(int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* value=(int*)Luna< void >::check(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::sizes(int *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sizes = value;

		return 0;
	}

	// void proland::PlantsProducer::count(int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::count(int value) function, expected prototype:\nvoid proland::PlantsProducer::count(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::count(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->count = value;

		return 0;
	}

	// void proland::PlantsProducer::total(int value)
	static int _bind_setTotal(lua_State *L) {
		if (!_lg_typecheck_setTotal(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::total(int value) function, expected prototype:\nvoid proland::PlantsProducer::total(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::total(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->total = value;

		return 0;
	}

	// void proland::PlantsProducer::plantBounds(vector< ork::vec4d > value)
	static int _bind_setPlantBounds(lua_State *L) {
		if (!_lg_typecheck_setPlantBounds(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::plantBounds(vector< ork::vec4d > value) function, expected prototype:\nvoid proland::PlantsProducer::plantBounds(vector< ork::vec4d > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::vec4d >* value_ptr=(Luna< vector< ork::vec4d > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::plantBounds function");
		}
		vector< ork::vec4d > value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::plantBounds(vector< ork::vec4d >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->plantBounds = value;

		return 0;
	}

	// void proland::PlantsProducer::plantBox(ork::box3d value)
	static int _bind_setPlantBox(lua_State *L) {
		if (!_lg_typecheck_setPlantBox(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::plantBox(ork::box3d value) function, expected prototype:\nvoid proland::PlantsProducer::plantBox(ork::box3d value)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3d* value_ptr=(Luna< ork::box3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::plantBox function");
		}
		ork::box3d value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::plantBox(ork::box3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->plantBox = value;

		return 0;
	}

	// void proland::PlantsProducer::slaves(vector< ork::ptr< proland::PlantsProducer > > value)
	static int _bind_setSlaves(lua_State *L) {
		if (!_lg_typecheck_setSlaves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::slaves(vector< ork::ptr< proland::PlantsProducer > > value) function, expected prototype:\nvoid proland::PlantsProducer::slaves(vector< ork::ptr< proland::PlantsProducer > > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::PlantsProducer > >* value_ptr=(Luna< vector< ork::ptr< proland::PlantsProducer > > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::PlantsProducer::slaves function");
		}
		vector< ork::ptr< proland::PlantsProducer > > value=*value_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::slaves(vector< ork::ptr< proland::PlantsProducer > >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->slaves = value;

		return 0;
	}

	// void proland::PlantsProducer::master(proland::PlantsProducer * value)
	static int _bind_setMaster(lua_State *L) {
		if (!_lg_typecheck_setMaster(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::master(proland::PlantsProducer * value) function, expected prototype:\nvoid proland::PlantsProducer::master(proland::PlantsProducer * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::PlantsProducer* value=(Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,2));

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::master(proland::PlantsProducer *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->master = value;

		return 0;
	}

	// const char * proland::PlantsProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::PlantsProducer::base_toString() function, expected prototype:\nconst char * proland::PlantsProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::PlantsProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PlantsProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::PlantsProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::PlantsProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::setRootQuadSize(size);

		return 0;
	}

	// ork::ptr< proland::TileCache > proland::PlantsProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::PlantsProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::PlantsProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::PlantsProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->PlantsProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::PlantsProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::PlantsProducer::base_getBorder() function, expected prototype:\nint proland::PlantsProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::PlantsProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->PlantsProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::TileCache::Tile * proland::PlantsProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::PlantsProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::PlantsProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::PlantsProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->PlantsProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::PlantsProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::PlantsProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::PlantsProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::PlantsProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->PlantsProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::PlantsProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::PlantsProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::PlantsProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::PlantsProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PlantsProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::PlantsProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::PlantsProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::putTile(t);

		return 0;
	}

	// void proland::PlantsProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::PlantsProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::invalidateTiles();

		return 0;
	}

	// void proland::PlantsProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::PlantsProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::PlantsProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::PlantsProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::update(scene);

		return 0;
	}

	// void proland::PlantsProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PlantsProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::PlantsProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::PlantsProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PlantsProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlantsProducer::getReferencedProducers(producers);

		return 0;
	}

	// bool proland::PlantsProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::PlantsProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::PlantsProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::PlantsProducer* self=Luna< ork::Object >::checkSubType< proland::PlantsProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::PlantsProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PlantsProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::PlantsProducer* LunaTraits< proland::PlantsProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_PlantsProducer::_bind_ctor(L);
}

void LunaTraits< proland::PlantsProducer >::_bind_dtor(proland::PlantsProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::PlantsProducer >::className[] = "PlantsProducer";
const char LunaTraits< proland::PlantsProducer >::fullName[] = "proland::PlantsProducer";
const char LunaTraits< proland::PlantsProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::PlantsProducer >::parents[] = {"proland.TileProducer", 0};
const int LunaTraits< proland::PlantsProducer >::hash = 61049017;
const int LunaTraits< proland::PlantsProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::PlantsProducer >::methods[] = {
	{"hasTile", &luna_wrapper_proland_PlantsProducer::_bind_hasTile},
	{"produceTiles", &luna_wrapper_proland_PlantsProducer::_bind_produceTiles},
	{"getPlantsMesh", &luna_wrapper_proland_PlantsProducer::_bind_getPlantsMesh},
	{"getPlantsProducer", &luna_wrapper_proland_PlantsProducer::_bind_getPlantsProducer},
	{"getNode", &luna_wrapper_proland_PlantsProducer::_bind_getNode},
	{"getTerrain", &luna_wrapper_proland_PlantsProducer::_bind_getTerrain},
	{"getLocalCameraPos", &luna_wrapper_proland_PlantsProducer::_bind_getLocalCameraPos},
	{"getTangentCameraPos", &luna_wrapper_proland_PlantsProducer::_bind_getTangentCameraPos},
	{"getLocalToTangentFrame", &luna_wrapper_proland_PlantsProducer::_bind_getLocalToTangentFrame},
	{"getLocalToScreen", &luna_wrapper_proland_PlantsProducer::_bind_getLocalToScreen},
	{"getScreenToLocal", &luna_wrapper_proland_PlantsProducer::_bind_getScreenToLocal},
	{"getFrustumZ", &luna_wrapper_proland_PlantsProducer::_bind_getFrustumZ},
	{"getZNear", &luna_wrapper_proland_PlantsProducer::_bind_getZNear},
	{"getZRange", &luna_wrapper_proland_PlantsProducer::_bind_getZRange},
	{"getTangentFrameToScreen", &luna_wrapper_proland_PlantsProducer::_bind_getTangentFrameToScreen},
	{"getTangentFrameToWorld", &luna_wrapper_proland_PlantsProducer::_bind_getTangentFrameToWorld},
	{"getTangentSpaceToWorld", &luna_wrapper_proland_PlantsProducer::_bind_getTangentSpaceToWorld},
	{"getCameraToTangentFrame", &luna_wrapper_proland_PlantsProducer::_bind_getCameraToTangentFrame},
	{"getCameraRefPos", &luna_wrapper_proland_PlantsProducer::_bind_getCameraRefPos},
	{"getTangentSunDir", &luna_wrapper_proland_PlantsProducer::_bind_getTangentSunDir},
	{"getOffsets", &luna_wrapper_proland_PlantsProducer::_bind_getOffsets},
	{"getSizes", &luna_wrapper_proland_PlantsProducer::_bind_getSizes},
	{"getCount", &luna_wrapper_proland_PlantsProducer::_bind_getCount},
	{"getTotal", &luna_wrapper_proland_PlantsProducer::_bind_getTotal},
	{"getPlantBounds", &luna_wrapper_proland_PlantsProducer::_bind_getPlantBounds},
	{"getPlantBox", &luna_wrapper_proland_PlantsProducer::_bind_getPlantBox},
	{"getSlaves", &luna_wrapper_proland_PlantsProducer::_bind_getSlaves},
	{"getMaster", &luna_wrapper_proland_PlantsProducer::_bind_getMaster},
	{"setNode", &luna_wrapper_proland_PlantsProducer::_bind_setNode},
	{"setTerrain", &luna_wrapper_proland_PlantsProducer::_bind_setTerrain},
	{"setLocalCameraPos", &luna_wrapper_proland_PlantsProducer::_bind_setLocalCameraPos},
	{"setTangentCameraPos", &luna_wrapper_proland_PlantsProducer::_bind_setTangentCameraPos},
	{"setLocalToTangentFrame", &luna_wrapper_proland_PlantsProducer::_bind_setLocalToTangentFrame},
	{"setLocalToScreen", &luna_wrapper_proland_PlantsProducer::_bind_setLocalToScreen},
	{"setScreenToLocal", &luna_wrapper_proland_PlantsProducer::_bind_setScreenToLocal},
	{"setFrustumZ", &luna_wrapper_proland_PlantsProducer::_bind_setFrustumZ},
	{"setZNear", &luna_wrapper_proland_PlantsProducer::_bind_setZNear},
	{"setZRange", &luna_wrapper_proland_PlantsProducer::_bind_setZRange},
	{"setTangentFrameToScreen", &luna_wrapper_proland_PlantsProducer::_bind_setTangentFrameToScreen},
	{"setTangentFrameToWorld", &luna_wrapper_proland_PlantsProducer::_bind_setTangentFrameToWorld},
	{"setTangentSpaceToWorld", &luna_wrapper_proland_PlantsProducer::_bind_setTangentSpaceToWorld},
	{"setCameraToTangentFrame", &luna_wrapper_proland_PlantsProducer::_bind_setCameraToTangentFrame},
	{"setCameraRefPos", &luna_wrapper_proland_PlantsProducer::_bind_setCameraRefPos},
	{"setTangentSunDir", &luna_wrapper_proland_PlantsProducer::_bind_setTangentSunDir},
	{"setOffsets", &luna_wrapper_proland_PlantsProducer::_bind_setOffsets},
	{"setSizes", &luna_wrapper_proland_PlantsProducer::_bind_setSizes},
	{"setCount", &luna_wrapper_proland_PlantsProducer::_bind_setCount},
	{"setTotal", &luna_wrapper_proland_PlantsProducer::_bind_setTotal},
	{"setPlantBounds", &luna_wrapper_proland_PlantsProducer::_bind_setPlantBounds},
	{"setPlantBox", &luna_wrapper_proland_PlantsProducer::_bind_setPlantBox},
	{"setSlaves", &luna_wrapper_proland_PlantsProducer::_bind_setSlaves},
	{"setMaster", &luna_wrapper_proland_PlantsProducer::_bind_setMaster},
	{"base_toString", &luna_wrapper_proland_PlantsProducer::_bind_base_toString},
	{"base_setRootQuadSize", &luna_wrapper_proland_PlantsProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_proland_PlantsProducer::_bind_base_getCache},
	{"base_getBorder", &luna_wrapper_proland_PlantsProducer::_bind_base_getBorder},
	{"base_findTile", &luna_wrapper_proland_PlantsProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_PlantsProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_proland_PlantsProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_proland_PlantsProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_PlantsProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_PlantsProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_PlantsProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_PlantsProducer::_bind_base_getReferencedProducers},
	{"base_hasTile", &luna_wrapper_proland_PlantsProducer::_bind_base_hasTile},
	{"fromVoid", &luna_wrapper_proland_PlantsProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_PlantsProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_PlantsProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::PlantsProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_PlantsProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::PlantsProducer >::enumValues[] = {
	{0,0}
};


