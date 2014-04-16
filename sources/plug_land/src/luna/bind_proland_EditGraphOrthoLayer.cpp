#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditGraphOrthoLayer.h>

class luna_wrapper_proland_EditGraphOrthoLayer {
public:
	typedef Luna< proland::EditGraphOrthoLayer > luna_t;

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

		proland::EditGraphOrthoLayer* self= (proland::EditGraphOrthoLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditGraphOrthoLayer >::push(L,self,false);
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
		//proland::EditGraphOrthoLayer* ptr= dynamic_cast< proland::EditGraphOrthoLayer* >(Luna< ork::Object >::check(L,1));
		proland::EditGraphOrthoLayer* ptr= luna_caster< ork::Object, proland::EditGraphOrthoLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditGraphOrthoLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73900203) ) return false;
		if( (!(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,9) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,73900203) ) return false;
		if( (!(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,10) ) return false;
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

	inline static bool _lg_typecheck_drawGraph(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65799894) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,81304238) ) return false;
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

	inline static bool _lg_typecheck_getGraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGraphCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditedGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEditedGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_select_overload_1(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::TileCache::Tile >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,63279285) ) return false;
		if( (!(Luna< list< proland::AreaId > >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_select_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_select_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,63279285) ) return false;
		if( (!(Luna< list< proland::AreaId > >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,7))) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_selection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSelection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findCurve(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,65799894) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,63279285) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateSelectedCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_movePoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_change(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addVertex(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,65799894) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,17549196) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformVertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transformVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,6))) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,5))) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothArea_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_smoothArea_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,6))) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeNode(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6))) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,11))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fitCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeCurve(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65799894) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTolerance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedSegment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditedGraphPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultCurveType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultCurveType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultCurveWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultCurveWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61351880) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventHandler(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHANDLER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplayedPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHANDLER(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,68532613) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMesh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,38469397) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDisplayedPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55797744) ) return false;
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

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
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

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_drawGraph(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65799894) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,81304238) ) return false;
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

	inline static bool _lg_typecheck_base_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6))) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,11))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_fitCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTypeNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61351880) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditGraphOrthoLayer::EditGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL)
	static proland::EditGraphOrthoLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const vector< ork::ptr< proland::GraphProducer > >* graphs_ptr=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1));
		if( !graphs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graphs in proland::EditGraphOrthoLayer::EditGraphOrthoLayer function");
		}
		const vector< ork::ptr< proland::GraphProducer > > & graphs=*graphs_ptr;
		ork::ptr< ork::Program > layerProg = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int displayLevel=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		float tolerance=luatop>3 ? (float)lua_tonumber(L,4) : (float)8.0f/192.0f;
		bool softEdition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		double softEditionDelay=luatop>5 ? (double)lua_tonumber(L,6) : (double)100000.0;
		bool deform=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;
		std::string terrain(lua_tostring(L,8),lua_objlen(L,8));
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,9);

		return new proland::EditGraphOrthoLayer(graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager);
	}

	// proland::EditGraphOrthoLayer::EditGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL)
	static proland::EditGraphOrthoLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 10 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const vector< ork::ptr< proland::GraphProducer > >* graphs_ptr=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,2));
		if( !graphs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graphs in proland::EditGraphOrthoLayer::EditGraphOrthoLayer function");
		}
		const vector< ork::ptr< proland::GraphProducer > > & graphs=*graphs_ptr;
		ork::ptr< ork::Program > layerProg = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		float tolerance=luatop>4 ? (float)lua_tonumber(L,5) : (float)8.0f/192.0f;
		bool softEdition=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		double softEditionDelay=luatop>6 ? (double)lua_tonumber(L,7) : (double)100000.0;
		bool deform=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;
		std::string terrain(lua_tostring(L,9),lua_objlen(L,9));
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,10);

		return new wrapper_proland_EditGraphOrthoLayer(L,NULL, graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager);
	}

	// Overload binder for proland::EditGraphOrthoLayer::EditGraphOrthoLayer
	static proland::EditGraphOrthoLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditGraphOrthoLayer, cannot match any of the overloads for function EditGraphOrthoLayer:\n  EditGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > &, ork::ptr< ork::Program >, int, float, bool, double, bool, string, ork::ptr< ork::ResourceManager >)\n  EditGraphOrthoLayer(lua_Table *, const vector< ork::ptr< proland::GraphProducer > > &, ork::ptr< ork::Program >, int, float, bool, double, bool, string, ork::ptr< ork::ResourceManager >)\n");
		return NULL;
	}


	// Function binds:
	// void proland::EditGraphOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_useTile(lua_State *L) {
		if (!_lg_typecheck_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::unuseTile(int level, int tx, int ty)
	static int _bind_unuseTile(lua_State *L) {
		if (!_lg_typecheck_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > result = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, result);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::beginCreateTile()
	static int _bind_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::beginCreateTile() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginCreateTile();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)
	static int _bind_drawGraph(lua_State *L) {
		if (!_lg_typecheck_drawGraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 94278244\narg 4 ID = [unknown]\narg 5 ID = 81304238\narg 6 ID = 81304238\narg 7 ID = 81304238\narg 8 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::EditGraphOrthoLayer::drawGraph function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,3));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::drawGraph function");
		}
		proland::GraphPtr g=*g_ptr;
		float pointSize=(float)lua_tonumber(L,4);
		ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5);
		ork::vec2d* nx_ptr=(Luna< ork::vec2d >::check(L,6));
		if( !nx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nx in proland::EditGraphOrthoLayer::drawGraph function");
		}
		ork::vec2d & nx=*nx_ptr;
		ork::vec2d* ny_ptr=(Luna< ork::vec2d >::check(L,7));
		if( !ny_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ny in proland::EditGraphOrthoLayer::drawGraph function");
		}
		ork::vec2d & ny=*ny_ptr;
		ork::vec2d* lx_ptr=(Luna< ork::vec2d >::check(L,8));
		if( !lx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lx in proland::EditGraphOrthoLayer::drawGraph function");
		}
		ork::vec2d & lx=*lx_ptr;
		ork::vec2d* ly_ptr=(Luna< ork::vec2d >::check(L,9));
		if( !ly_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ly in proland::EditGraphOrthoLayer::drawGraph function");
		}
		ork::vec2d & ly=*ly_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::drawGraph(const ork::vec3d &, proland::GraphPtr, float, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > >, ork::vec2d &, ork::vec2d &, ork::vec2d &, ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawGraph(tileCoords, g, pointSize, mesh, nx, ny, lx, ly);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::EditGraphOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::endCreateTile()
	static int _bind_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::endCreateTile() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endCreateTile();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// vector< ork::ptr< proland::GraphProducer > > proland::EditGraphOrthoLayer::getGraphs()
	static int _bind_getGraphs(lua_State *L) {
		if (!_lg_typecheck_getGraphs(L)) {
			luaL_error(L, "luna typecheck failed in vector< ork::ptr< proland::GraphProducer > > proland::EditGraphOrthoLayer::getGraphs() function, expected prototype:\nvector< ork::ptr< proland::GraphProducer > > proland::EditGraphOrthoLayer::getGraphs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call vector< ork::ptr< proland::GraphProducer > > proland::EditGraphOrthoLayer::getGraphs(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		vector< ork::ptr< proland::GraphProducer > > stack_lret = self->getGraphs();
		vector< ork::ptr< proland::GraphProducer > >* lret = new vector< ork::ptr< proland::GraphProducer > >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< vector< ork::ptr< proland::GraphProducer > > >::push(L,lret,true);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::getGraphCount()
	static int _bind_getGraphCount(lua_State *L) {
		if (!_lg_typecheck_getGraphCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::getGraphCount() function, expected prototype:\nint proland::EditGraphOrthoLayer::getGraphCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::getGraphCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getGraphCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::getEditedGraph()
	static int _bind_getEditedGraph(lua_State *L) {
		if (!_lg_typecheck_getEditedGraph(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::getEditedGraph() function, expected prototype:\nint proland::EditGraphOrthoLayer::getEditedGraph()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::getEditedGraph(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEditedGraph();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::setEditedGraph(int index)
	static int _bind_setEditedGraph(lua_State *L) {
		if (!_lg_typecheck_setEditedGraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::setEditedGraph(int index) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::setEditedGraph(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::setEditedGraph(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEditedGraph(index);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::select(proland::TileCache::Tile * t, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)
	static int _bind_select_overload_1(lua_State *L) {
		if (!_lg_typecheck_select_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::select(proland::TileCache::Tile * t, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point) function, expected prototype:\nbool proland::EditGraphOrthoLayer::select(proland::TileCache::Tile * t, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)\nClass arguments details:\narg 1 ID = 10515563\narg 5 ID = 94278244\narg 6 ID = [unknown]\narg 7 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		float tolerance=(float)lua_tonumber(L,5);
		proland::GraphPtr* graph_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,6));
		if( !graph_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graph in proland::EditGraphOrthoLayer::select function");
		}
		proland::GraphPtr & graph=*graph_ptr;
		list< proland::AreaId >* areas_ptr=(Luna< list< proland::AreaId > >::check(L,7));
		if( !areas_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg areas in proland::EditGraphOrthoLayer::select function");
		}
		list< proland::AreaId > & areas=*areas_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::select function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::select(proland::TileCache::Tile *, double, double, float, proland::GraphPtr &, list< proland::AreaId > &, proland::CurvePtr &, int &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->select(t, x, y, tolerance, graph, areas, curve, segment, point);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// bool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance)
	static int _bind_select_overload_2(lua_State *L) {
		if (!_lg_typecheck_select_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance) function, expected prototype:\nbool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::select(double, double, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->select(x, y, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)
	static int _bind_select_overload_3(lua_State *L) {
		if (!_lg_typecheck_select_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point) function, expected prototype:\nbool proland::EditGraphOrthoLayer::select(double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)\nClass arguments details:\narg 4 ID = 94278244\narg 5 ID = [unknown]\narg 6 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);
		proland::GraphPtr* graph_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5));
		if( !graph_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graph in proland::EditGraphOrthoLayer::select function");
		}
		proland::GraphPtr & graph=*graph_ptr;
		list< proland::AreaId >* areas_ptr=(Luna< list< proland::AreaId > >::check(L,6));
		if( !areas_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg areas in proland::EditGraphOrthoLayer::select function");
		}
		list< proland::AreaId > & areas=*areas_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,7));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::select function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,8);
		int point=(int)lua_tointeger(L,9);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::select(double, double, float, proland::GraphPtr &, list< proland::AreaId > &, proland::CurvePtr &, int &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->select(x, y, tolerance, graph, areas, curve, segment, point);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// Overload binder for proland::EditGraphOrthoLayer::select
	static int _bind_select(lua_State *L) {
		if (_lg_typecheck_select_overload_1(L)) return _bind_select_overload_1(L);
		if (_lg_typecheck_select_overload_2(L)) return _bind_select_overload_2(L);
		if (_lg_typecheck_select_overload_3(L)) return _bind_select_overload_3(L);

		luaL_error(L, "error in function select, cannot match any of the overloads for function select:\n  select(proland::TileCache::Tile *, double, double, float, proland::GraphPtr &, list< proland::AreaId > &, proland::CurvePtr &, int &, int &)\n  select(double, double, float)\n  select(double, double, float, proland::GraphPtr &, list< proland::AreaId > &, proland::CurvePtr &, int &, int &)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::selection()
	static int _bind_selection(lua_State *L) {
		if (!_lg_typecheck_selection(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::selection() function, expected prototype:\nbool proland::EditGraphOrthoLayer::selection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::selection(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->selection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::getSelection(proland::CurvePtr & curve, int & point, int & segment)
	static int _bind_getSelection(lua_State *L) {
		if (!_lg_typecheck_getSelection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::getSelection(proland::CurvePtr & curve, int & point, int & segment) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::getSelection(proland::CurvePtr & curve, int & point, int & segment)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::getSelection function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,3);
		int segment=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::getSelection(proland::CurvePtr &, int &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getSelection(curve, point, segment);

		lua_pushnumber(L,point);
		lua_pushnumber(L,segment);
		return 2;
	}

	// void proland::EditGraphOrthoLayer::setSelection(proland::CurvePtr curve, int point, int segment)
	static int _bind_setSelection(lua_State *L) {
		if (!_lg_typecheck_setSelection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::setSelection(proland::CurvePtr curve, int point, int segment) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::setSelection(proland::CurvePtr curve, int point, int segment)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::setSelection function");
		}
		proland::CurvePtr curve=*curve_ptr;
		int point=(int)lua_tointeger(L,3);
		int segment=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::setSelection(proland::CurvePtr, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSelection(curve, point, segment);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::findCurve(proland::GraphPtr p, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)
	static int _bind_findCurve(lua_State *L) {
		if (!_lg_typecheck_findCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::findCurve(proland::GraphPtr p, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point) function, expected prototype:\nbool proland::EditGraphOrthoLayer::findCurve(proland::GraphPtr p, double x, double y, float tolerance, proland::GraphPtr & graph, list< proland::AreaId > & areas, proland::CurvePtr & curve, int & segment, int & point)\nClass arguments details:\narg 1 ID = 94278244\narg 5 ID = 94278244\narg 6 ID = [unknown]\narg 7 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* p_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::EditGraphOrthoLayer::findCurve function");
		}
		proland::GraphPtr p=*p_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		float tolerance=(float)lua_tonumber(L,5);
		proland::GraphPtr* graph_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,6));
		if( !graph_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graph in proland::EditGraphOrthoLayer::findCurve function");
		}
		proland::GraphPtr & graph=*graph_ptr;
		list< proland::AreaId >* areas_ptr=(Luna< list< proland::AreaId > >::check(L,7));
		if( !areas_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg areas in proland::EditGraphOrthoLayer::findCurve function");
		}
		list< proland::AreaId > & areas=*areas_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::findCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::findCurve(proland::GraphPtr, double, double, float, proland::GraphPtr &, list< proland::AreaId > &, proland::CurvePtr &, int &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->findCurve(p, x, y, tolerance, graph, areas, curve, segment, point);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// bool proland::EditGraphOrthoLayer::updateSelectedCurve()
	static int _bind_updateSelectedCurve(lua_State *L) {
		if (!_lg_typecheck_updateSelectedCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::updateSelectedCurve() function, expected prototype:\nbool proland::EditGraphOrthoLayer::updateSelectedCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::updateSelectedCurve(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->updateSelectedCurve();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::movePoint(double x, double y, int i = -1)
	static int _bind_movePoint(lua_State *L) {
		if (!_lg_typecheck_movePoint(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::movePoint(double x, double y, int i = -1) function, expected prototype:\nbool proland::EditGraphOrthoLayer::movePoint(double x, double y, int i = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		int i=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::movePoint(double, double, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->movePoint(x, y, i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::add(double x, double y, float tolerance)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::add(double x, double y, float tolerance) function, expected prototype:\nbool proland::EditGraphOrthoLayer::add(double x, double y, float tolerance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::add(double, double, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->add(x, y, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::change()
	static int _bind_change(lua_State *L) {
		if (!_lg_typecheck_change(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::change() function, expected prototype:\nbool proland::EditGraphOrthoLayer::change()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::change(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->change();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::remove()
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::remove() function, expected prototype:\nbool proland::EditGraphOrthoLayer::remove()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::remove(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->remove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::invert()
	static int _bind_invert(lua_State *L) {
		if (!_lg_typecheck_invert(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::invert() function, expected prototype:\nbool proland::EditGraphOrthoLayer::invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->invert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::addVertex(double x, double y, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_addVertex(lua_State *L) {
		if (!_lg_typecheck_addVertex(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::addVertex(double x, double y, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::addVertex(double x, double y, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 3 ID = 94278244\narg 4 ID = 98496290\narg 7 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,4));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::addVertex function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,5));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::addVertex function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,6);
		int point=(int)lua_tointeger(L,7);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,8));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::addVertex function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::addVertex(double, double, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addVertex(x, y, g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// bool proland::EditGraphOrthoLayer::transformVertex()
	static int _bind_transformVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_transformVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::transformVertex() function, expected prototype:\nbool proland::EditGraphOrthoLayer::transformVertex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::transformVertex(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->transformVertex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::transformVertex(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_transformVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_transformVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::transformVertex(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::transformVertex(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::transformVertex function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::transformVertex function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::transformVertex function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::transformVertex(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->transformVertex(g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// Overload binder for proland::EditGraphOrthoLayer::transformVertex
	static int _bind_transformVertex(lua_State *L) {
		if (_lg_typecheck_transformVertex_overload_1(L)) return _bind_transformVertex_overload_1(L);
		if (_lg_typecheck_transformVertex_overload_2(L)) return _bind_transformVertex_overload_2(L);

		luaL_error(L, "error in function transformVertex, cannot match any of the overloads for function transformVertex:\n  transformVertex()\n  transformVertex(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::smoothCurve(bool smooth)
	static int _bind_smoothCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_smoothCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothCurve(bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothCurve(bool smooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothCurve(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothCurve(smooth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::smoothCurve(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth)
	static int _bind_smoothCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_smoothCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothCurve(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothCurve(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 5 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::smoothCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::smoothCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,4);
		int segment=(int)lua_tointeger(L,5);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,6));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::smoothCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;
		bool smooth=(bool)(lua_toboolean(L,7)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothCurve(proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothCurve(g, curve, point, segment, changes, smooth);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		lua_pushnumber(L,segment);
		return 3;
	}

	// Overload binder for proland::EditGraphOrthoLayer::smoothCurve
	static int _bind_smoothCurve(lua_State *L) {
		if (_lg_typecheck_smoothCurve_overload_1(L)) return _bind_smoothCurve_overload_1(L);
		if (_lg_typecheck_smoothCurve_overload_2(L)) return _bind_smoothCurve_overload_2(L);

		luaL_error(L, "error in function smoothCurve, cannot match any of the overloads for function smoothCurve:\n  smoothCurve(bool)\n  smoothCurve(proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &, bool)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::smoothNode(bool smooth)
	static int _bind_smoothNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_smoothNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothNode(bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothNode(bool smooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothNode(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothNode(smooth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::smoothNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes, bool smooth)
	static int _bind_smoothNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_smoothNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes, bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes, bool smooth)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::smoothNode function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::smoothNode function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::smoothNode function");
		}
		proland::Graph::Changes & changes=*changes_ptr;
		bool smooth=(bool)(lua_toboolean(L,6)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothNode(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothNode(g, curve, point, changes, smooth);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// Overload binder for proland::EditGraphOrthoLayer::smoothNode
	static int _bind_smoothNode(lua_State *L) {
		if (_lg_typecheck_smoothNode_overload_1(L)) return _bind_smoothNode_overload_1(L);
		if (_lg_typecheck_smoothNode_overload_2(L)) return _bind_smoothNode_overload_2(L);

		luaL_error(L, "error in function smoothNode, cannot match any of the overloads for function smoothNode:\n  smoothNode(bool)\n  smoothNode(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &, bool)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::smoothArea(bool smooth)
	static int _bind_smoothArea_overload_1(lua_State *L) {
		if (!_lg_typecheck_smoothArea_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothArea(bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothArea(bool smooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothArea(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothArea(smooth);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::smoothArea(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth)
	static int _bind_smoothArea_overload_2(lua_State *L) {
		if (!_lg_typecheck_smoothArea_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::smoothArea(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth) function, expected prototype:\nbool proland::EditGraphOrthoLayer::smoothArea(proland::GraphPtr g, proland::CurvePtr & curve, int & point, int & segment, proland::Graph::Changes & changes, bool smooth)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 5 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::smoothArea function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::smoothArea function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,4);
		int segment=(int)lua_tointeger(L,5);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,6));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::smoothArea function");
		}
		proland::Graph::Changes & changes=*changes_ptr;
		bool smooth=(bool)(lua_toboolean(L,7)==1);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::smoothArea(proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->smoothArea(g, curve, point, segment, changes, smooth);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		lua_pushnumber(L,segment);
		return 3;
	}

	// Overload binder for proland::EditGraphOrthoLayer::smoothArea
	static int _bind_smoothArea(lua_State *L) {
		if (_lg_typecheck_smoothArea_overload_1(L)) return _bind_smoothArea_overload_1(L);
		if (_lg_typecheck_smoothArea_overload_2(L)) return _bind_smoothArea_overload_2(L);

		luaL_error(L, "error in function smoothArea, cannot match any of the overloads for function smoothArea:\n  smoothArea(bool)\n  smoothArea(proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &, bool)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::addNode()
	static int _bind_addNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_addNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::addNode() function, expected prototype:\nbool proland::EditGraphOrthoLayer::addNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::addNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addNode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::addNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_addNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_addNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::addNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::addNode(proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::addNode function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::addNode function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::addNode function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::addNode(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addNode(g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// Overload binder for proland::EditGraphOrthoLayer::addNode
	static int _bind_addNode(lua_State *L) {
		if (_lg_typecheck_addNode_overload_1(L)) return _bind_addNode_overload_1(L);
		if (_lg_typecheck_addNode_overload_2(L)) return _bind_addNode_overload_2(L);

		luaL_error(L, "error in function addNode, cannot match any of the overloads for function addNode:\n  addNode()\n  addNode(proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::removeNode(proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_removeNode(lua_State *L) {
		if (!_lg_typecheck_removeNode(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::removeNode(proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::removeNode(proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 5 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::removeNode function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::removeNode function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,4);
		int point=(int)lua_tointeger(L,5);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,6));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::removeNode function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::removeNode(proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeNode(g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// bool proland::EditGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 4 ID = 94278244\narg 5 ID = 98496290\narg 7 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,7);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,8));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addCurve(x, y, tolerance, g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// bool proland::EditGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 6 ID = 94278244\narg 7 ID = 98496290\narg 10 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		float tolerance=(float)lua_tonumber(L,6);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,11));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addCurve(x1, y1, x2, y2, tolerance, g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// Overload binder for proland::EditGraphOrthoLayer::addCurve
	static int _bind_addCurve(lua_State *L) {
		if (_lg_typecheck_addCurve_overload_1(L)) return _bind_addCurve_overload_1(L);
		if (_lg_typecheck_addCurve_overload_2(L)) return _bind_addCurve_overload_2(L);

		luaL_error(L, "error in function addCurve, cannot match any of the overloads for function addCurve:\n  addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n  addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::fitCurve()
	static int _bind_fitCurve(lua_State *L) {
		if (!_lg_typecheck_fitCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::fitCurve() function, expected prototype:\nbool proland::EditGraphOrthoLayer::fitCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::fitCurve(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->fitCurve();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::removeCurve(proland::GraphPtr g, proland::CurvePtr & curve, proland::Graph::Changes & changes)
	static int _bind_removeCurve(lua_State *L) {
		if (!_lg_typecheck_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::removeCurve(proland::GraphPtr g, proland::CurvePtr & curve, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::removeCurve(proland::GraphPtr g, proland::CurvePtr & curve, proland::Graph::Changes & changes)\nClass arguments details:\narg 1 ID = 94278244\narg 2 ID = 98496290\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,2));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::removeCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::removeCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::removeCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::removeCurve(proland::GraphPtr, proland::CurvePtr &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeCurve(g, curve, changes);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::update() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// float proland::EditGraphOrthoLayer::getTolerance() const
	static int _bind_getTolerance(lua_State *L) {
		if (!_lg_typecheck_getTolerance(L)) {
			luaL_error(L, "luna typecheck failed in float proland::EditGraphOrthoLayer::getTolerance() const function, expected prototype:\nfloat proland::EditGraphOrthoLayer::getTolerance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::EditGraphOrthoLayer::getTolerance() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTolerance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::getSelectedPoint() const
	static int _bind_getSelectedPoint(lua_State *L) {
		if (!_lg_typecheck_getSelectedPoint(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::getSelectedPoint() const function, expected prototype:\nint proland::EditGraphOrthoLayer::getSelectedPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::getSelectedPoint() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSelectedPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::EditGraphOrthoLayer::getSelectedCurve() const
	static int _bind_getSelectedCurve(lua_State *L) {
		if (!_lg_typecheck_getSelectedCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::EditGraphOrthoLayer::getSelectedCurve() const function, expected prototype:\nproland::CurvePtr proland::EditGraphOrthoLayer::getSelectedCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::EditGraphOrthoLayer::getSelectedCurve() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getSelectedCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::getSelectedSegment() const
	static int _bind_getSelectedSegment(lua_State *L) {
		if (!_lg_typecheck_getSelectedSegment(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::getSelectedSegment() const function, expected prototype:\nint proland::EditGraphOrthoLayer::getSelectedSegment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::getSelectedSegment() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSelectedSegment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< proland::GraphProducer > proland::EditGraphOrthoLayer::getEditedGraphPtr() const
	static int _bind_getEditedGraphPtr(lua_State *L) {
		if (!_lg_typecheck_getEditedGraphPtr(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::GraphProducer > proland::EditGraphOrthoLayer::getEditedGraphPtr() const function, expected prototype:\nork::ptr< proland::GraphProducer > proland::EditGraphOrthoLayer::getEditedGraphPtr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::GraphProducer > proland::EditGraphOrthoLayer::getEditedGraphPtr() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::GraphProducer > lret = self->getEditedGraphPtr();
		Luna< proland::GraphProducer >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::getDefaultCurveType() const
	static int _bind_getDefaultCurveType(lua_State *L) {
		if (!_lg_typecheck_getDefaultCurveType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::getDefaultCurveType() const function, expected prototype:\nint proland::EditGraphOrthoLayer::getDefaultCurveType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::getDefaultCurveType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getDefaultCurveType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::setDefaultCurveType(int t)
	static int _bind_setDefaultCurveType(lua_State *L) {
		if (!_lg_typecheck_setDefaultCurveType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::setDefaultCurveType(int t) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::setDefaultCurveType(int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int t=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::setDefaultCurveType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultCurveType(t);

		return 0;
	}

	// float proland::EditGraphOrthoLayer::getDefaultCurveWidth() const
	static int _bind_getDefaultCurveWidth(lua_State *L) {
		if (!_lg_typecheck_getDefaultCurveWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::EditGraphOrthoLayer::getDefaultCurveWidth() const function, expected prototype:\nfloat proland::EditGraphOrthoLayer::getDefaultCurveWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::EditGraphOrthoLayer::getDefaultCurveWidth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDefaultCurveWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::setDefaultCurveWidth(float t)
	static int _bind_setDefaultCurveWidth(lua_State *L) {
		if (!_lg_typecheck_setDefaultCurveWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::setDefaultCurveWidth(float t) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::setDefaultCurveWidth(float t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::setDefaultCurveWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultCurveWidth(t);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::getTypeNames(vector< string > & names)
	static int _bind_getTypeNames(lua_State *L) {
		if (!_lg_typecheck_getTypeNames(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::getTypeNames(vector< string > & names) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::getTypeNames(vector< string > & names)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< string >* names_ptr=(Luna< vector< string > >::check(L,2));
		if( !names_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg names in proland::EditGraphOrthoLayer::getTypeNames function");
		}
		vector< string > & names=*names_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::getTypeNames(vector< string > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getTypeNames(names);

		return 0;
	}

	// static ork::ptr< ork::EventHandler > proland::EditGraphOrthoLayer::getEventHandler()
	static int _bind_getEventHandler(lua_State *L) {
		if (!_lg_typecheck_getEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< ork::EventHandler > proland::EditGraphOrthoLayer::getEventHandler() function, expected prototype:\nstatic ork::ptr< ork::EventHandler > proland::EditGraphOrthoLayer::getEventHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< ork::EventHandler > lret = proland::EditGraphOrthoLayer::getEventHandler();
		Luna< ork::EventHandler >::push(L,lret.get(),false);

		return 1;
	}

	// ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > proland::EditGraphOrthoLayer::HANDLER()
	static int _bind_getHANDLER(lua_State *L) {
		if (!_lg_typecheck_getHANDLER(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > proland::EditGraphOrthoLayer::HANDLER() function, expected prototype:\nork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > proland::EditGraphOrthoLayer::HANDLER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > proland::EditGraphOrthoLayer::HANDLER(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* lret = &self->HANDLER;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::push(L,lret,false);

		return 1;
	}

	// ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > proland::EditGraphOrthoLayer::mesh()
	static int _bind_getMesh(lua_State *L) {
		if (!_lg_typecheck_getMesh(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > proland::EditGraphOrthoLayer::mesh() function, expected prototype:\nork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > proland::EditGraphOrthoLayer::mesh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > proland::EditGraphOrthoLayer::mesh(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >* lret = &self->mesh;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > >::push(L,lret,false);

		return 1;
	}

	// vector< ork::vec2i > proland::EditGraphOrthoLayer::displayedPoints()
	static int _bind_getDisplayedPoints(lua_State *L) {
		if (!_lg_typecheck_getDisplayedPoints(L)) {
			luaL_error(L, "luna typecheck failed in vector< ork::vec2i > proland::EditGraphOrthoLayer::displayedPoints() function, expected prototype:\nvector< ork::vec2i > proland::EditGraphOrthoLayer::displayedPoints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call vector< ork::vec2i > proland::EditGraphOrthoLayer::displayedPoints(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const vector< ork::vec2i >* lret = &self->displayedPoints;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< vector< ork::vec2i > >::push(L,lret,false);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::HANDLER(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > value)
	static int _bind_setHANDLER(lua_State *L) {
		if (!_lg_typecheck_setHANDLER(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::HANDLER(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::HANDLER(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* value_ptr=(Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::HANDLER function");
		}
		ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > value=*value_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::HANDLER(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HANDLER = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::mesh(ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > value)
	static int _bind_setMesh(lua_State *L) {
		if (!_lg_typecheck_setMesh(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::mesh(ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::mesh(ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >* value_ptr=(Luna< ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::mesh function");
		}
		ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > value=*value_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::mesh(ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mesh = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::displayedPoints(vector< ork::vec2i > value)
	static int _bind_setDisplayedPoints(lua_State *L) {
		if (!_lg_typecheck_setDisplayedPoints(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::displayedPoints(vector< ork::vec2i > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::displayedPoints(vector< ork::vec2i > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::vec2i >* value_ptr=(Luna< vector< ork::vec2i > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::displayedPoints function");
		}
		vector< ork::vec2i > value=*value_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::displayedPoints(vector< ork::vec2i >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displayedPoints = value;

		return 0;
	}

	// const char * proland::EditGraphOrthoLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditGraphOrthoLayer::base_toString() function, expected prototype:\nconst char * proland::EditGraphOrthoLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditGraphOrthoLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditGraphOrthoLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::EditGraphOrthoLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::invalidateTiles();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > result = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::startCreateTile(level, tx, ty, deadline, task, result);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::beginCreateTile();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)
	static int _bind_base_drawGraph(lua_State *L) {
		if (!_lg_typecheck_base_drawGraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 94278244\narg 4 ID = [unknown]\narg 5 ID = 81304238\narg 6 ID = 81304238\narg 7 ID = 81304238\narg 8 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,3));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		proland::GraphPtr g=*g_ptr;
		float pointSize=(float)lua_tonumber(L,4);
		ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5);
		ork::vec2d* nx_ptr=(Luna< ork::vec2d >::check(L,6));
		if( !nx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nx in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & nx=*nx_ptr;
		ork::vec2d* ny_ptr=(Luna< ork::vec2d >::check(L,7));
		if( !ny_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ny in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & ny=*ny_ptr;
		ork::vec2d* lx_ptr=(Luna< ork::vec2d >::check(L,8));
		if( !lx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lx in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & lx=*lx_ptr;
		ork::vec2d* ly_ptr=(Luna< ork::vec2d >::check(L,9));
		if( !ly_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ly in proland::EditGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & ly=*ly_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_drawGraph(const ork::vec3d &, proland::GraphPtr, float, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > >, ork::vec2d &, ork::vec2d &, ork::vec2d &, ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::drawGraph(tileCoords, g, pointSize, mesh, nx, ny, lx, ly);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::EditGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphOrthoLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_endCreateTile() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::endCreateTile();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_base_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 4 ID = 94278244\narg 5 ID = 98496290\narg 7 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,7);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,8));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::base_addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphOrthoLayer::addCurve(x, y, tolerance, g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// bool proland::EditGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_base_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 6 ID = 94278244\narg 7 ID = 98496290\narg 10 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		float tolerance=(float)lua_tonumber(L,6);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,11));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditGraphOrthoLayer::base_addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::base_addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphOrthoLayer::addCurve(x1, y1, x2, y2, tolerance, g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// Overload binder for proland::EditGraphOrthoLayer::base_addCurve
	static int _bind_base_addCurve(lua_State *L) {
		if (_lg_typecheck_base_addCurve_overload_1(L)) return _bind_base_addCurve_overload_1(L);
		if (_lg_typecheck_base_addCurve_overload_2(L)) return _bind_base_addCurve_overload_2(L);

		luaL_error(L, "error in function base_addCurve, cannot match any of the overloads for function base_addCurve:\n  base_addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n  base_addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &)\n");
		return 0;
	}

	// bool proland::EditGraphOrthoLayer::base_fitCurve()
	static int _bind_base_fitCurve(lua_State *L) {
		if (!_lg_typecheck_base_fitCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::base_fitCurve() function, expected prototype:\nbool proland::EditGraphOrthoLayer::base_fitCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::base_fitCurve(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphOrthoLayer::fitCurve();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_update() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::update();

		return 0;
	}

	// void proland::EditGraphOrthoLayer::base_getTypeNames(vector< string > & names)
	static int _bind_base_getTypeNames(lua_State *L) {
		if (!_lg_typecheck_base_getTypeNames(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::base_getTypeNames(vector< string > & names) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::base_getTypeNames(vector< string > & names)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< string >* names_ptr=(Luna< vector< string > >::check(L,2));
		if( !names_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg names in proland::EditGraphOrthoLayer::base_getTypeNames function");
		}
		vector< string > & names=*names_ptr;

		proland::EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::base_getTypeNames(vector< string > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphOrthoLayer::getTypeNames(names);

		return 0;
	}


	// Operator binds:

};

proland::EditGraphOrthoLayer* LunaTraits< proland::EditGraphOrthoLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditGraphOrthoLayer::_bind_ctor(L);
}

void LunaTraits< proland::EditGraphOrthoLayer >::_bind_dtor(proland::EditGraphOrthoLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditGraphOrthoLayer >::className[] = "EditGraphOrthoLayer";
const char LunaTraits< proland::EditGraphOrthoLayer >::fullName[] = "proland::EditGraphOrthoLayer";
const char LunaTraits< proland::EditGraphOrthoLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::EditGraphOrthoLayer >::parents[] = {"proland.TileLayer", 0};
const int LunaTraits< proland::EditGraphOrthoLayer >::hash = 88020891;
const int LunaTraits< proland::EditGraphOrthoLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditGraphOrthoLayer >::methods[] = {
	{"setTileSize", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setTileSize},
	{"useTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_useTile},
	{"unuseTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_unuseTile},
	{"startCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_startCreateTile},
	{"beginCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_beginCreateTile},
	{"drawGraph", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_drawGraph},
	{"doCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_doCreateTile},
	{"endCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_endCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_stopCreateTile},
	{"getGraphs", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getGraphs},
	{"getGraphCount", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getGraphCount},
	{"getEditedGraph", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getEditedGraph},
	{"setEditedGraph", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setEditedGraph},
	{"select", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_select},
	{"selection", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_selection},
	{"getSelection", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getSelection},
	{"setSelection", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setSelection},
	{"findCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_findCurve},
	{"updateSelectedCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_updateSelectedCurve},
	{"movePoint", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_movePoint},
	{"add", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_add},
	{"change", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_change},
	{"remove", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_remove},
	{"invert", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_invert},
	{"addVertex", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_addVertex},
	{"transformVertex", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_transformVertex},
	{"smoothCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_smoothCurve},
	{"smoothNode", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_smoothNode},
	{"smoothArea", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_smoothArea},
	{"addNode", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_addNode},
	{"removeNode", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_removeNode},
	{"addCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_addCurve},
	{"fitCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_fitCurve},
	{"removeCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_removeCurve},
	{"update", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_update},
	{"getTolerance", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getTolerance},
	{"getSelectedPoint", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getSelectedPoint},
	{"getSelectedCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getSelectedCurve},
	{"getSelectedSegment", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getSelectedSegment},
	{"getEditedGraphPtr", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getEditedGraphPtr},
	{"getDefaultCurveType", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getDefaultCurveType},
	{"setDefaultCurveType", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setDefaultCurveType},
	{"getDefaultCurveWidth", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getDefaultCurveWidth},
	{"setDefaultCurveWidth", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setDefaultCurveWidth},
	{"getTypeNames", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getTypeNames},
	{"getEventHandler", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getEventHandler},
	{"getHANDLER", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getHANDLER},
	{"getMesh", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getMesh},
	{"getDisplayedPoints", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getDisplayedPoints},
	{"setHANDLER", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setHANDLER},
	{"setMesh", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setMesh},
	{"setDisplayedPoints", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_setDisplayedPoints},
	{"base_toString", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_setCache},
	{"base_getReferencedProducers", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_getReferencedProducers},
	{"base_prefetchTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_prefetchTile},
	{"base_invalidateTiles", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_invalidateTiles},
	{"base_setTileSize", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_setTileSize},
	{"base_useTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_unuseTile},
	{"base_startCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_beginCreateTile},
	{"base_drawGraph", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_drawGraph},
	{"base_doCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_doCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_stopCreateTile},
	{"base_addCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_addCurve},
	{"base_fitCurve", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_fitCurve},
	{"base_update", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_update},
	{"base_getTypeNames", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_base_getTypeNames},
	{"fromVoid", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditGraphOrthoLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditGraphOrthoLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditGraphOrthoLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditGraphOrthoLayer >::enumValues[] = {
	{0,0}
};


