#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_GUIEventAdapter.h>

class luna_wrapper_osgGA_GUIEventAdapter {
public:
	typedef Luna< osgGA::GUIEventAdapter > luna_t;

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

		osgGA::GUIEventAdapter* self= (osgGA::GUIEventAdapter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::GUIEventAdapter >::push(L,self,false);
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
		//osgGA::GUIEventAdapter* ptr= dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,1));
		osgGA::GUIEventAdapter* ptr= luna_caster< osg::Referenced, osgGA::GUIEventAdapter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::GUIEventAdapter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setHandled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnmodifiedKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnmodifiedKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInputRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXnormalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYnormalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMouseYOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMouseYOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setButtonMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getButtonMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModKeyMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModKeyMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScrollingMotion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScrollingMotion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScrollingMotionDelta(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScrollingDeltaX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScrollingDeltaX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScrollingDeltaY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScrollingDeltaY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenPressure(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenPressure(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenTiltX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenTiltX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenTiltY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenTiltY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPenRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTabletPointerType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTabletPointerType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPenOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTouchPoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTouchData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultiTouchEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccumulatedEventState(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_getEventType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::GUIEventAdapter::GUIEventAdapter()
	static osgGA::GUIEventAdapter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter() function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::GUIEventAdapter();
	}

	// osgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgGA::GUIEventAdapter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter(const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgGA::GUIEventAdapter* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osgGA::GUIEventAdapter & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgGA::GUIEventAdapter(rhs, copyop);
	}

	// osgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data)
	static osgGA::GUIEventAdapter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data) function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_GUIEventAdapter(L,NULL);
	}

	// osgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data, const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgGA::GUIEventAdapter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data, const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::GUIEventAdapter::GUIEventAdapter(lua_Table * data, const osgGA::GUIEventAdapter & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgGA::GUIEventAdapter* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osgGA::GUIEventAdapter & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventAdapter::GUIEventAdapter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgGA_GUIEventAdapter(L,NULL, rhs, copyop);
	}

	// Overload binder for osgGA::GUIEventAdapter::GUIEventAdapter
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function GUIEventAdapter, cannot match any of the overloads for function GUIEventAdapter:\n  GUIEventAdapter()\n  GUIEventAdapter(const osgGA::GUIEventAdapter &, const osg::CopyOp &)\n  GUIEventAdapter(lua_Table *)\n  GUIEventAdapter(lua_Table *, const osgGA::GUIEventAdapter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::GUIEventAdapter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventAdapter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::className() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setHandled(bool handled) const
	static int _bind_setHandled(lua_State *L) {
		if (!_lg_typecheck_setHandled(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setHandled(bool handled) const function, expected prototype:\nvoid osgGA::GUIEventAdapter::setHandled(bool handled) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool handled=(bool)(lua_toboolean(L,2)==1);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setHandled(bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHandled(handled);

		return 0;
	}

	// bool osgGA::GUIEventAdapter::getHandled() const
	static int _bind_getHandled(lua_State *L) {
		if (!_lg_typecheck_getHandled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::getHandled() const function, expected prototype:\nbool osgGA::GUIEventAdapter::getHandled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::getHandled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getHandled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type)
	static int _bind_setEventType(lua_State *L) {
		if (!_lg_typecheck_setEventType(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType Type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::EventType Type=(osgGA::GUIEventAdapter::EventType)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setEventType(osgGA::GUIEventAdapter::EventType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventType(Type);

		return 0;
	}

	// osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const
	static int _bind_getEventType(lua_State *L) {
		if (!_lg_typecheck_getEventType(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const function, expected prototype:\nosgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::getEventType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::EventType lret = self->getEventType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setTime(double time)
	static int _bind_setTime(lua_State *L) {
		if (!_lg_typecheck_setTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setTime(double time) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setTime(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTime(time);

		return 0;
	}

	// double osgGA::GUIEventAdapter::getTime() const
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::GUIEventAdapter::getTime() const function, expected prototype:\ndouble osgGA::GUIEventAdapter::getTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::GUIEventAdapter::getTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::GUIEventAdapter::time() const
	static int _bind_time(lua_State *L) {
		if (!_lg_typecheck_time(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::GUIEventAdapter::time() const function, expected prototype:\ndouble osgGA::GUIEventAdapter::time() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::GUIEventAdapter::time() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const
	static int _bind_getGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const function, expected prototype:\nconst osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osgGA::GUIEventAdapter::getGraphicsContext() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true)
	static int _bind_setWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowRectangle(int x, int y, int width, int height, bool updateMouseRange = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		bool updateMouseRange=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowRectangle(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowRectangle(x, y, width, height, updateMouseRange);

		return 0;
	}

	// void osgGA::GUIEventAdapter::setWindowX(int v)
	static int _bind_setWindowX(lua_State *L) {
		if (!_lg_typecheck_setWindowX(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowX(int v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowX(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowX(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowX(v);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getWindowX() const
	static int _bind_getWindowX(lua_State *L) {
		if (!_lg_typecheck_getWindowX(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowX() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowX() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWindowX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setWindowY(int v)
	static int _bind_setWindowY(lua_State *L) {
		if (!_lg_typecheck_setWindowY(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowY(int v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowY(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowY(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowY(v);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getWindowY() const
	static int _bind_getWindowY(lua_State *L) {
		if (!_lg_typecheck_getWindowY(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowY() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowY() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWindowY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setWindowWidth(int v)
	static int _bind_setWindowWidth(lua_State *L) {
		if (!_lg_typecheck_setWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowWidth(int v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowWidth(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowWidth(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowWidth(v);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getWindowWidth() const
	static int _bind_getWindowWidth(lua_State *L) {
		if (!_lg_typecheck_getWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowWidth() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWindowWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setWindowHeight(int v)
	static int _bind_setWindowHeight(lua_State *L) {
		if (!_lg_typecheck_setWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setWindowHeight(int v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setWindowHeight(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setWindowHeight(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowHeight(v);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getWindowHeight() const
	static int _bind_getWindowHeight(lua_State *L) {
		if (!_lg_typecheck_getWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getWindowHeight() const function, expected prototype:\nint osgGA::GUIEventAdapter::getWindowHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getWindowHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWindowHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setKey(int key)
	static int _bind_setKey(lua_State *L) {
		if (!_lg_typecheck_setKey(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setKey(int key) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setKey(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setKey(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKey(key);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getKey() const
	static int _bind_getKey(lua_State *L) {
		if (!_lg_typecheck_getKey(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getKey() const function, expected prototype:\nint osgGA::GUIEventAdapter::getKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getKey() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKey();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setUnmodifiedKey(int key)
	static int _bind_setUnmodifiedKey(lua_State *L) {
		if (!_lg_typecheck_setUnmodifiedKey(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setUnmodifiedKey(int key) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setUnmodifiedKey(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setUnmodifiedKey(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUnmodifiedKey(key);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getUnmodifiedKey() const
	static int _bind_getUnmodifiedKey(lua_State *L) {
		if (!_lg_typecheck_getUnmodifiedKey(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getUnmodifiedKey() const function, expected prototype:\nint osgGA::GUIEventAdapter::getUnmodifiedKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getUnmodifiedKey() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUnmodifiedKey();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setButton(int button)
	static int _bind_setButton(lua_State *L) {
		if (!_lg_typecheck_setButton(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setButton(int button) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setButton(int button)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int button=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setButton(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setButton(button);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getButton() const
	static int _bind_getButton(lua_State *L) {
		if (!_lg_typecheck_getButton(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getButton() const function, expected prototype:\nint osgGA::GUIEventAdapter::getButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getButton() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getButton();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax)
	static int _bind_setInputRange(lua_State *L) {
		if (!_lg_typecheck_setInputRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setInputRange(float Xmin, float Ymin, float Xmax, float Ymax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float Xmin=(float)lua_tonumber(L,2);
		float Ymin=(float)lua_tonumber(L,3);
		float Xmax=(float)lua_tonumber(L,4);
		float Ymax=(float)lua_tonumber(L,5);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setInputRange(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInputRange(Xmin, Ymin, Xmax, Ymax);

		return 0;
	}

	// void osgGA::GUIEventAdapter::setXmin(float v)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setXmin(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setXmin(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setXmin(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXmin(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getXmin() const
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXmin() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXmin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXmin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getXmin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setXmax(float v)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setXmax(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setXmax(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setXmax(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXmax(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getXmax() const
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXmax() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXmax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXmax() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getXmax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setYmin(float v)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setYmin(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setYmin(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setYmin(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setYmin(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getYmin() const
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYmin() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYmin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYmin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getYmin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setYmax(float v)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setYmax(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setYmax(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setYmax(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setYmax(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getYmax() const
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYmax() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYmax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYmax() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getYmax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setX(float x)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setX(float x) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setX(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setX(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setX(x);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getX() const
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getX() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setY(float y)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setY(float y) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setY(float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float y=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setY(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setY(y);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getY() const
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getY() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getXnormalized() const
	static int _bind_getXnormalized(lua_State *L) {
		if (!_lg_typecheck_getXnormalized(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getXnormalized() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getXnormalized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getXnormalized() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getXnormalized();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::GUIEventAdapter::getYnormalized() const
	static int _bind_getYnormalized(lua_State *L) {
		if (!_lg_typecheck_getYnormalized(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getYnormalized() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getYnormalized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getYnormalized() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getYnormalized();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo)
	static int _bind_setMouseYOrientation(lua_State *L) {
		if (!_lg_typecheck_setMouseYOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation myo)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::MouseYOrientation myo=(osgGA::GUIEventAdapter::MouseYOrientation)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setMouseYOrientation(osgGA::GUIEventAdapter::MouseYOrientation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMouseYOrientation(myo);

		return 0;
	}

	// osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const
	static int _bind_getMouseYOrientation(lua_State *L) {
		if (!_lg_typecheck_getMouseYOrientation(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const function, expected prototype:\nosgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::MouseYOrientation osgGA::GUIEventAdapter::getMouseYOrientation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::MouseYOrientation lret = self->getMouseYOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setButtonMask(int mask)
	static int _bind_setButtonMask(lua_State *L) {
		if (!_lg_typecheck_setButtonMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setButtonMask(int mask) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setButtonMask(int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mask=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setButtonMask(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setButtonMask(mask);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getButtonMask() const
	static int _bind_getButtonMask(lua_State *L) {
		if (!_lg_typecheck_getButtonMask(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getButtonMask() const function, expected prototype:\nint osgGA::GUIEventAdapter::getButtonMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getButtonMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getButtonMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setModKeyMask(int mask)
	static int _bind_setModKeyMask(lua_State *L) {
		if (!_lg_typecheck_setModKeyMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setModKeyMask(int mask) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setModKeyMask(int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mask=(int)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setModKeyMask(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setModKeyMask(mask);

		return 0;
	}

	// int osgGA::GUIEventAdapter::getModKeyMask() const
	static int _bind_getModKeyMask(lua_State *L) {
		if (!_lg_typecheck_getModKeyMask(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::getModKeyMask() const function, expected prototype:\nint osgGA::GUIEventAdapter::getModKeyMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::getModKeyMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getModKeyMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion)
	static int _bind_setScrollingMotion(lua_State *L) {
		if (!_lg_typecheck_setScrollingMotion(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion motion)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::ScrollingMotion motion=(osgGA::GUIEventAdapter::ScrollingMotion)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingMotion(osgGA::GUIEventAdapter::ScrollingMotion). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScrollingMotion(motion);

		return 0;
	}

	// osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const
	static int _bind_getScrollingMotion(lua_State *L) {
		if (!_lg_typecheck_getScrollingMotion(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const function, expected prototype:\nosgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::ScrollingMotion osgGA::GUIEventAdapter::getScrollingMotion() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::ScrollingMotion lret = self->getScrollingMotion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y)
	static int _bind_setScrollingMotionDelta(lua_State *L) {
		if (!_lg_typecheck_setScrollingMotionDelta(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingMotionDelta(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingMotionDelta(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScrollingMotionDelta(x, y);

		return 0;
	}

	// void osgGA::GUIEventAdapter::setScrollingDeltaX(float v)
	static int _bind_setScrollingDeltaX(lua_State *L) {
		if (!_lg_typecheck_setScrollingDeltaX(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingDeltaX(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingDeltaX(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingDeltaX(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScrollingDeltaX(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getScrollingDeltaX() const
	static int _bind_getScrollingDeltaX(lua_State *L) {
		if (!_lg_typecheck_getScrollingDeltaX(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getScrollingDeltaX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getScrollingDeltaX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getScrollingDeltaX() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getScrollingDeltaX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setScrollingDeltaY(float v)
	static int _bind_setScrollingDeltaY(lua_State *L) {
		if (!_lg_typecheck_setScrollingDeltaY(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setScrollingDeltaY(float v) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setScrollingDeltaY(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setScrollingDeltaY(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScrollingDeltaY(v);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getScrollingDeltaY() const
	static int _bind_getScrollingDeltaY(lua_State *L) {
		if (!_lg_typecheck_getScrollingDeltaY(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getScrollingDeltaY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getScrollingDeltaY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getScrollingDeltaY() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getScrollingDeltaY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenPressure(float pressure)
	static int _bind_setPenPressure(lua_State *L) {
		if (!_lg_typecheck_setPenPressure(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenPressure(float pressure) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenPressure(float pressure)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pressure=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenPressure(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPenPressure(pressure);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenPressure() const
	static int _bind_getPenPressure(lua_State *L) {
		if (!_lg_typecheck_getPenPressure(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenPressure() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenPressure() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenPressure() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPenPressure();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenTiltX(float tiltX)
	static int _bind_setPenTiltX(lua_State *L) {
		if (!_lg_typecheck_setPenTiltX(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenTiltX(float tiltX) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenTiltX(float tiltX)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tiltX=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenTiltX(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPenTiltX(tiltX);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenTiltX() const
	static int _bind_getPenTiltX(lua_State *L) {
		if (!_lg_typecheck_getPenTiltX(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenTiltX() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenTiltX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenTiltX() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPenTiltX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenTiltY(float tiltY)
	static int _bind_setPenTiltY(lua_State *L) {
		if (!_lg_typecheck_setPenTiltY(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenTiltY(float tiltY) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenTiltY(float tiltY)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tiltY=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenTiltY(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPenTiltY(tiltY);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenTiltY() const
	static int _bind_getPenTiltY(lua_State *L) {
		if (!_lg_typecheck_getPenTiltY(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenTiltY() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenTiltY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenTiltY() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPenTiltY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setPenRotation(float rotation)
	static int _bind_setPenRotation(lua_State *L) {
		if (!_lg_typecheck_setPenRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setPenRotation(float rotation) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setPenRotation(float rotation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rotation=(float)lua_tonumber(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setPenRotation(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPenRotation(rotation);

		return 0;
	}

	// float osgGA::GUIEventAdapter::getPenRotation() const
	static int _bind_getPenRotation(lua_State *L) {
		if (!_lg_typecheck_getPenRotation(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::GUIEventAdapter::getPenRotation() const function, expected prototype:\nfloat osgGA::GUIEventAdapter::getPenRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::GUIEventAdapter::getPenRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPenRotation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt)
	static int _bind_setTabletPointerType(lua_State *L) {
		if (!_lg_typecheck_setTabletPointerType(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt) function, expected prototype:\nvoid osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType pt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::TabletPointerType pt=(osgGA::GUIEventAdapter::TabletPointerType)lua_tointeger(L,2);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::setTabletPointerType(osgGA::GUIEventAdapter::TabletPointerType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTabletPointerType(pt);

		return 0;
	}

	// osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const
	static int _bind_getTabletPointerType(lua_State *L) {
		if (!_lg_typecheck_getTabletPointerType(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const function, expected prototype:\nosgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::TabletPointerType osgGA::GUIEventAdapter::getTabletPointerType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::TabletPointerType lret = self->getTabletPointerType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const
	static int _bind_getPenOrientation(lua_State *L) {
		if (!_lg_typecheck_getPenOrientation(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const function, expected prototype:\nconst osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd osgGA::GUIEventAdapter::getPenOrientation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd stack_lret = self->getPenOrientation();
		const osg::Matrixd* lret = new const osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0)
	static int _bind_addTouchPoint(lua_State *L) {
		if (!_lg_typecheck_addTouchPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0) function, expected prototype:\nvoid osgGA::GUIEventAdapter::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tapCount = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tapCount=luatop>5 ? (unsigned int)lua_tointeger(L,6) : (unsigned int)0;

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::addTouchPoint(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTouchPoint(id, phase, x, y, tapCount);

		return 0;
	}

	// osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const
	static int _bind_getTouchData(lua_State *L) {
		if (!_lg_typecheck_getTouchData(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const function, expected prototype:\nosgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::TouchData * osgGA::GUIEventAdapter::getTouchData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::TouchData * lret = self->getTouchData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::GUIEventAdapter::TouchData >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventAdapter::isMultiTouchEvent() const
	static int _bind_isMultiTouchEvent(lua_State *L) {
		if (!_lg_typecheck_isMultiTouchEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::isMultiTouchEvent() const function, expected prototype:\nbool osgGA::GUIEventAdapter::isMultiTouchEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::isMultiTouchEvent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMultiTouchEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState()
	static int _bind_getAccumulatedEventState(lua_State *L) {
		if (!_lg_typecheck_getAccumulatedEventState(L)) {
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState() function, expected prototype:\nstatic osg::ref_ptr< osgGA::GUIEventAdapter > & osgGA::GUIEventAdapter::getAccumulatedEventState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ref_ptr< osgGA::GUIEventAdapter > & lret = osgGA::GUIEventAdapter::getAccumulatedEventState();
		Luna< osgGA::GUIEventAdapter >::push(L,lret.get(),false);

		return 1;
	}

	// void osgGA::GUIEventAdapter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::GUIEventAdapter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventAdapter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::GUIEventAdapter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::GUIEventAdapter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventAdapter::setName(name);

		return 0;
	}

	// void osgGA::GUIEventAdapter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::base_computeDataVariance() function, expected prototype:\nvoid osgGA::GUIEventAdapter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventAdapter::computeDataVariance();

		return 0;
	}

	// void osgGA::GUIEventAdapter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::GUIEventAdapter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventAdapter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::GUIEventAdapter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::GUIEventAdapter::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::GUIEventAdapter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::GUIEventAdapter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GUIEventAdapter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::GUIEventAdapter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::GUIEventAdapter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::GUIEventAdapter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::GUIEventAdapter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GUIEventAdapter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::GUIEventAdapter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::GUIEventAdapter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::GUIEventAdapter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GUIEventAdapter::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::GUIEventAdapter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GUIEventAdapter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventAdapter::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventAdapter::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::GUIEventAdapter::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventAdapter::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventAdapter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GUIEventAdapter::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventAdapter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventAdapter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventAdapter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventAdapter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GUIEventAdapter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::base_libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GUIEventAdapter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventAdapter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventAdapter::base_className() const function, expected prototype:\nconst char * osgGA::GUIEventAdapter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventAdapter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GUIEventAdapter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::base_getEventType() const
	static int _bind_base_getEventType(lua_State *L) {
		if (!_lg_typecheck_base_getEventType(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::base_getEventType() const function, expected prototype:\nosgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::base_getEventType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::GUIEventAdapter::EventType osgGA::GUIEventAdapter::base_getEventType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::GUIEventAdapter::EventType lret = self->GUIEventAdapter::getEventType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgGA::GUIEventAdapter::base_getKey() const
	static int _bind_base_getKey(lua_State *L) {
		if (!_lg_typecheck_base_getKey(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::GUIEventAdapter::base_getKey() const function, expected prototype:\nint osgGA::GUIEventAdapter::base_getKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::GUIEventAdapter* self=Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::GUIEventAdapter::base_getKey() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GUIEventAdapter::getKey();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgGA::GUIEventAdapter* LunaTraits< osgGA::GUIEventAdapter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventAdapter::_bind_ctor(L);
}

void LunaTraits< osgGA::GUIEventAdapter >::_bind_dtor(osgGA::GUIEventAdapter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::GUIEventAdapter >::className[] = "GUIEventAdapter";
const char LunaTraits< osgGA::GUIEventAdapter >::fullName[] = "osgGA::GUIEventAdapter";
const char LunaTraits< osgGA::GUIEventAdapter >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventAdapter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgGA::GUIEventAdapter >::hash = 91398620;
const int LunaTraits< osgGA::GUIEventAdapter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::GUIEventAdapter >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_GUIEventAdapter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_GUIEventAdapter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_GUIEventAdapter::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_GUIEventAdapter::_bind_className},
	{"setHandled", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setHandled},
	{"getHandled", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getHandled},
	{"setEventType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setEventType},
	{"getEventType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getEventType},
	{"setTime", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setTime},
	{"getTime", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTime},
	{"time", &luna_wrapper_osgGA_GUIEventAdapter::_bind_time},
	{"setGraphicsContext", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setGraphicsContext},
	{"getGraphicsContext", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getGraphicsContext},
	{"setWindowRectangle", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowRectangle},
	{"setWindowX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowX},
	{"getWindowX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowX},
	{"setWindowY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowY},
	{"getWindowY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowY},
	{"setWindowWidth", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowWidth},
	{"getWindowWidth", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowWidth},
	{"setWindowHeight", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setWindowHeight},
	{"getWindowHeight", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getWindowHeight},
	{"setKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setKey},
	{"getKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getKey},
	{"setUnmodifiedKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setUnmodifiedKey},
	{"getUnmodifiedKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getUnmodifiedKey},
	{"setButton", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setButton},
	{"getButton", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getButton},
	{"setInputRange", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setInputRange},
	{"setXmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setXmin},
	{"getXmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXmin},
	{"setXmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setXmax},
	{"getXmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXmax},
	{"setYmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setYmin},
	{"getYmin", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYmin},
	{"setYmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setYmax},
	{"getYmax", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYmax},
	{"setX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setX},
	{"getX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getX},
	{"setY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setY},
	{"getY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getY},
	{"getXnormalized", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getXnormalized},
	{"getYnormalized", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getYnormalized},
	{"setMouseYOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setMouseYOrientation},
	{"getMouseYOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getMouseYOrientation},
	{"setButtonMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setButtonMask},
	{"getButtonMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getButtonMask},
	{"setModKeyMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setModKeyMask},
	{"getModKeyMask", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getModKeyMask},
	{"setScrollingMotion", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingMotion},
	{"getScrollingMotion", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingMotion},
	{"setScrollingMotionDelta", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingMotionDelta},
	{"setScrollingDeltaX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingDeltaX},
	{"getScrollingDeltaX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingDeltaX},
	{"setScrollingDeltaY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setScrollingDeltaY},
	{"getScrollingDeltaY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getScrollingDeltaY},
	{"setPenPressure", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenPressure},
	{"getPenPressure", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenPressure},
	{"setPenTiltX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenTiltX},
	{"getPenTiltX", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenTiltX},
	{"setPenTiltY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenTiltY},
	{"getPenTiltY", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenTiltY},
	{"setPenRotation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setPenRotation},
	{"getPenRotation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenRotation},
	{"setTabletPointerType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_setTabletPointerType},
	{"getTabletPointerType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTabletPointerType},
	{"getPenOrientation", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getPenOrientation},
	{"addTouchPoint", &luna_wrapper_osgGA_GUIEventAdapter::_bind_addTouchPoint},
	{"getTouchData", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTouchData},
	{"isMultiTouchEvent", &luna_wrapper_osgGA_GUIEventAdapter::_bind_isMultiTouchEvent},
	{"getAccumulatedEventState", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getAccumulatedEventState},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_className},
	{"base_getEventType", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_getEventType},
	{"base_getKey", &luna_wrapper_osgGA_GUIEventAdapter::_bind_base_getKey},
	{"fromVoid", &luna_wrapper_osgGA_GUIEventAdapter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_GUIEventAdapter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_GUIEventAdapter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventAdapter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_GUIEventAdapter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventAdapter >::enumValues[] = {
	{"LEFT_MOUSE_BUTTON", osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON},
	{"MIDDLE_MOUSE_BUTTON", osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON},
	{"RIGHT_MOUSE_BUTTON", osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON},
	{"NONE", osgGA::GUIEventAdapter::NONE},
	{"PUSH", osgGA::GUIEventAdapter::PUSH},
	{"RELEASE", osgGA::GUIEventAdapter::RELEASE},
	{"DOUBLECLICK", osgGA::GUIEventAdapter::DOUBLECLICK},
	{"DRAG", osgGA::GUIEventAdapter::DRAG},
	{"MOVE", osgGA::GUIEventAdapter::MOVE},
	{"KEYDOWN", osgGA::GUIEventAdapter::KEYDOWN},
	{"KEYUP", osgGA::GUIEventAdapter::KEYUP},
	{"FRAME", osgGA::GUIEventAdapter::FRAME},
	{"RESIZE", osgGA::GUIEventAdapter::RESIZE},
	{"SCROLL", osgGA::GUIEventAdapter::SCROLL},
	{"PEN_PRESSURE", osgGA::GUIEventAdapter::PEN_PRESSURE},
	{"PEN_ORIENTATION", osgGA::GUIEventAdapter::PEN_ORIENTATION},
	{"PEN_PROXIMITY_ENTER", osgGA::GUIEventAdapter::PEN_PROXIMITY_ENTER},
	{"PEN_PROXIMITY_LEAVE", osgGA::GUIEventAdapter::PEN_PROXIMITY_LEAVE},
	{"CLOSE_WINDOW", osgGA::GUIEventAdapter::CLOSE_WINDOW},
	{"QUIT_APPLICATION", osgGA::GUIEventAdapter::QUIT_APPLICATION},
	{"USER", osgGA::GUIEventAdapter::USER},
	{"KEY_Space", osgGA::GUIEventAdapter::KEY_Space},
	{"KEY_0", osgGA::GUIEventAdapter::KEY_0},
	{"KEY_1", osgGA::GUIEventAdapter::KEY_1},
	{"KEY_2", osgGA::GUIEventAdapter::KEY_2},
	{"KEY_3", osgGA::GUIEventAdapter::KEY_3},
	{"KEY_4", osgGA::GUIEventAdapter::KEY_4},
	{"KEY_5", osgGA::GUIEventAdapter::KEY_5},
	{"KEY_6", osgGA::GUIEventAdapter::KEY_6},
	{"KEY_7", osgGA::GUIEventAdapter::KEY_7},
	{"KEY_8", osgGA::GUIEventAdapter::KEY_8},
	{"KEY_9", osgGA::GUIEventAdapter::KEY_9},
	{"KEY_A", osgGA::GUIEventAdapter::KEY_A},
	{"KEY_B", osgGA::GUIEventAdapter::KEY_B},
	{"KEY_C", osgGA::GUIEventAdapter::KEY_C},
	{"KEY_D", osgGA::GUIEventAdapter::KEY_D},
	{"KEY_E", osgGA::GUIEventAdapter::KEY_E},
	{"KEY_F", osgGA::GUIEventAdapter::KEY_F},
	{"KEY_G", osgGA::GUIEventAdapter::KEY_G},
	{"KEY_H", osgGA::GUIEventAdapter::KEY_H},
	{"KEY_I", osgGA::GUIEventAdapter::KEY_I},
	{"KEY_J", osgGA::GUIEventAdapter::KEY_J},
	{"KEY_K", osgGA::GUIEventAdapter::KEY_K},
	{"KEY_L", osgGA::GUIEventAdapter::KEY_L},
	{"KEY_M", osgGA::GUIEventAdapter::KEY_M},
	{"KEY_N", osgGA::GUIEventAdapter::KEY_N},
	{"KEY_O", osgGA::GUIEventAdapter::KEY_O},
	{"KEY_P", osgGA::GUIEventAdapter::KEY_P},
	{"KEY_Q", osgGA::GUIEventAdapter::KEY_Q},
	{"KEY_R", osgGA::GUIEventAdapter::KEY_R},
	{"KEY_S", osgGA::GUIEventAdapter::KEY_S},
	{"KEY_T", osgGA::GUIEventAdapter::KEY_T},
	{"KEY_U", osgGA::GUIEventAdapter::KEY_U},
	{"KEY_V", osgGA::GUIEventAdapter::KEY_V},
	{"KEY_W", osgGA::GUIEventAdapter::KEY_W},
	{"KEY_X", osgGA::GUIEventAdapter::KEY_X},
	{"KEY_Y", osgGA::GUIEventAdapter::KEY_Y},
	{"KEY_Z", osgGA::GUIEventAdapter::KEY_Z},
	{"KEY_Exclaim", osgGA::GUIEventAdapter::KEY_Exclaim},
	{"KEY_Quotedbl", osgGA::GUIEventAdapter::KEY_Quotedbl},
	{"KEY_Hash", osgGA::GUIEventAdapter::KEY_Hash},
	{"KEY_Dollar", osgGA::GUIEventAdapter::KEY_Dollar},
	{"KEY_Ampersand", osgGA::GUIEventAdapter::KEY_Ampersand},
	{"KEY_Quote", osgGA::GUIEventAdapter::KEY_Quote},
	{"KEY_Leftparen", osgGA::GUIEventAdapter::KEY_Leftparen},
	{"KEY_Rightparen", osgGA::GUIEventAdapter::KEY_Rightparen},
	{"KEY_Asterisk", osgGA::GUIEventAdapter::KEY_Asterisk},
	{"KEY_Plus", osgGA::GUIEventAdapter::KEY_Plus},
	{"KEY_Comma", osgGA::GUIEventAdapter::KEY_Comma},
	{"KEY_Minus", osgGA::GUIEventAdapter::KEY_Minus},
	{"KEY_Period", osgGA::GUIEventAdapter::KEY_Period},
	{"KEY_Slash", osgGA::GUIEventAdapter::KEY_Slash},
	{"KEY_Colon", osgGA::GUIEventAdapter::KEY_Colon},
	{"KEY_Semicolon", osgGA::GUIEventAdapter::KEY_Semicolon},
	{"KEY_Less", osgGA::GUIEventAdapter::KEY_Less},
	{"KEY_Equals", osgGA::GUIEventAdapter::KEY_Equals},
	{"KEY_Greater", osgGA::GUIEventAdapter::KEY_Greater},
	{"KEY_Question", osgGA::GUIEventAdapter::KEY_Question},
	{"KEY_At", osgGA::GUIEventAdapter::KEY_At},
	{"KEY_Leftbracket", osgGA::GUIEventAdapter::KEY_Leftbracket},
	{"KEY_Backslash", osgGA::GUIEventAdapter::KEY_Backslash},
	{"KEY_Rightbracket", osgGA::GUIEventAdapter::KEY_Rightbracket},
	{"KEY_Caret", osgGA::GUIEventAdapter::KEY_Caret},
	{"KEY_Underscore", osgGA::GUIEventAdapter::KEY_Underscore},
	{"KEY_Backquote", osgGA::GUIEventAdapter::KEY_Backquote},
	{"KEY_BackSpace", osgGA::GUIEventAdapter::KEY_BackSpace},
	{"KEY_Tab", osgGA::GUIEventAdapter::KEY_Tab},
	{"KEY_Linefeed", osgGA::GUIEventAdapter::KEY_Linefeed},
	{"KEY_Clear", osgGA::GUIEventAdapter::KEY_Clear},
	{"KEY_Return", osgGA::GUIEventAdapter::KEY_Return},
	{"KEY_Pause", osgGA::GUIEventAdapter::KEY_Pause},
	{"KEY_Scroll_Lock", osgGA::GUIEventAdapter::KEY_Scroll_Lock},
	{"KEY_Sys_Req", osgGA::GUIEventAdapter::KEY_Sys_Req},
	{"KEY_Escape", osgGA::GUIEventAdapter::KEY_Escape},
	{"KEY_Delete", osgGA::GUIEventAdapter::KEY_Delete},
	{"KEY_Home", osgGA::GUIEventAdapter::KEY_Home},
	{"KEY_Left", osgGA::GUIEventAdapter::KEY_Left},
	{"KEY_Up", osgGA::GUIEventAdapter::KEY_Up},
	{"KEY_Right", osgGA::GUIEventAdapter::KEY_Right},
	{"KEY_Down", osgGA::GUIEventAdapter::KEY_Down},
	{"KEY_Prior", osgGA::GUIEventAdapter::KEY_Prior},
	{"KEY_Page_Up", osgGA::GUIEventAdapter::KEY_Page_Up},
	{"KEY_Next", osgGA::GUIEventAdapter::KEY_Next},
	{"KEY_Page_Down", osgGA::GUIEventAdapter::KEY_Page_Down},
	{"KEY_End", osgGA::GUIEventAdapter::KEY_End},
	{"KEY_Begin", osgGA::GUIEventAdapter::KEY_Begin},
	{"KEY_Select", osgGA::GUIEventAdapter::KEY_Select},
	{"KEY_Print", osgGA::GUIEventAdapter::KEY_Print},
	{"KEY_Execute", osgGA::GUIEventAdapter::KEY_Execute},
	{"KEY_Insert", osgGA::GUIEventAdapter::KEY_Insert},
	{"KEY_Undo", osgGA::GUIEventAdapter::KEY_Undo},
	{"KEY_Redo", osgGA::GUIEventAdapter::KEY_Redo},
	{"KEY_Menu", osgGA::GUIEventAdapter::KEY_Menu},
	{"KEY_Find", osgGA::GUIEventAdapter::KEY_Find},
	{"KEY_Cancel", osgGA::GUIEventAdapter::KEY_Cancel},
	{"KEY_Help", osgGA::GUIEventAdapter::KEY_Help},
	{"KEY_Break", osgGA::GUIEventAdapter::KEY_Break},
	{"KEY_Mode_switch", osgGA::GUIEventAdapter::KEY_Mode_switch},
	{"KEY_Script_switch", osgGA::GUIEventAdapter::KEY_Script_switch},
	{"KEY_Num_Lock", osgGA::GUIEventAdapter::KEY_Num_Lock},
	{"KEY_KP_Space", osgGA::GUIEventAdapter::KEY_KP_Space},
	{"KEY_KP_Tab", osgGA::GUIEventAdapter::KEY_KP_Tab},
	{"KEY_KP_Enter", osgGA::GUIEventAdapter::KEY_KP_Enter},
	{"KEY_KP_F1", osgGA::GUIEventAdapter::KEY_KP_F1},
	{"KEY_KP_F2", osgGA::GUIEventAdapter::KEY_KP_F2},
	{"KEY_KP_F3", osgGA::GUIEventAdapter::KEY_KP_F3},
	{"KEY_KP_F4", osgGA::GUIEventAdapter::KEY_KP_F4},
	{"KEY_KP_Home", osgGA::GUIEventAdapter::KEY_KP_Home},
	{"KEY_KP_Left", osgGA::GUIEventAdapter::KEY_KP_Left},
	{"KEY_KP_Up", osgGA::GUIEventAdapter::KEY_KP_Up},
	{"KEY_KP_Right", osgGA::GUIEventAdapter::KEY_KP_Right},
	{"KEY_KP_Down", osgGA::GUIEventAdapter::KEY_KP_Down},
	{"KEY_KP_Prior", osgGA::GUIEventAdapter::KEY_KP_Prior},
	{"KEY_KP_Page_Up", osgGA::GUIEventAdapter::KEY_KP_Page_Up},
	{"KEY_KP_Next", osgGA::GUIEventAdapter::KEY_KP_Next},
	{"KEY_KP_Page_Down", osgGA::GUIEventAdapter::KEY_KP_Page_Down},
	{"KEY_KP_End", osgGA::GUIEventAdapter::KEY_KP_End},
	{"KEY_KP_Begin", osgGA::GUIEventAdapter::KEY_KP_Begin},
	{"KEY_KP_Insert", osgGA::GUIEventAdapter::KEY_KP_Insert},
	{"KEY_KP_Delete", osgGA::GUIEventAdapter::KEY_KP_Delete},
	{"KEY_KP_Equal", osgGA::GUIEventAdapter::KEY_KP_Equal},
	{"KEY_KP_Multiply", osgGA::GUIEventAdapter::KEY_KP_Multiply},
	{"KEY_KP_Add", osgGA::GUIEventAdapter::KEY_KP_Add},
	{"KEY_KP_Separator", osgGA::GUIEventAdapter::KEY_KP_Separator},
	{"KEY_KP_Subtract", osgGA::GUIEventAdapter::KEY_KP_Subtract},
	{"KEY_KP_Decimal", osgGA::GUIEventAdapter::KEY_KP_Decimal},
	{"KEY_KP_Divide", osgGA::GUIEventAdapter::KEY_KP_Divide},
	{"KEY_KP_0", osgGA::GUIEventAdapter::KEY_KP_0},
	{"KEY_KP_1", osgGA::GUIEventAdapter::KEY_KP_1},
	{"KEY_KP_2", osgGA::GUIEventAdapter::KEY_KP_2},
	{"KEY_KP_3", osgGA::GUIEventAdapter::KEY_KP_3},
	{"KEY_KP_4", osgGA::GUIEventAdapter::KEY_KP_4},
	{"KEY_KP_5", osgGA::GUIEventAdapter::KEY_KP_5},
	{"KEY_KP_6", osgGA::GUIEventAdapter::KEY_KP_6},
	{"KEY_KP_7", osgGA::GUIEventAdapter::KEY_KP_7},
	{"KEY_KP_8", osgGA::GUIEventAdapter::KEY_KP_8},
	{"KEY_KP_9", osgGA::GUIEventAdapter::KEY_KP_9},
	{"KEY_F1", osgGA::GUIEventAdapter::KEY_F1},
	{"KEY_F2", osgGA::GUIEventAdapter::KEY_F2},
	{"KEY_F3", osgGA::GUIEventAdapter::KEY_F3},
	{"KEY_F4", osgGA::GUIEventAdapter::KEY_F4},
	{"KEY_F5", osgGA::GUIEventAdapter::KEY_F5},
	{"KEY_F6", osgGA::GUIEventAdapter::KEY_F6},
	{"KEY_F7", osgGA::GUIEventAdapter::KEY_F7},
	{"KEY_F8", osgGA::GUIEventAdapter::KEY_F8},
	{"KEY_F9", osgGA::GUIEventAdapter::KEY_F9},
	{"KEY_F10", osgGA::GUIEventAdapter::KEY_F10},
	{"KEY_F11", osgGA::GUIEventAdapter::KEY_F11},
	{"KEY_F12", osgGA::GUIEventAdapter::KEY_F12},
	{"KEY_F13", osgGA::GUIEventAdapter::KEY_F13},
	{"KEY_F14", osgGA::GUIEventAdapter::KEY_F14},
	{"KEY_F15", osgGA::GUIEventAdapter::KEY_F15},
	{"KEY_F16", osgGA::GUIEventAdapter::KEY_F16},
	{"KEY_F17", osgGA::GUIEventAdapter::KEY_F17},
	{"KEY_F18", osgGA::GUIEventAdapter::KEY_F18},
	{"KEY_F19", osgGA::GUIEventAdapter::KEY_F19},
	{"KEY_F20", osgGA::GUIEventAdapter::KEY_F20},
	{"KEY_F21", osgGA::GUIEventAdapter::KEY_F21},
	{"KEY_F22", osgGA::GUIEventAdapter::KEY_F22},
	{"KEY_F23", osgGA::GUIEventAdapter::KEY_F23},
	{"KEY_F24", osgGA::GUIEventAdapter::KEY_F24},
	{"KEY_F25", osgGA::GUIEventAdapter::KEY_F25},
	{"KEY_F26", osgGA::GUIEventAdapter::KEY_F26},
	{"KEY_F27", osgGA::GUIEventAdapter::KEY_F27},
	{"KEY_F28", osgGA::GUIEventAdapter::KEY_F28},
	{"KEY_F29", osgGA::GUIEventAdapter::KEY_F29},
	{"KEY_F30", osgGA::GUIEventAdapter::KEY_F30},
	{"KEY_F31", osgGA::GUIEventAdapter::KEY_F31},
	{"KEY_F32", osgGA::GUIEventAdapter::KEY_F32},
	{"KEY_F33", osgGA::GUIEventAdapter::KEY_F33},
	{"KEY_F34", osgGA::GUIEventAdapter::KEY_F34},
	{"KEY_F35", osgGA::GUIEventAdapter::KEY_F35},
	{"KEY_Shift_L", osgGA::GUIEventAdapter::KEY_Shift_L},
	{"KEY_Shift_R", osgGA::GUIEventAdapter::KEY_Shift_R},
	{"KEY_Control_L", osgGA::GUIEventAdapter::KEY_Control_L},
	{"KEY_Control_R", osgGA::GUIEventAdapter::KEY_Control_R},
	{"KEY_Caps_Lock", osgGA::GUIEventAdapter::KEY_Caps_Lock},
	{"KEY_Shift_Lock", osgGA::GUIEventAdapter::KEY_Shift_Lock},
	{"KEY_Meta_L", osgGA::GUIEventAdapter::KEY_Meta_L},
	{"KEY_Meta_R", osgGA::GUIEventAdapter::KEY_Meta_R},
	{"KEY_Alt_L", osgGA::GUIEventAdapter::KEY_Alt_L},
	{"KEY_Alt_R", osgGA::GUIEventAdapter::KEY_Alt_R},
	{"KEY_Super_L", osgGA::GUIEventAdapter::KEY_Super_L},
	{"KEY_Super_R", osgGA::GUIEventAdapter::KEY_Super_R},
	{"KEY_Hyper_L", osgGA::GUIEventAdapter::KEY_Hyper_L},
	{"KEY_Hyper_R", osgGA::GUIEventAdapter::KEY_Hyper_R},
	{"MODKEY_LEFT_SHIFT", osgGA::GUIEventAdapter::MODKEY_LEFT_SHIFT},
	{"MODKEY_RIGHT_SHIFT", osgGA::GUIEventAdapter::MODKEY_RIGHT_SHIFT},
	{"MODKEY_LEFT_CTRL", osgGA::GUIEventAdapter::MODKEY_LEFT_CTRL},
	{"MODKEY_RIGHT_CTRL", osgGA::GUIEventAdapter::MODKEY_RIGHT_CTRL},
	{"MODKEY_LEFT_ALT", osgGA::GUIEventAdapter::MODKEY_LEFT_ALT},
	{"MODKEY_RIGHT_ALT", osgGA::GUIEventAdapter::MODKEY_RIGHT_ALT},
	{"MODKEY_LEFT_META", osgGA::GUIEventAdapter::MODKEY_LEFT_META},
	{"MODKEY_RIGHT_META", osgGA::GUIEventAdapter::MODKEY_RIGHT_META},
	{"MODKEY_LEFT_SUPER", osgGA::GUIEventAdapter::MODKEY_LEFT_SUPER},
	{"MODKEY_RIGHT_SUPER", osgGA::GUIEventAdapter::MODKEY_RIGHT_SUPER},
	{"MODKEY_LEFT_HYPER", osgGA::GUIEventAdapter::MODKEY_LEFT_HYPER},
	{"MODKEY_RIGHT_HYPER", osgGA::GUIEventAdapter::MODKEY_RIGHT_HYPER},
	{"MODKEY_NUM_LOCK", osgGA::GUIEventAdapter::MODKEY_NUM_LOCK},
	{"MODKEY_CAPS_LOCK", osgGA::GUIEventAdapter::MODKEY_CAPS_LOCK},
	{"MODKEY_CTRL", osgGA::GUIEventAdapter::MODKEY_CTRL},
	{"MODKEY_SHIFT", osgGA::GUIEventAdapter::MODKEY_SHIFT},
	{"MODKEY_ALT", osgGA::GUIEventAdapter::MODKEY_ALT},
	{"MODKEY_META", osgGA::GUIEventAdapter::MODKEY_META},
	{"MODKEY_SUPER", osgGA::GUIEventAdapter::MODKEY_SUPER},
	{"MODKEY_HYPER", osgGA::GUIEventAdapter::MODKEY_HYPER},
	{"Y_INCREASING_UPWARDS", osgGA::GUIEventAdapter::Y_INCREASING_UPWARDS},
	{"Y_INCREASING_DOWNWARDS", osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS},
	{"SCROLL_NONE", osgGA::GUIEventAdapter::SCROLL_NONE},
	{"SCROLL_LEFT", osgGA::GUIEventAdapter::SCROLL_LEFT},
	{"SCROLL_RIGHT", osgGA::GUIEventAdapter::SCROLL_RIGHT},
	{"SCROLL_UP", osgGA::GUIEventAdapter::SCROLL_UP},
	{"SCROLL_DOWN", osgGA::GUIEventAdapter::SCROLL_DOWN},
	{"SCROLL_2D", osgGA::GUIEventAdapter::SCROLL_2D},
	{"UNKNOWN", osgGA::GUIEventAdapter::UNKNOWN},
	{"PEN", osgGA::GUIEventAdapter::PEN},
	{"PUCK", osgGA::GUIEventAdapter::PUCK},
	{"ERASER", osgGA::GUIEventAdapter::ERASER},
	{"TOUCH_UNKNOWN", osgGA::GUIEventAdapter::TOUCH_UNKNOWN},
	{"TOUCH_BEGAN", osgGA::GUIEventAdapter::TOUCH_BEGAN},
	{"TOUCH_MOVED", osgGA::GUIEventAdapter::TOUCH_MOVED},
	{"TOUCH_STATIONERY", osgGA::GUIEventAdapter::TOUCH_STATIONERY},
	{"TOUCH_ENDED", osgGA::GUIEventAdapter::TOUCH_ENDED},
	{0,0}
};


