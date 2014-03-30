#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PagedLOD.h>

class luna_wrapper_osg_PagedLOD {
public:
	typedef Luna< osg::PagedLOD > luna_t;

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

		osg::PagedLOD* self= (osg::PagedLOD*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PagedLOD >::push(L,self,false);
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
		//osg::PagedLOD* ptr= dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		osg::PagedLOD* ptr= luna_caster< osg::Referenced, osg::PagedLOD >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PagedLOD >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFileNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPriorityOffsets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPriorityScales(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumExpiryTime(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumExpiryTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMinimumExpiryTimes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumExpiryFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumExpiryFrames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMinimumExpiryFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumTimeStamps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFrameNumbers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameNumberOfLastTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumberOfLastTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumChildrenThatCannotBeExpired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenThatCannotBeExpired(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisableExternalChildrenPaging(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisableExternalChildrenPaging(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeExpiredChildren(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,88937738) ) return false;
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

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeExpiredChildren(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,88937738) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PagedLOD::PagedLOD()
	static osg::PagedLOD* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD() function, expected prototype:\nosg::PagedLOD::PagedLOD()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PagedLOD();
	}

	// osg::PagedLOD::PagedLOD(const osg::PagedLOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PagedLOD* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD(const osg::PagedLOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PagedLOD::PagedLOD(const osg::PagedLOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PagedLOD* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PagedLOD::PagedLOD function");
		}
		const osg::PagedLOD & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::PagedLOD function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::PagedLOD(_arg1, copyop);
	}

	// osg::PagedLOD::PagedLOD(lua_Table * data)
	static osg::PagedLOD* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD(lua_Table * data) function, expected prototype:\nosg::PagedLOD::PagedLOD(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_PagedLOD(L,NULL);
	}

	// osg::PagedLOD::PagedLOD(lua_Table * data, const osg::PagedLOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PagedLOD* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD(lua_Table * data, const osg::PagedLOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PagedLOD::PagedLOD(lua_Table * data, const osg::PagedLOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PagedLOD* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::PagedLOD::PagedLOD function");
		}
		const osg::PagedLOD & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::PagedLOD function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PagedLOD(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::PagedLOD::PagedLOD
	static osg::PagedLOD* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PagedLOD, cannot match any of the overloads for function PagedLOD:\n  PagedLOD()\n  PagedLOD(const osg::PagedLOD &, const osg::CopyOp &)\n  PagedLOD(lua_Table *)\n  PagedLOD(lua_Table *, const osg::PagedLOD &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PagedLOD::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::cloneType() const function, expected prototype:\nosg::Object * osg::PagedLOD::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PagedLOD::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::className() const function, expected prototype:\nconst char * osg::PagedLOD::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PagedLOD::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::libraryName() const function, expected prototype:\nconst char * osg::PagedLOD::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PagedLOD::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PagedLOD::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PagedLOD::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::PagedLOD::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::PagedLOD::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PagedLOD::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)
	static int _bind_addChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);
		std::string filename(lua_tostring(L,5),lua_objlen(L,5));
		float priorityOffset=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.0f;
		float priorityScale=luatop>6 ? (float)lua_tonumber(L,7) : (float)1.0f;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *, float, float, const std::string &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child, min, max, filename, priorityOffset, priorityScale);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::PagedLOD::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);
		if (_lg_typecheck_addChild_overload_3(L)) return _bind_addChild_overload_3(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, float, float)\n  addChild(osg::Node *, float, float, const std::string &, float, float)\n");
		return 0;
	}

	// bool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PagedLOD::setDatabaseOptions(osg::Referenced * options)
	static int _bind_setDatabaseOptions(lua_State *L) {
		if (!_lg_typecheck_setDatabaseOptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDatabaseOptions(osg::Referenced * options) function, expected prototype:\nvoid osg::PagedLOD::setDatabaseOptions(osg::Referenced * options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* options=(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDatabaseOptions(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabaseOptions(options);

		return 0;
	}

	// osg::Referenced * osg::PagedLOD::getDatabaseOptions()
	static int _bind_getDatabaseOptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PagedLOD::getDatabaseOptions() function, expected prototype:\nosg::Referenced * osg::PagedLOD::getDatabaseOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PagedLOD::getDatabaseOptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const
	static int _bind_getDatabaseOptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const function, expected prototype:\nconst osg::Referenced * osg::PagedLOD::getDatabaseOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::getDatabaseOptions
	static int _bind_getDatabaseOptions(lua_State *L) {
		if (_lg_typecheck_getDatabaseOptions_overload_1(L)) return _bind_getDatabaseOptions_overload_1(L);
		if (_lg_typecheck_getDatabaseOptions_overload_2(L)) return _bind_getDatabaseOptions_overload_2(L);

		luaL_error(L, "error in function getDatabaseOptions, cannot match any of the overloads for function getDatabaseOptions:\n  getDatabaseOptions()\n  getDatabaseOptions()\n");
		return 0;
	}

	// void osg::PagedLOD::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osg::PagedLOD::setDatabasePath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDatabasePath(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osg::PagedLOD::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::PagedLOD::getDatabasePath() const function, expected prototype:\nconst std::string & osg::PagedLOD::getDatabasePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::PagedLOD::getDatabasePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename)
	static int _bind_setFileName(lua_State *L) {
		if (!_lg_typecheck_setFileName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename) function, expected prototype:\nvoid osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		std::string filename(lua_tostring(L,3),lua_objlen(L,3));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFileName(unsigned int, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFileName(childNo, filename);

		return 0;
	}

	// const std::string & osg::PagedLOD::getFileName(unsigned int childNo) const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::PagedLOD::getFileName(unsigned int childNo) const function, expected prototype:\nconst std::string & osg::PagedLOD::getFileName(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::PagedLOD::getFileName(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getFileName(childNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumFileNames() const
	static int _bind_getNumFileNames(lua_State *L) {
		if (!_lg_typecheck_getNumFileNames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumFileNames() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumFileNames() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumFileNames() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumFileNames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset)
	static int _bind_setPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_setPriorityOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset) function, expected prototype:\nvoid osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float priorityOffset=(float)lua_tonumber(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setPriorityOffset(unsigned int, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPriorityOffset(childNo, priorityOffset);

		return 0;
	}

	// float osg::PagedLOD::getPriorityOffset(unsigned int childNo) const
	static int _bind_getPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_getPriorityOffset(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::getPriorityOffset(unsigned int childNo) const function, expected prototype:\nfloat osg::PagedLOD::getPriorityOffset(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::getPriorityOffset(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPriorityOffset(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumPriorityOffsets() const
	static int _bind_getNumPriorityOffsets(lua_State *L) {
		if (!_lg_typecheck_getNumPriorityOffsets(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumPriorityOffsets() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumPriorityOffsets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumPriorityOffsets() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumPriorityOffsets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale)
	static int _bind_setPriorityScale(lua_State *L) {
		if (!_lg_typecheck_setPriorityScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale) function, expected prototype:\nvoid osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float priorityScale=(float)lua_tonumber(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setPriorityScale(unsigned int, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPriorityScale(childNo, priorityScale);

		return 0;
	}

	// float osg::PagedLOD::getPriorityScale(unsigned int childNo) const
	static int _bind_getPriorityScale(lua_State *L) {
		if (!_lg_typecheck_getPriorityScale(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::getPriorityScale(unsigned int childNo) const function, expected prototype:\nfloat osg::PagedLOD::getPriorityScale(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::getPriorityScale(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPriorityScale(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumPriorityScales() const
	static int _bind_getNumPriorityScales(lua_State *L) {
		if (!_lg_typecheck_getNumPriorityScales(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumPriorityScales() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumPriorityScales() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumPriorityScales() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumPriorityScales();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setMinimumExpiryTime(unsigned int childNo, double minTime)
	static int _bind_setMinimumExpiryTime(lua_State *L) {
		if (!_lg_typecheck_setMinimumExpiryTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setMinimumExpiryTime(unsigned int childNo, double minTime) function, expected prototype:\nvoid osg::PagedLOD::setMinimumExpiryTime(unsigned int childNo, double minTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		double minTime=(double)lua_tonumber(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setMinimumExpiryTime(unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinimumExpiryTime(childNo, minTime);

		return 0;
	}

	// double osg::PagedLOD::getMinimumExpiryTime(unsigned int childNo) const
	static int _bind_getMinimumExpiryTime(lua_State *L) {
		if (!_lg_typecheck_getMinimumExpiryTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::getMinimumExpiryTime(unsigned int childNo) const function, expected prototype:\ndouble osg::PagedLOD::getMinimumExpiryTime(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::getMinimumExpiryTime(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinimumExpiryTime(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumMinimumExpiryTimes() const
	static int _bind_getNumMinimumExpiryTimes(lua_State *L) {
		if (!_lg_typecheck_getNumMinimumExpiryTimes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumMinimumExpiryTimes() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumMinimumExpiryTimes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumMinimumExpiryTimes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMinimumExpiryTimes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setMinimumExpiryFrames(unsigned int childNo, unsigned int minFrames)
	static int _bind_setMinimumExpiryFrames(lua_State *L) {
		if (!_lg_typecheck_setMinimumExpiryFrames(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setMinimumExpiryFrames(unsigned int childNo, unsigned int minFrames) function, expected prototype:\nvoid osg::PagedLOD::setMinimumExpiryFrames(unsigned int childNo, unsigned int minFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		unsigned int minFrames=(unsigned int)lua_tointeger(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setMinimumExpiryFrames(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinimumExpiryFrames(childNo, minFrames);

		return 0;
	}

	// unsigned int osg::PagedLOD::getMinimumExpiryFrames(unsigned int childNo) const
	static int _bind_getMinimumExpiryFrames(lua_State *L) {
		if (!_lg_typecheck_getMinimumExpiryFrames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getMinimumExpiryFrames(unsigned int childNo) const function, expected prototype:\nunsigned int osg::PagedLOD::getMinimumExpiryFrames(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getMinimumExpiryFrames(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMinimumExpiryFrames(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumMinimumExpiryFrames() const
	static int _bind_getNumMinimumExpiryFrames(lua_State *L) {
		if (!_lg_typecheck_getNumMinimumExpiryFrames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumMinimumExpiryFrames() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumMinimumExpiryFrames() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumMinimumExpiryFrames() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMinimumExpiryFrames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp)
	static int _bind_setTimeStamp(lua_State *L) {
		if (!_lg_typecheck_setTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp) function, expected prototype:\nvoid osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		double timeStamp=(double)lua_tonumber(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setTimeStamp(unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeStamp(childNo, timeStamp);

		return 0;
	}

	// double osg::PagedLOD::getTimeStamp(unsigned int childNo) const
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::getTimeStamp(unsigned int childNo) const function, expected prototype:\ndouble osg::PagedLOD::getTimeStamp(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::getTimeStamp(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeStamp(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumTimeStamps() const
	static int _bind_getNumTimeStamps(lua_State *L) {
		if (!_lg_typecheck_getNumTimeStamps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumTimeStamps() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumTimeStamps() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumTimeStamps() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumTimeStamps();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber) function, expected prototype:\nvoid osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		unsigned int frameNumber=(unsigned int)lua_tointeger(L,3);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFrameNumber(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameNumber(childNo, frameNumber);

		return 0;
	}

	// unsigned int osg::PagedLOD::getFrameNumber(unsigned int childNo) const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getFrameNumber(unsigned int childNo) const function, expected prototype:\nunsigned int osg::PagedLOD::getFrameNumber(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getFrameNumber(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFrameNumber(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumFrameNumbers() const
	static int _bind_getNumFrameNumbers(lua_State *L) {
		if (!_lg_typecheck_getNumFrameNumbers(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumFrameNumbers() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumFrameNumbers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumFrameNumbers() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumFrameNumbers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo)
	static int _bind_getDatabaseRequest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) function, expected prototype:\nosg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const
	static int _bind_getDatabaseRequest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const function, expected prototype:\nconst osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::getDatabaseRequest
	static int _bind_getDatabaseRequest(lua_State *L) {
		if (_lg_typecheck_getDatabaseRequest_overload_1(L)) return _bind_getDatabaseRequest_overload_1(L);
		if (_lg_typecheck_getDatabaseRequest_overload_2(L)) return _bind_getDatabaseRequest_overload_2(L);

		luaL_error(L, "error in function getDatabaseRequest, cannot match any of the overloads for function getDatabaseRequest:\n  getDatabaseRequest(unsigned int)\n  getDatabaseRequest(unsigned int)\n");
		return 0;
	}

	// void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber)
	static int _bind_setFrameNumberOfLastTraversal(lua_State *L) {
		if (!_lg_typecheck_setFrameNumberOfLastTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber) function, expected prototype:\nvoid osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameNumberOfLastTraversal(frameNumber);

		return 0;
	}

	// unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const
	static int _bind_getFrameNumberOfLastTraversal(lua_State *L) {
		if (!_lg_typecheck_getFrameNumberOfLastTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const function, expected prototype:\nunsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFrameNumberOfLastTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num)
	static int _bind_setNumChildrenThatCannotBeExpired(lua_State *L) {
		if (!_lg_typecheck_setNumChildrenThatCannotBeExpired(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num) function, expected prototype:\nvoid osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumChildrenThatCannotBeExpired(num);

		return 0;
	}

	// unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const
	static int _bind_getNumChildrenThatCannotBeExpired(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenThatCannotBeExpired(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenThatCannotBeExpired();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setDisableExternalChildrenPaging(bool flag)
	static int _bind_setDisableExternalChildrenPaging(lua_State *L) {
		if (!_lg_typecheck_setDisableExternalChildrenPaging(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDisableExternalChildrenPaging(bool flag) function, expected prototype:\nvoid osg::PagedLOD::setDisableExternalChildrenPaging(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDisableExternalChildrenPaging(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisableExternalChildrenPaging(flag);

		return 0;
	}

	// bool osg::PagedLOD::getDisableExternalChildrenPaging() const
	static int _bind_getDisableExternalChildrenPaging(lua_State *L) {
		if (!_lg_typecheck_getDisableExternalChildrenPaging(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::getDisableExternalChildrenPaging() const function, expected prototype:\nbool osg::PagedLOD::getDisableExternalChildrenPaging() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::getDisableExternalChildrenPaging() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDisableExternalChildrenPaging();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)
	static int _bind_removeExpiredChildren(lua_State *L) {
		if (!_lg_typecheck_removeExpiredChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren) function, expected prototype:\nbool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)\nClass arguments details:\narg 3 ID = 52729833\n\n%s",luna_dumpStack(L).c_str());
		}

		double expiryTime=(double)lua_tonumber(L,2);
		unsigned int expiryFrame=(unsigned int)lua_tointeger(L,3);
		osg::NodeList* removedChildren_ptr=(Luna< std::vector< osg::ref_ptr< osg::Node > > >::checkSubType< osg::NodeList >(L,4));
		if( !removedChildren_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg removedChildren in osg::PagedLOD::removeExpiredChildren function");
		}
		osg::NodeList & removedChildren=*removedChildren_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::removeExpiredChildren(double, unsigned int, osg::NodeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeExpiredChildren(expiryTime, expiryFrame, removedChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PagedLOD::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PagedLOD::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::setName(name);

		return 0;
	}

	// void osg::PagedLOD::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_computeDataVariance() function, expected prototype:\nvoid osg::PagedLOD::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::computeDataVariance();

		return 0;
	}

	// void osg::PagedLOD::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PagedLOD::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PagedLOD::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PagedLOD::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PagedLOD::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PagedLOD::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PagedLOD::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PagedLOD::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PagedLOD::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PagedLOD::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PagedLOD::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PagedLOD::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::PagedLOD::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::PagedLOD::base_asTransform() function, expected prototype:\nosg::Transform * osg::PagedLOD::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::PagedLOD::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->PagedLOD::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::PagedLOD::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::PagedLOD::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::PagedLOD::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::PagedLOD::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->PagedLOD::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::PagedLOD::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::PagedLOD::base_asCamera() function, expected prototype:\nosg::Camera * osg::PagedLOD::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::PagedLOD::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->PagedLOD::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::PagedLOD::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::PagedLOD::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::PagedLOD::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::PagedLOD::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->PagedLOD::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::PagedLOD::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::PagedLOD::base_asSwitch() function, expected prototype:\nosg::Switch * osg::PagedLOD::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::PagedLOD::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->PagedLOD::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::PagedLOD::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::PagedLOD::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::PagedLOD::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::PagedLOD::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->PagedLOD::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::PagedLOD::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::PagedLOD::base_asGeode() function, expected prototype:\nosg::Geode * osg::PagedLOD::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::PagedLOD::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->PagedLOD::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::PagedLOD::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::PagedLOD::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::PagedLOD::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::PagedLOD::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->PagedLOD::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::PagedLOD::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PagedLOD::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PagedLOD::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::ascend(nv);

		return 0;
	}

	// osg::Group * osg::PagedLOD::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::PagedLOD::base_asGroup() function, expected prototype:\nosg::Group * osg::PagedLOD::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::PagedLOD::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->PagedLOD::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::PagedLOD::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::PagedLOD::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::PagedLOD::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::PagedLOD::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->PagedLOD::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// bool osg::PagedLOD::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::PagedLOD::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::PagedLOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::PagedLOD::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PagedLOD::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::PagedLOD::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::PagedLOD::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::PagedLOD::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::PagedLOD::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::PagedLOD::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::PagedLOD::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::PagedLOD::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->PagedLOD::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::PagedLOD::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::base_cloneType() const function, expected prototype:\nosg::Object * osg::PagedLOD::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PagedLOD::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PagedLOD::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PagedLOD::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PagedLOD::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PagedLOD::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PagedLOD::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PagedLOD::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::base_className() const function, expected prototype:\nconst char * osg::PagedLOD::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PagedLOD::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PagedLOD::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::base_libraryName() const function, expected prototype:\nconst char * osg::PagedLOD::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PagedLOD::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PagedLOD::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PagedLOD::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PagedLOD::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::accept(nv);

		return 0;
	}

	// void osg::PagedLOD::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::PagedLOD::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PagedLOD::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PagedLOD::traverse(_arg1);

		return 0;
	}

	// bool osg::PagedLOD::base_addChild(osg::Node * child)
	static int _bind_base_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::PagedLOD::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max)
	static int _bind_base_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_addChild(osg::Node *, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)
	static int _bind_base_addChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f) function, expected prototype:\nbool osg::PagedLOD::base_addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);
		std::string filename(lua_tostring(L,5),lua_objlen(L,5));
		float priorityOffset=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.0f;
		float priorityScale=luatop>6 ? (float)lua_tonumber(L,7) : (float)1.0f;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_addChild(osg::Node *, float, float, const std::string &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::addChild(child, min, max, filename, priorityOffset, priorityScale);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::PagedLOD::base_addChild
	static int _bind_base_addChild(lua_State *L) {
		if (_lg_typecheck_base_addChild_overload_1(L)) return _bind_base_addChild_overload_1(L);
		if (_lg_typecheck_base_addChild_overload_2(L)) return _bind_base_addChild_overload_2(L);
		if (_lg_typecheck_base_addChild_overload_3(L)) return _bind_base_addChild_overload_3(L);

		luaL_error(L, "error in function base_addChild, cannot match any of the overloads for function base_addChild:\n  base_addChild(osg::Node *)\n  base_addChild(osg::Node *, float, float)\n  base_addChild(osg::Node *, float, float, const std::string &, float, float)\n");
		return 0;
	}

	// bool osg::PagedLOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::PagedLOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::base_removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)
	static int _bind_base_removeExpiredChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeExpiredChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::base_removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren) function, expected prototype:\nbool osg::PagedLOD::base_removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)\nClass arguments details:\narg 3 ID = 52729833\n\n%s",luna_dumpStack(L).c_str());
		}

		double expiryTime=(double)lua_tonumber(L,2);
		unsigned int expiryFrame=(unsigned int)lua_tointeger(L,3);
		osg::NodeList* removedChildren_ptr=(Luna< std::vector< osg::ref_ptr< osg::Node > > >::checkSubType< osg::NodeList >(L,4));
		if( !removedChildren_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg removedChildren in osg::PagedLOD::base_removeExpiredChildren function");
		}
		osg::NodeList & removedChildren=*removedChildren_ptr;

		osg::PagedLOD* self=Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::base_removeExpiredChildren(double, unsigned int, osg::NodeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PagedLOD::removeExpiredChildren(expiryTime, expiryFrame, removedChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PagedLOD* LunaTraits< osg::PagedLOD >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PagedLOD::_bind_ctor(L);
}

void LunaTraits< osg::PagedLOD >::_bind_dtor(osg::PagedLOD* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PagedLOD >::className[] = "PagedLOD";
const char LunaTraits< osg::PagedLOD >::fullName[] = "osg::PagedLOD";
const char LunaTraits< osg::PagedLOD >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD >::parents[] = {"osg.LOD", 0};
const int LunaTraits< osg::PagedLOD >::hash = 39474808;
const int LunaTraits< osg::PagedLOD >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PagedLOD >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PagedLOD::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PagedLOD::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PagedLOD::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_PagedLOD::_bind_className},
	{"libraryName", &luna_wrapper_osg_PagedLOD::_bind_libraryName},
	{"accept", &luna_wrapper_osg_PagedLOD::_bind_accept},
	{"traverse", &luna_wrapper_osg_PagedLOD::_bind_traverse},
	{"addChild", &luna_wrapper_osg_PagedLOD::_bind_addChild},
	{"removeChildren", &luna_wrapper_osg_PagedLOD::_bind_removeChildren},
	{"setDatabaseOptions", &luna_wrapper_osg_PagedLOD::_bind_setDatabaseOptions},
	{"getDatabaseOptions", &luna_wrapper_osg_PagedLOD::_bind_getDatabaseOptions},
	{"setDatabasePath", &luna_wrapper_osg_PagedLOD::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osg_PagedLOD::_bind_getDatabasePath},
	{"setFileName", &luna_wrapper_osg_PagedLOD::_bind_setFileName},
	{"getFileName", &luna_wrapper_osg_PagedLOD::_bind_getFileName},
	{"getNumFileNames", &luna_wrapper_osg_PagedLOD::_bind_getNumFileNames},
	{"setPriorityOffset", &luna_wrapper_osg_PagedLOD::_bind_setPriorityOffset},
	{"getPriorityOffset", &luna_wrapper_osg_PagedLOD::_bind_getPriorityOffset},
	{"getNumPriorityOffsets", &luna_wrapper_osg_PagedLOD::_bind_getNumPriorityOffsets},
	{"setPriorityScale", &luna_wrapper_osg_PagedLOD::_bind_setPriorityScale},
	{"getPriorityScale", &luna_wrapper_osg_PagedLOD::_bind_getPriorityScale},
	{"getNumPriorityScales", &luna_wrapper_osg_PagedLOD::_bind_getNumPriorityScales},
	{"setMinimumExpiryTime", &luna_wrapper_osg_PagedLOD::_bind_setMinimumExpiryTime},
	{"getMinimumExpiryTime", &luna_wrapper_osg_PagedLOD::_bind_getMinimumExpiryTime},
	{"getNumMinimumExpiryTimes", &luna_wrapper_osg_PagedLOD::_bind_getNumMinimumExpiryTimes},
	{"setMinimumExpiryFrames", &luna_wrapper_osg_PagedLOD::_bind_setMinimumExpiryFrames},
	{"getMinimumExpiryFrames", &luna_wrapper_osg_PagedLOD::_bind_getMinimumExpiryFrames},
	{"getNumMinimumExpiryFrames", &luna_wrapper_osg_PagedLOD::_bind_getNumMinimumExpiryFrames},
	{"setTimeStamp", &luna_wrapper_osg_PagedLOD::_bind_setTimeStamp},
	{"getTimeStamp", &luna_wrapper_osg_PagedLOD::_bind_getTimeStamp},
	{"getNumTimeStamps", &luna_wrapper_osg_PagedLOD::_bind_getNumTimeStamps},
	{"setFrameNumber", &luna_wrapper_osg_PagedLOD::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_PagedLOD::_bind_getFrameNumber},
	{"getNumFrameNumbers", &luna_wrapper_osg_PagedLOD::_bind_getNumFrameNumbers},
	{"getDatabaseRequest", &luna_wrapper_osg_PagedLOD::_bind_getDatabaseRequest},
	{"setFrameNumberOfLastTraversal", &luna_wrapper_osg_PagedLOD::_bind_setFrameNumberOfLastTraversal},
	{"getFrameNumberOfLastTraversal", &luna_wrapper_osg_PagedLOD::_bind_getFrameNumberOfLastTraversal},
	{"setNumChildrenThatCannotBeExpired", &luna_wrapper_osg_PagedLOD::_bind_setNumChildrenThatCannotBeExpired},
	{"getNumChildrenThatCannotBeExpired", &luna_wrapper_osg_PagedLOD::_bind_getNumChildrenThatCannotBeExpired},
	{"setDisableExternalChildrenPaging", &luna_wrapper_osg_PagedLOD::_bind_setDisableExternalChildrenPaging},
	{"getDisableExternalChildrenPaging", &luna_wrapper_osg_PagedLOD::_bind_getDisableExternalChildrenPaging},
	{"removeExpiredChildren", &luna_wrapper_osg_PagedLOD::_bind_removeExpiredChildren},
	{"base_setName", &luna_wrapper_osg_PagedLOD::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PagedLOD::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PagedLOD::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PagedLOD::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_PagedLOD::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_PagedLOD::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_PagedLOD::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_PagedLOD::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_PagedLOD::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_PagedLOD::_bind_base_asGroup},
	{"base_insertChild", &luna_wrapper_osg_PagedLOD::_bind_base_insertChild},
	{"base_replaceChild", &luna_wrapper_osg_PagedLOD::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_PagedLOD::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_PagedLOD::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_PagedLOD::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osg_PagedLOD::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_PagedLOD::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PagedLOD::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PagedLOD::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_PagedLOD::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_PagedLOD::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_PagedLOD::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osg_PagedLOD::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_PagedLOD::_bind_base_addChild},
	{"base_removeChildren", &luna_wrapper_osg_PagedLOD::_bind_base_removeChildren},
	{"base_removeExpiredChildren", &luna_wrapper_osg_PagedLOD::_bind_base_removeExpiredChildren},
	{"fromVoid", &luna_wrapper_osg_PagedLOD::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PagedLOD::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_PagedLOD::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PagedLOD::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD >::enumValues[] = {
	{0,0}
};


