#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LazyHydroGraph.h>

class luna_wrapper_proland_LazyHydroGraph {
public:
	typedef Luna< proland::LazyHydroGraph > luna_t;

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

		proland::LazyHydroGraph* self= (proland::LazyHydroGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LazyHydroGraph >::push(L,self,false);
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
		//proland::LazyHydroGraph* ptr= dynamic_cast< proland::LazyHydroGraph* >(Luna< ork::Object >::check(L,1));
		proland::LazyHydroGraph* ptr= luna_caster< ork::Object, proland::LazyHydroGraph >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LazyHydroGraph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_createChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_save(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
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

	inline static bool _lg_typecheck_movePoint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92772708) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
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

	inline static bool _lg_typecheck_base_createCurvePart(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNodeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAreaCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_load_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_load_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30462081)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::FileReader >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newArea(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72385761) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_newCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_save(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85867294)) ) return false;
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

	inline static bool _lg_typecheck_base_movePoint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92772708) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47132056) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LazyHydroGraph::LazyHydroGraph()
	static proland::LazyHydroGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyHydroGraph::LazyHydroGraph() function, expected prototype:\nproland::LazyHydroGraph::LazyHydroGraph()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::LazyHydroGraph();
	}

	// proland::LazyHydroGraph::LazyHydroGraph(lua_Table * data)
	static proland::LazyHydroGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyHydroGraph::LazyHydroGraph(lua_Table * data) function, expected prototype:\nproland::LazyHydroGraph::LazyHydroGraph(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_LazyHydroGraph(L,NULL);
	}

	// Overload binder for proland::LazyHydroGraph::LazyHydroGraph
	static proland::LazyHydroGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LazyHydroGraph, cannot match any of the overloads for function LazyHydroGraph:\n  LazyHydroGraph()\n  LazyHydroGraph(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::LazyHydroGraph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_checkParams(lua_State *L) {
		if (!_lg_typecheck_checkParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::LazyHydroGraph::checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::checkParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr parent, bool setParent)
	static int _bind_newCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_newCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr parent, bool setParent) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr parent, bool setParent)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* parent_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in proland::LazyHydroGraph::newCurve function");
		}
		proland::CurvePtr parent=*parent_ptr;
		bool setParent=(bool)(lua_toboolean(L,3)==1);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->newCurve(parent, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	static int _bind_newCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_newCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 35325349\narg 3 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* model_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !model_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg model in proland::LazyHydroGraph::newCurve function");
		}
		proland::CurvePtr model=*model_ptr;
		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LazyHydroGraph::newCurve function");
		}
		proland::NodePtr start=*start_ptr;
		proland::NodePtr* end_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LazyHydroGraph::newCurve function");
		}
		proland::NodePtr end=*end_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->newCurve(model, start, end);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::LazyHydroGraph::newCurve
	static int _bind_newCurve(lua_State *L) {
		if (_lg_typecheck_newCurve_overload_1(L)) return _bind_newCurve_overload_1(L);
		if (_lg_typecheck_newCurve_overload_2(L)) return _bind_newCurve_overload_2(L);

		luaL_error(L, "error in function newCurve, cannot match any of the overloads for function newCurve:\n  newCurve(proland::CurvePtr, bool)\n  newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n");
		return 0;
	}

	// proland::Graph * proland::LazyHydroGraph::createChild()
	static int _bind_createChild(lua_State *L) {
		if (!_lg_typecheck_createChild(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::LazyHydroGraph::createChild() function, expected prototype:\nproland::Graph * proland::LazyHydroGraph::createChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::LazyHydroGraph::createChild(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->createChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::LazyHydroGraph::save(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_save(lua_State *L) {
		if (!_lg_typecheck_save(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::save(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::LazyHydroGraph::save(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::save(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->save(fileWriter, saveAreas);

		return 0;
	}

	// void proland::LazyHydroGraph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_indexedSave(lua_State *L) {
		if (!_lg_typecheck_indexedSave(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::LazyHydroGraph::indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::indexedSave(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexedSave(fileWriter, saveAreas);

		return 0;
	}

	// void proland::LazyHydroGraph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	static int _bind_movePoint(lua_State *L) {
		if (!_lg_typecheck_movePoint(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) function, expected prototype:\nvoid proland::LazyHydroGraph::movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyHydroGraph::movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyHydroGraph::movePoint function");
		}
		const ork::vec2d & p=*p_ptr;
		set< proland::CurveId >* changedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,5));
		if( !changedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changedCurves in proland::LazyHydroGraph::movePoint function");
		}
		set< proland::CurveId > & changedCurves=*changedCurves_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->movePoint(c, i, p, changedCurves);

		return 0;
	}

	// proland::NodePtr proland::LazyHydroGraph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	static int _bind_addNode(lua_State *L) {
		if (!_lg_typecheck_addNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyHydroGraph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) function, expected prototype:\nproland::NodePtr proland::LazyHydroGraph::addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyHydroGraph::addNode function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::addNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyHydroGraph::addNode(proland::CurvePtr, int, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->addNode(c, i, changed);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// const char * proland::LazyHydroGraph::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LazyHydroGraph::base_toString() function, expected prototype:\nconst char * proland::LazyHydroGraph::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LazyHydroGraph::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LazyHydroGraph::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::LazyHydroGraph::base_print(bool detailed = true)
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_print(bool detailed = true) function, expected prototype:\nvoid proland::LazyHydroGraph::base_print(bool detailed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool detailed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_print(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::print(detailed);

		return 0;
	}

	// void proland::LazyHydroGraph::base_setParent(proland::Graph * p)
	static int _bind_base_setParent(lua_State *L) {
		if (!_lg_typecheck_base_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_setParent(proland::Graph * p) function, expected prototype:\nvoid proland::LazyHydroGraph::base_setParent(proland::Graph * p)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* p=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_setParent(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::setParent(p);

		return 0;
	}

	// proland::Node * proland::LazyHydroGraph::base_findNode(ork::vec2d & pos) const
	static int _bind_base_findNode(lua_State *L) {
		if (!_lg_typecheck_base_findNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node * proland::LazyHydroGraph::base_findNode(ork::vec2d & pos) const function, expected prototype:\nproland::Node * proland::LazyHydroGraph::base_findNode(ork::vec2d & pos) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::LazyHydroGraph::base_findNode function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Node * proland::LazyHydroGraph::base_findNode(ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Node * lret = self->LazyHydroGraph::findNode(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Node >::push(L,lret,false);

		return 1;
	}

	// void proland::LazyHydroGraph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_base_checkDefaultParams(lua_State *L) {
		if (!_lg_typecheck_base_checkDefaultParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::LazyHydroGraph::base_checkDefaultParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_checkDefaultParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::checkDefaultParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// proland::Graph * proland::LazyHydroGraph::base_clip(const ork::box2d & clip, proland::Margin * margin)
	static int _bind_base_clip(lua_State *L) {
		if (!_lg_typecheck_base_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::LazyHydroGraph::base_clip(const ork::box2d & clip, proland::Margin * margin) function, expected prototype:\nproland::Graph * proland::LazyHydroGraph::base_clip(const ork::box2d & clip, proland::Margin * margin)\nClass arguments details:\narg 1 ID = 63151909\narg 2 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::LazyHydroGraph::base_clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		proland::Margin* margin=(Luna< proland::Margin >::check(L,3));

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::LazyHydroGraph::base_clip(const ork::box2d &, proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->LazyHydroGraph::clip(clip, margin);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)
	static int _bind_base_addCurvePart(lua_State *L) {
		if (!_lg_typecheck_base_addCurvePart(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_addCurvePart(proland::CurvePart & cp, set< proland::CurveId > * addedCurves, bool setParent = true)\nClass arguments details:\narg 1 ID = 53366307\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::CurvePart* cp_ptr=(Luna< proland::CurvePart >::check(L,2));
		if( !cp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cp in proland::LazyHydroGraph::base_addCurvePart function");
		}
		proland::CurvePart & cp=*cp_ptr;
		set< proland::CurveId >* addedCurves=(Luna< set< proland::CurveId > >::check(L,3));
		bool setParent=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_addCurvePart(proland::CurvePart &, set< proland::CurveId > *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::addCurvePart(cp, addedCurves, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_addCurve(ork::vec2d start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LazyHydroGraph::base_addCurve function");
		}
		ork::vec2d start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LazyHydroGraph::base_addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, ork::vec2d end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 81304238\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::NodeId start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LazyHydroGraph::base_addCurve function");
		}
		ork::vec2d end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)
	static int _bind_base_addCurve_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId start, proland::NodeId end, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 72107044\narg 2 ID = 72107044\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* start_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::NodeId start=*start_ptr;
		proland::NodeId* end_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::NodeId end=*end_ptr;
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::base_addCurve function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::addCurve(start, end, changed);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::LazyHydroGraph::base_addCurve
	static int _bind_base_addCurve(lua_State *L) {
		if (_lg_typecheck_base_addCurve_overload_1(L)) return _bind_base_addCurve_overload_1(L);
		if (_lg_typecheck_base_addCurve_overload_2(L)) return _bind_base_addCurve_overload_2(L);
		if (_lg_typecheck_base_addCurve_overload_3(L)) return _bind_base_addCurve_overload_3(L);

		luaL_error(L, "error in function base_addCurve, cannot match any of the overloads for function base_addCurve:\n  base_addCurve(ork::vec2d, ork::vec2d, proland::Graph::Changes &)\n  base_addCurve(proland::NodeId, ork::vec2d, proland::Graph::Changes &)\n  base_addCurve(proland::NodeId, proland::NodeId, proland::Graph::Changes &)\n");
		return 0;
	}

	// void proland::LazyHydroGraph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)
	static int _bind_base_removeVertex(lua_State *L) {
		if (!_lg_typecheck_base_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed) function, expected prototype:\nvoid proland::LazyHydroGraph::base_removeVertex(proland::CurvePtr & curve, int & selectedSegment, int & selectedPoint, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 4 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::LazyHydroGraph::base_removeVertex function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int selectedSegment=(int)lua_tointeger(L,3);
		int selectedPoint=(int)lua_tointeger(L,4);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,5));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::base_removeVertex function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_removeVertex(proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::removeVertex(curve, selectedSegment, selectedPoint, changed);

		lua_pushnumber(L,selectedSegment);
		lua_pushnumber(L,selectedPoint);
		return 2;
	}

	// proland::CurvePart * proland::LazyHydroGraph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	static int _bind_base_createCurvePart(lua_State *L) {
		if (!_lg_typecheck_base_createCurvePart(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::LazyHydroGraph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end) function, expected prototype:\nproland::CurvePart * proland::LazyHydroGraph::base_createCurvePart(proland::CurvePtr p, int orientation, int start, int end)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyHydroGraph::base_createCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int orientation=(int)lua_tointeger(L,3);
		int start=(int)lua_tointeger(L,4);
		int end=(int)lua_tointeger(L,5);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::LazyHydroGraph::base_createCurvePart(proland::CurvePtr, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->LazyHydroGraph::createCurvePart(p, orientation, start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// void proland::LazyHydroGraph::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_clear() function, expected prototype:\nvoid proland::LazyHydroGraph::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::clear();

		return 0;
	}

	// void proland::LazyHydroGraph::base_init()
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_init() function, expected prototype:\nvoid proland::LazyHydroGraph::base_init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_init(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::init();

		return 0;
	}

	// int proland::LazyHydroGraph::base_getCurveCount() const
	static int _bind_base_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_base_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyHydroGraph::base_getCurveCount() const function, expected prototype:\nint proland::LazyHydroGraph::base_getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyHydroGraph::base_getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LazyHydroGraph::getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::LazyHydroGraph::base_getNodeCount() const
	static int _bind_base_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_base_getNodeCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyHydroGraph::base_getNodeCount() const function, expected prototype:\nint proland::LazyHydroGraph::base_getNodeCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyHydroGraph::base_getNodeCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LazyHydroGraph::getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::LazyHydroGraph::base_getAreaCount() const
	static int _bind_base_getAreaCount(lua_State *L) {
		if (!_lg_typecheck_base_getAreaCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyHydroGraph::base_getAreaCount() const function, expected prototype:\nint proland::LazyHydroGraph::base_getAreaCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyHydroGraph::base_getAreaCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LazyHydroGraph::getAreaCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LazyHydroGraph::base_load(const string & file, bool loadSubgraphs = 0)
	static int _bind_base_load_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_load_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_load(const string & file, bool loadSubgraphs = 0) function, expected prototype:\nvoid proland::LazyHydroGraph::base_load(const string & file, bool loadSubgraphs = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		bool loadSubgraphs=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)0;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_load(const string &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::load(file, loadSubgraphs);

		return 0;
	}

	// void proland::LazyHydroGraph::base_load(proland::FileReader * fileReader, bool loadsubgraphs = 0)
	static int _bind_base_load_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_load_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_load(proland::FileReader * fileReader, bool loadsubgraphs = 0) function, expected prototype:\nvoid proland::LazyHydroGraph::base_load(proland::FileReader * fileReader, bool loadsubgraphs = 0)\nClass arguments details:\narg 1 ID = 30462081\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileReader* fileReader=(Luna< proland::FileReader >::check(L,2));
		bool loadsubgraphs=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)0;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_load(proland::FileReader *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::load(fileReader, loadsubgraphs);

		return 0;
	}

	// Overload binder for proland::LazyHydroGraph::base_load
	static int _bind_base_load(lua_State *L) {
		if (_lg_typecheck_base_load_overload_1(L)) return _bind_base_load_overload_1(L);
		if (_lg_typecheck_base_load_overload_2(L)) return _bind_base_load_overload_2(L);

		luaL_error(L, "error in function base_load, cannot match any of the overloads for function base_load:\n  base_load(const string &, bool)\n  base_load(proland::FileReader *, bool)\n");
		return 0;
	}

	// proland::NodePtr proland::LazyHydroGraph::base_getNode(proland::NodeId id)
	static int _bind_base_getNode(lua_State *L) {
		if (!_lg_typecheck_base_getNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyHydroGraph::base_getNode(proland::NodeId id) function, expected prototype:\nproland::NodePtr proland::LazyHydroGraph::base_getNode(proland::NodeId id)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyHydroGraph::base_getNode function");
		}
		proland::NodeId id=*id_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyHydroGraph::base_getNode(proland::NodeId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->LazyHydroGraph::getNode(id);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_getCurve(proland::CurveId id)
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_getCurve(proland::CurveId id) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_getCurve(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyHydroGraph::base_getCurve function");
		}
		proland::CurveId id=*id_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_getCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::getCurve(id);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::LazyHydroGraph::base_getArea(proland::AreaId id)
	static int _bind_base_getArea(lua_State *L) {
		if (!_lg_typecheck_base_getArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::LazyHydroGraph::base_getArea(proland::AreaId id) function, expected prototype:\nproland::AreaPtr proland::LazyHydroGraph::base_getArea(proland::AreaId id)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* id_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyHydroGraph::base_getArea function");
		}
		proland::AreaId id=*id_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::LazyHydroGraph::base_getArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->LazyHydroGraph::getArea(id);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::LazyHydroGraph::base_getChildArea(proland::AreaId parentId)
	static int _bind_base_getChildArea(lua_State *L) {
		if (!_lg_typecheck_base_getChildArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::LazyHydroGraph::base_getChildArea(proland::AreaId parentId) function, expected prototype:\nproland::AreaPtr proland::LazyHydroGraph::base_getChildArea(proland::AreaId parentId)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* parentId_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !parentId_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentId in proland::LazyHydroGraph::base_getChildArea function");
		}
		proland::AreaId parentId=*parentId_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::LazyHydroGraph::base_getChildArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->LazyHydroGraph::getChildArea(parentId);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::LazyHydroGraph::base_newNode(const ork::vec2d & p)
	static int _bind_base_newNode(lua_State *L) {
		if (!_lg_typecheck_base_newNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyHydroGraph::base_newNode(const ork::vec2d & p) function, expected prototype:\nproland::NodePtr proland::LazyHydroGraph::base_newNode(const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyHydroGraph::base_newNode function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyHydroGraph::base_newNode(const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->LazyHydroGraph::newNode(p);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::LazyHydroGraph::base_newArea(proland::AreaPtr parent, bool setParent)
	static int _bind_base_newArea(lua_State *L) {
		if (!_lg_typecheck_base_newArea(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::LazyHydroGraph::base_newArea(proland::AreaPtr parent, bool setParent) function, expected prototype:\nproland::AreaPtr proland::LazyHydroGraph::base_newArea(proland::AreaPtr parent, bool setParent)\nClass arguments details:\narg 1 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaPtr* parent_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in proland::LazyHydroGraph::base_newArea function");
		}
		proland::AreaPtr parent=*parent_ptr;
		bool setParent=(bool)(lua_toboolean(L,3)==1);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::LazyHydroGraph::base_newArea(proland::AreaPtr, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->LazyHydroGraph::newArea(parent, setParent);
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyHydroGraph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)
	static int _bind_base_checkParams(lua_State *L) {
		if (!_lg_typecheck_base_checkParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs) function, expected prototype:\nvoid proland::LazyHydroGraph::base_checkParams(int nodes, int curves, int areas, int curveExtremities, int curvePoints, int areaCurves, int subgraphs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodes=(int)lua_tointeger(L,2);
		int curves=(int)lua_tointeger(L,3);
		int areas=(int)lua_tointeger(L,4);
		int curveExtremities=(int)lua_tointeger(L,5);
		int curvePoints=(int)lua_tointeger(L,6);
		int areaCurves=(int)lua_tointeger(L,7);
		int subgraphs=(int)lua_tointeger(L,8);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_checkParams(int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::checkParams(nodes, curves, areas, curveExtremities, curvePoints, areaCurves, subgraphs);

		return 0;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr parent, bool setParent)
	static int _bind_base_newCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_newCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr parent, bool setParent) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr parent, bool setParent)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* parent_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in proland::LazyHydroGraph::base_newCurve function");
		}
		proland::CurvePtr parent=*parent_ptr;
		bool setParent=(bool)(lua_toboolean(L,3)==1);

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::newCurve(parent, setParent);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)
	static int _bind_base_newCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_newCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end) function, expected prototype:\nproland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr model, proland::NodePtr start, proland::NodePtr end)\nClass arguments details:\narg 1 ID = 98496290\narg 2 ID = 35325349\narg 3 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* model_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !model_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg model in proland::LazyHydroGraph::base_newCurve function");
		}
		proland::CurvePtr model=*model_ptr;
		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LazyHydroGraph::base_newCurve function");
		}
		proland::NodePtr start=*start_ptr;
		proland::NodePtr* end_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LazyHydroGraph::base_newCurve function");
		}
		proland::NodePtr end=*end_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyHydroGraph::base_newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyHydroGraph::newCurve(model, start, end);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::LazyHydroGraph::base_newCurve
	static int _bind_base_newCurve(lua_State *L) {
		if (_lg_typecheck_base_newCurve_overload_1(L)) return _bind_base_newCurve_overload_1(L);
		if (_lg_typecheck_base_newCurve_overload_2(L)) return _bind_base_newCurve_overload_2(L);

		luaL_error(L, "error in function base_newCurve, cannot match any of the overloads for function base_newCurve:\n  base_newCurve(proland::CurvePtr, bool)\n  base_newCurve(proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n");
		return 0;
	}

	// proland::Graph * proland::LazyHydroGraph::base_createChild()
	static int _bind_base_createChild(lua_State *L) {
		if (!_lg_typecheck_base_createChild(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::LazyHydroGraph::base_createChild() function, expected prototype:\nproland::Graph * proland::LazyHydroGraph::base_createChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::LazyHydroGraph::base_createChild(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->LazyHydroGraph::createChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::LazyHydroGraph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_base_save(lua_State *L) {
		if (!_lg_typecheck_base_save(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::LazyHydroGraph::base_save(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_save(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::save(fileWriter, saveAreas);

		return 0;
	}

	// void proland::LazyHydroGraph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)
	static int _bind_base_indexedSave(lua_State *L) {
		if (!_lg_typecheck_base_indexedSave(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true) function, expected prototype:\nvoid proland::LazyHydroGraph::base_indexedSave(proland::FileWriter * fileWriter, bool saveAreas = true)\nClass arguments details:\narg 1 ID = 85867294\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::FileWriter* fileWriter=(Luna< proland::FileWriter >::check(L,2));
		bool saveAreas=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_indexedSave(proland::FileWriter *, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::indexedSave(fileWriter, saveAreas);

		return 0;
	}

	// void proland::LazyHydroGraph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)
	static int _bind_base_movePoint(lua_State *L) {
		if (!_lg_typecheck_base_movePoint(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyHydroGraph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves) function, expected prototype:\nvoid proland::LazyHydroGraph::base_movePoint(proland::CurvePtr c, int i, const ork::vec2d & p, set< proland::CurveId > & changedCurves)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 81304238\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyHydroGraph::base_movePoint function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyHydroGraph::base_movePoint function");
		}
		const ork::vec2d & p=*p_ptr;
		set< proland::CurveId >* changedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,5));
		if( !changedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changedCurves in proland::LazyHydroGraph::base_movePoint function");
		}
		set< proland::CurveId > & changedCurves=*changedCurves_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyHydroGraph::base_movePoint(proland::CurvePtr, int, const ork::vec2d &, set< proland::CurveId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyHydroGraph::movePoint(c, i, p, changedCurves);

		return 0;
	}

	// proland::NodePtr proland::LazyHydroGraph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)
	static int _bind_base_addNode(lua_State *L) {
		if (!_lg_typecheck_base_addNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyHydroGraph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed) function, expected prototype:\nproland::NodePtr proland::LazyHydroGraph::base_addNode(proland::CurvePtr c, int i, proland::Graph::Changes & changed)\nClass arguments details:\narg 1 ID = 98496290\narg 3 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyHydroGraph::base_addNode function");
		}
		proland::CurvePtr c=*c_ptr;
		int i=(int)lua_tointeger(L,3);
		proland::Graph::Changes* changed_ptr=(Luna< proland::Graph::Changes >::check(L,4));
		if( !changed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changed in proland::LazyHydroGraph::base_addNode function");
		}
		proland::Graph::Changes & changed=*changed_ptr;

		proland::LazyHydroGraph* self=Luna< ork::Object >::checkSubType< proland::LazyHydroGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyHydroGraph::base_addNode(proland::CurvePtr, int, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->LazyHydroGraph::addNode(c, i, changed);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

proland::LazyHydroGraph* LunaTraits< proland::LazyHydroGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LazyHydroGraph::_bind_ctor(L);
}

void LunaTraits< proland::LazyHydroGraph >::_bind_dtor(proland::LazyHydroGraph* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LazyHydroGraph >::className[] = "LazyHydroGraph";
const char LunaTraits< proland::LazyHydroGraph >::fullName[] = "proland::LazyHydroGraph";
const char LunaTraits< proland::LazyHydroGraph >::moduleName[] = "proland";
const char* LunaTraits< proland::LazyHydroGraph >::parents[] = {"proland.LazyGraph", 0};
const int LunaTraits< proland::LazyHydroGraph >::hash = 2984934;
const int LunaTraits< proland::LazyHydroGraph >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LazyHydroGraph >::methods[] = {
	{"checkParams", &luna_wrapper_proland_LazyHydroGraph::_bind_checkParams},
	{"newCurve", &luna_wrapper_proland_LazyHydroGraph::_bind_newCurve},
	{"createChild", &luna_wrapper_proland_LazyHydroGraph::_bind_createChild},
	{"save", &luna_wrapper_proland_LazyHydroGraph::_bind_save},
	{"indexedSave", &luna_wrapper_proland_LazyHydroGraph::_bind_indexedSave},
	{"movePoint", &luna_wrapper_proland_LazyHydroGraph::_bind_movePoint},
	{"addNode", &luna_wrapper_proland_LazyHydroGraph::_bind_addNode},
	{"base_toString", &luna_wrapper_proland_LazyHydroGraph::_bind_base_toString},
	{"base_print", &luna_wrapper_proland_LazyHydroGraph::_bind_base_print},
	{"base_setParent", &luna_wrapper_proland_LazyHydroGraph::_bind_base_setParent},
	{"base_findNode", &luna_wrapper_proland_LazyHydroGraph::_bind_base_findNode},
	{"base_checkDefaultParams", &luna_wrapper_proland_LazyHydroGraph::_bind_base_checkDefaultParams},
	{"base_clip", &luna_wrapper_proland_LazyHydroGraph::_bind_base_clip},
	{"base_addCurvePart", &luna_wrapper_proland_LazyHydroGraph::_bind_base_addCurvePart},
	{"base_addCurve", &luna_wrapper_proland_LazyHydroGraph::_bind_base_addCurve},
	{"base_removeVertex", &luna_wrapper_proland_LazyHydroGraph::_bind_base_removeVertex},
	{"base_createCurvePart", &luna_wrapper_proland_LazyHydroGraph::_bind_base_createCurvePart},
	{"base_clear", &luna_wrapper_proland_LazyHydroGraph::_bind_base_clear},
	{"base_init", &luna_wrapper_proland_LazyHydroGraph::_bind_base_init},
	{"base_getCurveCount", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getCurveCount},
	{"base_getNodeCount", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getNodeCount},
	{"base_getAreaCount", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getAreaCount},
	{"base_load", &luna_wrapper_proland_LazyHydroGraph::_bind_base_load},
	{"base_getNode", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getNode},
	{"base_getCurve", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getCurve},
	{"base_getArea", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getArea},
	{"base_getChildArea", &luna_wrapper_proland_LazyHydroGraph::_bind_base_getChildArea},
	{"base_newNode", &luna_wrapper_proland_LazyHydroGraph::_bind_base_newNode},
	{"base_newArea", &luna_wrapper_proland_LazyHydroGraph::_bind_base_newArea},
	{"base_checkParams", &luna_wrapper_proland_LazyHydroGraph::_bind_base_checkParams},
	{"base_newCurve", &luna_wrapper_proland_LazyHydroGraph::_bind_base_newCurve},
	{"base_createChild", &luna_wrapper_proland_LazyHydroGraph::_bind_base_createChild},
	{"base_save", &luna_wrapper_proland_LazyHydroGraph::_bind_base_save},
	{"base_indexedSave", &luna_wrapper_proland_LazyHydroGraph::_bind_base_indexedSave},
	{"base_movePoint", &luna_wrapper_proland_LazyHydroGraph::_bind_base_movePoint},
	{"base_addNode", &luna_wrapper_proland_LazyHydroGraph::_bind_base_addNode},
	{"fromVoid", &luna_wrapper_proland_LazyHydroGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LazyHydroGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LazyHydroGraph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LazyHydroGraph >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LazyHydroGraph::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LazyHydroGraph >::enumValues[] = {
	{0,0}
};

