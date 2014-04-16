#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GraphLayer.h>

class luna_wrapper_proland_GraphLayer {
public:
	typedef Luna< proland::GraphLayer > luna_t;

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

		proland::GraphLayer* self= (proland::GraphLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GraphLayer >::push(L,self,false);
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
		//proland::GraphLayer* ptr= dynamic_cast< proland::GraphLayer* >(Luna< ork::Object >::check(L,1));
		proland::GraphLayer* ptr= luna_caster< ork::Object, proland::GraphLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GraphLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startCreateTile(lua_State *L) {
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

	inline static bool _lg_typecheck_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCurve_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>15 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53008858)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< proland::CurveData >::check(L,4)) ) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,9) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,10) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,5903696) ) return false;
		if( (!(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,11))) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,81304238)) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !(Luna< ork::vec2d >::check(L,12)) ) ) return false;
		if( luatop>12 && (lua_isnil(L,13)==0 && !Luna<void>::has_uniqueid(L,13,81304238)) ) return false;
		if( luatop>12 && (lua_isnil(L,13)==0 && !(Luna< ork::vec2d >::check(L,13)) ) ) return false;
		if( luatop>13 && (lua_isnil(L,14)==0 && !Luna<void>::has_uniqueid(L,14,81304238)) ) return false;
		if( luatop>13 && (lua_isnil(L,14)==0 && !(Luna< ork::vec2d >::check(L,14)) ) ) return false;
		if( luatop>14 && (lua_isnil(L,15)==0 && !Luna<void>::has_uniqueid(L,15,81304238)) ) return false;
		if( luatop>14 && (lua_isnil(L,15)==0 && !(Luna< ork::vec2d >::check(L,15)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCurve_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>14 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53008858)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< proland::CurveData >::check(L,4)) ) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,8) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,9) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,5903696) ) return false;
		if( (!(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,10))) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,81304238)) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !(Luna< ork::vec2d >::check(L,11)) ) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,81304238)) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !(Luna< ork::vec2d >::check(L,12)) ) ) return false;
		if( luatop>12 && (lua_isnil(L,13)==0 && !Luna<void>::has_uniqueid(L,13,81304238)) ) return false;
		if( luatop>12 && (lua_isnil(L,13)==0 && !(Luna< ork::vec2d >::check(L,13)) ) ) return false;
		if( luatop>13 && (lua_isnil(L,14)==0 && !Luna<void>::has_uniqueid(L,14,81304238)) ) return false;
		if( luatop>13 && (lua_isnil(L,14)==0 && !(Luna< ork::vec2d >::check(L,14)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCurve_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>12 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1443305) ) return false;
		if( (!(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,8))) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,81304238)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !(Luna< ork::vec2d >::check(L,9)) ) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,81304238)) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !(Luna< ork::vec2d >::check(L,10)) ) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,81304238)) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !(Luna< ork::vec2d >::check(L,11)) ) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,81304238)) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !(Luna< ork::vec2d >::check(L,12)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCurve_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,5903696) ) return false;
		if( (!(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,81304238)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !(Luna< ork::vec2d >::check(L,8)) ) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,81304238)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !(Luna< ork::vec2d >::check(L,9)) ) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,81304238)) ) return false;
		if( luatop>9 && (lua_isnil(L,10)==0 && !(Luna< ork::vec2d >::check(L,10)) ) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,81304238)) ) return false;
		if( luatop>10 && (lua_isnil(L,11)==0 && !(Luna< ork::vec2d >::check(L,11)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_extremity(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41768114) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawArea(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72385761) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
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

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
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

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GraphLayer::GraphLayer(lua_Table * data, const char * name)
	static proland::GraphLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphLayer::GraphLayer(lua_Table * data, const char * name) function, expected prototype:\nproland::GraphLayer::GraphLayer(lua_Table * data, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		return new wrapper_proland_GraphLayer(L,NULL, name);
	}

	// proland::GraphLayer::GraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)
	static proland::GraphLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphLayer::GraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false) function, expected prototype:\nproland::GraphLayer::GraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,2);
		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,3);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		int displayLevel=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		bool quality=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		bool storeGraphTiles=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;
		bool deform=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;

		return new wrapper_proland_GraphLayer(L,NULL, name, graphProducer, layerProgram, displayLevel, quality, storeGraphTiles, deform);
	}

	// Overload binder for proland::GraphLayer::GraphLayer
	static proland::GraphLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphLayer, cannot match any of the overloads for function GraphLayer:\n  GraphLayer(lua_Table *, const char *)\n  GraphLayer(lua_Table *, const char *, ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::GraphLayer::getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_useTile(lua_State *L) {
		if (!_lg_typecheck_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::GraphLayer::unuseTile(int level, int tx, int ty)
	static int _bind_unuseTile(lua_State *L) {
		if (!_lg_typecheck_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::GraphLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::GraphLayer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::GraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::GraphLayer::beginCreateTile()
	static int _bind_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::beginCreateTile() function, expected prototype:\nvoid proland::GraphLayer::beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginCreateTile();

		return 0;
	}

	// void proland::GraphLayer::endCreateTile()
	static int _bind_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::endCreateTile() function, expected prototype:\nvoid proland::GraphLayer::endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endCreateTile();

		return 0;
	}

	// void proland::GraphLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float l0, float l1, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)
	static int _bind_drawCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float l0, float l1, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL) function, expected prototype:\nvoid proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float l0, float l1, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 98496290\narg 3 ID = 53008858\narg 8 ID = [unknown]\narg 9 ID = [unknown]\narg 10 ID = [unknown]\narg 11 ID = 81304238\narg 12 ID = 81304238\narg 13 ID = 81304238\narg 14 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::GraphLayer::drawCurve function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::GraphLayer::drawCurve function");
		}
		proland::CurvePtr p=*p_ptr;
		proland::CurveData* data=(Luna< proland::CurveData >::check(L,4));
		float l0=(float)lua_tonumber(L,5);
		float l1=(float)lua_tonumber(L,6);
		float width=(float)lua_tonumber(L,7);
		float scale=(float)lua_tonumber(L,8);
		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,9);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,10);
		ork::Mesh< ork::vec4f, unsigned int >* mesh_ptr=(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,11));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in proland::GraphLayer::drawCurve function");
		}
		ork::Mesh< ork::vec4f, unsigned int > & mesh=*mesh_ptr;
		ork::vec2d* nx=luatop>11 ? (Luna< ork::vec2d >::check(L,12)) : (ork::vec2d*)NULL;
		ork::vec2d* ny=luatop>12 ? (Luna< ork::vec2d >::check(L,13)) : (ork::vec2d*)NULL;
		ork::vec2d* lx=luatop>13 ? (Luna< ork::vec2d >::check(L,14)) : (ork::vec2d*)NULL;
		ork::vec2d* ly=luatop>14 ? (Luna< ork::vec2d >::check(L,15)) : (ork::vec2d*)NULL;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::drawCurve(const ork::vec3d &, proland::CurvePtr, proland::CurveData *, float, float, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawCurve(tileCoords, p, data, l0, l1, width, scale, fb, prog, mesh, nx, ny, lx, ly);

		return 0;
	}

	// void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float width, float cap, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)
	static int _bind_drawCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float width, float cap, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL) function, expected prototype:\nvoid proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::CurveData * data, float width, float cap, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 98496290\narg 3 ID = 53008858\narg 7 ID = [unknown]\narg 8 ID = [unknown]\narg 9 ID = [unknown]\narg 10 ID = 81304238\narg 11 ID = 81304238\narg 12 ID = 81304238\narg 13 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::GraphLayer::drawCurve function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::GraphLayer::drawCurve function");
		}
		proland::CurvePtr p=*p_ptr;
		proland::CurveData* data=(Luna< proland::CurveData >::check(L,4));
		float width=(float)lua_tonumber(L,5);
		float cap=(float)lua_tonumber(L,6);
		float scale=(float)lua_tonumber(L,7);
		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,8);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,9);
		ork::Mesh< ork::vec4f, unsigned int >* mesh_ptr=(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,10));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in proland::GraphLayer::drawCurve function");
		}
		ork::Mesh< ork::vec4f, unsigned int > & mesh=*mesh_ptr;
		ork::vec2d* nx=luatop>10 ? (Luna< ork::vec2d >::check(L,11)) : (ork::vec2d*)NULL;
		ork::vec2d* ny=luatop>11 ? (Luna< ork::vec2d >::check(L,12)) : (ork::vec2d*)NULL;
		ork::vec2d* lx=luatop>12 ? (Luna< ork::vec2d >::check(L,13)) : (ork::vec2d*)NULL;
		ork::vec2d* ly=luatop>13 ? (Luna< ork::vec2d >::check(L,14)) : (ork::vec2d*)NULL;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::drawCurve(const ork::vec3d &, proland::CurvePtr, proland::CurveData *, float, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawCurve(tileCoords, p, data, width, cap, scale, fb, prog, mesh, nx, ny, lx, ly);

		return 0;
	}

	// void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec2f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)
	static int _bind_drawCurve_overload_3(lua_State *L) {
		if (!_lg_typecheck_drawCurve_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec2f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL) function, expected prototype:\nvoid proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, float width, float scale, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec2f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 98496290\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = 81304238\narg 9 ID = 81304238\narg 10 ID = 81304238\narg 11 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::GraphLayer::drawCurve function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::GraphLayer::drawCurve function");
		}
		proland::CurvePtr p=*p_ptr;
		float width=(float)lua_tonumber(L,4);
		float scale=(float)lua_tonumber(L,5);
		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,6);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,7);
		ork::Mesh< ork::vec2f, unsigned int >* mesh_ptr=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,8));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in proland::GraphLayer::drawCurve function");
		}
		ork::Mesh< ork::vec2f, unsigned int > & mesh=*mesh_ptr;
		ork::vec2d* nx=luatop>8 ? (Luna< ork::vec2d >::check(L,9)) : (ork::vec2d*)NULL;
		ork::vec2d* ny=luatop>9 ? (Luna< ork::vec2d >::check(L,10)) : (ork::vec2d*)NULL;
		ork::vec2d* lx=luatop>10 ? (Luna< ork::vec2d >::check(L,11)) : (ork::vec2d*)NULL;
		ork::vec2d* ly=luatop>11 ? (Luna< ork::vec2d >::check(L,12)) : (ork::vec2d*)NULL;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::drawCurve(const ork::vec3d &, proland::CurvePtr, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec2f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawCurve(tileCoords, p, width, scale, fb, prog, mesh, nx, ny, lx, ly);

		return 0;
	}

	// void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, const ork::vec4f & part, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * dx = NULL, ork::vec2d * ly = NULL)
	static int _bind_drawCurve_overload_4(lua_State *L) {
		if (!_lg_typecheck_drawCurve_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, const ork::vec4f & part, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * dx = NULL, ork::vec2d * ly = NULL) function, expected prototype:\nvoid proland::GraphLayer::drawCurve(const ork::vec3d & tileCoords, proland::CurvePtr p, const ork::vec4f & part, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * dx = NULL, ork::vec2d * ly = NULL)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 98496290\narg 3 ID = 81304302\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = 81304238\narg 8 ID = 81304238\narg 9 ID = 81304238\narg 10 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::GraphLayer::drawCurve function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::GraphLayer::drawCurve function");
		}
		proland::CurvePtr p=*p_ptr;
		const ork::vec4f* part_ptr=(Luna< ork::vec4f >::check(L,4));
		if( !part_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg part in proland::GraphLayer::drawCurve function");
		}
		const ork::vec4f & part=*part_ptr;
		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,5);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::Mesh< ork::vec4f, unsigned int >* mesh_ptr=(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,7));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in proland::GraphLayer::drawCurve function");
		}
		ork::Mesh< ork::vec4f, unsigned int > & mesh=*mesh_ptr;
		ork::vec2d* nx=luatop>7 ? (Luna< ork::vec2d >::check(L,8)) : (ork::vec2d*)NULL;
		ork::vec2d* ny=luatop>8 ? (Luna< ork::vec2d >::check(L,9)) : (ork::vec2d*)NULL;
		ork::vec2d* dx=luatop>9 ? (Luna< ork::vec2d >::check(L,10)) : (ork::vec2d*)NULL;
		ork::vec2d* ly=luatop>10 ? (Luna< ork::vec2d >::check(L,11)) : (ork::vec2d*)NULL;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::drawCurve(const ork::vec3d &, proland::CurvePtr, const ork::vec4f &, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawCurve(tileCoords, p, part, fb, prog, mesh, nx, ny, dx, ly);

		return 0;
	}

	// Overload binder for proland::GraphLayer::drawCurve
	static int _bind_drawCurve(lua_State *L) {
		if (_lg_typecheck_drawCurve_overload_1(L)) return _bind_drawCurve_overload_1(L);
		if (_lg_typecheck_drawCurve_overload_2(L)) return _bind_drawCurve_overload_2(L);
		if (_lg_typecheck_drawCurve_overload_3(L)) return _bind_drawCurve_overload_3(L);
		if (_lg_typecheck_drawCurve_overload_4(L)) return _bind_drawCurve_overload_4(L);

		luaL_error(L, "error in function drawCurve, cannot match any of the overloads for function drawCurve:\n  drawCurve(const ork::vec3d &, proland::CurvePtr, proland::CurveData *, float, float, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *)\n  drawCurve(const ork::vec3d &, proland::CurvePtr, proland::CurveData *, float, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *)\n  drawCurve(const ork::vec3d &, proland::CurvePtr, float, float, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec2f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *)\n  drawCurve(const ork::vec3d &, proland::CurvePtr, const ork::vec4f &, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *)\n");
		return 0;
	}

	// bool proland::GraphLayer::extremity(proland::CurvePtr curve, proland::NodePtr p)
	static int _bind_extremity(lua_State *L) {
		if (!_lg_typecheck_extremity(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::GraphLayer::extremity(proland::CurvePtr curve, proland::NodePtr p) function, expected prototype:\nbool proland::GraphLayer::extremity(proland::CurvePtr curve, proland::NodePtr p)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::GraphLayer::extremity function");
		}
		proland::CurvePtr curve=*curve_ptr;
		proland::NodePtr* p_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::GraphLayer::extremity function");
		}
		proland::NodePtr p=*p_ptr;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::GraphLayer::extremity(proland::CurvePtr, proland::NodePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->extremity(curve, p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::GraphLayer::drawArea(const ork::vec3d & tileCoords, proland::AreaPtr a, proland::Tesselator & tess)
	static int _bind_drawArea(lua_State *L) {
		if (!_lg_typecheck_drawArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::drawArea(const ork::vec3d & tileCoords, proland::AreaPtr a, proland::Tesselator & tess) function, expected prototype:\nvoid proland::GraphLayer::drawArea(const ork::vec3d & tileCoords, proland::AreaPtr a, proland::Tesselator & tess)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 84471053\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::GraphLayer::drawArea function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::GraphLayer::drawArea function");
		}
		proland::AreaPtr a=*a_ptr;
		proland::Tesselator* tess_ptr=(Luna< ork::Object >::checkSubType< proland::Tesselator >(L,4));
		if( !tess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tess in proland::GraphLayer::drawArea function");
		}
		proland::Tesselator & tess=*tess_ptr;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::drawArea(const ork::vec3d &, proland::AreaPtr, proland::Tesselator &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawArea(tileCoords, a, tess);

		return 0;
	}

	// void proland::GraphLayer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles)
	static int _bind_addUsedTiles(lua_State *L) {
		if (!_lg_typecheck_addUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles) function, expected prototype:\nvoid proland::GraphLayer::addUsedTiles(int level, int tx, int ty, proland::TileProducer * producer, set< proland::TileCache::Tile * > tiles)\nClass arguments details:\narg 4 ID = 1381405\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileProducer* producer=(Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5));
		set< proland::TileCache::Tile * >* tiles_ptr=(Luna< set< proland::TileCache::Tile * > >::check(L,6));
		if( !tiles_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tiles in proland::GraphLayer::addUsedTiles function");
		}
		set< proland::TileCache::Tile * > tiles=*tiles_ptr;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::addUsedTiles(int, int, int, proland::TileProducer *, set< proland::TileCache::Tile * >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUsedTiles(level, tx, ty, producer, tiles);

		return 0;
	}

	// const char * proland::GraphLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::GraphLayer::base_toString() function, expected prototype:\nconst char * proland::GraphLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::GraphLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::GraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::GraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::GraphLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::GraphLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::invalidateTiles();

		return 0;
	}

	// void proland::GraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::GraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::GraphLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::GraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::GraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::GraphLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::GraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::GraphLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::GraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::GraphLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::GraphLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::beginCreateTile();

		return 0;
	}

	// void proland::GraphLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_endCreateTile() function, expected prototype:\nvoid proland::GraphLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::endCreateTile();

		return 0;
	}

	// void proland::GraphLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphLayer* self=Luna< ork::Object >::checkSubType< proland::GraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphLayer::stopCreateTile(level, tx, ty);

		return 0;
	}


	// Operator binds:

};

proland::GraphLayer* LunaTraits< proland::GraphLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GraphLayer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
}

void LunaTraits< proland::GraphLayer >::_bind_dtor(proland::GraphLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::GraphLayer >::className[] = "GraphLayer";
const char LunaTraits< proland::GraphLayer >::fullName[] = "proland::GraphLayer";
const char LunaTraits< proland::GraphLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::GraphLayer >::parents[] = {"proland.TileLayer", 0};
const int LunaTraits< proland::GraphLayer >::hash = 97126047;
const int LunaTraits< proland::GraphLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::GraphLayer >::methods[] = {
	{"getReferencedProducers", &luna_wrapper_proland_GraphLayer::_bind_getReferencedProducers},
	{"useTile", &luna_wrapper_proland_GraphLayer::_bind_useTile},
	{"unuseTile", &luna_wrapper_proland_GraphLayer::_bind_unuseTile},
	{"setTileSize", &luna_wrapper_proland_GraphLayer::_bind_setTileSize},
	{"prefetchTile", &luna_wrapper_proland_GraphLayer::_bind_prefetchTile},
	{"startCreateTile", &luna_wrapper_proland_GraphLayer::_bind_startCreateTile},
	{"beginCreateTile", &luna_wrapper_proland_GraphLayer::_bind_beginCreateTile},
	{"endCreateTile", &luna_wrapper_proland_GraphLayer::_bind_endCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_GraphLayer::_bind_stopCreateTile},
	{"drawCurve", &luna_wrapper_proland_GraphLayer::_bind_drawCurve},
	{"extremity", &luna_wrapper_proland_GraphLayer::_bind_extremity},
	{"drawArea", &luna_wrapper_proland_GraphLayer::_bind_drawArea},
	{"addUsedTiles", &luna_wrapper_proland_GraphLayer::_bind_addUsedTiles},
	{"base_toString", &luna_wrapper_proland_GraphLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_GraphLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_GraphLayer::_bind_base_invalidateTiles},
	{"base_getReferencedProducers", &luna_wrapper_proland_GraphLayer::_bind_base_getReferencedProducers},
	{"base_useTile", &luna_wrapper_proland_GraphLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_GraphLayer::_bind_base_unuseTile},
	{"base_setTileSize", &luna_wrapper_proland_GraphLayer::_bind_base_setTileSize},
	{"base_prefetchTile", &luna_wrapper_proland_GraphLayer::_bind_base_prefetchTile},
	{"base_startCreateTile", &luna_wrapper_proland_GraphLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_GraphLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_GraphLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_GraphLayer::_bind_base_stopCreateTile},
	{"fromVoid", &luna_wrapper_proland_GraphLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GraphLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GraphLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GraphLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_GraphLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GraphLayer >::enumValues[] = {
	{0,0}
};


