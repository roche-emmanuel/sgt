#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_RoadElevationLayer_RoadElevationCurveData.h>

class luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData {
public:
	typedef Luna< proland::RoadElevationLayer::RoadElevationCurveData > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::CurveData,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::RoadElevationLayer::RoadElevationCurveData* self= (proland::RoadElevationLayer::RoadElevationCurveData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::RoadElevationLayer::RoadElevationCurveData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53008858) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_CurveData(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::RoadElevationLayer::RoadElevationCurveData* ptr= dynamic_cast< proland::RoadElevationLayer::RoadElevationCurveData* >(Luna< proland::CurveData >::check(L,1));
		proland::RoadElevationLayer::RoadElevationCurveData* ptr= luna_caster< proland::CurveData, proland::RoadElevationLayer::RoadElevationCurveData >::cast(Luna< proland::CurveData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::RoadElevationLayer::RoadElevationCurveData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getStartHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEndHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAltitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69005068) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBridgesz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getSampleLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getSmoothFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getStartHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEndHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAltitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69005068) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)
	static proland::RoadElevationLayer::RoadElevationCurveData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations) function, expected prototype:\nproland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,1));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);

		return new proland::RoadElevationLayer::RoadElevationCurveData(id, flattenCurve, elevations);
	}

	// proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)
	static proland::RoadElevationLayer::RoadElevationCurveData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations) function, expected prototype:\nproland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)\nClass arguments details:\narg 2 ID = 58015782\narg 3 ID = 98496290\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4);

		return new wrapper_proland_RoadElevationLayer_RoadElevationCurveData(L,NULL, id, flattenCurve, elevations);
	}

	// Overload binder for proland::RoadElevationLayer::RoadElevationCurveData::RoadElevationCurveData
	static proland::RoadElevationLayer::RoadElevationCurveData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RoadElevationCurveData, cannot match any of the overloads for function RoadElevationCurveData:\n  RoadElevationCurveData(proland::CurveId, proland::CurvePtr, ork::ptr< proland::TileProducer >)\n  RoadElevationCurveData(lua_Table *, proland::CurveId, proland::CurvePtr, ork::ptr< proland::TileProducer >)\n");
		return NULL;
	}


	// Function binds:
	// float proland::RoadElevationLayer::RoadElevationCurveData::getStartHeight()
	static int _bind_getStartHeight(lua_State *L) {
		if (!_lg_typecheck_getStartHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::getStartHeight() function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::getStartHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::getStartHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getStartHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::getEndHeight()
	static int _bind_getEndHeight(lua_State *L) {
		if (!_lg_typecheck_getEndHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::getEndHeight() function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::getEndHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::getEndHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getEndHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::getAltitude(float s)
	static int _bind_getAltitude(lua_State *L) {
		if (!_lg_typecheck_getAltitude(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::getAltitude(float s) function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::getAltitude(float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::getAltitude(float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAltitude(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::RoadElevationLayer::RoadElevationCurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	static int _bind_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadElevationLayer::RoadElevationCurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) function, expected prototype:\nvoid proland::RoadElevationLayer::RoadElevationCurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* tiles_ptr=(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::RoadElevationLayer::RoadElevationCurveData::getUsedTiles function");
		}
		set< proland::TileCache::Tile::Id > & tiles=*tiles_ptr;
		float rootSampleLength=(float)lua_tonumber(L,3);

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadElevationLayer::RoadElevationCurveData::getUsedTiles(set< proland::TileCache::Tile::Id > &, float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsedTiles(tiles, rootSampleLength);

		return 0;
	}

	// void proland::RoadElevationLayer::RoadElevationCurveData::getBridgesz()
	static int _bind_getBridgesz(lua_State *L) {
		if (!_lg_typecheck_getBridgesz(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadElevationLayer::RoadElevationCurveData::getBridgesz() function, expected prototype:\nvoid proland::RoadElevationLayer::RoadElevationCurveData::getBridgesz()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadElevationLayer::RoadElevationCurveData::getBridgesz(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getBridgesz();

		return 0;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::base_getSampleLength(proland::CurvePtr c)
	static int _bind_base_getSampleLength(lua_State *L) {
		if (!_lg_typecheck_base_getSampleLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::base_getSampleLength(proland::CurvePtr c) function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::base_getSampleLength(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::RoadElevationLayer::RoadElevationCurveData::base_getSampleLength function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::base_getSampleLength(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->RoadElevationCurveData::getSampleLength(c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::RoadElevationLayer::RoadElevationCurveData::base_getSmoothFactor(proland::CurvePtr c)
	static int _bind_base_getSmoothFactor(lua_State *L) {
		if (!_lg_typecheck_base_getSmoothFactor(L)) {
			luaL_error(L, "luna typecheck failed in int proland::RoadElevationLayer::RoadElevationCurveData::base_getSmoothFactor(proland::CurvePtr c) function, expected prototype:\nint proland::RoadElevationLayer::RoadElevationCurveData::base_getSmoothFactor(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::RoadElevationLayer::RoadElevationCurveData::base_getSmoothFactor function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::RoadElevationLayer::RoadElevationCurveData::base_getSmoothFactor(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RoadElevationCurveData::getSmoothFactor(c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::base_getStartHeight()
	static int _bind_base_getStartHeight(lua_State *L) {
		if (!_lg_typecheck_base_getStartHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::base_getStartHeight() function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::base_getStartHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::base_getStartHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->RoadElevationCurveData::getStartHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::base_getEndHeight()
	static int _bind_base_getEndHeight(lua_State *L) {
		if (!_lg_typecheck_base_getEndHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::base_getEndHeight() function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::base_getEndHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::base_getEndHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->RoadElevationCurveData::getEndHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::RoadElevationLayer::RoadElevationCurveData::base_getAltitude(float s)
	static int _bind_base_getAltitude(lua_State *L) {
		if (!_lg_typecheck_base_getAltitude(L)) {
			luaL_error(L, "luna typecheck failed in float proland::RoadElevationLayer::RoadElevationCurveData::base_getAltitude(float s) function, expected prototype:\nfloat proland::RoadElevationLayer::RoadElevationCurveData::base_getAltitude(float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::RoadElevationLayer::RoadElevationCurveData::base_getAltitude(float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->RoadElevationCurveData::getAltitude(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::RoadElevationLayer::RoadElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	static int _bind_base_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_base_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadElevationLayer::RoadElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) function, expected prototype:\nvoid proland::RoadElevationLayer::RoadElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* tiles_ptr=(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::RoadElevationLayer::RoadElevationCurveData::base_getUsedTiles function");
		}
		set< proland::TileCache::Tile::Id > & tiles=*tiles_ptr;
		float rootSampleLength=(float)lua_tonumber(L,3);

		proland::RoadElevationLayer::RoadElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::RoadElevationLayer::RoadElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadElevationLayer::RoadElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > &, float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadElevationCurveData::getUsedTiles(tiles, rootSampleLength);

		return 0;
	}


	// Operator binds:

};

proland::RoadElevationLayer::RoadElevationCurveData* LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_ctor(L);
}

void LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::_bind_dtor(proland::RoadElevationLayer::RoadElevationCurveData* obj) {
	delete obj;
}

const char LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::className[] = "RoadElevationLayer_RoadElevationCurveData";
const char LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::fullName[] = "proland::RoadElevationLayer::RoadElevationCurveData";
const char LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::moduleName[] = "proland";
const char* LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::parents[] = {"proland.ElevationCurveData", 0};
const int LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::hash = 93698948;
const int LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::uniqueIDs[] = {53008858,0};

luna_RegType LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::methods[] = {
	{"getStartHeight", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getStartHeight},
	{"getEndHeight", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getEndHeight},
	{"getAltitude", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getAltitude},
	{"getUsedTiles", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getUsedTiles},
	{"getBridgesz", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getBridgesz},
	{"base_getSampleLength", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getSampleLength},
	{"base_getSmoothFactor", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getSmoothFactor},
	{"base_getStartHeight", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getStartHeight},
	{"base_getEndHeight", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getEndHeight},
	{"base_getAltitude", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getAltitude},
	{"base_getUsedTiles", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_base_getUsedTiles},
	{"fromVoid", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::converters[] = {
	{"proland::CurveData", &luna_wrapper_proland_RoadElevationLayer_RoadElevationCurveData::_cast_from_CurveData},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData >::enumValues[] = {
	{"BASIC", proland::RoadElevationLayer::RoadElevationCurveData::BASIC},
	{"ROAD", proland::RoadElevationLayer::RoadElevationCurveData::ROAD},
	{"UNKNOWN", proland::RoadElevationLayer::RoadElevationCurveData::UNKNOWN},
	{"BRIDGE", proland::RoadElevationLayer::RoadElevationCurveData::BRIDGE},
	{0,0}
};


