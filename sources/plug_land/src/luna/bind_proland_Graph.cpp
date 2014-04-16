#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Graph.h>

class luna_wrapper_proland_Graph {
public:
	typedef Luna< proland::Graph > luna_t;

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

		proland::Graph* self= (proland::Graph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Graph >::push(L,self,false);
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
		//proland::Graph* ptr= dynamic_cast< proland::Graph* >(Luna< ork::Object >::check(L,1));
		proland::Graph* ptr= luna_caster< ork::Object, proland::Graph >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Graph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_print(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncestor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAreaCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAreasFromCurves(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92772708) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,22882411) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPointsFromCurves(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61157517) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87264125) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,49338298) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_load_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_load_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30462081)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::FileReader >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkParams(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkDefaultParams(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::FileWriter >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_indexedSave(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flatten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flattenUpdate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,30968597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clipUpdate(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,63151909) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,30968597)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurvePart_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53366307) ) return false;
		if( (!(Luna< proland::CurvePart >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92772708)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< set< proland::CurveId > >::check(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurvePart_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53366307) ) return false;
		if( (!(Luna< proland::CurvePart >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92772708)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< set< proland::CurveId > >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,72385761) ) return false;
		if( (!(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildCurves(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65799894) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildArea(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92772708) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,61157517) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,87264125) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildAreas(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_decimateCurves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_build(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65799894) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_movePoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_movePoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveNode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeNode(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23314933)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23314933)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getListenerCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notifyListeners(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_newNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newArea(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72385761) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createCurvePart(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47132056) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fitCubicCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55792939) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,55792939) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasOppositeControlPoint(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17549196) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,58015782) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChanges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChanges(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_print(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkParams(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkDefaultParams(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_save_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_save_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::FileWriter >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_indexedSave(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,30968597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurvePart(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53366307) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92772708)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_movePoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_movePoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeNode(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47132056) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createCurvePart(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Graph::Graph(lua_Table * data)
	static proland::Graph* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph::Graph(lua_Table * data) function, expected prototype:\nproland::Graph::Graph(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_Graph(L,NULL);
	}


	// Function binds:
	// void proland::Graph::print(bool detailed = true)
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::print(bool detailed = true) function, expected prototype:\nvoid proland::Graph::print(bool detailed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool detailed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::print(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print(detailed);

		return 0;
	}

	// void proland::Graph::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::clear() function, expected prototype:\nvoid proland::Graph::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// proland::Graph * proland::Graph::getAncestor()
	static int _bind_getAncestor(lua_State *L) {
		if (!_lg_typecheck_getAncestor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::getAncestor() function, expected prototype:\nproland::Graph * proland::Graph::getAncestor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::getAncestor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->getAncestor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::Graph::setParent(proland::Graph * p)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::setParent(proland::Graph * p) function, expected prototype:\nvoid proland::Graph::setParent(proland::Graph * p)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* p=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::setParent(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParent(p);

		return 0;
	}

	// proland::Graph * proland::Graph::getParent() const
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::getParent() const function, expected prototype:\nproland::Graph * proland::Graph::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// int proland::Graph::getNodeCount() const
	static int _bind_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_getNodeCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Graph::getNodeCount() const function, expected prototype:\nint proland::Graph::getNodeCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Graph::getNodeCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Graph::getCurveCount() const
	static int _bind_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Graph::getCurveCount() const function, expected prototype:\nint proland::Graph::getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Graph::getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Graph::getAreaCount() const
	static int _bind_getAreaCount(lua_State *L) {
		if (!_lg_typecheck_getAreaCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Graph::getAreaCount() const function, expected prototype:\nint proland::Graph::getAreaCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Graph::getAreaCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getAreaCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Node * proland::Graph::findNode(ork::vec2d & pos) const
	static int _bind_findNode(lua_State *L) {
		if (!_lg_typecheck_findNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node * proland::Graph::findNode(ork::vec2d & pos) const function, expected prototype:\nproland::Node * proland::Graph::findNode(ork::vec2d & pos) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::Graph::findNode function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Node * proland::Graph::findNode(ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Node * lret = self->findNode(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Node >::push(L,lret,false);

		return 1;
	}

	// proland::NodePtr proland::Graph::getNode(proland::NodeId id)
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Graph::getNode(proland::NodeId id) function, expected prototype:\nproland::NodePtr proland::Graph::getNode(proland::NodeId id)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::getNode function");
		}
		proland::NodeId id=*id_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Graph::getNode(proland::NodeId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getNode(id);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::getCurve(proland::CurveId id)
	static int _bind_getCurve(lua_State *L) {
		if (!_lg_typecheck_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::getCurve(proland::CurveId id) function, expected prototype:\nproland::CurvePtr proland::Graph::getCurve(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::getCurve function");
		}
		proland::CurveId id=*id_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::getCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(id);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Graph::getArea(proland::AreaId id)
	static int _bind_getArea(lua_State *L) {
		if (!_lg_typecheck_getArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Graph::getArea(proland::AreaId id) function, expected prototype:\nproland::AreaPtr proland::Graph::getArea(proland::AreaId id)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* id_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::getArea function");
		}
		proland::AreaId id=*id_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Graph::getArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getArea(id);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Graph::getChildArea(proland::AreaId parentId)
	static int _bind_getChildArea(lua_State *L) {
		if (!_lg_typecheck_getChildArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Graph::getChildArea(proland::AreaId parentId) function, expected prototype:\nproland::AreaPtr proland::Graph::getChildArea(proland::AreaId parentId)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* parentId_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !parentId_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentId in proland::Graph::getChildArea function");
		}
		proland::AreaId parentId=*parentId_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Graph::getChildArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getChildArea(parentId);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Graph::getAreasFromCurves(const set< proland::CurveId > & curves, set< proland::AreaId > & areas)
	static int _bind_getAreasFromCurves(lua_State *L) {
		if (!_lg_typecheck_getAreasFromCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::getAreasFromCurves(const set< proland::CurveId > & curves, set< proland::AreaId > & areas) function, expected prototype:\nvoid proland::Graph::getAreasFromCurves(const set< proland::CurveId > & curves, set< proland::AreaId > & areas)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const set< proland::CurveId >* curves_ptr=(Luna< set< proland::CurveId > >::check(L,2));
		if( !curves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curves in proland::Graph::getAreasFromCurves function");
		}
		const set< proland::CurveId > & curves=*curves_ptr;
		set< proland::AreaId >* areas_ptr=(Luna< set< proland::AreaId > >::check(L,3));
		if( !areas_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg areas in proland::Graph::getAreasFromCurves function");
		}
		set< proland::AreaId > & areas=*areas_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::getAreasFromCurves(const set< proland::CurveId > &, set< proland::AreaId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAreasFromCurves(curves, areas);

		return 0;
	}

	// void proland::Graph::getPointsFromCurves(vector< proland::CurveId > & curves, map< proland::CurveId, int > orientations, vector< proland::Vertex > & points)
	static int _bind_getPointsFromCurves(lua_State *L) {
		if (!_lg_typecheck_getPointsFromCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::getPointsFromCurves(vector< proland::CurveId > & curves, map< proland::CurveId, int > orientations, vector< proland::Vertex > & points) function, expected prototype:\nvoid proland::Graph::getPointsFromCurves(vector< proland::CurveId > & curves, map< proland::CurveId, int > orientations, vector< proland::Vertex > & points)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::CurveId >* curves_ptr=(Luna< vector< proland::CurveId > >::check(L,2));
		if( !curves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curves in proland::Graph::getPointsFromCurves function");
		}
		vector< proland::CurveId > & curves=*curves_ptr;
		map< proland::CurveId, int >* orientations_ptr=(Luna< map< proland::CurveId, int > >::check(L,3));
		if( !orientations_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orientations in proland::Graph::getPointsFromCurves function");
		}
		map< proland::CurveId, int > orientations=*orientations_ptr;
		vector< proland::Vertex >* points_ptr=(Luna< vector< proland::Vertex > >::check(L,4));
		if( !points_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg points in proland::Graph::getPointsFromCurves function");
		}
		vector< proland::Vertex > & points=*points_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::getPointsFromCurves(vector< proland::CurveId > &, map< proland::CurveId, int >, vector< proland::Vertex > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPointsFromCurves(curves, orientations, points);

		return 0;
	}

	// void proland::Graph::load(const string & file, bool loadSubgraphs = true)
	static int _bind_load_overload_1(lua_State *L) {
		if (!_lg_typecheck_load_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::load(const string & file, bool loadSubgraphs = true) function, expected prototype:\nvoid proland::Graph::load(const string & file, bool loadSubgraphs = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool loadSubgraphs=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::load(const string &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->load(file, loadSubgraphs);

		return 0;
	}

	// void proland::Graph::load(proland::FileReader * fileReader, bool loadSubgraphs = true)
	static int _bind_load_overload_2(lua_State *L) {
		if (!_lg_typecheck_load_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::load(proland::FileReader * fileReader, bool loadSubgraphs = true) function, expected prototype:\nvoid proland::Graph::load(proland::FileReader * fileReader, bool loadSubgraphs = true)\nClass arguments details:\narg 1 ID = 30462081\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileReader* fileReader=(Luna< proland::FileReader >::check(L,2));
		bool loadSubgraphs=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::load(proland::FileReader *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->load(fileReader, loadSubgraphs);

		return 0;
	}

	// Overload binder for proland::Graph::load
	static int _bind_load(lua_State *L) {
		if (_lg_typecheck_load_overload_1(L)) return _bind_load_overload_1(L);
		if (_lg_typecheck_load_overload_2(L)) return _bind_load_overload_2(L);

		luaL_error(L, "error in function load, cannot match any of the overloads for function load:\n  load(const string &, bool)\n  load(proland::FileReader *, bool)\n");
		return 0;
	}

	// void proland::Graph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_checkParams(lua_State *L) {
		if (!_lg_typecheck_checkParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::Graph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::checkParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// void proland::Graph::checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_checkDefaultParams(lua_State *L) {
		if (!_lg_typecheck_checkDefaultParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::Graph::checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::checkDefaultParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkDefaultParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// void proland::Graph::save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)
	static int _bind_save_overload_1(lua_State *L) {
		if (!_lg_typecheck_save_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false) function, expected prototype:\nvoid proland::Graph::save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool isBinary=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		bool isIndexed=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::save(const string &, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->save(file, saveAreas, isBinary, isIndexed);

		return 0;
	}

	// void proland::Graph::save(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_save_overload_2(lua_State *L) {
		if (!_lg_typecheck_save_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::save(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::Graph::save(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::save(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->save(fileWriter, saveAreas);

		return 0;
	}

	// Overload binder for proland::Graph::save
	static int _bind_save(lua_State *L) {
		if (_lg_typecheck_save_overload_1(L)) return _bind_save_overload_1(L);
		if (_lg_typecheck_save_overload_2(L)) return _bind_save_overload_2(L);

		luaL_error(L, "error in function save, cannot match any of the overloads for function save:\n  save(const string &, bool, bool, bool)\n  save(proland::FileWriter *, bool)\n");
		return 0;
	}

	// void proland::Graph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_indexedSave(lua_State *L) {
		if (!_lg_typecheck_indexedSave(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::Graph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::indexedSave(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexedSave(fileWriter, saveAreas);

		return 0;
	}

	// void proland::Graph::flatten(float squareFlatness)
	static int _bind_flatten(lua_State *L) {
		if (!_lg_typecheck_flatten(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::flatten(float squareFlatness) function, expected prototype:\nvoid proland::Graph::flatten(float squareFlatness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float squareFlatness=(float)lua_tonumber(L,2);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::flatten(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flatten(squareFlatness);

		return 0;
	}

	// void proland::Graph::flattenUpdate(const proland::Graph::Changes & changes, float squareFlatness)
	static int _bind_flattenUpdate(lua_State *L) {
		if (!_lg_typecheck_flattenUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::flattenUpdate(const proland::Graph::Changes & changes, float squareFlatness) function, expected prototype:\nvoid proland::Graph::flattenUpdate(const proland::Graph::Changes & changes, float squareFlatness)\nClass arguments details:\narg 1 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::Graph::flattenUpdate function");
		}
		const proland::Graph::Changes & changes=*changes_ptr;
		float squareFlatness=(float)lua_tonumber(L,3);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::flattenUpdate(const proland::Graph::Changes &, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flattenUpdate(changes, squareFlatness);

		return 0;
	}

	// proland::Graph * proland::Graph::clip(const ork::box2d & clip, proland::Margin * margin)
	static int _bind_clip(lua_State *L) {
		if (!_lg_typecheck_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::clip(const ork::box2d & clip, proland::Margin * margin) function, expected prototype:\nproland::Graph * proland::Graph::clip(const ork::box2d & clip, proland::Margin * margin)\nClass arguments details:\narg 1 ID = 63151909\narg 2 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::Graph::clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		proland::Margin* margin=(Luna< proland::Margin >::check(L,3));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::clip(const ork::box2d &, proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->clip(clip, margin);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::Graph::clipUpdate(const proland::Graph::Changes & srcChanges, const ork::box2d & clip, proland::Margin * margin, proland::Graph & result, proland::Graph::Changes & dstChanges)
	static int _bind_clipUpdate(lua_State *L) {
		if (!_lg_typecheck_clipUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::clipUpdate(const proland::Graph::Changes & srcChanges, const ork::box2d & clip, proland::Margin * margin, proland::Graph & result, proland::Graph::Changes & dstChanges) function, expected prototype:\nvoid proland::Graph::clipUpdate(const proland::Graph::Changes & srcChanges, const ork::box2d & clip, proland::Margin * margin, proland::Graph & result, proland::Graph::Changes & dstChanges)\nClass arguments details:\narg 1 ID = 47132056\narg 2 ID = 63151909\narg 3 ID = 30968597\narg 4 ID = 1381405\narg 5 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Graph::Changes* srcChanges_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !srcChanges_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg srcChanges in proland::Graph::clipUpdate function");
		}
		const proland::Graph::Changes & srcChanges=*srcChanges_ptr;
		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,3));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::Graph::clipUpdate function");
		}
		const ork::box2d & clip=*clip_ptr;
		proland::Margin* margin=(Luna< proland::Margin >::check(L,4));
		proland::Graph* result_ptr=(Luna< ork::Object >::checkSubType< proland::Graph >(L,5));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::Graph::clipUpdate function");
		}
		proland::Graph & result=*result_ptr;
		proland::Graph::Changes* dstChanges_ptr=(Luna< proland::Graph::Changes >::check(L,6));
		if( !dstChanges_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dstChanges in proland::Graph::clipUpdate function");
		}
		proland::Graph::Changes & dstChanges=*dstChanges_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::clipUpdate(const proland::Graph::Changes &, const ork::box2d &, proland::Margin *, proland::Graph &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clipUpdate(srcChanges, clip, margin, result, dstChanges);

		return 0;
	}

	// proland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)
	static int _bind_addCurvePart_overload_1(lua_State *L) {
		if (!_lg_typecheck_addCurvePart_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true) function, expected prototype:\nproland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)\nClass arguments details:\narg 1 ID = 53366307\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::CurvePart* cp_ptr=(Luna< proland::CurvePart >::check(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in proland::Graph::addCurvePart function");
		}
		proland::CurvePart & cp=*cp_ptr;
		set< proland::CurveId >* addedCurves=(Luna< set< proland::CurveId > >::check(L,3));
		bool setParent=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::addCurvePart(proland::CurvePart &, set< proland::CurveId > *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->addCurvePart(cp, addedCurves, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, set< proland::CurveId > & visited, proland::AreaPtr a)
	static int _bind_addCurvePart_overload_2(lua_State *L) {
		if (!_lg_typecheck_addCurvePart_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, set< proland::CurveId > & visited, proland::AreaPtr a) function, expected prototype:\nvoid proland::Graph::addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, set< proland::CurveId > & visited, proland::AreaPtr a)\nClass arguments details:\narg 1 ID = 53366307\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePart* cp_ptr=(Luna< proland::CurvePart >::check(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in proland::Graph::addCurvePart function");
		}
		proland::CurvePart & cp=*cp_ptr;
		set< proland::CurveId >* addedCurves=(Luna< set< proland::CurveId > >::check(L,3));
		set< proland::CurveId >* visited_ptr=(Luna< set< proland::CurveId > >::check(L,4));
		if( !visited_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg visited in proland::Graph::addCurvePart function");
		}
		set< proland::CurveId > & visited=*visited_ptr;
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,5));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Graph::addCurvePart function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::addCurvePart(proland::CurvePart &, set< proland::CurveId > *, set< proland::CurveId > &, proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCurvePart(cp, addedCurves, visited, a);

		return 0;
	}

	// Overload binder for proland::Graph::addCurvePart
	static int _bind_addCurvePart(lua_State *L) {
		if (_lg_typecheck_addCurvePart_overload_1(L)) return _bind_addCurvePart_overload_1(L);
		if (_lg_typecheck_addCurvePart_overload_2(L)) return _bind_addCurvePart_overload_2(L);

		luaL_error(L, "error in function addCurvePart, cannot match any of the overloads for function addCurvePart:\n  addCurvePart(proland::CurvePart &, set< proland::CurveId > *, bool)\n  addCurvePart(proland::CurvePart &, set< proland::CurveId > *, set< proland::CurveId > &, proland::AreaPtr)\n");
		return 0;
	}

	// void proland::Graph::buildCurves(bool useType, proland::GraphPtr result)
	static int _bind_buildCurves(lua_State *L) {
		if (!_lg_typecheck_buildCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::buildCurves(bool useType, proland::GraphPtr result) function, expected prototype:\nvoid proland::Graph::buildCurves(bool useType, proland::GraphPtr result)\nClass arguments details:\narg 2 ID = 94278244\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useType=(bool)(lua_toboolean(L,2)==1);
		proland::GraphPtr* result_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::Graph::buildCurves function");
		}
		proland::GraphPtr result=*result_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::buildCurves(bool, proland::GraphPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buildCurves(useType, result);

		return 0;
	}

	// bool proland::Graph::buildArea(proland::CurvePtr begin, set< proland::CurveId > & excluded, vector< proland::CurveId > & used, map< proland::CurveId, int > & orientations, int orientation)
	static int _bind_buildArea(lua_State *L) {
		if (!_lg_typecheck_buildArea(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Graph::buildArea(proland::CurvePtr begin, set< proland::CurveId > & excluded, vector< proland::CurveId > & used, map< proland::CurveId, int > & orientations, int orientation) function, expected prototype:\nbool proland::Graph::buildArea(proland::CurvePtr begin, set< proland::CurveId > & excluded, vector< proland::CurveId > & used, map< proland::CurveId, int > & orientations, int orientation)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* begin_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !begin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg begin in proland::Graph::buildArea function");
		}
		proland::CurvePtr begin=*begin_ptr;
		set< proland::CurveId >* excluded_ptr=(Luna< set< proland::CurveId > >::check(L,3));
		if( !excluded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg excluded in proland::Graph::buildArea function");
		}
		set< proland::CurveId > & excluded=*excluded_ptr;
		vector< proland::CurveId >* used_ptr=(Luna< vector< proland::CurveId > >::check(L,4));
		if( !used_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg used in proland::Graph::buildArea function");
		}
		vector< proland::CurveId > & used=*used_ptr;
		map< proland::CurveId, int >* orientations_ptr=(Luna< map< proland::CurveId, int > >::check(L,5));
		if( !orientations_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orientations in proland::Graph::buildArea function");
		}
		map< proland::CurveId, int > & orientations=*orientations_ptr;
		int orientation=(int)lua_tointeger(L,6);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Graph::buildArea(proland::CurvePtr, set< proland::CurveId > &, vector< proland::CurveId > &, map< proland::CurveId, int > &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->buildArea(begin, excluded, used, orientations, orientation);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Graph::buildAreas()
	static int _bind_buildAreas(lua_State *L) {
		if (!_lg_typecheck_buildAreas(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::buildAreas() function, expected prototype:\nvoid proland::Graph::buildAreas()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::buildAreas(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buildAreas();

		return 0;
	}

	// void proland::Graph::decimateCurves(float minDistance)
	static int _bind_decimateCurves(lua_State *L) {
		if (!_lg_typecheck_decimateCurves(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::decimateCurves(float minDistance) function, expected prototype:\nvoid proland::Graph::decimateCurves(float minDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float minDistance=(float)lua_tonumber(L,2);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::decimateCurves(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decimateCurves(minDistance);

		return 0;
	}

	// void proland::Graph::build(bool useType, proland::GraphPtr result)
	static int _bind_build(lua_State *L) {
		if (!_lg_typecheck_build(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::build(bool useType, proland::GraphPtr result) function, expected prototype:\nvoid proland::Graph::build(bool useType, proland::GraphPtr result)\nClass arguments details:\narg 2 ID = 94278244\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useType=(bool)(lua_toboolean(L,2)==1);
		proland::GraphPtr* result_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::Graph::build function");
		}
		proland::GraphPtr result=*result_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::build(bool, proland::GraphPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->build(useType, result);

		return 0;
	}

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)
	static int _bind_movePoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_movePoint_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::movePoint function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::movePoint(proland::CurvePtr, int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->movePoint(c, i, p);

		return 0;
	}

	// void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	static int _bind_movePoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_movePoint_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) function, expected prototype:\nvoid proland::Graph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::movePoint function");
		}
		const ork::vec2d & p=*p_ptr;
		set< proland::CurveId >* changedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,5));
		if( !changedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changedCurves in proland::Graph::movePoint function");
		}
		set< proland::CurveId > & changedCurves=*changedCurves_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->movePoint(c, i, p, changedCurves);

		return 0;
	}

	// Overload binder for proland::Graph::movePoint
	static int _bind_movePoint(lua_State *L) {
		if (_lg_typecheck_movePoint_overload_1(L)) return _bind_movePoint_overload_1(L);
		if (_lg_typecheck_movePoint_overload_2(L)) return _bind_movePoint_overload_2(L);

		luaL_error(L, "error in function movePoint, cannot match any of the overloads for function movePoint:\n  movePoint(proland::CurvePtr, int, const ork::vec2d &)\n  movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &)\n");
		return 0;
	}

	// void proland::Graph::moveNode(proland::NodePtr n, const ork::vec2d & p)
	static int _bind_moveNode(lua_State *L) {
		if (!_lg_typecheck_moveNode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::moveNode(proland::NodePtr n, const ork::vec2d & p) function, expected prototype:\nvoid proland::Graph::moveNode(proland::NodePtr n, const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 35325349\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* n_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::Graph::moveNode function");
		}
		proland::NodePtr n=*n_ptr;
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::moveNode function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::moveNode(proland::NodePtr, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveNode(n, p);

		return 0;
	}

	// proland::NodePtr proland::Graph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	static int _bind_addNode(lua_State *L) {
		if (!_lg_typecheck_addNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Graph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) function, expected prototype:\nproland::NodePtr proland::Graph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::addNode function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::addNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Graph::addNode(proland::CurvePtr, int, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->addNode(c, i, changed);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint)
	static int _bind_removeNode(lua_State *L) {
		if (!_lg_typecheck_removeNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint) function, expected prototype:\nproland::CurvePtr proland::Graph::removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* first_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in proland::Graph::removeNode function");
		}
		proland::CurvePtr first=*first_ptr;
		proland::CurvePtr* second_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in proland::Graph::removeNode function");
		}
		proland::CurvePtr second=*second_ptr;
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::removeNode function");
		}
		const ork::vec2d & p=*p_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::removeNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;
		int selectedPoint=(int)lua_tointeger(L,6);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::removeNode(proland::CurvePtr, proland::CurvePtr, const ork::vec2d &, proland::Graph::Changes &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->removeNode(first, second, p, changed, selectedPoint);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,selectedPoint);
		return 2;
	}

	// proland::CurvePtr proland::Graph::addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::addCurve function");
		}
		ork::vec2d start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::addCurve function");
		}
		proland::NodeId start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)
	static int _bind_addCurve_overload_3(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 72107044\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::addCurve function");
		}
		proland::NodeId start=*start_ptr;
		proland::NodeId* end_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::addCurve function");
		}
		proland::NodeId end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Graph::addCurve
	static int _bind_addCurve(lua_State *L) {
		if (_lg_typecheck_addCurve_overload_1(L)) return _bind_addCurve_overload_1(L);
		if (_lg_typecheck_addCurve_overload_2(L)) return _bind_addCurve_overload_2(L);
		if (_lg_typecheck_addCurve_overload_3(L)) return _bind_addCurve_overload_3(L);

		luaL_error(L, "error in function addCurve, cannot match any of the overloads for function addCurve:\n  addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &)\n  addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &)\n  addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &)\n");
		return 0;
	}

	// void proland::Graph::removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)
	static int _bind_removeVertex(lua_State *L) {
		if (!_lg_typecheck_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed) function, expected prototype:\nvoid proland::Graph::removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::Graph::removeVertex function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int selectedSegment=(int)lua_tointeger(L,3);
		int selectedPoint=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::removeVertex function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::removeVertex(proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeVertex(curve, selectedSegment, selectedPoint, changed);

		lua_pushnumber(L,selectedSegment);
		lua_pushnumber(L,selectedPoint);
		return 2;
	}

	// void proland::Graph::removeCurve(proland::CurveId id, proland::Graph::Changes & changed)
	static int _bind_removeCurve(lua_State *L) {
		if (!_lg_typecheck_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::removeCurve(proland::CurveId id, proland::Graph::Changes & changed) function, expected prototype:\nvoid proland::Graph::removeCurve(proland::CurveId id, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::removeCurve function");
		}
		proland::CurveId id=*id_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,3));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::removeCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::removeCurve(proland::CurveId, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeCurve(id, changed);

		return 0;
	}

	// bool proland::Graph::equals(proland::Graph * g)
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Graph::equals(proland::Graph * g) function, expected prototype:\nbool proland::Graph::equals(proland::Graph * g)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* g=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Graph::equals(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(g);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Graph::addListener(proland::GraphListener * p)
	static int _bind_addListener(lua_State *L) {
		if (!_lg_typecheck_addListener(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::addListener(proland::GraphListener * p) function, expected prototype:\nvoid proland::Graph::addListener(proland::GraphListener * p)\nClass arguments details:\narg 1 ID = 23314933\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphListener* p=(Luna< proland::GraphListener >::check(L,2));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::addListener(proland::GraphListener *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addListener(p);

		return 0;
	}

	// void proland::Graph::removeListener(proland::GraphListener * p)
	static int _bind_removeListener(lua_State *L) {
		if (!_lg_typecheck_removeListener(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::removeListener(proland::GraphListener * p) function, expected prototype:\nvoid proland::Graph::removeListener(proland::GraphListener * p)\nClass arguments details:\narg 1 ID = 23314933\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphListener* p=(Luna< proland::GraphListener >::check(L,2));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::removeListener(proland::GraphListener *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeListener(p);

		return 0;
	}

	// int proland::Graph::getListenerCount()
	static int _bind_getListenerCount(lua_State *L) {
		if (!_lg_typecheck_getListenerCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Graph::getListenerCount() function, expected prototype:\nint proland::Graph::getListenerCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Graph::getListenerCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getListenerCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::Graph::notifyListeners()
	static int _bind_notifyListeners(lua_State *L) {
		if (!_lg_typecheck_notifyListeners(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::notifyListeners() function, expected prototype:\nvoid proland::Graph::notifyListeners()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::notifyListeners(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->notifyListeners();

		return 0;
	}

	// proland::NodePtr proland::Graph::newNode(const ork::vec2d & p)
	static int _bind_newNode(lua_State *L) {
		if (!_lg_typecheck_newNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Graph::newNode(const ork::vec2d & p) function, expected prototype:\nproland::NodePtr proland::Graph::newNode(const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::newNode function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Graph::newNode(const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->newNode(p);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr parent, bool setParent)
	static int _bind_newCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_newCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr parent, bool setParent) function, expected prototype:\nproland::CurvePtr proland::Graph::newCurve(proland::CurvePtr parent, bool setParent)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* parent_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in proland::Graph::newCurve function");
		}
		proland::CurvePtr parent=*parent_ptr;
		bool setParent=(bool)(lua_toboolean(L,3)==1);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->newCurve(parent, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	static int _bind_newCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_newCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end) function, expected prototype:\nproland::CurvePtr proland::Graph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 35325349\narg 3 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* model_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !model_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg model in proland::Graph::newCurve function");
		}
		proland::CurvePtr model=*model_ptr;
		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::newCurve function");
		}
		proland::NodePtr start=*start_ptr;
		proland::NodePtr* end_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::newCurve function");
		}
		proland::NodePtr end=*end_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->newCurve(model, start, end);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Graph::newCurve
	static int _bind_newCurve(lua_State *L) {
		if (_lg_typecheck_newCurve_overload_1(L)) return _bind_newCurve_overload_1(L);
		if (_lg_typecheck_newCurve_overload_2(L)) return _bind_newCurve_overload_2(L);

		luaL_error(L, "error in function newCurve, cannot match any of the overloads for function newCurve:\n  newCurve(proland::CurvePtr, bool)\n  newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n");
		return 0;
	}

	// proland::AreaPtr proland::Graph::newArea(proland::AreaPtr parent, bool setParent)
	static int _bind_newArea(lua_State *L) {
		if (!_lg_typecheck_newArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Graph::newArea(proland::AreaPtr parent, bool setParent) function, expected prototype:\nproland::AreaPtr proland::Graph::newArea(proland::AreaPtr parent, bool setParent)\nClass arguments details:\narg 1 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaPtr* parent_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in proland::Graph::newArea function");
		}
		proland::AreaPtr parent=*parent_ptr;
		bool setParent=(bool)(lua_toboolean(L,3)==1);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Graph::newArea(proland::AreaPtr, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->newArea(parent, setParent);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	static int _bind_createCurvePart(lua_State *L) {
		if (!_lg_typecheck_createCurvePart(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr p, int orientation, int start, int end) function, expected prototype:\nproland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr p, int orientation, int start, int end)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::createCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int orientation=(int)lua_tointeger(L,3);
		int start=(int)lua_tointeger(L,4);
		int end=(int)lua_tointeger(L,5);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::Graph::createCurvePart(proland::CurvePtr, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->createCurvePart(p, orientation, start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// proland::Graph * proland::Graph::createChild()
	static int _bind_createChild(lua_State *L) {
		if (!_lg_typecheck_createChild(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::createChild() function, expected prototype:\nproland::Graph * proland::Graph::createChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::createChild(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->createChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// static proland::Graph::Changes proland::Graph::merge(proland::Graph::Changes old, proland::Graph::Changes c)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luaL_error(L, "luna typecheck failed in static proland::Graph::Changes proland::Graph::merge(proland::Graph::Changes old, proland::Graph::Changes c) function, expected prototype:\nstatic proland::Graph::Changes proland::Graph::merge(proland::Graph::Changes old, proland::Graph::Changes c)\nClass arguments details:\narg 1 ID = 47132056\narg 2 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph::Changes* old_ptr=(Luna< proland::Graph::Changes >::check(L,1));
		if( !old_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg old in proland::Graph::merge function");
		}
		proland::Graph::Changes old=*old_ptr;
		proland::Graph::Changes* c_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::merge function");
		}
		proland::Graph::Changes c=*c_ptr;

		proland::Graph::Changes stack_lret = proland::Graph::merge(old, c);
		proland::Graph::Changes* lret = new proland::Graph::Changes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph::Changes >::push(L,lret,true);

		return 1;
	}

	// static void proland::Graph::fitCubicCurve(vector< ork::vec2d > points, vector< ork::vec2d > & output, float error)
	static int _bind_fitCubicCurve(lua_State *L) {
		if (!_lg_typecheck_fitCubicCurve(L)) {
			luaL_error(L, "luna typecheck failed in static void proland::Graph::fitCubicCurve(vector< ork::vec2d > points, vector< ork::vec2d > & output, float error) function, expected prototype:\nstatic void proland::Graph::fitCubicCurve(vector< ork::vec2d > points, vector< ork::vec2d > & output, float error)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::vec2d >* points_ptr=(Luna< vector< ork::vec2d > >::check(L,1));
		if( !points_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg points in proland::Graph::fitCubicCurve function");
		}
		vector< ork::vec2d > points=*points_ptr;
		vector< ork::vec2d >* output_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in proland::Graph::fitCubicCurve function");
		}
		vector< ork::vec2d > & output=*output_ptr;
		float error=(float)lua_tonumber(L,3);

		proland::Graph::fitCubicCurve(points, output, error);

		return 0;
	}

	// static bool proland::Graph::hasOppositeControlPoint(proland::CurvePtr p, int i, int di, ork::vec2d & q, proland::CurveId & id, int & j)
	static int _bind_hasOppositeControlPoint(lua_State *L) {
		if (!_lg_typecheck_hasOppositeControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in static bool proland::Graph::hasOppositeControlPoint(proland::CurvePtr p, int i, int di, ork::vec2d & q, proland::CurveId & id, int & j) function, expected prototype:\nstatic bool proland::Graph::hasOppositeControlPoint(proland::CurvePtr p, int i, int di, ork::vec2d & q, proland::CurveId & id, int & j)\nClass arguments details:\narg 1 ID = 98496290\narg 4 ID = 81304238\narg 5 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::hasOppositeControlPoint function");
		}
		proland::CurvePtr p=*p_ptr;
		int i=(int)lua_tointeger(L,2);
		int di=(int)lua_tointeger(L,3);
		ork::vec2d* q_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in proland::Graph::hasOppositeControlPoint function");
		}
		ork::vec2d & q=*q_ptr;
		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,5));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::hasOppositeControlPoint function");
		}
		proland::CurveId & id=*id_ptr;
		int j=(int)lua_tointeger(L,6);

		bool lret = proland::Graph::hasOppositeControlPoint(p, i, di, q, id, j);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,j);
		return 2;
	}

	// proland::Graph::Changes proland::Graph::changes()
	static int _bind_getChanges(lua_State *L) {
		if (!_lg_typecheck_getChanges(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph::Changes proland::Graph::changes() function, expected prototype:\nproland::Graph::Changes proland::Graph::changes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph::Changes proland::Graph::changes(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const proland::Graph::Changes* lret = &self->changes;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph::Changes >::push(L,lret,false);

		return 1;
	}

	// unsigned int proland::Graph::version()
	static int _bind_getVersion(lua_State *L) {
		if (!_lg_typecheck_getVersion(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int proland::Graph::version() function, expected prototype:\nunsigned int proland::Graph::version()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int proland::Graph::version(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->version;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::Graph::changes(proland::Graph::Changes value)
	static int _bind_setChanges(lua_State *L) {
		if (!_lg_typecheck_setChanges(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::changes(proland::Graph::Changes value) function, expected prototype:\nvoid proland::Graph::changes(proland::Graph::Changes value)\nClass arguments details:\narg 1 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph::Changes* value_ptr=(Luna< proland::Graph::Changes >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::Graph::changes function");
		}
		proland::Graph::Changes value=*value_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::changes(proland::Graph::Changes). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->changes = value;

		return 0;
	}

	// void proland::Graph::version(unsigned int value)
	static int _bind_setVersion(lua_State *L) {
		if (!_lg_typecheck_setVersion(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::version(unsigned int value) function, expected prototype:\nvoid proland::Graph::version(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::version(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->version = value;

		return 0;
	}

	// const char * proland::Graph::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Graph::base_toString() function, expected prototype:\nconst char * proland::Graph::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Graph::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Graph::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::Graph::base_print(bool detailed = true)
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_print(bool detailed = true) function, expected prototype:\nvoid proland::Graph::base_print(bool detailed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool detailed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_print(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::print(detailed);

		return 0;
	}

	// void proland::Graph::base_setParent(proland::Graph * p)
	static int _bind_base_setParent(lua_State *L) {
		if (!_lg_typecheck_base_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_setParent(proland::Graph * p) function, expected prototype:\nvoid proland::Graph::base_setParent(proland::Graph * p)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* p=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_setParent(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::setParent(p);

		return 0;
	}

	// proland::Node * proland::Graph::base_findNode(ork::vec2d & pos) const
	static int _bind_base_findNode(lua_State *L) {
		if (!_lg_typecheck_base_findNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node * proland::Graph::base_findNode(ork::vec2d & pos) const function, expected prototype:\nproland::Node * proland::Graph::base_findNode(ork::vec2d & pos) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::Graph::base_findNode function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Node * proland::Graph::base_findNode(ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Node * lret = self->Graph::findNode(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Node >::push(L,lret,false);

		return 1;
	}

	// void proland::Graph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_base_checkParams(lua_State *L) {
		if (!_lg_typecheck_base_checkParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::Graph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_checkParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// void proland::Graph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_base_checkDefaultParams(lua_State *L) {
		if (!_lg_typecheck_base_checkDefaultParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::Graph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_checkDefaultParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::checkDefaultParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// void proland::Graph::base_save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)
	static int _bind_base_save_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_save_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false) function, expected prototype:\nvoid proland::Graph::base_save(const string & file, bool saveAreas = true, bool isBinary = true, bool isIndexed = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool isBinary=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		bool isIndexed=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_save(const string &, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::save(file, saveAreas, isBinary, isIndexed);

		return 0;
	}

	// void proland::Graph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_base_save_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_save_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::Graph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_save(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::save(fileWriter, saveAreas);

		return 0;
	}

	// Overload binder for proland::Graph::base_save
	static int _bind_base_save(lua_State *L) {
		if (_lg_typecheck_base_save_overload_1(L)) return _bind_base_save_overload_1(L);
		if (_lg_typecheck_base_save_overload_2(L)) return _bind_base_save_overload_2(L);

		luaL_error(L, "error in function base_save, cannot match any of the overloads for function base_save:\n  base_save(const string &, bool, bool, bool)\n  base_save(proland::FileWriter *, bool)\n");
		return 0;
	}

	// void proland::Graph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_base_indexedSave(lua_State *L) {
		if (!_lg_typecheck_base_indexedSave(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::Graph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_indexedSave(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::indexedSave(fileWriter, saveAreas);

		return 0;
	}

	// proland::Graph * proland::Graph::base_clip(const ork::box2d & clip, proland::Margin * margin)
	static int _bind_base_clip(lua_State *L) {
		if (!_lg_typecheck_base_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::base_clip(const ork::box2d & clip, proland::Margin * margin) function, expected prototype:\nproland::Graph * proland::Graph::base_clip(const ork::box2d & clip, proland::Margin * margin)\nClass arguments details:\narg 1 ID = 63151909\narg 2 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::Graph::base_clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		proland::Margin* margin=(Luna< proland::Margin >::check(L,3));

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::base_clip(const ork::box2d &, proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->Graph::clip(clip, margin);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// proland::CurvePtr proland::Graph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)
	static int _bind_base_addCurvePart(lua_State *L) {
		if (!_lg_typecheck_base_addCurvePart(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true) function, expected prototype:\nproland::CurvePtr proland::Graph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)\nClass arguments details:\narg 1 ID = 53366307\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::CurvePart* cp_ptr=(Luna< proland::CurvePart >::check(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in proland::Graph::base_addCurvePart function");
		}
		proland::CurvePart & cp=*cp_ptr;
		set< proland::CurveId >* addedCurves=(Luna< set< proland::CurveId > >::check(L,3));
		bool setParent=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::base_addCurvePart(proland::CurvePart &, set< proland::CurveId > *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Graph::addCurvePart(cp, addedCurves, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)
	static int _bind_base_movePoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_movePoint_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::base_movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::base_movePoint function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_movePoint(proland::CurvePtr, int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::movePoint(c, i, p);

		return 0;
	}

	// void proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	static int _bind_base_movePoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_movePoint_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) function, expected prototype:\nvoid proland::Graph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::base_movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::base_movePoint function");
		}
		const ork::vec2d & p=*p_ptr;
		set< proland::CurveId >* changedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,5));
		if( !changedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changedCurves in proland::Graph::base_movePoint function");
		}
		set< proland::CurveId > & changedCurves=*changedCurves_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::movePoint(c, i, p, changedCurves);

		return 0;
	}

	// Overload binder for proland::Graph::base_movePoint
	static int _bind_base_movePoint(lua_State *L) {
		if (_lg_typecheck_base_movePoint_overload_1(L)) return _bind_base_movePoint_overload_1(L);
		if (_lg_typecheck_base_movePoint_overload_2(L)) return _bind_base_movePoint_overload_2(L);

		luaL_error(L, "error in function base_movePoint, cannot match any of the overloads for function base_movePoint:\n  base_movePoint(proland::CurvePtr, int, const ork::vec2d &)\n  base_movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &)\n");
		return 0;
	}

	// proland::NodePtr proland::Graph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	static int _bind_base_addNode(lua_State *L) {
		if (!_lg_typecheck_base_addNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Graph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) function, expected prototype:\nproland::NodePtr proland::Graph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Graph::base_addNode function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_addNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Graph::base_addNode(proland::CurvePtr, int, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->Graph::addNode(c, i, changed);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::base_removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint)
	static int _bind_base_removeNode(lua_State *L) {
		if (!_lg_typecheck_base_removeNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::base_removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint) function, expected prototype:\nproland::CurvePtr proland::Graph::base_removeNode(proland::CurvePtr first, proland::CurvePtr second, const ork::vec2d & p, proland::Graph::Changes & changed, int & selectedPoint)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* first_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in proland::Graph::base_removeNode function");
		}
		proland::CurvePtr first=*first_ptr;
		proland::CurvePtr* second_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in proland::Graph::base_removeNode function");
		}
		proland::CurvePtr second=*second_ptr;
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::base_removeNode function");
		}
		const ork::vec2d & p=*p_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_removeNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;
		int selectedPoint=(int)lua_tointeger(L,6);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::base_removeNode(proland::CurvePtr, proland::CurvePtr, const ork::vec2d &, proland::Graph::Changes &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Graph::removeNode(first, second, p, changed, selectedPoint);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,selectedPoint);
		return 2;
	}

	// proland::CurvePtr proland::Graph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::base_addCurve function");
		}
		ork::vec2d start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::base_addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::base_addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Graph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::base_addCurve function");
		}
		proland::NodeId start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::base_addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Graph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::Graph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 72107044\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Graph::base_addCurve function");
		}
		proland::NodeId start=*start_ptr;
		proland::NodeId* end_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::Graph::base_addCurve function");
		}
		proland::NodeId end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Graph::base_addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Graph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Graph::base_addCurve
	static int _bind_base_addCurve(lua_State *L) {
		if (_lg_typecheck_base_addCurve_overload_1(L)) return _bind_base_addCurve_overload_1(L);
		if (_lg_typecheck_base_addCurve_overload_2(L)) return _bind_base_addCurve_overload_2(L);
		if (_lg_typecheck_base_addCurve_overload_3(L)) return _bind_base_addCurve_overload_3(L);

		luaL_error(L, "error in function base_addCurve, cannot match any of the overloads for function base_addCurve:\n  base_addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &)\n  base_addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &)\n  base_addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &)\n");
		return 0;
	}

	// void proland::Graph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)
	static int _bind_base_removeVertex(lua_State *L) {
		if (!_lg_typecheck_base_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed) function, expected prototype:\nvoid proland::Graph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::Graph::base_removeVertex function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int selectedSegment=(int)lua_tointeger(L,3);
		int selectedPoint=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_removeVertex function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_removeVertex(proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::removeVertex(curve, selectedSegment, selectedPoint, changed);

		lua_pushnumber(L,selectedSegment);
		lua_pushnumber(L,selectedPoint);
		return 2;
	}

	// void proland::Graph::base_removeCurve(proland::CurveId id, proland::Graph::Changes & changed)
	static int _bind_base_removeCurve(lua_State *L) {
		if (!_lg_typecheck_base_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Graph::base_removeCurve(proland::CurveId id, proland::Graph::Changes & changed) function, expected prototype:\nvoid proland::Graph::base_removeCurve(proland::CurveId id, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Graph::base_removeCurve function");
		}
		proland::CurveId id=*id_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,3));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::Graph::base_removeCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Graph::base_removeCurve(proland::CurveId, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Graph::removeCurve(id, changed);

		return 0;
	}

	// proland::CurvePart * proland::Graph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	static int _bind_base_createCurvePart(lua_State *L) {
		if (!_lg_typecheck_base_createCurvePart(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::Graph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end) function, expected prototype:\nproland::CurvePart * proland::Graph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Graph::base_createCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int orientation=(int)lua_tointeger(L,3);
		int start=(int)lua_tointeger(L,4);
		int end=(int)lua_tointeger(L,5);

		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::Graph::base_createCurvePart(proland::CurvePtr, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->Graph::createCurvePart(p, orientation, start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// proland::Graph * proland::Graph::base_createChild()
	static int _bind_base_createChild(lua_State *L) {
		if (!_lg_typecheck_base_createChild(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Graph::base_createChild() function, expected prototype:\nproland::Graph * proland::Graph::base_createChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Graph* self=Luna< ork::Object >::checkSubType< proland::Graph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Graph::base_createChild(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->Graph::createChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::Graph* LunaTraits< proland::Graph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Graph::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void proland::Graph::clear()
	// int proland::Graph::getNodeCount() const
	// int proland::Graph::getCurveCount() const
	// int proland::Graph::getAreaCount() const
	// proland::NodePtr proland::Graph::getNode(proland::NodeId id)
	// proland::CurvePtr proland::Graph::getCurve(proland::CurveId id)
	// proland::AreaPtr proland::Graph::getArea(proland::AreaId id)
	// ork::ptr< proland::Graph::CurveIterator > proland::Graph::getChildCurves(proland::CurveId parentId)
	// proland::AreaPtr proland::Graph::getChildArea(proland::AreaId parentId)
	// ork::ptr< proland::Graph::NodeIterator > proland::Graph::getNodes()
	// ork::ptr< proland::Graph::CurveIterator > proland::Graph::getCurves()
	// ork::ptr< proland::Graph::AreaIterator > proland::Graph::getAreas()
	// void proland::Graph::load(const string & file, bool loadSubgraphs = true)
	// void proland::Graph::load(proland::FileReader * fileReader, bool loadSubgraphs = true)
	// proland::NodePtr proland::Graph::newNode(const ork::vec2d & p)
	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr parent, bool setParent)
	// proland::CurvePtr proland::Graph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	// proland::AreaPtr proland::Graph::newArea(proland::AreaPtr parent, bool setParent)
	// void proland::Graph::removeNode(proland::NodeId id)
	// void proland::Graph::removeCurve(proland::CurveId id)
	// void proland::Graph::removeArea(proland::AreaId id)
	// void proland::Graph::clean()
}

void LunaTraits< proland::Graph >::_bind_dtor(proland::Graph* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Graph >::className[] = "Graph";
const char LunaTraits< proland::Graph >::fullName[] = "proland::Graph";
const char LunaTraits< proland::Graph >::moduleName[] = "proland";
const char* LunaTraits< proland::Graph >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Graph >::hash = 18528894;
const int LunaTraits< proland::Graph >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Graph >::methods[] = {
	{"print", &luna_wrapper_proland_Graph::_bind_print},
	{"clear", &luna_wrapper_proland_Graph::_bind_clear},
	{"getAncestor", &luna_wrapper_proland_Graph::_bind_getAncestor},
	{"setParent", &luna_wrapper_proland_Graph::_bind_setParent},
	{"getParent", &luna_wrapper_proland_Graph::_bind_getParent},
	{"getNodeCount", &luna_wrapper_proland_Graph::_bind_getNodeCount},
	{"getCurveCount", &luna_wrapper_proland_Graph::_bind_getCurveCount},
	{"getAreaCount", &luna_wrapper_proland_Graph::_bind_getAreaCount},
	{"findNode", &luna_wrapper_proland_Graph::_bind_findNode},
	{"getNode", &luna_wrapper_proland_Graph::_bind_getNode},
	{"getCurve", &luna_wrapper_proland_Graph::_bind_getCurve},
	{"getArea", &luna_wrapper_proland_Graph::_bind_getArea},
	{"getChildArea", &luna_wrapper_proland_Graph::_bind_getChildArea},
	{"getAreasFromCurves", &luna_wrapper_proland_Graph::_bind_getAreasFromCurves},
	{"getPointsFromCurves", &luna_wrapper_proland_Graph::_bind_getPointsFromCurves},
	{"load", &luna_wrapper_proland_Graph::_bind_load},
	{"checkParams", &luna_wrapper_proland_Graph::_bind_checkParams},
	{"checkDefaultParams", &luna_wrapper_proland_Graph::_bind_checkDefaultParams},
	{"save", &luna_wrapper_proland_Graph::_bind_save},
	{"indexedSave", &luna_wrapper_proland_Graph::_bind_indexedSave},
	{"flatten", &luna_wrapper_proland_Graph::_bind_flatten},
	{"flattenUpdate", &luna_wrapper_proland_Graph::_bind_flattenUpdate},
	{"clip", &luna_wrapper_proland_Graph::_bind_clip},
	{"clipUpdate", &luna_wrapper_proland_Graph::_bind_clipUpdate},
	{"addCurvePart", &luna_wrapper_proland_Graph::_bind_addCurvePart},
	{"buildCurves", &luna_wrapper_proland_Graph::_bind_buildCurves},
	{"buildArea", &luna_wrapper_proland_Graph::_bind_buildArea},
	{"buildAreas", &luna_wrapper_proland_Graph::_bind_buildAreas},
	{"decimateCurves", &luna_wrapper_proland_Graph::_bind_decimateCurves},
	{"build", &luna_wrapper_proland_Graph::_bind_build},
	{"movePoint", &luna_wrapper_proland_Graph::_bind_movePoint},
	{"moveNode", &luna_wrapper_proland_Graph::_bind_moveNode},
	{"addNode", &luna_wrapper_proland_Graph::_bind_addNode},
	{"removeNode", &luna_wrapper_proland_Graph::_bind_removeNode},
	{"addCurve", &luna_wrapper_proland_Graph::_bind_addCurve},
	{"removeVertex", &luna_wrapper_proland_Graph::_bind_removeVertex},
	{"removeCurve", &luna_wrapper_proland_Graph::_bind_removeCurve},
	{"equals", &luna_wrapper_proland_Graph::_bind_equals},
	{"addListener", &luna_wrapper_proland_Graph::_bind_addListener},
	{"removeListener", &luna_wrapper_proland_Graph::_bind_removeListener},
	{"getListenerCount", &luna_wrapper_proland_Graph::_bind_getListenerCount},
	{"notifyListeners", &luna_wrapper_proland_Graph::_bind_notifyListeners},
	{"newNode", &luna_wrapper_proland_Graph::_bind_newNode},
	{"newCurve", &luna_wrapper_proland_Graph::_bind_newCurve},
	{"newArea", &luna_wrapper_proland_Graph::_bind_newArea},
	{"createCurvePart", &luna_wrapper_proland_Graph::_bind_createCurvePart},
	{"createChild", &luna_wrapper_proland_Graph::_bind_createChild},
	{"merge", &luna_wrapper_proland_Graph::_bind_merge},
	{"fitCubicCurve", &luna_wrapper_proland_Graph::_bind_fitCubicCurve},
	{"hasOppositeControlPoint", &luna_wrapper_proland_Graph::_bind_hasOppositeControlPoint},
	{"getChanges", &luna_wrapper_proland_Graph::_bind_getChanges},
	{"getVersion", &luna_wrapper_proland_Graph::_bind_getVersion},
	{"setChanges", &luna_wrapper_proland_Graph::_bind_setChanges},
	{"setVersion", &luna_wrapper_proland_Graph::_bind_setVersion},
	{"base_toString", &luna_wrapper_proland_Graph::_bind_base_toString},
	{"base_print", &luna_wrapper_proland_Graph::_bind_base_print},
	{"base_setParent", &luna_wrapper_proland_Graph::_bind_base_setParent},
	{"base_findNode", &luna_wrapper_proland_Graph::_bind_base_findNode},
	{"base_checkParams", &luna_wrapper_proland_Graph::_bind_base_checkParams},
	{"base_checkDefaultParams", &luna_wrapper_proland_Graph::_bind_base_checkDefaultParams},
	{"base_save", &luna_wrapper_proland_Graph::_bind_base_save},
	{"base_indexedSave", &luna_wrapper_proland_Graph::_bind_base_indexedSave},
	{"base_clip", &luna_wrapper_proland_Graph::_bind_base_clip},
	{"base_addCurvePart", &luna_wrapper_proland_Graph::_bind_base_addCurvePart},
	{"base_movePoint", &luna_wrapper_proland_Graph::_bind_base_movePoint},
	{"base_addNode", &luna_wrapper_proland_Graph::_bind_base_addNode},
	{"base_removeNode", &luna_wrapper_proland_Graph::_bind_base_removeNode},
	{"base_addCurve", &luna_wrapper_proland_Graph::_bind_base_addCurve},
	{"base_removeVertex", &luna_wrapper_proland_Graph::_bind_base_removeVertex},
	{"base_removeCurve", &luna_wrapper_proland_Graph::_bind_base_removeCurve},
	{"base_createCurvePart", &luna_wrapper_proland_Graph::_bind_base_createCurvePart},
	{"base_createChild", &luna_wrapper_proland_Graph::_bind_base_createChild},
	{"fromVoid", &luna_wrapper_proland_Graph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Graph::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Graph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Graph >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Graph::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Graph >::enumValues[] = {
	{0,0}
};


