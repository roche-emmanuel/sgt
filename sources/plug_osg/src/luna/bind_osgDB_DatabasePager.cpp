#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DatabasePager.h>

class luna_wrapper_osgDB_DatabasePager {
public:
	typedef Luna< osgDB::DatabasePager > luna_t;

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

		osgDB::DatabasePager* self= (osgDB::DatabasePager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::DatabasePager >::push(L,self,false);
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
		//osgDB::DatabasePager* ptr= dynamic_cast< osgDB::DatabasePager* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DatabasePager* ptr= luna_caster< osg::Referenced, osgDB::DatabasePager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabasePager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestNodeFile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,52841328) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84922662) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSchedulePriority(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpThreads(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabasePagerThreadPause(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePagerThreadPause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceptNewDatabaseRequests(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAcceptNewDatabaseRequests(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFramesActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_signalBeginFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_signalEndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_registerPagedLODs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoPreCompile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoPreCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTargetMaximumNumberOfPageLOD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTargetMaximumNumberOfPageLOD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawablePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawablePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setApplyPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplyPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxAnisotropyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxAnisotropyPolicy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileRequestListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataToCompileListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataToMergeListSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRequestsInProgress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumTimeToMergeTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaximumTimeToMergeTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAverageTimeToMergeTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prototype(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requestNodeFile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,52841328) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84922662) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_signalBeginFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_signalEndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_registerPagedLODs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::DatabasePager::DatabasePager()
	static osgDB::DatabasePager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager() function, expected prototype:\nosgDB::DatabasePager::DatabasePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::DatabasePager();
	}

	// osgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs)
	static osgDB::DatabasePager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs) function, expected prototype:\nosgDB::DatabasePager::DatabasePager(const osgDB::DatabasePager & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::DatabasePager* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgDB::DatabasePager::DatabasePager function");
		}
		const osgDB::DatabasePager & rhs=*rhs_ptr;

		return new osgDB::DatabasePager(rhs);
	}

	// osgDB::DatabasePager::DatabasePager(lua_Table * data)
	static osgDB::DatabasePager* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager(lua_Table * data) function, expected prototype:\nosgDB::DatabasePager::DatabasePager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_DatabasePager(L,NULL);
	}

	// osgDB::DatabasePager::DatabasePager(lua_Table * data, const osgDB::DatabasePager & rhs)
	static osgDB::DatabasePager* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DatabasePager(lua_Table * data, const osgDB::DatabasePager & rhs) function, expected prototype:\nosgDB::DatabasePager::DatabasePager(lua_Table * data, const osgDB::DatabasePager & rhs)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::DatabasePager* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgDB::DatabasePager::DatabasePager function");
		}
		const osgDB::DatabasePager & rhs=*rhs_ptr;

		return new wrapper_osgDB_DatabasePager(L,NULL, rhs);
	}

	// Overload binder for osgDB::DatabasePager::DatabasePager
	static osgDB::DatabasePager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DatabasePager, cannot match any of the overloads for function DatabasePager:\n  DatabasePager()\n  DatabasePager(const osgDB::DatabasePager &)\n  DatabasePager(lua_Table *)\n  DatabasePager(lua_Table *, const osgDB::DatabasePager &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgDB::DatabasePager::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabasePager::className() const function, expected prototype:\nconst char * osgDB::DatabasePager::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabasePager::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgDB::DatabasePager * osgDB::DatabasePager::clone() const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgDB::DatabasePager::clone() const function, expected prototype:\nosgDB::DatabasePager * osgDB::DatabasePager::clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgDB::DatabasePager::clone() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabasePager * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// void osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)
	static int _bind_requestNodeFile(lua_State *L) {
		if (!_lg_typecheck_requestNodeFile(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options) function, expected prototype:\nvoid osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)\nClass arguments details:\narg 2 ID = 52841328\narg 4 ID = 50169651\narg 5 ID = [unknown]\narg 6 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,3));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgDB::DatabasePager::requestNodeFile function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;
		float priority=(float)lua_tonumber(L,4);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,5));
		osg::ref_ptr< osg::Referenced > databaseRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,6));
		const osg::Referenced* options=(Luna< osg::Referenced >::check(L,7));

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::requestNodeFile(const std::string &, osg::NodePath &, float, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestNodeFile(fileName, nodePath, priority, framestamp, databaseRequest, options);

		return 0;
	}

	// int osgDB::DatabasePager::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority)
	static int _bind_setSchedulePriority(lua_State *L) {
		if (!_lg_typecheck_setSchedulePriority(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority) function, expected prototype:\nint osgDB::DatabasePager::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread::ThreadPriority priority=(OpenThreads::Thread::ThreadPriority)lua_tointeger(L,2);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::setSchedulePriority(OpenThreads::Thread::ThreadPriority). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setSchedulePriority(priority);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgDB::DatabasePager::cancel()
	static int _bind_cancel(lua_State *L) {
		if (!_lg_typecheck_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::cancel() function, expected prototype:\nint osgDB::DatabasePager::cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::DatabasePager::isRunning() const
	static int _bind_isRunning(lua_State *L) {
		if (!_lg_typecheck_isRunning(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::isRunning() const function, expected prototype:\nbool osgDB::DatabasePager::isRunning() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::isRunning() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::clear() function, expected prototype:\nvoid osgDB::DatabasePager::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osgDB::DatabasePager::setUpThreads(unsigned int totalNumThreads = 2, unsigned int numHttpThreads = 1)
	static int _bind_setUpThreads(lua_State *L) {
		if (!_lg_typecheck_setUpThreads(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setUpThreads(unsigned int totalNumThreads = 2, unsigned int numHttpThreads = 1) function, expected prototype:\nvoid osgDB::DatabasePager::setUpThreads(unsigned int totalNumThreads = 2, unsigned int numHttpThreads = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int totalNumThreads=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)2;
		unsigned int numHttpThreads=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setUpThreads(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpThreads(totalNumThreads, numHttpThreads);

		return 0;
	}

	// void osgDB::DatabasePager::setDatabasePagerThreadPause(bool pause)
	static int _bind_setDatabasePagerThreadPause(lua_State *L) {
		if (!_lg_typecheck_setDatabasePagerThreadPause(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setDatabasePagerThreadPause(bool pause) function, expected prototype:\nvoid osgDB::DatabasePager::setDatabasePagerThreadPause(bool pause)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pause=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setDatabasePagerThreadPause(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePagerThreadPause(pause);

		return 0;
	}

	// bool osgDB::DatabasePager::getDatabasePagerThreadPause() const
	static int _bind_getDatabasePagerThreadPause(lua_State *L) {
		if (!_lg_typecheck_getDatabasePagerThreadPause(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getDatabasePagerThreadPause() const function, expected prototype:\nbool osgDB::DatabasePager::getDatabasePagerThreadPause() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getDatabasePagerThreadPause() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDatabasePagerThreadPause();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests)
	static int _bind_setAcceptNewDatabaseRequests(lua_State *L) {
		if (!_lg_typecheck_setAcceptNewDatabaseRequests(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests) function, expected prototype:\nvoid osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool acceptNewRequests)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool acceptNewRequests=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setAcceptNewDatabaseRequests(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAcceptNewDatabaseRequests(acceptNewRequests);

		return 0;
	}

	// bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const
	static int _bind_getAcceptNewDatabaseRequests(lua_State *L) {
		if (!_lg_typecheck_getAcceptNewDatabaseRequests(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const function, expected prototype:\nbool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getAcceptNewDatabaseRequests() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAcceptNewDatabaseRequests();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgDB::DatabasePager::getNumFramesActive() const
	static int _bind_getNumFramesActive(lua_State *L) {
		if (!_lg_typecheck_getNumFramesActive(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::getNumFramesActive() const function, expected prototype:\nint osgDB::DatabasePager::getNumFramesActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::getNumFramesActive() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumFramesActive();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp)
	static int _bind_signalBeginFrame(lua_State *L) {
		if (!_lg_typecheck_signalBeginFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->signalBeginFrame(framestamp);

		return 0;
	}

	// void osgDB::DatabasePager::signalEndFrame()
	static int _bind_signalEndFrame(lua_State *L) {
		if (!_lg_typecheck_signalEndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::signalEndFrame() function, expected prototype:\nvoid osgDB::DatabasePager::signalEndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::signalEndFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->signalEndFrame();

		return 0;
	}

	// void osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)
	static int _bind_registerPagedLODs(lua_State *L) {
		if (!_lg_typecheck_registerPagedLODs(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0) function, expected prototype:\nvoid osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int frameNumber=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::registerPagedLODs(osg::Node *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->registerPagedLODs(subgraph, frameNumber);

		return 0;
	}

	// void osgDB::DatabasePager::setDoPreCompile(bool flag)
	static int _bind_setDoPreCompile(lua_State *L) {
		if (!_lg_typecheck_setDoPreCompile(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setDoPreCompile(bool flag) function, expected prototype:\nvoid osgDB::DatabasePager::setDoPreCompile(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setDoPreCompile(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDoPreCompile(flag);

		return 0;
	}

	// bool osgDB::DatabasePager::getDoPreCompile() const
	static int _bind_getDoPreCompile(lua_State *L) {
		if (!_lg_typecheck_getDoPreCompile(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getDoPreCompile() const function, expected prototype:\nbool osgDB::DatabasePager::getDoPreCompile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getDoPreCompile() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDoPreCompile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target)
	static int _bind_setTargetMaximumNumberOfPageLOD(lua_State *L) {
		if (!_lg_typecheck_setTargetMaximumNumberOfPageLOD(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target) function, expected prototype:\nvoid osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setTargetMaximumNumberOfPageLOD(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTargetMaximumNumberOfPageLOD(target);

		return 0;
	}

	// unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const
	static int _bind_getTargetMaximumNumberOfPageLOD(lua_State *L) {
		if (!_lg_typecheck_getTargetMaximumNumberOfPageLOD(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getTargetMaximumNumberOfPageLOD() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTargetMaximumNumberOfPageLOD();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy)
	static int _bind_setDrawablePolicy(lua_State *L) {
		if (!_lg_typecheck_setDrawablePolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy) function, expected prototype:\nvoid osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy policy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DatabasePager::DrawablePolicy policy=(osgDB::DatabasePager::DrawablePolicy)lua_tointeger(L,2);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setDrawablePolicy(osgDB::DatabasePager::DrawablePolicy). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawablePolicy(policy);

		return 0;
	}

	// osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const
	static int _bind_getDrawablePolicy(lua_State *L) {
		if (!_lg_typecheck_getDrawablePolicy(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const function, expected prototype:\nosgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager::DrawablePolicy osgDB::DatabasePager::getDrawablePolicy() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabasePager::DrawablePolicy lret = self->getDrawablePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages)
	static int _bind_setApplyPBOToImages(lua_State *L) {
		if (!_lg_typecheck_setApplyPBOToImages(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages) function, expected prototype:\nvoid osgDB::DatabasePager::setApplyPBOToImages(bool assignPBOToImages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool assignPBOToImages=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setApplyPBOToImages(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setApplyPBOToImages(assignPBOToImages);

		return 0;
	}

	// bool osgDB::DatabasePager::getApplyPBOToImages() const
	static int _bind_getApplyPBOToImages(lua_State *L) {
		if (!_lg_typecheck_getApplyPBOToImages(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getApplyPBOToImages() const function, expected prototype:\nbool osgDB::DatabasePager::getApplyPBOToImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getApplyPBOToImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getApplyPBOToImages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef)
	static int _bind_setUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if (!_lg_typecheck_setUnrefImageDataAfterApplyPolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef) function, expected prototype:\nvoid osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool changeAutoUnRef, bool valueAutoUnRef)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool changeAutoUnRef=(bool)(lua_toboolean(L,2)==1);
		bool valueAutoUnRef=(bool)(lua_toboolean(L,3)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setUnrefImageDataAfterApplyPolicy(bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUnrefImageDataAfterApplyPolicy(changeAutoUnRef, valueAutoUnRef);

		return 0;
	}

	// void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const
	static int _bind_getUnrefImageDataAfterApplyPolicy(lua_State *L) {
		if (!_lg_typecheck_getUnrefImageDataAfterApplyPolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const function, expected prototype:\nvoid osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool & changeAutoUnRef, bool & valueAutoUnRef) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool changeAutoUnRef=(bool)(lua_toboolean(L,2)==1);
		bool valueAutoUnRef=(bool)(lua_toboolean(L,3)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::getUnrefImageDataAfterApplyPolicy(bool &, bool &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUnrefImageDataAfterApplyPolicy(changeAutoUnRef, valueAutoUnRef);

		lua_pushboolean(L,changeAutoUnRef?1:0);
		lua_pushboolean(L,valueAutoUnRef?1:0);
		return 2;
	}

	// void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy)
	static int _bind_setMaxAnisotropyPolicy(lua_State *L) {
		if (!_lg_typecheck_setMaxAnisotropyPolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy) function, expected prototype:\nvoid osgDB::DatabasePager::setMaxAnisotropyPolicy(bool changeAnisotropy, float valueAnisotropy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool changeAnisotropy=(bool)(lua_toboolean(L,2)==1);
		float valueAnisotropy=(float)lua_tonumber(L,3);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::setMaxAnisotropyPolicy(bool, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxAnisotropyPolicy(changeAnisotropy, valueAnisotropy);

		return 0;
	}

	// void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const
	static int _bind_getMaxAnisotropyPolicy(lua_State *L) {
		if (!_lg_typecheck_getMaxAnisotropyPolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const function, expected prototype:\nvoid osgDB::DatabasePager::getMaxAnisotropyPolicy(bool & changeAnisotropy, float & valueAnisotropy) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool changeAnisotropy=(bool)(lua_toboolean(L,2)==1);
		float valueAnisotropy=(float)lua_tonumber(L,3);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::getMaxAnisotropyPolicy(bool &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getMaxAnisotropyPolicy(changeAnisotropy, valueAnisotropy);

		lua_pushboolean(L,changeAnisotropy?1:0);
		lua_pushnumber(L,valueAnisotropy);
		return 2;
	}

	// bool osgDB::DatabasePager::requiresUpdateSceneGraph() const
	static int _bind_requiresUpdateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::requiresUpdateSceneGraph() const function, expected prototype:\nbool osgDB::DatabasePager::requiresUpdateSceneGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::requiresUpdateSceneGraph() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateSceneGraph();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_updateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::DatabasePager::updateSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSceneGraph(frameStamp);

		return 0;
	}

	// unsigned int osgDB::DatabasePager::getFileRequestListSize() const
	static int _bind_getFileRequestListSize(lua_State *L) {
		if (!_lg_typecheck_getFileRequestListSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getFileRequestListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getFileRequestListSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getFileRequestListSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFileRequestListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::DatabasePager::getDataToCompileListSize() const
	static int _bind_getDataToCompileListSize(lua_State *L) {
		if (!_lg_typecheck_getDataToCompileListSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getDataToCompileListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getDataToCompileListSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getDataToCompileListSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDataToCompileListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::DatabasePager::getDataToMergeListSize() const
	static int _bind_getDataToMergeListSize(lua_State *L) {
		if (!_lg_typecheck_getDataToMergeListSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::DatabasePager::getDataToMergeListSize() const function, expected prototype:\nunsigned int osgDB::DatabasePager::getDataToMergeListSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::DatabasePager::getDataToMergeListSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDataToMergeListSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::DatabasePager::getRequestsInProgress() const
	static int _bind_getRequestsInProgress(lua_State *L) {
		if (!_lg_typecheck_getRequestsInProgress(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::getRequestsInProgress() const function, expected prototype:\nbool osgDB::DatabasePager::getRequestsInProgress() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::getRequestsInProgress() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getRequestsInProgress();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osgDB::DatabasePager::getMinimumTimeToMergeTile() const
	static int _bind_getMinimumTimeToMergeTile(lua_State *L) {
		if (!_lg_typecheck_getMinimumTimeToMergeTile(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getMinimumTimeToMergeTile() const function, expected prototype:\ndouble osgDB::DatabasePager::getMinimumTimeToMergeTile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getMinimumTimeToMergeTile() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinimumTimeToMergeTile();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::DatabasePager::getMaximumTimeToMergeTile() const
	static int _bind_getMaximumTimeToMergeTile(lua_State *L) {
		if (!_lg_typecheck_getMaximumTimeToMergeTile(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getMaximumTimeToMergeTile() const function, expected prototype:\ndouble osgDB::DatabasePager::getMaximumTimeToMergeTile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getMaximumTimeToMergeTile() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMaximumTimeToMergeTile();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::DatabasePager::getAverageTimeToMergeTiles() const
	static int _bind_getAverageTimeToMergeTiles(lua_State *L) {
		if (!_lg_typecheck_getAverageTimeToMergeTiles(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::DatabasePager::getAverageTimeToMergeTiles() const function, expected prototype:\ndouble osgDB::DatabasePager::getAverageTimeToMergeTiles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::DatabasePager::getAverageTimeToMergeTiles() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAverageTimeToMergeTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::DatabasePager::resetStats()
	static int _bind_resetStats(lua_State *L) {
		if (!_lg_typecheck_resetStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::resetStats() function, expected prototype:\nvoid osgDB::DatabasePager::resetStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::resetStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resetStats();

		return 0;
	}

	// static osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype()
	static int _bind_prototype(lua_State *L) {
		if (!_lg_typecheck_prototype(L)) {
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype() function, expected prototype:\nstatic osg::ref_ptr< osgDB::DatabasePager > & osgDB::DatabasePager::prototype()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ref_ptr< osgDB::DatabasePager > & lret = osgDB::DatabasePager::prototype();
		Luna< osgDB::DatabasePager >::push(L,lret.get(),false);

		return 1;
	}

	// static osgDB::DatabasePager * osgDB::DatabasePager::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luaL_error(L, "luna typecheck failed in static osgDB::DatabasePager * osgDB::DatabasePager::create() function, expected prototype:\nstatic osgDB::DatabasePager * osgDB::DatabasePager::create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager * lret = osgDB::DatabasePager::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// void osgDB::DatabasePager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::DatabasePager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgDB::DatabasePager::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabasePager::base_className() const function, expected prototype:\nconst char * osgDB::DatabasePager::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabasePager::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DatabasePager::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgDB::DatabasePager * osgDB::DatabasePager::base_clone() const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgDB::DatabasePager::base_clone() const function, expected prototype:\nosgDB::DatabasePager * osgDB::DatabasePager::base_clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgDB::DatabasePager::base_clone() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabasePager * lret = self->DatabasePager::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// void osgDB::DatabasePager::base_requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)
	static int _bind_base_requestNodeFile(lua_State *L) {
		if (!_lg_typecheck_base_requestNodeFile(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options) function, expected prototype:\nvoid osgDB::DatabasePager::base_requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)\nClass arguments details:\narg 2 ID = 52841328\narg 4 ID = 50169651\narg 5 ID = [unknown]\narg 6 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,3));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgDB::DatabasePager::base_requestNodeFile function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;
		float priority=(float)lua_tonumber(L,4);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,5));
		osg::ref_ptr< osg::Referenced > databaseRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,6));
		const osg::Referenced* options=(Luna< osg::Referenced >::check(L,7));

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_requestNodeFile(const std::string &, osg::NodePath &, float, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::requestNodeFile(fileName, nodePath, priority, framestamp, databaseRequest, options);

		return 0;
	}

	// int osgDB::DatabasePager::base_cancel()
	static int _bind_base_cancel(lua_State *L) {
		if (!_lg_typecheck_base_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::DatabasePager::base_cancel() function, expected prototype:\nint osgDB::DatabasePager::base_cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::DatabasePager::base_cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DatabasePager::cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::DatabasePager::base_isRunning() const
	static int _bind_base_isRunning(lua_State *L) {
		if (!_lg_typecheck_base_isRunning(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabasePager::base_isRunning() const function, expected prototype:\nbool osgDB::DatabasePager::base_isRunning() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabasePager::base_isRunning() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DatabasePager::isRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabasePager::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_clear() function, expected prototype:\nvoid osgDB::DatabasePager::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::clear();

		return 0;
	}

	// void osgDB::DatabasePager::base_signalBeginFrame(const osg::FrameStamp * framestamp)
	static int _bind_base_signalBeginFrame(lua_State *L) {
		if (!_lg_typecheck_base_signalBeginFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_signalBeginFrame(const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osgDB::DatabasePager::base_signalBeginFrame(const osg::FrameStamp * framestamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_signalBeginFrame(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::signalBeginFrame(framestamp);

		return 0;
	}

	// void osgDB::DatabasePager::base_signalEndFrame()
	static int _bind_base_signalEndFrame(lua_State *L) {
		if (!_lg_typecheck_base_signalEndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_signalEndFrame() function, expected prototype:\nvoid osgDB::DatabasePager::base_signalEndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_signalEndFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::signalEndFrame();

		return 0;
	}

	// void osgDB::DatabasePager::base_registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)
	static int _bind_base_registerPagedLODs(lua_State *L) {
		if (!_lg_typecheck_base_registerPagedLODs(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0) function, expected prototype:\nvoid osgDB::DatabasePager::base_registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Node* subgraph=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int frameNumber=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_registerPagedLODs(osg::Node *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::registerPagedLODs(subgraph, frameNumber);

		return 0;
	}

	// void osgDB::DatabasePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_base_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_base_updateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::DatabasePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::DatabasePager::base_updateSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::DatabasePager* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::base_updateSceneGraph(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabasePager::updateSceneGraph(frameStamp);

		return 0;
	}


	// Operator binds:

};

osgDB::DatabasePager* LunaTraits< osgDB::DatabasePager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabasePager::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabasePager >::_bind_dtor(osgDB::DatabasePager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabasePager >::className[] = "DatabasePager";
const char LunaTraits< osgDB::DatabasePager >::fullName[] = "osgDB::DatabasePager";
const char LunaTraits< osgDB::DatabasePager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabasePager >::parents[] = {"osg.NodeVisitor_DatabaseRequestHandler", 0};
const int LunaTraits< osgDB::DatabasePager >::hash = 75878640;
const int LunaTraits< osgDB::DatabasePager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabasePager >::methods[] = {
	{"className", &luna_wrapper_osgDB_DatabasePager::_bind_className},
	{"clone", &luna_wrapper_osgDB_DatabasePager::_bind_clone},
	{"requestNodeFile", &luna_wrapper_osgDB_DatabasePager::_bind_requestNodeFile},
	{"setSchedulePriority", &luna_wrapper_osgDB_DatabasePager::_bind_setSchedulePriority},
	{"cancel", &luna_wrapper_osgDB_DatabasePager::_bind_cancel},
	{"isRunning", &luna_wrapper_osgDB_DatabasePager::_bind_isRunning},
	{"clear", &luna_wrapper_osgDB_DatabasePager::_bind_clear},
	{"setUpThreads", &luna_wrapper_osgDB_DatabasePager::_bind_setUpThreads},
	{"setDatabasePagerThreadPause", &luna_wrapper_osgDB_DatabasePager::_bind_setDatabasePagerThreadPause},
	{"getDatabasePagerThreadPause", &luna_wrapper_osgDB_DatabasePager::_bind_getDatabasePagerThreadPause},
	{"setAcceptNewDatabaseRequests", &luna_wrapper_osgDB_DatabasePager::_bind_setAcceptNewDatabaseRequests},
	{"getAcceptNewDatabaseRequests", &luna_wrapper_osgDB_DatabasePager::_bind_getAcceptNewDatabaseRequests},
	{"getNumFramesActive", &luna_wrapper_osgDB_DatabasePager::_bind_getNumFramesActive},
	{"signalBeginFrame", &luna_wrapper_osgDB_DatabasePager::_bind_signalBeginFrame},
	{"signalEndFrame", &luna_wrapper_osgDB_DatabasePager::_bind_signalEndFrame},
	{"registerPagedLODs", &luna_wrapper_osgDB_DatabasePager::_bind_registerPagedLODs},
	{"setDoPreCompile", &luna_wrapper_osgDB_DatabasePager::_bind_setDoPreCompile},
	{"getDoPreCompile", &luna_wrapper_osgDB_DatabasePager::_bind_getDoPreCompile},
	{"setTargetMaximumNumberOfPageLOD", &luna_wrapper_osgDB_DatabasePager::_bind_setTargetMaximumNumberOfPageLOD},
	{"getTargetMaximumNumberOfPageLOD", &luna_wrapper_osgDB_DatabasePager::_bind_getTargetMaximumNumberOfPageLOD},
	{"setDrawablePolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setDrawablePolicy},
	{"getDrawablePolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getDrawablePolicy},
	{"setApplyPBOToImages", &luna_wrapper_osgDB_DatabasePager::_bind_setApplyPBOToImages},
	{"getApplyPBOToImages", &luna_wrapper_osgDB_DatabasePager::_bind_getApplyPBOToImages},
	{"setUnrefImageDataAfterApplyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setUnrefImageDataAfterApplyPolicy},
	{"getUnrefImageDataAfterApplyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getUnrefImageDataAfterApplyPolicy},
	{"setMaxAnisotropyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_setMaxAnisotropyPolicy},
	{"getMaxAnisotropyPolicy", &luna_wrapper_osgDB_DatabasePager::_bind_getMaxAnisotropyPolicy},
	{"requiresUpdateSceneGraph", &luna_wrapper_osgDB_DatabasePager::_bind_requiresUpdateSceneGraph},
	{"updateSceneGraph", &luna_wrapper_osgDB_DatabasePager::_bind_updateSceneGraph},
	{"getFileRequestListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getFileRequestListSize},
	{"getDataToCompileListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getDataToCompileListSize},
	{"getDataToMergeListSize", &luna_wrapper_osgDB_DatabasePager::_bind_getDataToMergeListSize},
	{"getRequestsInProgress", &luna_wrapper_osgDB_DatabasePager::_bind_getRequestsInProgress},
	{"getMinimumTimeToMergeTile", &luna_wrapper_osgDB_DatabasePager::_bind_getMinimumTimeToMergeTile},
	{"getMaximumTimeToMergeTile", &luna_wrapper_osgDB_DatabasePager::_bind_getMaximumTimeToMergeTile},
	{"getAverageTimeToMergeTiles", &luna_wrapper_osgDB_DatabasePager::_bind_getAverageTimeToMergeTiles},
	{"resetStats", &luna_wrapper_osgDB_DatabasePager::_bind_resetStats},
	{"prototype", &luna_wrapper_osgDB_DatabasePager::_bind_prototype},
	{"create", &luna_wrapper_osgDB_DatabasePager::_bind_create},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_DatabasePager::_bind_base_setThreadSafeRefUnref},
	{"base_className", &luna_wrapper_osgDB_DatabasePager::_bind_base_className},
	{"base_clone", &luna_wrapper_osgDB_DatabasePager::_bind_base_clone},
	{"base_requestNodeFile", &luna_wrapper_osgDB_DatabasePager::_bind_base_requestNodeFile},
	{"base_cancel", &luna_wrapper_osgDB_DatabasePager::_bind_base_cancel},
	{"base_isRunning", &luna_wrapper_osgDB_DatabasePager::_bind_base_isRunning},
	{"base_clear", &luna_wrapper_osgDB_DatabasePager::_bind_base_clear},
	{"base_signalBeginFrame", &luna_wrapper_osgDB_DatabasePager::_bind_base_signalBeginFrame},
	{"base_signalEndFrame", &luna_wrapper_osgDB_DatabasePager::_bind_base_signalEndFrame},
	{"base_registerPagedLODs", &luna_wrapper_osgDB_DatabasePager::_bind_base_registerPagedLODs},
	{"base_updateSceneGraph", &luna_wrapper_osgDB_DatabasePager::_bind_base_updateSceneGraph},
	{"fromVoid", &luna_wrapper_osgDB_DatabasePager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_DatabasePager::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_DatabasePager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabasePager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabasePager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabasePager >::enumValues[] = {
	{"DO_NOT_MODIFY_DRAWABLE_SETTINGS", osgDB::DatabasePager::DO_NOT_MODIFY_DRAWABLE_SETTINGS},
	{"USE_DISPLAY_LISTS", osgDB::DatabasePager::USE_DISPLAY_LISTS},
	{"USE_VERTEX_BUFFER_OBJECTS", osgDB::DatabasePager::USE_VERTEX_BUFFER_OBJECTS},
	{"USE_VERTEX_ARRAYS", osgDB::DatabasePager::USE_VERTEX_ARRAYS},
	{0,0}
};


