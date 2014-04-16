#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_WaterElevationLayer_WaterElevationCurveData.h>

class luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData {
public:
	typedef Luna< proland::WaterElevationLayer::WaterElevationCurveData > luna_t;

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

		proland::WaterElevationLayer::WaterElevationCurveData* self= (proland::WaterElevationLayer::WaterElevationCurveData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::WaterElevationLayer::WaterElevationCurveData >::push(L,self,false);
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
		//proland::WaterElevationLayer::WaterElevationCurveData* ptr= dynamic_cast< proland::WaterElevationLayer::WaterElevationCurveData* >(Luna< proland::CurveData >::check(L,1));
		proland::WaterElevationLayer::WaterElevationCurveData* ptr= luna_caster< proland::CurveData, proland::WaterElevationLayer::WaterElevationCurveData >::cast(Luna< proland::CurveData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::WaterElevationLayer::WaterElevationCurveData >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getAltitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSampleLength(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getSmoothFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69005068) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAltitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getSampleLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)
	static proland::WaterElevationLayer::WaterElevationCurveData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations) function, expected prototype:\nproland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,1));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);

		return new proland::WaterElevationLayer::WaterElevationCurveData(id, flattenCurve, elevations);
	}

	// proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)
	static proland::WaterElevationLayer::WaterElevationCurveData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations) function, expected prototype:\nproland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations)\nClass arguments details:\narg 2 ID = 58015782\narg 3 ID = 98496290\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4);

		return new wrapper_proland_WaterElevationLayer_WaterElevationCurveData(L,NULL, id, flattenCurve, elevations);
	}

	// Overload binder for proland::WaterElevationLayer::WaterElevationCurveData::WaterElevationCurveData
	static proland::WaterElevationLayer::WaterElevationCurveData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WaterElevationCurveData, cannot match any of the overloads for function WaterElevationCurveData:\n  WaterElevationCurveData(proland::CurveId, proland::CurvePtr, ork::ptr< proland::TileProducer >)\n  WaterElevationCurveData(lua_Table *, proland::CurveId, proland::CurvePtr, ork::ptr< proland::TileProducer >)\n");
		return NULL;
	}


	// Function binds:
	// float proland::WaterElevationLayer::WaterElevationCurveData::getAltitude(float s)
	static int _bind_getAltitude(lua_State *L) {
		if (!_lg_typecheck_getAltitude(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::getAltitude(float s) function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::getAltitude(float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::getAltitude(float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAltitude(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength(proland::CurvePtr c)
	static int _bind_getSampleLength(lua_State *L) {
		if (!_lg_typecheck_getSampleLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength(proland::CurvePtr c) function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSampleLength(c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::WaterElevationLayer::WaterElevationCurveData::base_getStartHeight()
	static int _bind_base_getStartHeight(lua_State *L) {
		if (!_lg_typecheck_base_getStartHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::base_getStartHeight() function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::base_getStartHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::base_getStartHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->WaterElevationCurveData::getStartHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::WaterElevationLayer::WaterElevationCurveData::base_getEndHeight()
	static int _bind_base_getEndHeight(lua_State *L) {
		if (!_lg_typecheck_base_getEndHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::base_getEndHeight() function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::base_getEndHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::base_getEndHeight(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->WaterElevationCurveData::getEndHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::WaterElevationLayer::WaterElevationCurveData::base_getSmoothFactor(proland::CurvePtr c)
	static int _bind_base_getSmoothFactor(lua_State *L) {
		if (!_lg_typecheck_base_getSmoothFactor(L)) {
			luaL_error(L, "luna typecheck failed in int proland::WaterElevationLayer::WaterElevationCurveData::base_getSmoothFactor(proland::CurvePtr c) function, expected prototype:\nint proland::WaterElevationLayer::WaterElevationCurveData::base_getSmoothFactor(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::WaterElevationLayer::WaterElevationCurveData::base_getSmoothFactor function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::WaterElevationLayer::WaterElevationCurveData::base_getSmoothFactor(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->WaterElevationCurveData::getSmoothFactor(c);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::WaterElevationLayer::WaterElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	static int _bind_base_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_base_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WaterElevationLayer::WaterElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) function, expected prototype:\nvoid proland::WaterElevationLayer::WaterElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* tiles_ptr=(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::WaterElevationLayer::WaterElevationCurveData::base_getUsedTiles function");
		}
		set< proland::TileCache::Tile::Id > & tiles=*tiles_ptr;
		float rootSampleLength=(float)lua_tonumber(L,3);

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WaterElevationLayer::WaterElevationCurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > &, float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WaterElevationCurveData::getUsedTiles(tiles, rootSampleLength);

		return 0;
	}

	// float proland::WaterElevationLayer::WaterElevationCurveData::base_getAltitude(float s)
	static int _bind_base_getAltitude(lua_State *L) {
		if (!_lg_typecheck_base_getAltitude(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::base_getAltitude(float s) function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::base_getAltitude(float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::base_getAltitude(float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->WaterElevationCurveData::getAltitude(s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::WaterElevationLayer::WaterElevationCurveData::base_getSampleLength(proland::CurvePtr c)
	static int _bind_base_getSampleLength(lua_State *L) {
		if (!_lg_typecheck_base_getSampleLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WaterElevationLayer::WaterElevationCurveData::base_getSampleLength(proland::CurvePtr c) function, expected prototype:\nfloat proland::WaterElevationLayer::WaterElevationCurveData::base_getSampleLength(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::WaterElevationLayer::WaterElevationCurveData::base_getSampleLength function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::WaterElevationLayer::WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< proland::WaterElevationLayer::WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WaterElevationLayer::WaterElevationCurveData::base_getSampleLength(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->WaterElevationCurveData::getSampleLength(c);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::WaterElevationLayer::WaterElevationCurveData* LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_ctor(L);
}

void LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::_bind_dtor(proland::WaterElevationLayer::WaterElevationCurveData* obj) {
	delete obj;
}

const char LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::className[] = "WaterElevationLayer_WaterElevationCurveData";
const char LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::fullName[] = "proland::WaterElevationLayer::WaterElevationCurveData";
const char LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::moduleName[] = "proland";
const char* LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::parents[] = {"proland.ElevationCurveData", 0};
const int LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::hash = 40901320;
const int LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::uniqueIDs[] = {53008858,0};

luna_RegType LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::methods[] = {
	{"getAltitude", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_getAltitude},
	{"getSampleLength", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_getSampleLength},
	{"base_getStartHeight", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getStartHeight},
	{"base_getEndHeight", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getEndHeight},
	{"base_getSmoothFactor", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getSmoothFactor},
	{"base_getUsedTiles", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getUsedTiles},
	{"base_getAltitude", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getAltitude},
	{"base_getSampleLength", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_base_getSampleLength},
	{"fromVoid", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::converters[] = {
	{"proland::CurveData", &luna_wrapper_proland_WaterElevationLayer_WaterElevationCurveData::_cast_from_CurveData},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData >::enumValues[] = {
	{"BORDER", proland::WaterElevationLayer::WaterElevationCurveData::BORDER},
	{"OBSTACLE", proland::WaterElevationLayer::WaterElevationCurveData::OBSTACLE},
	{"RIVER", proland::WaterElevationLayer::WaterElevationCurveData::RIVER},
	{"ISLAND", proland::WaterElevationLayer::WaterElevationCurveData::ISLAND},
	{"LAKE", proland::WaterElevationLayer::WaterElevationCurveData::LAKE},
	{0,0}
};


