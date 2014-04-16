#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_CurveData.h>

class luna_wrapper_proland_CurveData {
public:
	typedef Luna< proland::CurveData > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53008858) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::CurveData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveData* rhs =(Luna< proland::CurveData >::check(L,2));
		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
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

		proland::CurveData* self= (proland::CurveData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::CurveData >::push(L,self,false);
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

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::CurveData");
		
		return luna_dynamicCast(L,converters,"proland::CurveData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCurvilinearLength_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurvilinearLength_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,81304238)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< ork::vec2d >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,81304238)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< ork::vec2d >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurvilinearCoordinate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,81304238)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,81304238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartCapLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEndCapLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69005068) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFlattenCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// proland::CurveData::CurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static proland::CurveData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData::CurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData::CurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,1));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveData::CurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::CurveData::CurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		return new proland::CurveData(id, flattenCurve);
	}

	// proland::CurveData::CurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve)
	static proland::CurveData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData::CurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData::CurveData(lua_Table * data, proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 2 ID = 58015782\narg 3 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveData::CurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::CurveData::CurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		return new wrapper_proland_CurveData(L,NULL, id, flattenCurve);
	}

	// Overload binder for proland::CurveData::CurveData
	static proland::CurveData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CurveData, cannot match any of the overloads for function CurveData:\n  CurveData(proland::CurveId, proland::CurvePtr)\n  CurveData(lua_Table *, proland::CurveId, proland::CurvePtr)\n");
		return NULL;
	}


	// Function binds:
	// float proland::CurveData::getCurvilinearLength()
	static int _bind_getCurvilinearLength_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurvilinearLength_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getCurvilinearLength() function, expected prototype:\nfloat proland::CurveData::getCurvilinearLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getCurvilinearLength(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurvilinearLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::CurveData::getCurvilinearLength(float s, ork::vec2d * p = NULL, ork::vec2d * n = NULL)
	static int _bind_getCurvilinearLength_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurvilinearLength_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getCurvilinearLength(float s, ork::vec2d * p = NULL, ork::vec2d * n = NULL) function, expected prototype:\nfloat proland::CurveData::getCurvilinearLength(float s, ork::vec2d * p = NULL, ork::vec2d * n = NULL)\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float s=(float)lua_tonumber(L,2);
		ork::vec2d* p=luatop>2 ? (Luna< ork::vec2d >::check(L,3)) : (ork::vec2d*)NULL;
		ork::vec2d* n=luatop>3 ? (Luna< ork::vec2d >::check(L,4)) : (ork::vec2d*)NULL;

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getCurvilinearLength(float, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurvilinearLength(s, p, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::CurveData::getCurvilinearLength
	static int _bind_getCurvilinearLength(lua_State *L) {
		if (_lg_typecheck_getCurvilinearLength_overload_1(L)) return _bind_getCurvilinearLength_overload_1(L);
		if (_lg_typecheck_getCurvilinearLength_overload_2(L)) return _bind_getCurvilinearLength_overload_2(L);

		luaL_error(L, "error in function getCurvilinearLength, cannot match any of the overloads for function getCurvilinearLength:\n  getCurvilinearLength()\n  getCurvilinearLength(float, ork::vec2d *, ork::vec2d *)\n");
		return 0;
	}

	// float proland::CurveData::getCurvilinearCoordinate(float l, ork::vec2d * p = NULL, ork::vec2d * n = NULL)
	static int _bind_getCurvilinearCoordinate(lua_State *L) {
		if (!_lg_typecheck_getCurvilinearCoordinate(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getCurvilinearCoordinate(float l, ork::vec2d * p = NULL, ork::vec2d * n = NULL) function, expected prototype:\nfloat proland::CurveData::getCurvilinearCoordinate(float l, ork::vec2d * p = NULL, ork::vec2d * n = NULL)\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float l=(float)lua_tonumber(L,2);
		ork::vec2d* p=luatop>2 ? (Luna< ork::vec2d >::check(L,3)) : (ork::vec2d*)NULL;
		ork::vec2d* n=luatop>3 ? (Luna< ork::vec2d >::check(L,4)) : (ork::vec2d*)NULL;

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getCurvilinearCoordinate(float, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurvilinearCoordinate(l, p, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::CurveData::getStartCapLength()
	static int _bind_getStartCapLength(lua_State *L) {
		if (!_lg_typecheck_getStartCapLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getStartCapLength() function, expected prototype:\nfloat proland::CurveData::getStartCapLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getStartCapLength(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getStartCapLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::CurveData::getEndCapLength()
	static int _bind_getEndCapLength(lua_State *L) {
		if (!_lg_typecheck_getEndCapLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getEndCapLength() function, expected prototype:\nfloat proland::CurveData::getEndCapLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getEndCapLength(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getEndCapLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurveId proland::CurveData::getId()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::CurveData::getId() function, expected prototype:\nproland::CurveId proland::CurveData::getId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::CurveData::getId(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// void proland::CurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	static int _bind_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) function, expected prototype:\nvoid proland::CurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* tiles_ptr=(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::CurveData::getUsedTiles function");
		}
		set< proland::TileCache::Tile::Id > & tiles=*tiles_ptr;
		float rootSampleLength=(float)lua_tonumber(L,3);

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveData::getUsedTiles(set< proland::TileCache::Tile::Id > &, float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsedTiles(tiles, rootSampleLength);

		return 0;
	}

	// float proland::CurveData::getS(int rank)
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurveData::getS(int rank) function, expected prototype:\nfloat proland::CurveData::getS(int rank)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rank=(int)lua_tointeger(L,2);

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurveData::getS(int). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(rank);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::CurveData::getFlattenCurve()
	static int _bind_getFlattenCurve(lua_State *L) {
		if (!_lg_typecheck_getFlattenCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::CurveData::getFlattenCurve() function, expected prototype:\nproland::CurvePtr proland::CurveData::getFlattenCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::CurveData::getFlattenCurve(). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getFlattenCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::CurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	static int _bind_base_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_base_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) function, expected prototype:\nvoid proland::CurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* tiles_ptr=(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::CurveData::base_getUsedTiles function");
		}
		set< proland::TileCache::Tile::Id > & tiles=*tiles_ptr;
		float rootSampleLength=(float)lua_tonumber(L,3);

		proland::CurveData* self=(Luna< proland::CurveData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveData::base_getUsedTiles(set< proland::TileCache::Tile::Id > &, float). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CurveData::getUsedTiles(tiles, rootSampleLength);

		return 0;
	}


	// Operator binds:

};

proland::CurveData* LunaTraits< proland::CurveData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_CurveData::_bind_ctor(L);
}

void LunaTraits< proland::CurveData >::_bind_dtor(proland::CurveData* obj) {
	delete obj;
}

const char LunaTraits< proland::CurveData >::className[] = "CurveData";
const char LunaTraits< proland::CurveData >::fullName[] = "proland::CurveData";
const char LunaTraits< proland::CurveData >::moduleName[] = "proland";
const char* LunaTraits< proland::CurveData >::parents[] = {0};
const int LunaTraits< proland::CurveData >::hash = 53008858;
const int LunaTraits< proland::CurveData >::uniqueIDs[] = {53008858,0};

luna_RegType LunaTraits< proland::CurveData >::methods[] = {
	{"getCurvilinearLength", &luna_wrapper_proland_CurveData::_bind_getCurvilinearLength},
	{"getCurvilinearCoordinate", &luna_wrapper_proland_CurveData::_bind_getCurvilinearCoordinate},
	{"getStartCapLength", &luna_wrapper_proland_CurveData::_bind_getStartCapLength},
	{"getEndCapLength", &luna_wrapper_proland_CurveData::_bind_getEndCapLength},
	{"getId", &luna_wrapper_proland_CurveData::_bind_getId},
	{"getUsedTiles", &luna_wrapper_proland_CurveData::_bind_getUsedTiles},
	{"getS", &luna_wrapper_proland_CurveData::_bind_getS},
	{"getFlattenCurve", &luna_wrapper_proland_CurveData::_bind_getFlattenCurve},
	{"base_getUsedTiles", &luna_wrapper_proland_CurveData::_bind_base_getUsedTiles},
	{"dynCast", &luna_wrapper_proland_CurveData::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_CurveData::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_CurveData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_CurveData::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_CurveData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::CurveData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::CurveData >::enumValues[] = {
	{"RIGHT_BOUNDARY", proland::CurveData::RIGHT_BOUNDARY},
	{"LEFT_BOUNDARY", proland::CurveData::LEFT_BOUNDARY},
	{0,0}
};


