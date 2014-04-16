#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HydroFlowProducer.h>

class luna_wrapper_proland_HydroFlowProducer {
public:
	typedef Luna< proland::HydroFlowProducer > luna_t;

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

		proland::HydroFlowProducer* self= (proland::HydroFlowProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HydroFlowProducer >::push(L,self,false);
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
		//proland::HydroFlowProducer* ptr= dynamic_cast< proland::HydroFlowProducer* >(Luna< ork::Object >::check(L,1));
		proland::HydroFlowProducer* ptr= luna_caster< ork::Object, proland::HydroFlowProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HydroFlowProducer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::HydroFlowProducer* ptr= dynamic_cast< proland::HydroFlowProducer* >(Luna< proland::GraphListener >::check(L,1));
		proland::HydroFlowProducer* ptr= luna_caster< proland::GraphListener, proland::HydroFlowProducer >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HydroFlowProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getGraphProducer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSlipParameter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSlipParameter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPotentialDelta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPotentialDelta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileCoords(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,1381405)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,96783188) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
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

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_base_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HydroFlowProducer::HydroFlowProducer(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)
	static proland::HydroFlowProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowProducer::HydroFlowProducer(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel) function, expected prototype:\nproland::HydroFlowProducer::HydroFlowProducer(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer > graphs = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int displayTileSize=(int)lua_tointeger(L,3);
		float slipParameter=(float)lua_tonumber(L,4);
		float searchRadiusFactor=(float)lua_tonumber(L,5);
		float potentialDelta=(float)lua_tonumber(L,6);
		int minLevel=(int)lua_tointeger(L,7);

		return new proland::HydroFlowProducer(graphs, cache, displayTileSize, slipParameter, searchRadiusFactor, potentialDelta, minLevel);
	}

	// proland::HydroFlowProducer::HydroFlowProducer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)
	static proland::HydroFlowProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowProducer::HydroFlowProducer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel) function, expected prototype:\nproland::HydroFlowProducer::HydroFlowProducer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer > graphs = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,3);
		int displayTileSize=(int)lua_tointeger(L,4);
		float slipParameter=(float)lua_tonumber(L,5);
		float searchRadiusFactor=(float)lua_tonumber(L,6);
		float potentialDelta=(float)lua_tonumber(L,7);
		int minLevel=(int)lua_tointeger(L,8);

		return new wrapper_proland_HydroFlowProducer(L,NULL, graphs, cache, displayTileSize, slipParameter, searchRadiusFactor, potentialDelta, minLevel);
	}

	// Overload binder for proland::HydroFlowProducer::HydroFlowProducer
	static proland::HydroFlowProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HydroFlowProducer, cannot match any of the overloads for function HydroFlowProducer:\n  HydroFlowProducer(ork::ptr< proland::GraphProducer >, ork::ptr< proland::TileCache >, int, float, float, float, int)\n  HydroFlowProducer(lua_Table *, ork::ptr< proland::GraphProducer >, ork::ptr< proland::TileCache >, int, float, float, float, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< proland::GraphProducer > proland::HydroFlowProducer::getGraphProducer()
	static int _bind_getGraphProducer(lua_State *L) {
		if (!_lg_typecheck_getGraphProducer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::GraphProducer > proland::HydroFlowProducer::getGraphProducer() function, expected prototype:\nork::ptr< proland::GraphProducer > proland::HydroFlowProducer::getGraphProducer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::GraphProducer > proland::HydroFlowProducer::getGraphProducer(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::GraphProducer > lret = self->getGraphProducer();
		Luna< proland::GraphProducer >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::HydroFlowProducer::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HydroFlowProducer::getTileSize() function, expected prototype:\nint proland::HydroFlowProducer::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HydroFlowProducer::getTileSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::HydroFlowProducer::getSlipParameter()
	static int _bind_getSlipParameter(lua_State *L) {
		if (!_lg_typecheck_getSlipParameter(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroFlowProducer::getSlipParameter() function, expected prototype:\nfloat proland::HydroFlowProducer::getSlipParameter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroFlowProducer::getSlipParameter(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSlipParameter();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowProducer::setSlipParameter(float slip)
	static int _bind_setSlipParameter(lua_State *L) {
		if (!_lg_typecheck_setSlipParameter(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::setSlipParameter(float slip) function, expected prototype:\nvoid proland::HydroFlowProducer::setSlipParameter(float slip)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float slip=(float)lua_tonumber(L,2);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::setSlipParameter(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSlipParameter(slip);

		return 0;
	}

	// float proland::HydroFlowProducer::getPotentialDelta()
	static int _bind_getPotentialDelta(lua_State *L) {
		if (!_lg_typecheck_getPotentialDelta(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroFlowProducer::getPotentialDelta() function, expected prototype:\nfloat proland::HydroFlowProducer::getPotentialDelta()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroFlowProducer::getPotentialDelta(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPotentialDelta();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowProducer::setPotentialDelta(float delta)
	static int _bind_setPotentialDelta(lua_State *L) {
		if (!_lg_typecheck_setPotentialDelta(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::setPotentialDelta(float delta) function, expected prototype:\nvoid proland::HydroFlowProducer::setPotentialDelta(float delta)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float delta=(float)lua_tonumber(L,2);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::setPotentialDelta(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPotentialDelta(delta);

		return 0;
	}

	// float proland::HydroFlowProducer::getRootQuadSize()
	static int _bind_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroFlowProducer::getRootQuadSize() function, expected prototype:\nfloat proland::HydroFlowProducer::getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroFlowProducer::getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowProducer::setRootQuadSize(float size)
	static int _bind_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::setRootQuadSize(float size) function, expected prototype:\nvoid proland::HydroFlowProducer::setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootQuadSize(size);

		return 0;
	}

	// int proland::HydroFlowProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HydroFlowProducer::getBorder() function, expected prototype:\nint proland::HydroFlowProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HydroFlowProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::TileCache::Tile * proland::HydroFlowProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::HydroFlowProducer::getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::HydroFlowProducer::getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::HydroFlowProducer::getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::HydroFlowProducer::putTile(proland::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::HydroFlowProducer::putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putTile(t);

		return 0;
	}

	// void proland::HydroFlowProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::HydroFlowProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::HydroFlowProducer::getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::HydroFlowProducer::graphChanged()
	static int _bind_graphChanged(lua_State *L) {
		if (!_lg_typecheck_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::graphChanged() function, expected prototype:\nvoid proland::HydroFlowProducer::graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->graphChanged();

		return 0;
	}

	// ork::vec3d proland::HydroFlowProducer::getTileCoords(int level, int tx, int ty)
	static int _bind_getTileCoords(lua_State *L) {
		if (!_lg_typecheck_getTileCoords(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::HydroFlowProducer::getTileCoords(int level, int tx, int ty) function, expected prototype:\nork::vec3d proland::HydroFlowProducer::getTileCoords(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::HydroFlowProducer::getTileCoords(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getTileCoords(level, tx, ty);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// float proland::HydroFlowProducer::getTileBorder()
	static int _bind_getTileBorder(lua_State *L) {
		if (!_lg_typecheck_getTileBorder(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroFlowProducer::getTileBorder() function, expected prototype:\nfloat proland::HydroFlowProducer::getTileBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroFlowProducer::getTileBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowProducer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles)
	static int _bind_addUsedTiles(lua_State *L) {
		if (!_lg_typecheck_addUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles) function, expected prototype:\nvoid proland::HydroFlowProducer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles)\nClass arguments details:\narg 4 ID = 1381405\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileProducer* producer=(Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5));
		set< proland::TileCache::Tile * >* tiles_ptr=(Luna< set< proland::TileCache::Tile * > >::check(L,6));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::HydroFlowProducer::addUsedTiles function");
		}
		set< proland::TileCache::Tile * > tiles=*tiles_ptr;

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::addUsedTiles(int, int, int, proland::TileProducer *, set< proland::TileCache::Tile * >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUsedTiles(level, tx, ty, producer, tiles);

		return 0;
	}

	// const char * proland::HydroFlowProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::HydroFlowProducer::base_toString() function, expected prototype:\nconst char * proland::HydroFlowProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::HydroFlowProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->HydroFlowProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileCache > proland::HydroFlowProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::HydroFlowProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::HydroFlowProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::HydroFlowProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->HydroFlowProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::HydroFlowProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::HydroFlowProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::HydroFlowProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::HydroFlowProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HydroFlowProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::HydroFlowProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::HydroFlowProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::HydroFlowProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::HydroFlowProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->HydroFlowProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::HydroFlowProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::HydroFlowProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::HydroFlowProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::HydroFlowProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HydroFlowProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::HydroFlowProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::HydroFlowProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::invalidateTiles();

		return 0;
	}

	// void proland::HydroFlowProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::HydroFlowProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::HydroFlowProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::HydroFlowProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::update(scene);

		return 0;
	}

	// proland::CurveData * proland::HydroFlowProducer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_base_newCurveData(lua_State *L) {
		if (!_lg_typecheck_base_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::HydroFlowProducer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::HydroFlowProducer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::HydroFlowProducer::base_newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::HydroFlowProducer::base_newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::HydroFlowProducer::base_newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->HydroFlowProducer::newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// float proland::HydroFlowProducer::base_getRootQuadSize()
	static int _bind_base_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroFlowProducer::base_getRootQuadSize() function, expected prototype:\nfloat proland::HydroFlowProducer::base_getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroFlowProducer::base_getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->HydroFlowProducer::getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::HydroFlowProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::setRootQuadSize(size);

		return 0;
	}

	// int proland::HydroFlowProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HydroFlowProducer::base_getBorder() function, expected prototype:\nint proland::HydroFlowProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HydroFlowProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->HydroFlowProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::TileCache::Tile * proland::HydroFlowProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::HydroFlowProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::HydroFlowProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::HydroFlowProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->HydroFlowProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::HydroFlowProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::HydroFlowProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::putTile(t);

		return 0;
	}

	// void proland::HydroFlowProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::HydroFlowProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::HydroFlowProducer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::HydroFlowProducer::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::base_graphChanged() function, expected prototype:\nvoid proland::HydroFlowProducer::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowProducer* self=Luna< ork::Object >::checkSubType< proland::HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowProducer::graphChanged();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_proland_GraphListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_proland_GraphListener(lua_State *L) {
		if (!_lg_typecheck_baseCast_proland_GraphListener(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_proland_GraphListener function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		proland::GraphListener* res = luna_caster<ork::Object,proland::GraphListener>::cast(self); // dynamic_cast<proland::GraphListener*>(self);
		if(!res)
			return 0;
			
		Luna< proland::GraphListener >::push(L,res,false);
		return 1;

	}

};

proland::HydroFlowProducer* LunaTraits< proland::HydroFlowProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HydroFlowProducer::_bind_ctor(L);
}

void LunaTraits< proland::HydroFlowProducer >::_bind_dtor(proland::HydroFlowProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::HydroFlowProducer >::className[] = "HydroFlowProducer";
const char LunaTraits< proland::HydroFlowProducer >::fullName[] = "proland::HydroFlowProducer";
const char LunaTraits< proland::HydroFlowProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::HydroFlowProducer >::parents[] = {"proland.TileProducer", "proland.CurveDataFactory", 0};
const int LunaTraits< proland::HydroFlowProducer >::hash = 37110858;
const int LunaTraits< proland::HydroFlowProducer >::uniqueIDs[] = {1381405, 23314933,0};

luna_RegType LunaTraits< proland::HydroFlowProducer >::methods[] = {
	{"getGraphProducer", &luna_wrapper_proland_HydroFlowProducer::_bind_getGraphProducer},
	{"getTileSize", &luna_wrapper_proland_HydroFlowProducer::_bind_getTileSize},
	{"getSlipParameter", &luna_wrapper_proland_HydroFlowProducer::_bind_getSlipParameter},
	{"setSlipParameter", &luna_wrapper_proland_HydroFlowProducer::_bind_setSlipParameter},
	{"getPotentialDelta", &luna_wrapper_proland_HydroFlowProducer::_bind_getPotentialDelta},
	{"setPotentialDelta", &luna_wrapper_proland_HydroFlowProducer::_bind_setPotentialDelta},
	{"getRootQuadSize", &luna_wrapper_proland_HydroFlowProducer::_bind_getRootQuadSize},
	{"setRootQuadSize", &luna_wrapper_proland_HydroFlowProducer::_bind_setRootQuadSize},
	{"getBorder", &luna_wrapper_proland_HydroFlowProducer::_bind_getBorder},
	{"getTile", &luna_wrapper_proland_HydroFlowProducer::_bind_getTile},
	{"putTile", &luna_wrapper_proland_HydroFlowProducer::_bind_putTile},
	{"getReferencedProducers", &luna_wrapper_proland_HydroFlowProducer::_bind_getReferencedProducers},
	{"graphChanged", &luna_wrapper_proland_HydroFlowProducer::_bind_graphChanged},
	{"getTileCoords", &luna_wrapper_proland_HydroFlowProducer::_bind_getTileCoords},
	{"getTileBorder", &luna_wrapper_proland_HydroFlowProducer::_bind_getTileBorder},
	{"addUsedTiles", &luna_wrapper_proland_HydroFlowProducer::_bind_addUsedTiles},
	{"base_toString", &luna_wrapper_proland_HydroFlowProducer::_bind_base_toString},
	{"base_getCache", &luna_wrapper_proland_HydroFlowProducer::_bind_base_getCache},
	{"base_hasTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_hasTile},
	{"base_findTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_findTile},
	{"base_prefetchTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_prefetchTile},
	{"base_invalidateTiles", &luna_wrapper_proland_HydroFlowProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_HydroFlowProducer::_bind_base_update},
	{"base_newCurveData", &luna_wrapper_proland_HydroFlowProducer::_bind_base_newCurveData},
	{"base_getRootQuadSize", &luna_wrapper_proland_HydroFlowProducer::_bind_base_getRootQuadSize},
	{"base_setRootQuadSize", &luna_wrapper_proland_HydroFlowProducer::_bind_base_setRootQuadSize},
	{"base_getBorder", &luna_wrapper_proland_HydroFlowProducer::_bind_base_getBorder},
	{"base_getTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_getTile},
	{"base_putTile", &luna_wrapper_proland_HydroFlowProducer::_bind_base_putTile},
	{"base_getReferencedProducers", &luna_wrapper_proland_HydroFlowProducer::_bind_base_getReferencedProducers},
	{"base_graphChanged", &luna_wrapper_proland_HydroFlowProducer::_bind_base_graphChanged},
	{"fromVoid", &luna_wrapper_proland_HydroFlowProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HydroFlowProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HydroFlowProducer::_bind_getTable},
	{"asGraphListener", &luna_wrapper_proland_HydroFlowProducer::_bind_baseCast_proland_GraphListener},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HydroFlowProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_HydroFlowProducer::_cast_from_Object},
	{"proland::GraphListener", &luna_wrapper_proland_HydroFlowProducer::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HydroFlowProducer >::enumValues[] = {
	{0,0}
};


