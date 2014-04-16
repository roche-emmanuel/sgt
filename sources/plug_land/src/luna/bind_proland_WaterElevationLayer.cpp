#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_WaterElevationLayer.h>

class luna_wrapper_proland_WaterElevationLayer {
public:
	typedef Luna< proland::WaterElevationLayer > luna_t;

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

		proland::WaterElevationLayer* self= (proland::WaterElevationLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::WaterElevationLayer >::push(L,self,false);
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
		//proland::WaterElevationLayer* ptr= dynamic_cast< proland::WaterElevationLayer* >(Luna< ork::Object >::check(L,1));
		proland::WaterElevationLayer* ptr= luna_caster< ork::Object, proland::WaterElevationLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::WaterElevationLayer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::WaterElevationLayer* ptr= dynamic_cast< proland::WaterElevationLayer* >(Luna< proland::GraphListener >::check(L,1));
		proland::WaterElevationLayer* ptr= luna_caster< proland::GraphListener, proland::WaterElevationLayer >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::WaterElevationLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::WaterElevationLayer::WaterElevationLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false)
	static proland::WaterElevationLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::WaterElevationLayer::WaterElevationLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false) function, expected prototype:\nproland::WaterElevationLayer::WaterElevationLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::ptr< ork::Program > fillProg = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4);
		int displayLevel=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		bool quality=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		bool deform=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		return new proland::WaterElevationLayer(graphProducer, layerProgram, fillProg, elevations, displayLevel, quality, deform);
	}

	// proland::WaterElevationLayer::WaterElevationLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false)
	static proland::WaterElevationLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::WaterElevationLayer::WaterElevationLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false) function, expected prototype:\nproland::WaterElevationLayer::WaterElevationLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< ork::Program > fillProg, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool deform = false)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< ork::Program > fillProg = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5);
		int displayLevel=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		bool quality=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;
		bool deform=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;

		return new wrapper_proland_WaterElevationLayer(L,NULL, graphProducer, layerProgram, fillProg, elevations, displayLevel, quality, deform);
	}

	// Overload binder for proland::WaterElevationLayer::WaterElevationLayer
	static proland::WaterElevationLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WaterElevationLayer, cannot match any of the overloads for function WaterElevationLayer:\n  WaterElevationLayer(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< proland::TileProducer >, int, bool, bool)\n  WaterElevationLayer(lua_Table *, ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< proland::TileProducer >, int, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::WaterElevationLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::WaterElevationLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::WaterElevationLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::WaterElevationLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::WaterElevationLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::WaterElevationLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurveData * proland::WaterElevationLayer::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_newCurveData(lua_State *L) {
		if (!_lg_typecheck_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::WaterElevationLayer::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::WaterElevationLayer::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::WaterElevationLayer::newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::WaterElevationLayer::newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::WaterElevationLayer::newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// const char * proland::WaterElevationLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::WaterElevationLayer::base_toString() function, expected prototype:\nconst char * proland::WaterElevationLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::WaterElevationLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->WaterElevationLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::WaterElevationLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::WaterElevationLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::WaterElevationLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::WaterElevationLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::invalidateTiles();

		return 0;
	}

	// void proland::WaterElevationLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::WaterElevationLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::WaterElevationLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::WaterElevationLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::WaterElevationLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::WaterElevationLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::WaterElevationLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::WaterElevationLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::beginCreateTile();

		return 0;
	}

	// void proland::WaterElevationLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_endCreateTile() function, expected prototype:\nvoid proland::WaterElevationLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::endCreateTile();

		return 0;
	}

	// void proland::WaterElevationLayer::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_graphChanged() function, expected prototype:\nvoid proland::WaterElevationLayer::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::graphChanged();

		return 0;
	}

	// void proland::WaterElevationLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::WaterElevationLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::WaterElevationLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::WaterElevationLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::WaterElevationLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::WaterElevationLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::WaterElevationLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::WaterElevationLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::WaterElevationLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::WaterElevationLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::WaterElevationLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::WaterElevationLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::WaterElevationLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaterElevationLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurveData * proland::WaterElevationLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_base_newCurveData(lua_State *L) {
		if (!_lg_typecheck_base_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::WaterElevationLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::WaterElevationLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::WaterElevationLayer::base_newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::WaterElevationLayer::base_newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::WaterElevationLayer* self=Luna< ork::Object >::checkSubType< proland::WaterElevationLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::WaterElevationLayer::base_newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->WaterElevationLayer::newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::WaterElevationLayer* LunaTraits< proland::WaterElevationLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_WaterElevationLayer::_bind_ctor(L);
}

void LunaTraits< proland::WaterElevationLayer >::_bind_dtor(proland::WaterElevationLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::WaterElevationLayer >::className[] = "WaterElevationLayer";
const char LunaTraits< proland::WaterElevationLayer >::fullName[] = "proland::WaterElevationLayer";
const char LunaTraits< proland::WaterElevationLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::WaterElevationLayer >::parents[] = {"proland.ElevationGraphLayer", 0};
const int LunaTraits< proland::WaterElevationLayer >::hash = 5188858;
const int LunaTraits< proland::WaterElevationLayer >::uniqueIDs[] = {1381405, 23314933,0};

luna_RegType LunaTraits< proland::WaterElevationLayer >::methods[] = {
	{"setTileSize", &luna_wrapper_proland_WaterElevationLayer::_bind_setTileSize},
	{"doCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_doCreateTile},
	{"newCurveData", &luna_wrapper_proland_WaterElevationLayer::_bind_newCurveData},
	{"base_toString", &luna_wrapper_proland_WaterElevationLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_WaterElevationLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_WaterElevationLayer::_bind_base_invalidateTiles},
	{"base_useTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_prefetchTile},
	{"base_beginCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_endCreateTile},
	{"base_graphChanged", &luna_wrapper_proland_WaterElevationLayer::_bind_base_graphChanged},
	{"base_getReferencedProducers", &luna_wrapper_proland_WaterElevationLayer::_bind_base_getReferencedProducers},
	{"base_startCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_startCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_stopCreateTile},
	{"base_setTileSize", &luna_wrapper_proland_WaterElevationLayer::_bind_base_setTileSize},
	{"base_doCreateTile", &luna_wrapper_proland_WaterElevationLayer::_bind_base_doCreateTile},
	{"base_newCurveData", &luna_wrapper_proland_WaterElevationLayer::_bind_base_newCurveData},
	{"fromVoid", &luna_wrapper_proland_WaterElevationLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_WaterElevationLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_WaterElevationLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::WaterElevationLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_WaterElevationLayer::_cast_from_Object},
	{"proland::GraphListener", &luna_wrapper_proland_WaterElevationLayer::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::WaterElevationLayer >::enumValues[] = {
	{0,0}
};


