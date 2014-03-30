#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_View.h>

class luna_wrapper_osgViewer_View {
public:
	typedef Luna< osgViewer::View > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osgViewer::View* self= (osgViewer::View*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::View >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::View* ptr= dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::View* ptr= luna_caster< osg::Referenced, osgViewer::View >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::View >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::View* ptr= dynamic_cast< osgViewer::View* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		osgViewer::View* ptr= luna_caster< osgGA::GUIActionAdapter, osgViewer::View >::cast(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::View >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerBase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScene_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScene_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImagePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDevice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEventQueue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventQueue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraManipulator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraManipulator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraManipulator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventHandlers_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventHandlers_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateSystemNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateSystemNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeActiveCoordinateSystemNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFusionDistance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpViewAcrossAllScreens(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpViewInWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewOnSingleScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewFor3DSphericalDisplay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewForPanoramicSphericalDisplay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpViewForWoWVxDisplay(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpDepthPartitionForCamera(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpDepthPartition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraContainingPosition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeIntersections_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,9645394) ) return false;
		if( (!(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::checkSubType< osgUtil::LineSegmentIntersector::Intersections >(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeIntersections_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52841328) ) return false;
		if( (!(Luna< osg::NodePath >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,9645394) ) return false;
		if( (!(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::checkSubType< osgUtil::LineSegmentIntersector::Intersections >(L,5))) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_assignSceneDataToCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_take(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestRedraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestContinuousUpdate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestWarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::View::View()
	static osgViewer::View* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::View::View() function, expected prototype:\nosgViewer::View::View()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgViewer::View();
	}

	// osgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::View* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::View::View(const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgViewer::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgViewer::View::View function");
		}
		const osgViewer::View & view=*view_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::View::View function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgViewer::View(view, copyop);
	}

	// osgViewer::View::View(lua_Table * data)
	static osgViewer::View* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::View::View(lua_Table * data) function, expected prototype:\nosgViewer::View::View(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_View(L,NULL);
	}

	// osgViewer::View::View(lua_Table * data, const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::View* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::View::View(lua_Table * data, const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::View::View(lua_Table * data, const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgViewer::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgViewer::View::View function");
		}
		const osgViewer::View & view=*view_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::View::View function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgViewer_View(L,NULL, view, copyop);
	}

	// Overload binder for osgViewer::View::View
	static osgViewer::View* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function View, cannot match any of the overloads for function View:\n  View()\n  View(const osgViewer::View &, const osg::CopyOp &)\n  View(lua_Table *)\n  View(lua_Table *, const osgViewer::View &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::View::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::cloneType() const function, expected prototype:\nosg::Object * osgViewer::View::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::View::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::View::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::View::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::View::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::View::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::View::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::libraryName() const function, expected prototype:\nconst char * osgViewer::View::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::View::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::className() const function, expected prototype:\nconst char * osgViewer::View::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::View * osgViewer::View::asView()
	static int _bind_asView(lua_State *L) {
		if (!_lg_typecheck_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::View::asView() function, expected prototype:\nosg::View * osgViewer::View::asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::View::asView(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// osgViewer::ViewerBase * osgViewer::View::getViewerBase()
	static int _bind_getViewerBase(lua_State *L) {
		if (!_lg_typecheck_getViewerBase(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase * osgViewer::View::getViewerBase() function, expected prototype:\nosgViewer::ViewerBase * osgViewer::View::getViewerBase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase * osgViewer::View::getViewerBase(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase * lret = self->getViewerBase();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::ViewerBase >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::View::take(osg::View & rhs)
	static int _bind_take(lua_State *L) {
		if (!_lg_typecheck_take(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::take(osg::View & rhs) function, expected prototype:\nvoid osgViewer::View::take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgViewer::View::take function");
		}
		osg::View & rhs=*rhs_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::take(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->take(rhs);

		return 0;
	}

	// void osgViewer::View::setStartTick(__int64 tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setStartTick(__int64 tick) function, expected prototype:\nvoid osgViewer::View::setStartTick(__int64 tick)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* tick_ptr=(Luna< __int64 >::check(L,2));
		if( !tick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tick in osgViewer::View::setStartTick function");
		}
		__int64 tick=*tick_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setStartTick(__int64). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTick(tick);

		return 0;
	}

	// __int64 osgViewer::View::getStartTick() const
	static int _bind_getStartTick(lua_State *L) {
		if (!_lg_typecheck_getStartTick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osgViewer::View::getStartTick() const function, expected prototype:\n__int64 osgViewer::View::getStartTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osgViewer::View::getStartTick() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->getStartTick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// osgViewer::Scene * osgViewer::View::getScene()
	static int _bind_getScene_overload_1(lua_State *L) {
		if (!_lg_typecheck_getScene_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::Scene * osgViewer::View::getScene() function, expected prototype:\nosgViewer::Scene * osgViewer::View::getScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::Scene * osgViewer::View::getScene(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::Scene * lret = self->getScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::Scene * osgViewer::View::getScene() const
	static int _bind_getScene_overload_2(lua_State *L) {
		if (!_lg_typecheck_getScene_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgViewer::Scene * osgViewer::View::getScene() const function, expected prototype:\nconst osgViewer::Scene * osgViewer::View::getScene() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgViewer::Scene * osgViewer::View::getScene() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgViewer::Scene * lret = self->getScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getScene
	static int _bind_getScene(lua_State *L) {
		if (_lg_typecheck_getScene_overload_1(L)) return _bind_getScene_overload_1(L);
		if (_lg_typecheck_getScene_overload_2(L)) return _bind_getScene_overload_2(L);

		luaL_error(L, "error in function getScene, cannot match any of the overloads for function getScene:\n  getScene()\n  getScene()\n");
		return 0;
	}

	// void osgViewer::View::setSceneData(osg::Node * node)
	static int _bind_setSceneData(lua_State *L) {
		if (!_lg_typecheck_setSceneData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::View::setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setSceneData(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSceneData(node);

		return 0;
	}

	// osg::Node * osgViewer::View::getSceneData()
	static int _bind_getSceneData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgViewer::View::getSceneData() function, expected prototype:\nosg::Node * osgViewer::View::getSceneData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgViewer::View::getSceneData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osgViewer::View::getSceneData() const
	static int _bind_getSceneData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgViewer::View::getSceneData() const function, expected prototype:\nconst osg::Node * osgViewer::View::getSceneData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgViewer::View::getSceneData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getSceneData
	static int _bind_getSceneData(lua_State *L) {
		if (_lg_typecheck_getSceneData_overload_1(L)) return _bind_getSceneData_overload_1(L);
		if (_lg_typecheck_getSceneData_overload_2(L)) return _bind_getSceneData_overload_2(L);

		luaL_error(L, "error in function getSceneData, cannot match any of the overloads for function getSceneData:\n  getSceneData()\n  getSceneData()\n");
		return 0;
	}

	// void osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp)
	static int _bind_setDatabasePager(lua_State *L) {
		if (!_lg_typecheck_setDatabasePager(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp) function, expected prototype:\nvoid osgViewer::View::setDatabasePager(osgDB::DatabasePager * dp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DatabasePager* dp=(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setDatabasePager(osgDB::DatabasePager *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePager(dp);

		return 0;
	}

	// osgDB::DatabasePager * osgViewer::View::getDatabasePager()
	static int _bind_getDatabasePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgViewer::View::getDatabasePager() function, expected prototype:\nosgDB::DatabasePager * osgViewer::View::getDatabasePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgViewer::View::getDatabasePager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const
	static int _bind_getDatabasePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const function, expected prototype:\nconst osgDB::DatabasePager * osgViewer::View::getDatabasePager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::DatabasePager * osgViewer::View::getDatabasePager() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getDatabasePager
	static int _bind_getDatabasePager(lua_State *L) {
		if (_lg_typecheck_getDatabasePager_overload_1(L)) return _bind_getDatabasePager_overload_1(L);
		if (_lg_typecheck_getDatabasePager_overload_2(L)) return _bind_getDatabasePager_overload_2(L);

		luaL_error(L, "error in function getDatabasePager, cannot match any of the overloads for function getDatabasePager:\n  getDatabasePager()\n  getDatabasePager()\n");
		return 0;
	}

	// void osgViewer::View::setImagePager(osgDB::ImagePager * ip)
	static int _bind_setImagePager(lua_State *L) {
		if (!_lg_typecheck_setImagePager(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setImagePager(osgDB::ImagePager * ip) function, expected prototype:\nvoid osgViewer::View::setImagePager(osgDB::ImagePager * ip)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImagePager* ip=(Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setImagePager(osgDB::ImagePager *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImagePager(ip);

		return 0;
	}

	// osgDB::ImagePager * osgViewer::View::getImagePager()
	static int _bind_getImagePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImagePager * osgViewer::View::getImagePager() function, expected prototype:\nosgDB::ImagePager * osgViewer::View::getImagePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImagePager * osgViewer::View::getImagePager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ImagePager * osgViewer::View::getImagePager() const
	static int _bind_getImagePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ImagePager * osgViewer::View::getImagePager() const function, expected prototype:\nconst osgDB::ImagePager * osgViewer::View::getImagePager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ImagePager * osgViewer::View::getImagePager() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getImagePager
	static int _bind_getImagePager(lua_State *L) {
		if (_lg_typecheck_getImagePager_overload_1(L)) return _bind_getImagePager_overload_1(L);
		if (_lg_typecheck_getImagePager_overload_2(L)) return _bind_getImagePager_overload_2(L);

		luaL_error(L, "error in function getImagePager, cannot match any of the overloads for function getImagePager:\n  getImagePager()\n  getImagePager()\n");
		return 0;
	}

	// void osgViewer::View::addDevice(osgGA::Device * eventSource)
	static int _bind_addDevice(lua_State *L) {
		if (!_lg_typecheck_addDevice(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::addDevice(osgGA::Device * eventSource) function, expected prototype:\nvoid osgViewer::View::addDevice(osgGA::Device * eventSource)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::Device* eventSource=(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::addDevice(osgGA::Device *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDevice(eventSource);

		return 0;
	}

	// void osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue)
	static int _bind_setEventQueue(lua_State *L) {
		if (!_lg_typecheck_setEventQueue(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue) function, expected prototype:\nvoid osgViewer::View::setEventQueue(osgGA::EventQueue * eventQueue)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue* eventQueue=(Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setEventQueue(osgGA::EventQueue *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventQueue(eventQueue);

		return 0;
	}

	// osgGA::EventQueue * osgViewer::View::getEventQueue()
	static int _bind_getEventQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue * osgViewer::View::getEventQueue() function, expected prototype:\nosgGA::EventQueue * osgViewer::View::getEventQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::EventQueue * osgViewer::View::getEventQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue * osgViewer::View::getEventQueue() const
	static int _bind_getEventQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue * osgViewer::View::getEventQueue() const function, expected prototype:\nconst osgGA::EventQueue * osgViewer::View::getEventQueue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue * osgViewer::View::getEventQueue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getEventQueue
	static int _bind_getEventQueue(lua_State *L) {
		if (_lg_typecheck_getEventQueue_overload_1(L)) return _bind_getEventQueue_overload_1(L);
		if (_lg_typecheck_getEventQueue_overload_2(L)) return _bind_getEventQueue_overload_2(L);

		luaL_error(L, "error in function getEventQueue, cannot match any of the overloads for function getEventQueue:\n  getEventQueue()\n  getEventQueue()\n");
		return 0;
	}

	// void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true)
	static int _bind_setCameraManipulator(lua_State *L) {
		if (!_lg_typecheck_setCameraManipulator(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true) function, expected prototype:\nvoid osgViewer::View::setCameraManipulator(osgGA::CameraManipulator * manipulator, bool resetPosition = true)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgGA::CameraManipulator* manipulator=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator >(L,2));
		bool resetPosition=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setCameraManipulator(osgGA::CameraManipulator *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraManipulator(manipulator, resetPosition);

		return 0;
	}

	// osgGA::CameraManipulator * osgViewer::View::getCameraManipulator()
	static int _bind_getCameraManipulator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameraManipulator_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() function, expected prototype:\nosgGA::CameraManipulator * osgViewer::View::getCameraManipulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgViewer::View::getCameraManipulator(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::CameraManipulator * lret = self->getCameraManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const
	static int _bind_getCameraManipulator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameraManipulator_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const function, expected prototype:\nconst osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgViewer::View::getCameraManipulator() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::CameraManipulator * lret = self->getCameraManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getCameraManipulator
	static int _bind_getCameraManipulator(lua_State *L) {
		if (_lg_typecheck_getCameraManipulator_overload_1(L)) return _bind_getCameraManipulator_overload_1(L);
		if (_lg_typecheck_getCameraManipulator_overload_2(L)) return _bind_getCameraManipulator_overload_2(L);

		luaL_error(L, "error in function getCameraManipulator, cannot match any of the overloads for function getCameraManipulator:\n  getCameraManipulator()\n  getCameraManipulator()\n");
		return 0;
	}

	// void osgViewer::View::home()
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::home() function, expected prototype:\nvoid osgViewer::View::home()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::home(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home();

		return 0;
	}

	// void osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler)
	static int _bind_addEventHandler(lua_State *L) {
		if (!_lg_typecheck_addEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler) function, expected prototype:\nvoid osgViewer::View::addEventHandler(osgGA::GUIEventHandler * eventHandler)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventHandler* eventHandler=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::addEventHandler(osgGA::GUIEventHandler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addEventHandler(eventHandler);

		return 0;
	}

	// void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler)
	static int _bind_removeEventHandler(lua_State *L) {
		if (!_lg_typecheck_removeEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler) function, expected prototype:\nvoid osgViewer::View::removeEventHandler(osgGA::GUIEventHandler * eventHandler)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventHandler* eventHandler=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventHandler >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::removeEventHandler(osgGA::GUIEventHandler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeEventHandler(eventHandler);

		return 0;
	}

	// osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers()
	static int _bind_getEventHandlers_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventHandlers_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() function, expected prototype:\nosgViewer::View::EventHandlers & osgViewer::View::getEventHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgViewer::View::EventHandlers* lret = &self->getEventHandlers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View::EventHandlers >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const
	static int _bind_getEventHandlers_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventHandlers_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const function, expected prototype:\nconst osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgViewer::View::EventHandlers & osgViewer::View::getEventHandlers() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgViewer::View::EventHandlers* lret = &self->getEventHandlers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View::EventHandlers >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getEventHandlers
	static int _bind_getEventHandlers(lua_State *L) {
		if (_lg_typecheck_getEventHandlers_overload_1(L)) return _bind_getEventHandlers_overload_1(L);
		if (_lg_typecheck_getEventHandlers_overload_2(L)) return _bind_getEventHandlers_overload_2(L);

		luaL_error(L, "error in function getEventHandlers, cannot match any of the overloads for function getEventHandlers:\n  getEventHandlers()\n  getEventHandlers()\n");
		return 0;
	}

	// void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath)
	static int _bind_setCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_setCoordinateSystemNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgViewer::View::setCoordinateSystemNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setCoordinateSystemNodePath(const osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCoordinateSystemNodePath(nodePath);

		return 0;
	}

	// osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const
	static int _bind_getCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_getCoordinateSystemNodePath(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const function, expected prototype:\nosg::NodePath osgViewer::View::getCoordinateSystemNodePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath osgViewer::View::getCoordinateSystemNodePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodePath stack_lret = self->getCoordinateSystemNodePath();
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}

	// void osgViewer::View::computeActiveCoordinateSystemNodePath()
	static int _bind_computeActiveCoordinateSystemNodePath(lua_State *L) {
		if (!_lg_typecheck_computeActiveCoordinateSystemNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::computeActiveCoordinateSystemNodePath() function, expected prototype:\nvoid osgViewer::View::computeActiveCoordinateSystemNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::computeActiveCoordinateSystemNodePath(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeActiveCoordinateSystemNodePath();

		return 0;
	}

	// void osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds) function, expected prototype:\nvoid osgViewer::View::setDisplaySettings(osg::DisplaySettings * ds)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DisplaySettings* ds=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setDisplaySettings(osg::DisplaySettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisplaySettings(ds);

		return 0;
	}

	// osg::DisplaySettings * osgViewer::View::getDisplaySettings()
	static int _bind_getDisplaySettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings * osgViewer::View::getDisplaySettings() function, expected prototype:\nosg::DisplaySettings * osgViewer::View::getDisplaySettings()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DisplaySettings * osgViewer::View::getDisplaySettings(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const
	static int _bind_getDisplaySettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osgViewer::View::getDisplaySettings() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osgViewer::View::getDisplaySettings() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::getDisplaySettings
	static int _bind_getDisplaySettings(lua_State *L) {
		if (_lg_typecheck_getDisplaySettings_overload_1(L)) return _bind_getDisplaySettings_overload_1(L);
		if (_lg_typecheck_getDisplaySettings_overload_2(L)) return _bind_getDisplaySettings_overload_2(L);

		luaL_error(L, "error in function getDisplaySettings, cannot match any of the overloads for function getDisplaySettings:\n  getDisplaySettings()\n  getDisplaySettings()\n");
		return 0;
	}

	// void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)
	static int _bind_setFusionDistance(lua_State *L) {
		if (!_lg_typecheck_setFusionDistance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f) function, expected prototype:\nvoid osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode mode, float value = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::SceneView::FusionDistanceMode mode=(osgUtil::SceneView::FusionDistanceMode)lua_tointeger(L,2);
		float value=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setFusionDistance(osgUtil::SceneView::FusionDistanceMode, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFusionDistance(mode, value);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgViewer::View::getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgViewer::View::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgViewer::View::getFusionDistanceValue() const function, expected prototype:\nfloat osgViewer::View::getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgViewer::View::getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::View::setUpViewAcrossAllScreens()
	static int _bind_setUpViewAcrossAllScreens(lua_State *L) {
		if (!_lg_typecheck_setUpViewAcrossAllScreens(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewAcrossAllScreens() function, expected prototype:\nvoid osgViewer::View::setUpViewAcrossAllScreens()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewAcrossAllScreens(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewAcrossAllScreens();

		return 0;
	}

	// void osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0)
	static int _bind_setUpViewInWindow(lua_State *L) {
		if (!_lg_typecheck_setUpViewInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0) function, expected prototype:\nvoid osgViewer::View::setUpViewInWindow(int x, int y, int width, int height, unsigned int screenNum = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int screenNum=luatop>5 ? (unsigned int)lua_tointeger(L,6) : (unsigned int)0;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewInWindow(int, int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewInWindow(x, y, width, height, screenNum);

		return 0;
	}

	// void osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0)
	static int _bind_setUpViewOnSingleScreen(lua_State *L) {
		if (!_lg_typecheck_setUpViewOnSingleScreen(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0) function, expected prototype:\nvoid osgViewer::View::setUpViewOnSingleScreen(unsigned int screenNum = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int screenNum=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewOnSingleScreen(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewOnSingleScreen(screenNum);

		return 0;
	}

	// void osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())
	static int _bind_setUpViewFor3DSphericalDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewFor3DSphericalDisplay(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ()) function, expected prototype:\nvoid osgViewer::View::setUpViewFor3DSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())\nClass arguments details:\narg 4 ID = 50169651\narg 5 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double radius=luatop>1 ? (double)lua_tonumber(L,2) : (double)1.0;
		double collar=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.45;
		unsigned int screenNum=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		osg::Image* intensityMap=luatop>4 ? (Luna< osg::Referenced >::checkSubType< osg::Image >(L,5)) : (osg::Image*)0;
		const osg::Matrixd* projectorMatrix_ptr=luatop>5 ? (Luna< osg::Matrixd >::check(L,6)) : NULL;
		if( luatop>5 && !projectorMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectorMatrix in osgViewer::View::setUpViewFor3DSphericalDisplay function");
		}
		const osg::Matrixd & projectorMatrix=luatop>5 ? *projectorMatrix_ptr : (const osg::Matrixd&)osg::Matrixd ();

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewFor3DSphericalDisplay(double, double, unsigned int, osg::Image *, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewFor3DSphericalDisplay(radius, collar, screenNum, intensityMap, projectorMatrix);

		return 0;
	}

	// void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())
	static int _bind_setUpViewForPanoramicSphericalDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewForPanoramicSphericalDisplay(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ()) function, expected prototype:\nvoid osgViewer::View::setUpViewForPanoramicSphericalDisplay(double radius = 1.0, double collar = 0.45, unsigned int screenNum = 0, osg::Image * intensityMap = 0, const osg::Matrixd & projectorMatrix = osg::Matrixd ())\nClass arguments details:\narg 4 ID = 50169651\narg 5 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double radius=luatop>1 ? (double)lua_tonumber(L,2) : (double)1.0;
		double collar=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.45;
		unsigned int screenNum=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		osg::Image* intensityMap=luatop>4 ? (Luna< osg::Referenced >::checkSubType< osg::Image >(L,5)) : (osg::Image*)0;
		const osg::Matrixd* projectorMatrix_ptr=luatop>5 ? (Luna< osg::Matrixd >::check(L,6)) : NULL;
		if( luatop>5 && !projectorMatrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectorMatrix in osgViewer::View::setUpViewForPanoramicSphericalDisplay function");
		}
		const osg::Matrixd & projectorMatrix=luatop>5 ? *projectorMatrix_ptr : (const osg::Matrixd&)osg::Matrixd ();

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewForPanoramicSphericalDisplay(double, double, unsigned int, osg::Image *, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewForPanoramicSphericalDisplay(radius, collar, screenNum, intensityMap, projectorMatrix);

		return 0;
	}

	// void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C)
	static int _bind_setUpViewForWoWVxDisplay(lua_State *L) {
		if (!_lg_typecheck_setUpViewForWoWVxDisplay(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C) function, expected prototype:\nvoid osgViewer::View::setUpViewForWoWVxDisplay(unsigned int screenNum, unsigned char wow_content, unsigned char wow_factor, unsigned char wow_offset, float wow_disparity_Zd, float wow_disparity_vz, float wow_disparity_M, float wow_disparity_C)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int screenNum=(unsigned int)lua_tointeger(L,2);
		unsigned char wow_content = (unsigned char)(lua_tointeger(L,3));
		unsigned char wow_factor = (unsigned char)(lua_tointeger(L,4));
		unsigned char wow_offset = (unsigned char)(lua_tointeger(L,5));
		float wow_disparity_Zd=(float)lua_tonumber(L,6);
		float wow_disparity_vz=(float)lua_tonumber(L,7);
		float wow_disparity_M=(float)lua_tonumber(L,8);
		float wow_disparity_C=(float)lua_tonumber(L,9);

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::setUpViewForWoWVxDisplay(unsigned int, unsigned char, unsigned char, unsigned char, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpViewForWoWVxDisplay(screenNum, wow_content, wow_factor, wow_offset, wow_disparity_Zd, wow_disparity_vz, wow_disparity_M, wow_disparity_C);

		return 0;
	}

	// bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0)
	static int _bind_setUpDepthPartitionForCamera(lua_State *L) {
		if (!_lg_typecheck_setUpDepthPartitionForCamera(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0) function, expected prototype:\nbool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera * cameraToPartition, osgViewer::DepthPartitionSettings * dps = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera* cameraToPartition=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		osgViewer::DepthPartitionSettings* dps=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,3)) : (osgViewer::DepthPartitionSettings*)0;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::setUpDepthPartitionForCamera(osg::Camera *, osgViewer::DepthPartitionSettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setUpDepthPartitionForCamera(cameraToPartition, dps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0)
	static int _bind_setUpDepthPartition(lua_State *L) {
		if (!_lg_typecheck_setUpDepthPartition(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0) function, expected prototype:\nbool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings * dsp = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::DepthPartitionSettings* dsp=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgViewer::DepthPartitionSettings >(L,2)) : (osgViewer::DepthPartitionSettings*)0;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::setUpDepthPartition(osgViewer::DepthPartitionSettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setUpDepthPartition(dsp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::containsCamera(const osg::Camera * camera) const
	static int _bind_containsCamera(lua_State *L) {
		if (!_lg_typecheck_containsCamera(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::containsCamera(const osg::Camera * camera) const function, expected prototype:\nbool osgViewer::View::containsCamera(const osg::Camera * camera) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::containsCamera(const osg::Camera *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsCamera(camera);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const
	static int _bind_getCameraContainingPosition(lua_State *L) {
		if (!_lg_typecheck_getCameraContainingPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const function, expected prototype:\nconst osg::Camera * osgViewer::View::getCameraContainingPosition(float x, float y, float & local_x, float & local_y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float local_x=(float)lua_tonumber(L,4);
		float local_y=(float)lua_tonumber(L,5);

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::View::getCameraContainingPosition(float, float, float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->getCameraContainingPosition(x, y, local_x, local_y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		lua_pushnumber(L,local_x);
		lua_pushnumber(L,local_y);
		return 3;
	}

	// bool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)
	static int _bind_computeIntersections_overload_1(lua_State *L) {
		if (!_lg_typecheck_computeIntersections_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) function, expected prototype:\nbool osgViewer::View::computeIntersections(float x, float y, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)\nClass arguments details:\narg 3 ID = 19574398\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		osgUtil::LineSegmentIntersector::Intersections* intersections_ptr=(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::checkSubType< osgUtil::LineSegmentIntersector::Intersections >(L,4));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osgViewer::View::computeIntersections function");
		}
		osgUtil::LineSegmentIntersector::Intersections & intersections=*intersections_ptr;
		unsigned int traversalMask=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0xffffffff;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::computeIntersections(float, float, osgUtil::LineSegmentIntersector::Intersections &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeIntersections(x, y, intersections, traversalMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)
	static int _bind_computeIntersections_overload_2(lua_State *L) {
		if (!_lg_typecheck_computeIntersections_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) function, expected prototype:\nbool osgViewer::View::computeIntersections(float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff)\nClass arguments details:\narg 3 ID = 52841328\narg 4 ID = 19574398\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,4));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgViewer::View::computeIntersections function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;
		osgUtil::LineSegmentIntersector::Intersections* intersections_ptr=(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::checkSubType< osgUtil::LineSegmentIntersector::Intersections >(L,5));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osgViewer::View::computeIntersections function");
		}
		osgUtil::LineSegmentIntersector::Intersections & intersections=*intersections_ptr;
		unsigned int traversalMask=luatop>5 ? (unsigned int)lua_tointeger(L,6) : (unsigned int)0xffffffff;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::computeIntersections(float, float, const osg::NodePath &, osgUtil::LineSegmentIntersector::Intersections &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeIntersections(x, y, nodePath, intersections, traversalMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgViewer::View::computeIntersections
	static int _bind_computeIntersections(lua_State *L) {
		if (_lg_typecheck_computeIntersections_overload_1(L)) return _bind_computeIntersections_overload_1(L);
		if (_lg_typecheck_computeIntersections_overload_2(L)) return _bind_computeIntersections_overload_2(L);

		luaL_error(L, "error in function computeIntersections, cannot match any of the overloads for function computeIntersections:\n  computeIntersections(float, float, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)\n  computeIntersections(float, float, const osg::NodePath &, osgUtil::LineSegmentIntersector::Intersections &, unsigned int)\n");
		return 0;
	}

	// void osgViewer::View::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestRedraw() function, expected prototype:\nvoid osgViewer::View::requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestRedraw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestRedraw();

		return 0;
	}

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::View::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::View::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::View::requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestWarpPointer(x, y);

		return 0;
	}

	// void osgViewer::View::assignSceneDataToCameras()
	static int _bind_assignSceneDataToCameras(lua_State *L) {
		if (!_lg_typecheck_assignSceneDataToCameras(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::assignSceneDataToCameras() function, expected prototype:\nvoid osgViewer::View::assignSceneDataToCameras()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::assignSceneDataToCameras(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assignSceneDataToCameras();

		return 0;
	}

	// void osgViewer::View::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::init() function, expected prototype:\nvoid osgViewer::View::init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init();

		return 0;
	}

	// void osgViewer::View::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::View::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::View::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::View::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setName(name);

		return 0;
	}

	// void osgViewer::View::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::View::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::computeDataVariance();

		return 0;
	}

	// void osgViewer::View::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::View::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::View::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::View::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::View::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::View::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->View::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::View::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::View::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::View::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::View::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->View::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::View::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::View::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::View::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::View::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::View::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->View::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::View::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::View::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::View::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::View::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::View::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->View::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::View::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::View::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::View::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::View::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->View::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::View::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::base_libraryName() const function, expected prototype:\nconst char * osgViewer::View::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->View::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::View::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::View::base_className() const function, expected prototype:\nconst char * osgViewer::View::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::View::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->View::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::View * osgViewer::View::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::View::base_asView() function, expected prototype:\nosg::View * osgViewer::View::base_asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::View::base_asView(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->View::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::View::base_take(osg::View & rhs)
	static int _bind_base_take(lua_State *L) {
		if (!_lg_typecheck_base_take(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_take(osg::View & rhs) function, expected prototype:\nvoid osgViewer::View::base_take(osg::View & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgViewer::View::base_take function");
		}
		osg::View & rhs=*rhs_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_take(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::take(rhs);

		return 0;
	}

	// void osgViewer::View::base_setStartTick(__int64 tick)
	static int _bind_base_setStartTick(lua_State *L) {
		if (!_lg_typecheck_base_setStartTick(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_setStartTick(__int64 tick) function, expected prototype:\nvoid osgViewer::View::base_setStartTick(__int64 tick)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* tick_ptr=(Luna< __int64 >::check(L,2));
		if( !tick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tick in osgViewer::View::base_setStartTick function");
		}
		__int64 tick=*tick_ptr;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_setStartTick(__int64). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setStartTick(tick);

		return 0;
	}

	// void osgViewer::View::base_setSceneData(osg::Node * node)
	static int _bind_base_setSceneData(lua_State *L) {
		if (!_lg_typecheck_base_setSceneData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::View::base_setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_setSceneData(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::setSceneData(node);

		return 0;
	}

	// void osgViewer::View::base_requestRedraw()
	static int _bind_base_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_base_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_requestRedraw() function, expected prototype:\nvoid osgViewer::View::base_requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_requestRedraw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::requestRedraw();

		return 0;
	}

	// void osgViewer::View::base_requestContinuousUpdate(bool needed = true)
	static int _bind_base_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_base_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::View::base_requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::View::base_requestWarpPointer(float x, float y)
	static int _bind_base_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::View::base_requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::View::base_requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::View* self=Luna< osg::Referenced >::checkSubType< osgViewer::View >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::View::base_requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View::requestWarpPointer(x, y);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osgGA_GUIActionAdapter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osgGA_GUIActionAdapter(lua_State *L) {
		if (!_lg_typecheck_baseCast_osgGA_GUIActionAdapter(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osgGA_GUIActionAdapter function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osgGA::GUIActionAdapter* res = luna_caster<osg::Referenced,osgGA::GUIActionAdapter>::cast(self); // dynamic_cast<osgGA::GUIActionAdapter*>(self);
		if(!res)
			return 0;
			
		Luna< osgGA::GUIActionAdapter >::push(L,res,false);
		return 1;

	}

};

osgViewer::View* LunaTraits< osgViewer::View >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_View::_bind_ctor(L);
}

void LunaTraits< osgViewer::View >::_bind_dtor(osgViewer::View* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::View >::className[] = "View";
const char LunaTraits< osgViewer::View >::fullName[] = "osgViewer::View";
const char LunaTraits< osgViewer::View >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::View >::parents[] = {"osg.View", "osgGA.GUIActionAdapter", 0};
const int LunaTraits< osgViewer::View >::hash = 42836746;
const int LunaTraits< osgViewer::View >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::View >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_View::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_View::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_View::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_View::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_View::_bind_className},
	{"asView", &luna_wrapper_osgViewer_View::_bind_asView},
	{"getViewerBase", &luna_wrapper_osgViewer_View::_bind_getViewerBase},
	{"take", &luna_wrapper_osgViewer_View::_bind_take},
	{"setStartTick", &luna_wrapper_osgViewer_View::_bind_setStartTick},
	{"getStartTick", &luna_wrapper_osgViewer_View::_bind_getStartTick},
	{"getScene", &luna_wrapper_osgViewer_View::_bind_getScene},
	{"setSceneData", &luna_wrapper_osgViewer_View::_bind_setSceneData},
	{"getSceneData", &luna_wrapper_osgViewer_View::_bind_getSceneData},
	{"setDatabasePager", &luna_wrapper_osgViewer_View::_bind_setDatabasePager},
	{"getDatabasePager", &luna_wrapper_osgViewer_View::_bind_getDatabasePager},
	{"setImagePager", &luna_wrapper_osgViewer_View::_bind_setImagePager},
	{"getImagePager", &luna_wrapper_osgViewer_View::_bind_getImagePager},
	{"addDevice", &luna_wrapper_osgViewer_View::_bind_addDevice},
	{"setEventQueue", &luna_wrapper_osgViewer_View::_bind_setEventQueue},
	{"getEventQueue", &luna_wrapper_osgViewer_View::_bind_getEventQueue},
	{"setCameraManipulator", &luna_wrapper_osgViewer_View::_bind_setCameraManipulator},
	{"getCameraManipulator", &luna_wrapper_osgViewer_View::_bind_getCameraManipulator},
	{"home", &luna_wrapper_osgViewer_View::_bind_home},
	{"addEventHandler", &luna_wrapper_osgViewer_View::_bind_addEventHandler},
	{"removeEventHandler", &luna_wrapper_osgViewer_View::_bind_removeEventHandler},
	{"getEventHandlers", &luna_wrapper_osgViewer_View::_bind_getEventHandlers},
	{"setCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_setCoordinateSystemNodePath},
	{"getCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_getCoordinateSystemNodePath},
	{"computeActiveCoordinateSystemNodePath", &luna_wrapper_osgViewer_View::_bind_computeActiveCoordinateSystemNodePath},
	{"setDisplaySettings", &luna_wrapper_osgViewer_View::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osgViewer_View::_bind_getDisplaySettings},
	{"setFusionDistance", &luna_wrapper_osgViewer_View::_bind_setFusionDistance},
	{"getFusionDistanceMode", &luna_wrapper_osgViewer_View::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgViewer_View::_bind_getFusionDistanceValue},
	{"setUpViewAcrossAllScreens", &luna_wrapper_osgViewer_View::_bind_setUpViewAcrossAllScreens},
	{"setUpViewInWindow", &luna_wrapper_osgViewer_View::_bind_setUpViewInWindow},
	{"setUpViewOnSingleScreen", &luna_wrapper_osgViewer_View::_bind_setUpViewOnSingleScreen},
	{"setUpViewFor3DSphericalDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewFor3DSphericalDisplay},
	{"setUpViewForPanoramicSphericalDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewForPanoramicSphericalDisplay},
	{"setUpViewForWoWVxDisplay", &luna_wrapper_osgViewer_View::_bind_setUpViewForWoWVxDisplay},
	{"setUpDepthPartitionForCamera", &luna_wrapper_osgViewer_View::_bind_setUpDepthPartitionForCamera},
	{"setUpDepthPartition", &luna_wrapper_osgViewer_View::_bind_setUpDepthPartition},
	{"containsCamera", &luna_wrapper_osgViewer_View::_bind_containsCamera},
	{"getCameraContainingPosition", &luna_wrapper_osgViewer_View::_bind_getCameraContainingPosition},
	{"computeIntersections", &luna_wrapper_osgViewer_View::_bind_computeIntersections},
	{"requestRedraw", &luna_wrapper_osgViewer_View::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgViewer_View::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgViewer_View::_bind_requestWarpPointer},
	{"assignSceneDataToCameras", &luna_wrapper_osgViewer_View::_bind_assignSceneDataToCameras},
	{"init", &luna_wrapper_osgViewer_View::_bind_init},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_View::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_View::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_View::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_View::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_View::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_View::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_View::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_View::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_View::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_View::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_View::_bind_base_className},
	{"base_asView", &luna_wrapper_osgViewer_View::_bind_base_asView},
	{"base_take", &luna_wrapper_osgViewer_View::_bind_base_take},
	{"base_setStartTick", &luna_wrapper_osgViewer_View::_bind_base_setStartTick},
	{"base_setSceneData", &luna_wrapper_osgViewer_View::_bind_base_setSceneData},
	{"base_requestRedraw", &luna_wrapper_osgViewer_View::_bind_base_requestRedraw},
	{"base_requestContinuousUpdate", &luna_wrapper_osgViewer_View::_bind_base_requestContinuousUpdate},
	{"base_requestWarpPointer", &luna_wrapper_osgViewer_View::_bind_base_requestWarpPointer},
	{"fromVoid", &luna_wrapper_osgViewer_View::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_View::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_View::_bind_getTable},
	{"asGUIActionAdapter", &luna_wrapper_osgViewer_View::_bind_baseCast_osgGA_GUIActionAdapter},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::View >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_View::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_View::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::View >::enumValues[] = {
	{0,0}
};


