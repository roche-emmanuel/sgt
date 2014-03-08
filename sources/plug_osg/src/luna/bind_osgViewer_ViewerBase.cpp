#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ViewerBase.h>

class luna_wrapper_osgViewer_ViewerBase {
public:
	typedef Luna< osgViewer::ViewerBase > luna_t;

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

		osgViewer::ViewerBase* self= (osgViewer::ViewerBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::ViewerBase >::push(L,self,false);
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
		//osgViewer::ViewerBase* ptr= dynamic_cast< osgViewer::ViewerBase* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ViewerBase* ptr= luna_caster< osg::Referenced, osgViewer::ViewerBase >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ViewerBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setViewerStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readConfiguration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_suggestBestThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areThreadsRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_startThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEndBarrierOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEndBarrierOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_done(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQuitEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQuitEventSetsDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReleaseContextAtEndOfFrameHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReleaseContextAtEndOfFrameHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpdateVisitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateVisitor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateVisitor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpdateOperations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateOperations_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateOperations_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addUpdateOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUpdateOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRealizeOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRealizeOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRunFrameScheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRunFrameScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRunMaxFrameRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRunMaxFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkNeedToDoFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_frame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_eventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_renderingTraversals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameras(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26989213) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContexts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81169401) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20911347) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllThreads(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9185441) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperationThreads(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51846713) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScenes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36779322) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,21902908) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkWindowStatus_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkWindowStatus_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81169401) ) return false;
		if( (!(Luna< std::vector< osg::GraphicsContext * > >::checkSubType< osgViewer::ViewerBase::Contexts >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_elapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_setThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_suggestBestThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUpThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stopThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_startThreading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_frame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_renderingTraversals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getWindows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20911347) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::ViewerBase::ViewerBase(lua_Table * data)
	static osgViewer::ViewerBase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::ViewerBase(lua_Table * data) function, expected prototype:\nosgViewer::ViewerBase::ViewerBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_ViewerBase(L,NULL);
	}

	// osgViewer::ViewerBase::ViewerBase(lua_Table * data, const osgViewer::ViewerBase & vb)
	static osgViewer::ViewerBase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::ViewerBase(lua_Table * data, const osgViewer::ViewerBase & vb) function, expected prototype:\nosgViewer::ViewerBase::ViewerBase(lua_Table * data, const osgViewer::ViewerBase & vb)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgViewer::ViewerBase* vb_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !vb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vb in osgViewer::ViewerBase::ViewerBase function");
		}
		const osgViewer::ViewerBase & vb=*vb_ptr;

		return new wrapper_osgViewer_ViewerBase(L,NULL, vb);
	}

	// Overload binder for osgViewer::ViewerBase::ViewerBase
	static osgViewer::ViewerBase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ViewerBase, cannot match any of the overloads for function ViewerBase:\n  ViewerBase(lua_Table *)\n  ViewerBase(lua_Table *, const osgViewer::ViewerBase &)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)
	static int _bind_setViewerStats(lua_State *L) {
		if (!_lg_typecheck_setViewerStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats) function, expected prototype:\nvoid osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setViewerStats(osg::Stats *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewerStats(stats);

		return 0;
	}

	// osg::Stats * osgViewer::ViewerBase::getViewerStats()
	static int _bind_getViewerStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats * osgViewer::ViewerBase::getViewerStats() function, expected prototype:\nosg::Stats * osgViewer::ViewerBase::getViewerStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Stats * osgViewer::ViewerBase::getViewerStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osgViewer::ViewerBase::getViewerStats() const
	static int _bind_getViewerStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Stats * osgViewer::ViewerBase::getViewerStats() const function, expected prototype:\nconst osg::Stats * osgViewer::ViewerBase::getViewerStats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Stats * osgViewer::ViewerBase::getViewerStats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getViewerStats
	static int _bind_getViewerStats(lua_State *L) {
		if (_lg_typecheck_getViewerStats_overload_1(L)) return _bind_getViewerStats_overload_1(L);
		if (_lg_typecheck_getViewerStats_overload_2(L)) return _bind_getViewerStats_overload_2(L);

		luaL_error(L, "error in function getViewerStats, cannot match any of the overloads for function getViewerStats:\n  getViewerStats()\n  getViewerStats()\n");
		return 0;
	}

	// bool osgViewer::ViewerBase::readConfiguration(const std::string & filename)
	static int _bind_readConfiguration(lua_State *L) {
		if (!_lg_typecheck_readConfiguration(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::readConfiguration(const std::string & filename) function, expected prototype:\nbool osgViewer::ViewerBase::readConfiguration(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::readConfiguration(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readConfiguration(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::ViewerBase::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::isRealized() const function, expected prototype:\nbool osgViewer::ViewerBase::isRealized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::isRealized() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::realize() function, expected prototype:\nvoid osgViewer::ViewerBase::realize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::realize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->realize();

		return 0;
	}

	// void osgViewer::ViewerBase::setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel)
	static int _bind_setThreadingModel(lua_State *L) {
		if (!_lg_typecheck_setThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel) function, expected prototype:\nvoid osgViewer::ViewerBase::setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase::ThreadingModel threadingModel=(osgViewer::ViewerBase::ThreadingModel)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setThreadingModel(osgViewer::ViewerBase::ThreadingModel). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadingModel(threadingModel);

		return 0;
	}

	// osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::getThreadingModel() const
	static int _bind_getThreadingModel(lua_State *L) {
		if (!_lg_typecheck_getThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::getThreadingModel() const function, expected prototype:\nosgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::getThreadingModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::getThreadingModel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase::ThreadingModel lret = self->getThreadingModel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::suggestBestThreadingModel()
	static int _bind_suggestBestThreadingModel(lua_State *L) {
		if (!_lg_typecheck_suggestBestThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::suggestBestThreadingModel() function, expected prototype:\nosgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::suggestBestThreadingModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::suggestBestThreadingModel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase::ThreadingModel lret = self->suggestBestThreadingModel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setUpThreading()
	static int _bind_setUpThreading(lua_State *L) {
		if (!_lg_typecheck_setUpThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setUpThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::setUpThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setUpThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpThreading();

		return 0;
	}

	// bool osgViewer::ViewerBase::areThreadsRunning() const
	static int _bind_areThreadsRunning(lua_State *L) {
		if (!_lg_typecheck_areThreadsRunning(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::areThreadsRunning() const function, expected prototype:\nbool osgViewer::ViewerBase::areThreadsRunning() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::areThreadsRunning() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->areThreadsRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::stopThreading()
	static int _bind_stopThreading(lua_State *L) {
		if (!_lg_typecheck_stopThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::stopThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::stopThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::stopThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopThreading();

		return 0;
	}

	// void osgViewer::ViewerBase::startThreading()
	static int _bind_startThreading(lua_State *L) {
		if (!_lg_typecheck_startThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::startThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::startThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::startThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startThreading();

		return 0;
	}

	// void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp)
	static int _bind_setEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_setEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp) function, expected prototype:\nvoid osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition bp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase::BarrierPosition bp=(osgViewer::ViewerBase::BarrierPosition)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setEndBarrierPosition(osgViewer::ViewerBase::BarrierPosition). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEndBarrierPosition(bp);

		return 0;
	}

	// osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const
	static int _bind_getEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_getEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const function, expected prototype:\nosgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::BarrierPosition osgViewer::ViewerBase::getEndBarrierPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase::BarrierPosition lret = self->getEndBarrierPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setEndBarrierOperation(osg::BarrierOperation::PreBlockOp op)
	static int _bind_setEndBarrierOperation(lua_State *L) {
		if (!_lg_typecheck_setEndBarrierOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setEndBarrierOperation(osg::BarrierOperation::PreBlockOp op) function, expected prototype:\nvoid osgViewer::ViewerBase::setEndBarrierOperation(osg::BarrierOperation::PreBlockOp op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BarrierOperation::PreBlockOp op=(osg::BarrierOperation::PreBlockOp)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setEndBarrierOperation(osg::BarrierOperation::PreBlockOp). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEndBarrierOperation(op);

		return 0;
	}

	// osg::BarrierOperation::PreBlockOp osgViewer::ViewerBase::getEndBarrierOperation() const
	static int _bind_getEndBarrierOperation(lua_State *L) {
		if (!_lg_typecheck_getEndBarrierOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::BarrierOperation::PreBlockOp osgViewer::ViewerBase::getEndBarrierOperation() const function, expected prototype:\nosg::BarrierOperation::PreBlockOp osgViewer::ViewerBase::getEndBarrierOperation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BarrierOperation::PreBlockOp osgViewer::ViewerBase::getEndBarrierOperation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BarrierOperation::PreBlockOp lret = self->getEndBarrierOperation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setDone(bool done)
	static int _bind_setDone(lua_State *L) {
		if (!_lg_typecheck_setDone(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setDone(bool done) function, expected prototype:\nvoid osgViewer::ViewerBase::setDone(bool done)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool done=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setDone(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDone(done);

		return 0;
	}

	// bool osgViewer::ViewerBase::done() const
	static int _bind_done(lua_State *L) {
		if (!_lg_typecheck_done(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::done() const function, expected prototype:\nbool osgViewer::ViewerBase::done() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::done() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->done();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor)
	static int _bind_setEventVisitor(lua_State *L) {
		if (!_lg_typecheck_setEventVisitor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor) function, expected prototype:\nvoid osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor * eventVisitor)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventVisitor* eventVisitor=(Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setEventVisitor(osgGA::EventVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventVisitor(eventVisitor);

		return 0;
	}

	// osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor()
	static int _bind_getEventVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventVisitor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() function, expected prototype:\nosgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::EventVisitor * lret = self->getEventVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const
	static int _bind_getEventVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventVisitor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const function, expected prototype:\nconst osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::EventVisitor * osgViewer::ViewerBase::getEventVisitor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::EventVisitor * lret = self->getEventVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getEventVisitor
	static int _bind_getEventVisitor(lua_State *L) {
		if (_lg_typecheck_getEventVisitor_overload_1(L)) return _bind_getEventVisitor_overload_1(L);
		if (_lg_typecheck_getEventVisitor_overload_2(L)) return _bind_getEventVisitor_overload_2(L);

		luaL_error(L, "error in function getEventVisitor, cannot match any of the overloads for function getEventVisitor:\n  getEventVisitor()\n  getEventVisitor()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::setKeyEventSetsDone(int key)
	static int _bind_setKeyEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_setKeyEventSetsDone(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setKeyEventSetsDone(int key) function, expected prototype:\nvoid osgViewer::ViewerBase::setKeyEventSetsDone(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setKeyEventSetsDone(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventSetsDone(key);

		return 0;
	}

	// int osgViewer::ViewerBase::getKeyEventSetsDone() const
	static int _bind_getKeyEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_getKeyEventSetsDone(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ViewerBase::getKeyEventSetsDone() const function, expected prototype:\nint osgViewer::ViewerBase::getKeyEventSetsDone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ViewerBase::getKeyEventSetsDone() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventSetsDone();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setQuitEventSetsDone(bool flag)
	static int _bind_setQuitEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_setQuitEventSetsDone(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setQuitEventSetsDone(bool flag) function, expected prototype:\nvoid osgViewer::ViewerBase::setQuitEventSetsDone(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setQuitEventSetsDone(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setQuitEventSetsDone(flag);

		return 0;
	}

	// bool osgViewer::ViewerBase::getQuitEventSetsDone() const
	static int _bind_getQuitEventSetsDone(lua_State *L) {
		if (!_lg_typecheck_getQuitEventSetsDone(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::getQuitEventSetsDone() const function, expected prototype:\nbool osgViewer::ViewerBase::getQuitEventSetsDone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::getQuitEventSetsDone() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getQuitEventSetsDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint)
	static int _bind_setReleaseContextAtEndOfFrameHint(lua_State *L) {
		if (!_lg_typecheck_setReleaseContextAtEndOfFrameHint(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint) function, expected prototype:\nvoid osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool hint)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool hint=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setReleaseContextAtEndOfFrameHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReleaseContextAtEndOfFrameHint(hint);

		return 0;
	}

	// bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const
	static int _bind_getReleaseContextAtEndOfFrameHint(lua_State *L) {
		if (!_lg_typecheck_getReleaseContextAtEndOfFrameHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const function, expected prototype:\nbool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::getReleaseContextAtEndOfFrameHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getReleaseContextAtEndOfFrameHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor)
	static int _bind_setUpdateVisitor(lua_State *L) {
		if (!_lg_typecheck_setUpdateVisitor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor) function, expected prototype:\nvoid osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor * updateVisitor)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::UpdateVisitor* updateVisitor=(Luna< osg::Referenced >::checkSubType< osgUtil::UpdateVisitor >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setUpdateVisitor(osgUtil::UpdateVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateVisitor(updateVisitor);

		return 0;
	}

	// osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor()
	static int _bind_getUpdateVisitor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() function, expected prototype:\nosgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::UpdateVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::UpdateVisitor >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const
	static int _bind_getUpdateVisitor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateVisitor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const function, expected prototype:\nconst osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::UpdateVisitor * osgViewer::ViewerBase::getUpdateVisitor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::UpdateVisitor * lret = self->getUpdateVisitor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::UpdateVisitor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getUpdateVisitor
	static int _bind_getUpdateVisitor(lua_State *L) {
		if (_lg_typecheck_getUpdateVisitor_overload_1(L)) return _bind_getUpdateVisitor_overload_1(L);
		if (_lg_typecheck_getUpdateVisitor_overload_2(L)) return _bind_getUpdateVisitor_overload_2(L);

		luaL_error(L, "error in function getUpdateVisitor, cannot match any of the overloads for function getUpdateVisitor:\n  getUpdateVisitor()\n  getUpdateVisitor()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations)
	static int _bind_setUpdateOperations(lua_State *L) {
		if (!_lg_typecheck_setUpdateOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations) function, expected prototype:\nvoid osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue * operations)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OperationQueue* operations=(Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setUpdateOperations(osg::OperationQueue *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateOperations(operations);

		return 0;
	}

	// osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations()
	static int _bind_getUpdateOperations_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateOperations_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() function, expected prototype:\nosg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::OperationQueue * lret = self->getUpdateOperations();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const
	static int _bind_getUpdateOperations_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateOperations_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const function, expected prototype:\nconst osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::OperationQueue * osgViewer::ViewerBase::getUpdateOperations() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::OperationQueue * lret = self->getUpdateOperations();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::getUpdateOperations
	static int _bind_getUpdateOperations(lua_State *L) {
		if (_lg_typecheck_getUpdateOperations_overload_1(L)) return _bind_getUpdateOperations_overload_1(L);
		if (_lg_typecheck_getUpdateOperations_overload_2(L)) return _bind_getUpdateOperations_overload_2(L);

		luaL_error(L, "error in function getUpdateOperations, cannot match any of the overloads for function getUpdateOperations:\n  getUpdateOperations()\n  getUpdateOperations()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation)
	static int _bind_addUpdateOperation(lua_State *L) {
		if (!_lg_typecheck_addUpdateOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation) function, expected prototype:\nvoid osgViewer::ViewerBase::addUpdateOperation(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::addUpdateOperation(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUpdateOperation(operation);

		return 0;
	}

	// void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation)
	static int _bind_removeUpdateOperation(lua_State *L) {
		if (!_lg_typecheck_removeUpdateOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation) function, expected prototype:\nvoid osgViewer::ViewerBase::removeUpdateOperation(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::removeUpdateOperation(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUpdateOperation(operation);

		return 0;
	}

	// void osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op)
	static int _bind_setRealizeOperation(lua_State *L) {
		if (!_lg_typecheck_setRealizeOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op) function, expected prototype:\nvoid osgViewer::ViewerBase::setRealizeOperation(osg::Operation * op)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* op=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRealizeOperation(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRealizeOperation(op);

		return 0;
	}

	// osg::Operation * osgViewer::ViewerBase::getRealizeOperation()
	static int _bind_getRealizeOperation(lua_State *L) {
		if (!_lg_typecheck_getRealizeOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::Operation * osgViewer::ViewerBase::getRealizeOperation() function, expected prototype:\nosg::Operation * osgViewer::ViewerBase::getRealizeOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Operation * osgViewer::ViewerBase::getRealizeOperation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Operation * lret = self->getRealizeOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Operation >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs)
	static int _bind_setRunFrameScheme(lua_State *L) {
		if (!_lg_typecheck_setRunFrameScheme(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs) function, expected prototype:\nvoid osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme fs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase::FrameScheme fs=(osgViewer::ViewerBase::FrameScheme)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRunFrameScheme(osgViewer::ViewerBase::FrameScheme). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRunFrameScheme(fs);

		return 0;
	}

	// osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const
	static int _bind_getRunFrameScheme(lua_State *L) {
		if (!_lg_typecheck_getRunFrameScheme(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const function, expected prototype:\nosgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::FrameScheme osgViewer::ViewerBase::getRunFrameScheme() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase::FrameScheme lret = self->getRunFrameScheme();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate)
	static int _bind_setRunMaxFrameRate(lua_State *L) {
		if (!_lg_typecheck_setRunMaxFrameRate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate) function, expected prototype:\nvoid osgViewer::ViewerBase::setRunMaxFrameRate(double frameRate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double frameRate=(double)lua_tonumber(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::setRunMaxFrameRate(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRunMaxFrameRate(frameRate);

		return 0;
	}

	// double osgViewer::ViewerBase::getRunMaxFrameRate() const
	static int _bind_getRunMaxFrameRate(lua_State *L) {
		if (!_lg_typecheck_getRunMaxFrameRate(L)) {
			luaL_error(L, "luna typecheck failed in double osgViewer::ViewerBase::getRunMaxFrameRate() const function, expected prototype:\ndouble osgViewer::ViewerBase::getRunMaxFrameRate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgViewer::ViewerBase::getRunMaxFrameRate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getRunMaxFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgViewer::ViewerBase::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ViewerBase::run() function, expected prototype:\nint osgViewer::ViewerBase::run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ViewerBase::run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::ViewerBase::checkNeedToDoFrame()
	static int _bind_checkNeedToDoFrame(lua_State *L) {
		if (!_lg_typecheck_checkNeedToDoFrame(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::checkNeedToDoFrame() function, expected prototype:\nbool osgViewer::ViewerBase::checkNeedToDoFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::checkNeedToDoFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkNeedToDoFrame();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	static int _bind_frame(lua_State *L) {
		if (!_lg_typecheck_frame(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : (double)DBL_MAX;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::frame(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->frame(simulationTime);

		return 0;
	}

	// void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)
	static int _bind_advance(lua_State *L) {
		if (!_lg_typecheck_advance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : (double)DBL_MAX;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::advance(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->advance(simulationTime);

		return 0;
	}

	// void osgViewer::ViewerBase::eventTraversal()
	static int _bind_eventTraversal(lua_State *L) {
		if (!_lg_typecheck_eventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::eventTraversal() function, expected prototype:\nvoid osgViewer::ViewerBase::eventTraversal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::eventTraversal(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->eventTraversal();

		return 0;
	}

	// void osgViewer::ViewerBase::updateTraversal()
	static int _bind_updateTraversal(lua_State *L) {
		if (!_lg_typecheck_updateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::updateTraversal() function, expected prototype:\nvoid osgViewer::ViewerBase::updateTraversal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::updateTraversal(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateTraversal();

		return 0;
	}

	// void osgViewer::ViewerBase::renderingTraversals()
	static int _bind_renderingTraversals(lua_State *L) {
		if (!_lg_typecheck_renderingTraversals(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::renderingTraversals() function, expected prototype:\nvoid osgViewer::ViewerBase::renderingTraversals()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::renderingTraversals(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->renderingTraversals();

		return 0;
	}

	// void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	static int _bind_getCameras(lua_State *L) {
		if (!_lg_typecheck_getCameras(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 18740017\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Cameras* cameras_ptr=(Luna< std::vector< osg::Camera * > >::checkSubType< osgViewer::ViewerBase::Cameras >(L,2));
		if( !cameras_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameras in osgViewer::ViewerBase::getCameras function");
		}
		osgViewer::ViewerBase::Cameras & cameras=*cameras_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getCameras(cameras, onlyActive);

		return 0;
	}

	// void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	static int _bind_getContexts(lua_State *L) {
		if (!_lg_typecheck_getContexts(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 48105087\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< std::vector< osg::GraphicsContext * > >::checkSubType< osgViewer::ViewerBase::Contexts >(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::ViewerBase::getContexts function");
		}
		osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getContexts(contexts, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	static int _bind_getWindows(lua_State *L) {
		if (!_lg_typecheck_getWindows(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98734151\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Windows* windows_ptr=(Luna< std::vector< osgViewer::GraphicsWindow * > >::checkSubType< osgViewer::ViewerBase::Windows >(L,2));
		if( !windows_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windows in osgViewer::ViewerBase::getWindows function");
		}
		osgViewer::ViewerBase::Windows & windows=*windows_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getWindows(windows, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)
	static int _bind_getAllThreads(lua_State *L) {
		if (!_lg_typecheck_getAllThreads(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 11304538\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Threads* threads_ptr=(Luna< std::vector< OpenThreads::Thread * > >::checkSubType< osgViewer::ViewerBase::Threads >(L,2));
		if( !threads_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg threads in osgViewer::ViewerBase::getAllThreads function");
		}
		osgViewer::ViewerBase::Threads & threads=*threads_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAllThreads(threads, onlyActive);

		return 0;
	}

	// void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)
	static int _bind_getOperationThreads(lua_State *L) {
		if (!_lg_typecheck_getOperationThreads(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 32227808\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::OperationThreads* threads_ptr=(Luna< std::vector< osg::OperationThread * > >::checkSubType< osgViewer::ViewerBase::OperationThreads >(L,2));
		if( !threads_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg threads in osgViewer::ViewerBase::getOperationThreads function");
		}
		osgViewer::ViewerBase::OperationThreads & threads=*threads_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getOperationThreads(threads, onlyActive);

		return 0;
	}

	// void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	static int _bind_getScenes(lua_State *L) {
		if (!_lg_typecheck_getScenes(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98997480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Scenes* scenes_ptr=(Luna< std::vector< osgViewer::Scene * > >::checkSubType< osgViewer::ViewerBase::Scenes >(L,2));
		if( !scenes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scenes in osgViewer::ViewerBase::getScenes function");
		}
		osgViewer::ViewerBase::Scenes & scenes=*scenes_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getScenes(scenes, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 2917259\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Views* views_ptr=(Luna< std::vector< osgViewer::View * > >::checkSubType< osgViewer::ViewerBase::Views >(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::ViewerBase::getViews function");
		}
		osgViewer::ViewerBase::Views & views=*views_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getViews(views, onlyValid);

		return 0;
	}

	// void osgViewer::ViewerBase::checkWindowStatus()
	static int _bind_checkWindowStatus_overload_1(lua_State *L) {
		if (!_lg_typecheck_checkWindowStatus_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::checkWindowStatus() function, expected prototype:\nvoid osgViewer::ViewerBase::checkWindowStatus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::checkWindowStatus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkWindowStatus();

		return 0;
	}

	// void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts)
	static int _bind_checkWindowStatus_overload_2(lua_State *L) {
		if (!_lg_typecheck_checkWindowStatus_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts) function, expected prototype:\nvoid osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts & contexts)\nClass arguments details:\narg 1 ID = 48105087\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< std::vector< osg::GraphicsContext * > >::checkSubType< osgViewer::ViewerBase::Contexts >(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::ViewerBase::checkWindowStatus function");
		}
		const osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::checkWindowStatus(const osgViewer::ViewerBase::Contexts &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkWindowStatus(contexts);

		return 0;
	}

	// Overload binder for osgViewer::ViewerBase::checkWindowStatus
	static int _bind_checkWindowStatus(lua_State *L) {
		if (_lg_typecheck_checkWindowStatus_overload_1(L)) return _bind_checkWindowStatus_overload_1(L);
		if (_lg_typecheck_checkWindowStatus_overload_2(L)) return _bind_checkWindowStatus_overload_2(L);

		luaL_error(L, "error in function checkWindowStatus, cannot match any of the overloads for function checkWindowStatus:\n  checkWindowStatus()\n  checkWindowStatus(const osgViewer::ViewerBase::Contexts &)\n");
		return 0;
	}

	// double osgViewer::ViewerBase::elapsedTime()
	static int _bind_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_elapsedTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgViewer::ViewerBase::elapsedTime() function, expected prototype:\ndouble osgViewer::ViewerBase::elapsedTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgViewer::ViewerBase::elapsedTime(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()
	static int _bind_getViewerFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getViewerFrameStamp(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrameStamp * lret = self->getViewerFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ViewerBase::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// bool osgViewer::ViewerBase::base_isSameKindAs(const osg::Object * arg1) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ViewerBase::base_isSameKindAs(const osg::Object * arg1) const function, expected prototype:\nbool osgViewer::ViewerBase::base_isSameKindAs(const osg::Object * arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ViewerBase::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ViewerBase::isSameKindAs(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ViewerBase::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::ViewerBase::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::ViewerBase::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::ViewerBase::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::setName(name);

		return 0;
	}

	// void osgViewer::ViewerBase::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::ViewerBase::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::computeDataVariance();

		return 0;
	}

	// void osgViewer::ViewerBase::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::ViewerBase::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::ViewerBase::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::ViewerBase::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::ViewerBase::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::ViewerBase::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ViewerBase::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::ViewerBase::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::ViewerBase::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::ViewerBase::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::ViewerBase::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ViewerBase::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ViewerBase::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::ViewerBase::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::ViewerBase::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgViewer::ViewerBase::base_setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel)
	static int _bind_base_setThreadingModel(lua_State *L) {
		if (!_lg_typecheck_base_setThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel) function, expected prototype:\nvoid osgViewer::ViewerBase::base_setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase::ThreadingModel threadingModel=(osgViewer::ViewerBase::ThreadingModel)lua_tointeger(L,2);

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_setThreadingModel(osgViewer::ViewerBase::ThreadingModel). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::setThreadingModel(threadingModel);

		return 0;
	}

	// osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::base_suggestBestThreadingModel()
	static int _bind_base_suggestBestThreadingModel(lua_State *L) {
		if (!_lg_typecheck_base_suggestBestThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::base_suggestBestThreadingModel() function, expected prototype:\nosgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::base_suggestBestThreadingModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::base_suggestBestThreadingModel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ViewerBase::ThreadingModel lret = self->ViewerBase::suggestBestThreadingModel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::base_setUpThreading()
	static int _bind_base_setUpThreading(lua_State *L) {
		if (!_lg_typecheck_base_setUpThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_setUpThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::base_setUpThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_setUpThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::setUpThreading();

		return 0;
	}

	// void osgViewer::ViewerBase::base_stopThreading()
	static int _bind_base_stopThreading(lua_State *L) {
		if (!_lg_typecheck_base_stopThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_stopThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::base_stopThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_stopThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::stopThreading();

		return 0;
	}

	// void osgViewer::ViewerBase::base_startThreading()
	static int _bind_base_startThreading(lua_State *L) {
		if (!_lg_typecheck_base_startThreading(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_startThreading() function, expected prototype:\nvoid osgViewer::ViewerBase::base_startThreading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_startThreading(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::startThreading();

		return 0;
	}

	// int osgViewer::ViewerBase::base_run()
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ViewerBase::base_run() function, expected prototype:\nint osgViewer::ViewerBase::base_run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ViewerBase::base_run(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ViewerBase::run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ViewerBase::base_frame(double simulationTime = DBL_MAX)
	static int _bind_base_frame(lua_State *L) {
		if (!_lg_typecheck_base_frame(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_frame(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::ViewerBase::base_frame(double simulationTime = DBL_MAX)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : (double)DBL_MAX;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_frame(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::frame(simulationTime);

		return 0;
	}

	// void osgViewer::ViewerBase::base_renderingTraversals()
	static int _bind_base_renderingTraversals(lua_State *L) {
		if (!_lg_typecheck_base_renderingTraversals(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_renderingTraversals() function, expected prototype:\nvoid osgViewer::ViewerBase::base_renderingTraversals()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_renderingTraversals(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::renderingTraversals();

		return 0;
	}

	// void osgViewer::ViewerBase::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	static int _bind_base_getWindows(lua_State *L) {
		if (!_lg_typecheck_base_getWindows(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::ViewerBase::base_getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98734151\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Windows* windows_ptr=(Luna< std::vector< osgViewer::GraphicsWindow * > >::checkSubType< osgViewer::ViewerBase::Windows >(L,2));
		if( !windows_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windows in osgViewer::ViewerBase::base_getWindows function");
		}
		osgViewer::ViewerBase::Windows & windows=*windows_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgViewer::ViewerBase* self=Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::base_getWindows(osgViewer::ViewerBase::Windows &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ViewerBase::getWindows(windows, onlyValid);

		return 0;
	}


	// Operator binds:

};

osgViewer::ViewerBase* LunaTraits< osgViewer::ViewerBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ViewerBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgViewer::ViewerBase::setViewerStats(osg::Stats * stats)
	// osg::Stats * osgViewer::ViewerBase::getViewerStats()
	// const osg::Stats * osgViewer::ViewerBase::getViewerStats() const
	// bool osgViewer::ViewerBase::readConfiguration(const std::string & filename)
	// bool osgViewer::ViewerBase::isRealized() const
	// void osgViewer::ViewerBase::realize()
	// bool osgViewer::ViewerBase::checkNeedToDoFrame()
	// void osgViewer::ViewerBase::advance(double simulationTime = DBL_MAX)
	// void osgViewer::ViewerBase::eventTraversal()
	// void osgViewer::ViewerBase::updateTraversal()
	// void osgViewer::ViewerBase::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	// void osgViewer::ViewerBase::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	// void osgViewer::ViewerBase::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)
	// void osgViewer::ViewerBase::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)
	// void osgViewer::ViewerBase::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	// void osgViewer::ViewerBase::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	// double osgViewer::ViewerBase::elapsedTime()
	// osg::FrameStamp * osgViewer::ViewerBase::getViewerFrameStamp()
	// void osgViewer::ViewerBase::getUsage(osg::ApplicationUsage & usage) const
	// void osgViewer::ViewerBase::viewerInit()
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const
}

void LunaTraits< osgViewer::ViewerBase >::_bind_dtor(osgViewer::ViewerBase* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ViewerBase >::className[] = "ViewerBase";
const char LunaTraits< osgViewer::ViewerBase >::fullName[] = "osgViewer::ViewerBase";
const char LunaTraits< osgViewer::ViewerBase >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ViewerBase >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgViewer::ViewerBase >::hash = 64483830;
const int LunaTraits< osgViewer::ViewerBase >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ViewerBase >::methods[] = {
	{"setViewerStats", &luna_wrapper_osgViewer_ViewerBase::_bind_setViewerStats},
	{"getViewerStats", &luna_wrapper_osgViewer_ViewerBase::_bind_getViewerStats},
	{"readConfiguration", &luna_wrapper_osgViewer_ViewerBase::_bind_readConfiguration},
	{"isRealized", &luna_wrapper_osgViewer_ViewerBase::_bind_isRealized},
	{"realize", &luna_wrapper_osgViewer_ViewerBase::_bind_realize},
	{"setThreadingModel", &luna_wrapper_osgViewer_ViewerBase::_bind_setThreadingModel},
	{"getThreadingModel", &luna_wrapper_osgViewer_ViewerBase::_bind_getThreadingModel},
	{"suggestBestThreadingModel", &luna_wrapper_osgViewer_ViewerBase::_bind_suggestBestThreadingModel},
	{"setUpThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_setUpThreading},
	{"areThreadsRunning", &luna_wrapper_osgViewer_ViewerBase::_bind_areThreadsRunning},
	{"stopThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_stopThreading},
	{"startThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_startThreading},
	{"setEndBarrierPosition", &luna_wrapper_osgViewer_ViewerBase::_bind_setEndBarrierPosition},
	{"getEndBarrierPosition", &luna_wrapper_osgViewer_ViewerBase::_bind_getEndBarrierPosition},
	{"setEndBarrierOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_setEndBarrierOperation},
	{"getEndBarrierOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_getEndBarrierOperation},
	{"setDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setDone},
	{"done", &luna_wrapper_osgViewer_ViewerBase::_bind_done},
	{"setEventVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_setEventVisitor},
	{"getEventVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_getEventVisitor},
	{"setKeyEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setKeyEventSetsDone},
	{"getKeyEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_getKeyEventSetsDone},
	{"setQuitEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_setQuitEventSetsDone},
	{"getQuitEventSetsDone", &luna_wrapper_osgViewer_ViewerBase::_bind_getQuitEventSetsDone},
	{"setReleaseContextAtEndOfFrameHint", &luna_wrapper_osgViewer_ViewerBase::_bind_setReleaseContextAtEndOfFrameHint},
	{"getReleaseContextAtEndOfFrameHint", &luna_wrapper_osgViewer_ViewerBase::_bind_getReleaseContextAtEndOfFrameHint},
	{"setUpdateVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_setUpdateVisitor},
	{"getUpdateVisitor", &luna_wrapper_osgViewer_ViewerBase::_bind_getUpdateVisitor},
	{"setUpdateOperations", &luna_wrapper_osgViewer_ViewerBase::_bind_setUpdateOperations},
	{"getUpdateOperations", &luna_wrapper_osgViewer_ViewerBase::_bind_getUpdateOperations},
	{"addUpdateOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_addUpdateOperation},
	{"removeUpdateOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_removeUpdateOperation},
	{"setRealizeOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_setRealizeOperation},
	{"getRealizeOperation", &luna_wrapper_osgViewer_ViewerBase::_bind_getRealizeOperation},
	{"setRunFrameScheme", &luna_wrapper_osgViewer_ViewerBase::_bind_setRunFrameScheme},
	{"getRunFrameScheme", &luna_wrapper_osgViewer_ViewerBase::_bind_getRunFrameScheme},
	{"setRunMaxFrameRate", &luna_wrapper_osgViewer_ViewerBase::_bind_setRunMaxFrameRate},
	{"getRunMaxFrameRate", &luna_wrapper_osgViewer_ViewerBase::_bind_getRunMaxFrameRate},
	{"run", &luna_wrapper_osgViewer_ViewerBase::_bind_run},
	{"checkNeedToDoFrame", &luna_wrapper_osgViewer_ViewerBase::_bind_checkNeedToDoFrame},
	{"frame", &luna_wrapper_osgViewer_ViewerBase::_bind_frame},
	{"advance", &luna_wrapper_osgViewer_ViewerBase::_bind_advance},
	{"eventTraversal", &luna_wrapper_osgViewer_ViewerBase::_bind_eventTraversal},
	{"updateTraversal", &luna_wrapper_osgViewer_ViewerBase::_bind_updateTraversal},
	{"renderingTraversals", &luna_wrapper_osgViewer_ViewerBase::_bind_renderingTraversals},
	{"getCameras", &luna_wrapper_osgViewer_ViewerBase::_bind_getCameras},
	{"getContexts", &luna_wrapper_osgViewer_ViewerBase::_bind_getContexts},
	{"getWindows", &luna_wrapper_osgViewer_ViewerBase::_bind_getWindows},
	{"getAllThreads", &luna_wrapper_osgViewer_ViewerBase::_bind_getAllThreads},
	{"getOperationThreads", &luna_wrapper_osgViewer_ViewerBase::_bind_getOperationThreads},
	{"getScenes", &luna_wrapper_osgViewer_ViewerBase::_bind_getScenes},
	{"getViews", &luna_wrapper_osgViewer_ViewerBase::_bind_getViews},
	{"checkWindowStatus", &luna_wrapper_osgViewer_ViewerBase::_bind_checkWindowStatus},
	{"elapsedTime", &luna_wrapper_osgViewer_ViewerBase::_bind_elapsedTime},
	{"getViewerFrameStamp", &luna_wrapper_osgViewer_ViewerBase::_bind_getViewerFrameStamp},
	{"getUsage", &luna_wrapper_osgViewer_ViewerBase::_bind_getUsage},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_ViewerBase::_bind_base_isSameKindAs},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_ViewerBase::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_ViewerBase::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_ViewerBase::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_ViewerBase::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_ViewerBase::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_ViewerBase::_bind_base_releaseGLObjects},
	{"base_setThreadingModel", &luna_wrapper_osgViewer_ViewerBase::_bind_base_setThreadingModel},
	{"base_suggestBestThreadingModel", &luna_wrapper_osgViewer_ViewerBase::_bind_base_suggestBestThreadingModel},
	{"base_setUpThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_base_setUpThreading},
	{"base_stopThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_base_stopThreading},
	{"base_startThreading", &luna_wrapper_osgViewer_ViewerBase::_bind_base_startThreading},
	{"base_run", &luna_wrapper_osgViewer_ViewerBase::_bind_base_run},
	{"base_frame", &luna_wrapper_osgViewer_ViewerBase::_bind_base_frame},
	{"base_renderingTraversals", &luna_wrapper_osgViewer_ViewerBase::_bind_base_renderingTraversals},
	{"base_getWindows", &luna_wrapper_osgViewer_ViewerBase::_bind_base_getWindows},
	{"fromVoid", &luna_wrapper_osgViewer_ViewerBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_ViewerBase::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_ViewerBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ViewerBase >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ViewerBase::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ViewerBase >::enumValues[] = {
	{"SingleThreaded", osgViewer::ViewerBase::SingleThreaded},
	{"CullDrawThreadPerContext", osgViewer::ViewerBase::CullDrawThreadPerContext},
	{"ThreadPerContext", osgViewer::ViewerBase::ThreadPerContext},
	{"DrawThreadPerContext", osgViewer::ViewerBase::DrawThreadPerContext},
	{"CullThreadPerCameraDrawThreadPerContext", osgViewer::ViewerBase::CullThreadPerCameraDrawThreadPerContext},
	{"ThreadPerCamera", osgViewer::ViewerBase::ThreadPerCamera},
	{"AutomaticSelection", osgViewer::ViewerBase::AutomaticSelection},
	{"BeforeSwapBuffers", osgViewer::ViewerBase::BeforeSwapBuffers},
	{"AfterSwapBuffers", osgViewer::ViewerBase::AfterSwapBuffers},
	{"ON_DEMAND", osgViewer::ViewerBase::ON_DEMAND},
	{"CONTINUOUS", osgViewer::ViewerBase::CONTINUOUS},
	{0,0}
};


