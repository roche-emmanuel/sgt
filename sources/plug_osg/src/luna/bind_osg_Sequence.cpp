#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Sequence.h>

class luna_wrapper_osg_Sequence {
public:
	typedef Luna< osg::Sequence > luna_t;

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

		osg::Sequence* self= (osg::Sequence*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Sequence >::push(L,self,false);
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
		//osg::Sequence* ptr= dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		osg::Sequence* ptr= luna_caster< osg::Referenced, osg::Sequence >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Sequence >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTime(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLastFrameTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastFrameTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBegin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInterval(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterval(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumRepeats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumRepeats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDuration(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDuration(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSync(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearOnStop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearOnStop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Sequence::Sequence()
	static osg::Sequence* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence() function, expected prototype:\nosg::Sequence::Sequence()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Sequence();
	}

	// osg::Sequence::Sequence(const osg::Sequence & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sequence* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence(const osg::Sequence & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sequence::Sequence(const osg::Sequence & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Sequence* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sequence::Sequence function");
		}
		const osg::Sequence & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::Sequence function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Sequence(_arg1, copyop);
	}

	// osg::Sequence::Sequence(lua_Table * data)
	static osg::Sequence* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence(lua_Table * data) function, expected prototype:\nosg::Sequence::Sequence(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Sequence(L,NULL);
	}

	// osg::Sequence::Sequence(lua_Table * data, const osg::Sequence & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sequence* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence(lua_Table * data, const osg::Sequence & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sequence::Sequence(lua_Table * data, const osg::Sequence & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Sequence* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Sequence::Sequence function");
		}
		const osg::Sequence & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::Sequence function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Sequence(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Sequence::Sequence
	static osg::Sequence* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Sequence, cannot match any of the overloads for function Sequence:\n  Sequence()\n  Sequence(const osg::Sequence &, const osg::CopyOp &)\n  Sequence(lua_Table *)\n  Sequence(lua_Table *, const osg::Sequence &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Sequence::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::cloneType() const function, expected prototype:\nosg::Object * osg::Sequence::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sequence::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sequence::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sequence::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::className() const function, expected prototype:\nconst char * osg::Sequence::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sequence::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::libraryName() const function, expected prototype:\nconst char * osg::Sequence::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sequence::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Sequence::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Sequence::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Sequence::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Sequence::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sequence::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::Sequence::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::addChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::addChild(osg::Node * child, double t)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::addChild(osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::addChild(osg::Node * child, double t)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		double t=(double)lua_tonumber(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::addChild(osg::Node *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Sequence::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t)
	static int _bind_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));
		double t=(double)lua_tonumber(L,4);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::insertChild(unsigned int, osg::Node *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertChild(index, child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::insertChild
	static int _bind_insertChild(lua_State *L) {
		if (_lg_typecheck_insertChild_overload_1(L)) return _bind_insertChild_overload_1(L);
		if (_lg_typecheck_insertChild_overload_2(L)) return _bind_insertChild_overload_2(L);

		luaL_error(L, "error in function insertChild, cannot match any of the overloads for function insertChild:\n  insertChild(unsigned int, osg::Node *)\n  insertChild(unsigned int, osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::removeChild(osg::Node * child)
	static int _bind_removeChild(lua_State *L) {
		if (!_lg_typecheck_removeChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::removeChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::removeChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::removeChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::setValue(int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setValue(int value) function, expected prototype:\nvoid osg::Sequence::setValue(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setValue(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValue(value);

		return 0;
	}

	// int osg::Sequence::getValue() const
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getValue() const function, expected prototype:\nint osg::Sequence::getValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Sequence::getValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setTime(unsigned int frame, double t)
	static int _bind_setTime(lua_State *L) {
		if (!_lg_typecheck_setTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setTime(unsigned int frame, double t) function, expected prototype:\nvoid osg::Sequence::setTime(unsigned int frame, double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frame=(unsigned int)lua_tointeger(L,2);
		double t=(double)lua_tonumber(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setTime(unsigned int, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTime(frame, t);

		return 0;
	}

	// double osg::Sequence::getTime(unsigned int frame) const
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getTime(unsigned int frame) const function, expected prototype:\ndouble osg::Sequence::getTime(unsigned int frame) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frame=(unsigned int)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Sequence::getTime(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime(frame);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setTimeList(const std::vector< double > & timeList)
	static int _bind_setTimeList(lua_State *L) {
		if (!_lg_typecheck_setTimeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setTimeList(const std::vector< double > & timeList) function, expected prototype:\nvoid osg::Sequence::setTimeList(const std::vector< double > & timeList)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< double >* timeList_ptr=(Luna< std::vector< double > >::check(L,2));
		if( !timeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg timeList in osg::Sequence::setTimeList function");
		}
		const std::vector< double > & timeList=*timeList_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setTimeList(const std::vector< double > &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeList(timeList);

		return 0;
	}

	// const std::vector< double > & osg::Sequence::getTimeList() const
	static int _bind_getTimeList(lua_State *L) {
		if (!_lg_typecheck_getTimeList(L)) {
			luaL_error(L, "luna typecheck failed in const std::vector< double > & osg::Sequence::getTimeList() const function, expected prototype:\nconst std::vector< double > & osg::Sequence::getTimeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::vector< double > & osg::Sequence::getTimeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< double >* lret = &self->getTimeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< double > >::push(L,lret,false);

		return 1;
	}

	// void osg::Sequence::setDefaultTime(double t)
	static int _bind_setDefaultTime(lua_State *L) {
		if (!_lg_typecheck_setDefaultTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setDefaultTime(double t) function, expected prototype:\nvoid osg::Sequence::setDefaultTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setDefaultTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultTime(t);

		return 0;
	}

	// double osg::Sequence::getDefaultTime() const
	static int _bind_getDefaultTime(lua_State *L) {
		if (!_lg_typecheck_getDefaultTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getDefaultTime() const function, expected prototype:\ndouble osg::Sequence::getDefaultTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Sequence::getDefaultTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getDefaultTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setLastFrameTime(double t)
	static int _bind_setLastFrameTime(lua_State *L) {
		if (!_lg_typecheck_setLastFrameTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setLastFrameTime(double t) function, expected prototype:\nvoid osg::Sequence::setLastFrameTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setLastFrameTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLastFrameTime(t);

		return 0;
	}

	// double osg::Sequence::getLastFrameTime() const
	static int _bind_getLastFrameTime(lua_State *L) {
		if (!_lg_typecheck_getLastFrameTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getLastFrameTime() const function, expected prototype:\ndouble osg::Sequence::getLastFrameTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Sequence::getLastFrameTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLastFrameTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Sequence::getNumFrames() const
	static int _bind_getNumFrames(lua_State *L) {
		if (!_lg_typecheck_getNumFrames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Sequence::getNumFrames() const function, expected prototype:\nunsigned int osg::Sequence::getNumFrames() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Sequence::getNumFrames() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumFrames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode)
	static int _bind_setLoopMode(lua_State *L) {
		if (!_lg_typecheck_setLoopMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode) function, expected prototype:\nvoid osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setLoopMode(osg::Sequence::LoopMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLoopMode(mode);

		return 0;
	}

	// osg::Sequence::LoopMode osg::Sequence::getLoopMode() const
	static int _bind_getLoopMode(lua_State *L) {
		if (!_lg_typecheck_getLoopMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::LoopMode osg::Sequence::getLoopMode() const function, expected prototype:\nosg::Sequence::LoopMode osg::Sequence::getLoopMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Sequence::LoopMode osg::Sequence::getLoopMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Sequence::LoopMode lret = self->getLoopMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setBegin(int begin)
	static int _bind_setBegin(lua_State *L) {
		if (!_lg_typecheck_setBegin(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setBegin(int begin) function, expected prototype:\nvoid osg::Sequence::setBegin(int begin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int begin=(int)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setBegin(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBegin(begin);

		return 0;
	}

	// int osg::Sequence::getBegin() const
	static int _bind_getBegin(lua_State *L) {
		if (!_lg_typecheck_getBegin(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getBegin() const function, expected prototype:\nint osg::Sequence::getBegin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Sequence::getBegin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setEnd(int end)
	static int _bind_setEnd(lua_State *L) {
		if (!_lg_typecheck_setEnd(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setEnd(int end) function, expected prototype:\nvoid osg::Sequence::setEnd(int end)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int end=(int)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setEnd(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEnd(end);

		return 0;
	}

	// int osg::Sequence::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getEnd() const function, expected prototype:\nint osg::Sequence::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Sequence::getEnd() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end)
	static int _bind_setInterval(lua_State *L) {
		if (!_lg_typecheck_setInterval(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end) function, expected prototype:\nvoid osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);
		int begin=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setInterval(osg::Sequence::LoopMode, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInterval(mode, begin, end);

		return 0;
	}

	// void osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const
	static int _bind_getInterval(lua_State *L) {
		if (!_lg_typecheck_getInterval(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const function, expected prototype:\nvoid osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);
		int begin=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::getInterval(osg::Sequence::LoopMode &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getInterval(mode, begin, end);

		lua_pushnumber(L,mode);
		lua_pushnumber(L,begin);
		lua_pushnumber(L,end);
		return 3;
	}

	// void osg::Sequence::setSpeed(float speed)
	static int _bind_setSpeed(lua_State *L) {
		if (!_lg_typecheck_setSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setSpeed(float speed) function, expected prototype:\nvoid osg::Sequence::setSpeed(float speed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speed=(float)lua_tonumber(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setSpeed(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpeed(speed);

		return 0;
	}

	// float osg::Sequence::getSpeed() const
	static int _bind_getSpeed(lua_State *L) {
		if (!_lg_typecheck_getSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Sequence::getSpeed() const function, expected prototype:\nfloat osg::Sequence::getSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Sequence::getSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setNumRepeats(int nreps)
	static int _bind_setNumRepeats(lua_State *L) {
		if (!_lg_typecheck_setNumRepeats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setNumRepeats(int nreps) function, expected prototype:\nvoid osg::Sequence::setNumRepeats(int nreps)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nreps=(int)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setNumRepeats(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumRepeats(nreps);

		return 0;
	}

	// int osg::Sequence::getNumRepeats() const
	static int _bind_getNumRepeats(lua_State *L) {
		if (!_lg_typecheck_getNumRepeats(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getNumRepeats() const function, expected prototype:\nint osg::Sequence::getNumRepeats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Sequence::getNumRepeats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumRepeats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setDuration(float speed, int nreps = -1)
	static int _bind_setDuration(lua_State *L) {
		if (!_lg_typecheck_setDuration(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setDuration(float speed, int nreps = -1) function, expected prototype:\nvoid osg::Sequence::setDuration(float speed, int nreps = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float speed=(float)lua_tonumber(L,2);
		int nreps=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setDuration(float, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDuration(speed, nreps);

		return 0;
	}

	// void osg::Sequence::getDuration(float & speed, int & nreps) const
	static int _bind_getDuration(lua_State *L) {
		if (!_lg_typecheck_getDuration(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::getDuration(float & speed, int & nreps) const function, expected prototype:\nvoid osg::Sequence::getDuration(float & speed, int & nreps) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speed=(float)lua_tonumber(L,2);
		int nreps=(int)lua_tointeger(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::getDuration(float &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getDuration(speed, nreps);

		lua_pushnumber(L,speed);
		lua_pushnumber(L,nreps);
		return 2;
	}

	// void osg::Sequence::setMode(osg::Sequence::SequenceMode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setMode(osg::Sequence::SequenceMode mode) function, expected prototype:\nvoid osg::Sequence::setMode(osg::Sequence::SequenceMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence::SequenceMode mode=(osg::Sequence::SequenceMode)lua_tointeger(L,2);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setMode(osg::Sequence::SequenceMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::Sequence::SequenceMode osg::Sequence::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sequence::SequenceMode osg::Sequence::getMode() const function, expected prototype:\nosg::Sequence::SequenceMode osg::Sequence::getMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Sequence::SequenceMode osg::Sequence::getMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Sequence::SequenceMode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setSync(bool sync)
	static int _bind_setSync(lua_State *L) {
		if (!_lg_typecheck_setSync(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setSync(bool sync) function, expected prototype:\nvoid osg::Sequence::setSync(bool sync)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sync=(bool)(lua_toboolean(L,2)==1);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setSync(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSync(sync);

		return 0;
	}

	// bool osg::Sequence::getSync() const
	static int _bind_getSync(lua_State *L) {
		if (!_lg_typecheck_getSync(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::getSync() const function, expected prototype:\nbool osg::Sequence::getSync() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::getSync() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSync();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::setClearOnStop(bool clearOnStop)
	static int _bind_setClearOnStop(lua_State *L) {
		if (!_lg_typecheck_setClearOnStop(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setClearOnStop(bool clearOnStop) function, expected prototype:\nvoid osg::Sequence::setClearOnStop(bool clearOnStop)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool clearOnStop=(bool)(lua_toboolean(L,2)==1);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::setClearOnStop(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearOnStop(clearOnStop);

		return 0;
	}

	// bool osg::Sequence::getClearOnStop() const
	static int _bind_getClearOnStop(lua_State *L) {
		if (!_lg_typecheck_getClearOnStop(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::getClearOnStop() const function, expected prototype:\nbool osg::Sequence::getClearOnStop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::getClearOnStop() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getClearOnStop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Sequence::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::setName(name);

		return 0;
	}

	// void osg::Sequence::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_computeDataVariance() function, expected prototype:\nvoid osg::Sequence::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::computeDataVariance();

		return 0;
	}

	// void osg::Sequence::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Sequence::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Sequence::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Sequence::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Sequence::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Sequence::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Sequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Sequence::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Sequence::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Sequence::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Sequence::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Sequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::Sequence::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Sequence::base_asTransform() function, expected prototype:\nosg::Transform * osg::Sequence::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Sequence::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Sequence::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Sequence::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Sequence::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Sequence::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Sequence::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Sequence::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Sequence::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Sequence::base_asCamera() function, expected prototype:\nosg::Camera * osg::Sequence::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Sequence::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Sequence::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Sequence::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Sequence::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Sequence::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Sequence::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Sequence::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Sequence::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Sequence::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Sequence::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Sequence::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Sequence::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Sequence::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Sequence::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Sequence::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Sequence::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Sequence::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Sequence::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Sequence::base_asGeode() function, expected prototype:\nosg::Geode * osg::Sequence::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Sequence::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Sequence::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Sequence::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Sequence::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Sequence::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Sequence::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Sequence::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Sequence::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Sequence::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Sequence::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::ascend(nv);

		return 0;
	}

	// osg::Group * osg::Sequence::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Sequence::base_asGroup() function, expected prototype:\nosg::Group * osg::Sequence::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Sequence::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Sequence::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Sequence::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Sequence::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Sequence::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Sequence::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Sequence::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sequence::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// bool osg::Sequence::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Sequence::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Sequence::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Sequence::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Sequence::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Sequence::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::Sequence::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Sequence::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Sequence::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Sequence::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Sequence::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::Sequence::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::base_cloneType() const function, expected prototype:\nosg::Object * osg::Sequence::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Sequence::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sequence::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Sequence::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Sequence::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sequence::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sequence::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sequence::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::base_className() const function, expected prototype:\nconst char * osg::Sequence::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Sequence::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sequence::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::base_libraryName() const function, expected prototype:\nconst char * osg::Sequence::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Sequence::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sequence::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Sequence::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Sequence::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::accept(nv);

		return 0;
	}

	// void osg::Sequence::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sequence::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Sequence::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sequence::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sequence::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sequence::traverse(_arg1);

		return 0;
	}

	// bool osg::Sequence::base_addChild(osg::Node * child)
	static int _bind_base_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::base_addChild(osg::Node * child, double t)
	static int _bind_base_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_addChild(osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::base_addChild(osg::Node * child, double t)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		double t=(double)lua_tonumber(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_addChild(osg::Node *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::addChild(child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::base_addChild
	static int _bind_base_addChild(lua_State *L) {
		if (_lg_typecheck_base_addChild_overload_1(L)) return _bind_base_addChild_overload_1(L);
		if (_lg_typecheck_base_addChild_overload_2(L)) return _bind_base_addChild_overload_2(L);

		luaL_error(L, "error in function base_addChild, cannot match any of the overloads for function base_addChild:\n  base_addChild(osg::Node *)\n  base_addChild(osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_insertChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child, double t)
	static int _bind_base_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_insertChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::base_insertChild(unsigned int index, osg::Node * child, double t)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));
		double t=(double)lua_tonumber(L,4);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_insertChild(unsigned int, osg::Node *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::insertChild(index, child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::base_insertChild
	static int _bind_base_insertChild(lua_State *L) {
		if (_lg_typecheck_base_insertChild_overload_1(L)) return _bind_base_insertChild_overload_1(L);
		if (_lg_typecheck_base_insertChild_overload_2(L)) return _bind_base_insertChild_overload_2(L);

		luaL_error(L, "error in function base_insertChild, cannot match any of the overloads for function base_insertChild:\n  base_insertChild(unsigned int, osg::Node *)\n  base_insertChild(unsigned int, osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::base_removeChild(osg::Node * child)
	static int _bind_base_removeChild(lua_State *L) {
		if (!_lg_typecheck_base_removeChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_removeChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::base_removeChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_removeChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::removeChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Sequence::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Sequence* self=Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sequence::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sequence::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::Sequence* LunaTraits< osg::Sequence >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Sequence::_bind_ctor(L);
}

void LunaTraits< osg::Sequence >::_bind_dtor(osg::Sequence* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Sequence >::className[] = "Sequence";
const char LunaTraits< osg::Sequence >::fullName[] = "osg::Sequence";
const char LunaTraits< osg::Sequence >::moduleName[] = "osg";
const char* LunaTraits< osg::Sequence >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Sequence >::hash = 28453426;
const int LunaTraits< osg::Sequence >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Sequence >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Sequence::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Sequence::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Sequence::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Sequence::_bind_className},
	{"libraryName", &luna_wrapper_osg_Sequence::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Sequence::_bind_accept},
	{"traverse", &luna_wrapper_osg_Sequence::_bind_traverse},
	{"addChild", &luna_wrapper_osg_Sequence::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Sequence::_bind_insertChild},
	{"removeChild", &luna_wrapper_osg_Sequence::_bind_removeChild},
	{"removeChildren", &luna_wrapper_osg_Sequence::_bind_removeChildren},
	{"setValue", &luna_wrapper_osg_Sequence::_bind_setValue},
	{"getValue", &luna_wrapper_osg_Sequence::_bind_getValue},
	{"setTime", &luna_wrapper_osg_Sequence::_bind_setTime},
	{"getTime", &luna_wrapper_osg_Sequence::_bind_getTime},
	{"setTimeList", &luna_wrapper_osg_Sequence::_bind_setTimeList},
	{"getTimeList", &luna_wrapper_osg_Sequence::_bind_getTimeList},
	{"setDefaultTime", &luna_wrapper_osg_Sequence::_bind_setDefaultTime},
	{"getDefaultTime", &luna_wrapper_osg_Sequence::_bind_getDefaultTime},
	{"setLastFrameTime", &luna_wrapper_osg_Sequence::_bind_setLastFrameTime},
	{"getLastFrameTime", &luna_wrapper_osg_Sequence::_bind_getLastFrameTime},
	{"getNumFrames", &luna_wrapper_osg_Sequence::_bind_getNumFrames},
	{"setLoopMode", &luna_wrapper_osg_Sequence::_bind_setLoopMode},
	{"getLoopMode", &luna_wrapper_osg_Sequence::_bind_getLoopMode},
	{"setBegin", &luna_wrapper_osg_Sequence::_bind_setBegin},
	{"getBegin", &luna_wrapper_osg_Sequence::_bind_getBegin},
	{"setEnd", &luna_wrapper_osg_Sequence::_bind_setEnd},
	{"getEnd", &luna_wrapper_osg_Sequence::_bind_getEnd},
	{"setInterval", &luna_wrapper_osg_Sequence::_bind_setInterval},
	{"getInterval", &luna_wrapper_osg_Sequence::_bind_getInterval},
	{"setSpeed", &luna_wrapper_osg_Sequence::_bind_setSpeed},
	{"getSpeed", &luna_wrapper_osg_Sequence::_bind_getSpeed},
	{"setNumRepeats", &luna_wrapper_osg_Sequence::_bind_setNumRepeats},
	{"getNumRepeats", &luna_wrapper_osg_Sequence::_bind_getNumRepeats},
	{"setDuration", &luna_wrapper_osg_Sequence::_bind_setDuration},
	{"getDuration", &luna_wrapper_osg_Sequence::_bind_getDuration},
	{"setMode", &luna_wrapper_osg_Sequence::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Sequence::_bind_getMode},
	{"setSync", &luna_wrapper_osg_Sequence::_bind_setSync},
	{"getSync", &luna_wrapper_osg_Sequence::_bind_getSync},
	{"setClearOnStop", &luna_wrapper_osg_Sequence::_bind_setClearOnStop},
	{"getClearOnStop", &luna_wrapper_osg_Sequence::_bind_getClearOnStop},
	{"base_setName", &luna_wrapper_osg_Sequence::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Sequence::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Sequence::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Sequence::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_Sequence::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Sequence::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_Sequence::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_Sequence::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_Sequence::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_Sequence::_bind_base_asGroup},
	{"base_replaceChild", &luna_wrapper_osg_Sequence::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_Sequence::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Sequence::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Sequence::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osg_Sequence::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_Sequence::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Sequence::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Sequence::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Sequence::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Sequence::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Sequence::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osg_Sequence::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_Sequence::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_Sequence::_bind_base_insertChild},
	{"base_removeChild", &luna_wrapper_osg_Sequence::_bind_base_removeChild},
	{"base_removeChildren", &luna_wrapper_osg_Sequence::_bind_base_removeChildren},
	{"fromVoid", &luna_wrapper_osg_Sequence::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Sequence::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Sequence::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Sequence >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Sequence::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Sequence >::enumValues[] = {
	{"LOOP", osg::Sequence::LOOP},
	{"SWING", osg::Sequence::SWING},
	{"START", osg::Sequence::START},
	{"STOP", osg::Sequence::STOP},
	{"PAUSE", osg::Sequence::PAUSE},
	{"RESUME", osg::Sequence::RESUME},
	{0,0}
};


