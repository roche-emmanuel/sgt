#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_GraphicsWindow.h>

class luna_wrapper_osgViewer_GraphicsWindow {
public:
	typedef Luna< osgViewer::GraphicsWindow > luna_t;

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

		osgViewer::GraphicsWindow* self= (osgViewer::GraphicsWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::GraphicsWindow >::push(L,self,false);
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
		//osgViewer::GraphicsWindow* ptr= dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::GraphicsWindow* ptr= luna_caster< osg::Referenced, osgViewer::GraphicsWindow >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindow >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GUIActionAdapter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgViewer::GraphicsWindow* ptr= dynamic_cast< osgViewer::GraphicsWindow* >(Luna< osgGA::GUIActionAdapter >::check(L,1));
		osgViewer::GraphicsWindow* ptr= luna_caster< osgGA::GUIActionAdapter, osgViewer::GraphicsWindow >::cast(Luna< osgGA::GUIActionAdapter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::GraphicsWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowRectangleImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowDecorationImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_raiseWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViews(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70560566) ) return false;
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

	inline static bool _lg_typecheck_base_runOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setWindowRectangleImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowRectangle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWindowDecorationImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_raiseWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setWindowName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWindowName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSyncToVBlank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgViewer::GraphicsWindow::GraphicsWindow(lua_Table * data)
	static osgViewer::GraphicsWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::GraphicsWindow::GraphicsWindow(lua_Table * data) function, expected prototype:\nosgViewer::GraphicsWindow::GraphicsWindow(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_GraphicsWindow(L,NULL);
	}


	// Function binds:
	// const char * osgViewer::GraphicsWindow::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindow::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue)
	static int _bind_setEventQueue(lua_State *L) {
		if (!_lg_typecheck_setEventQueue(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue * eventQueue)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue* eventQueue=(Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,2));

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setEventQueue(osgGA::EventQueue *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventQueue(eventQueue);

		return 0;
	}

	// osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue()
	static int _bind_getEventQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() function, expected prototype:\nosgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const
	static int _bind_getEventQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const function, expected prototype:\nconst osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue * osgViewer::GraphicsWindow::getEventQueue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::GraphicsWindow::getEventQueue
	static int _bind_getEventQueue(lua_State *L) {
		if (_lg_typecheck_getEventQueue_overload_1(L)) return _bind_getEventQueue_overload_1(L);
		if (_lg_typecheck_getEventQueue_overload_2(L)) return _bind_getEventQueue_overload_2(L);

		luaL_error(L, "error in function getEventQueue, cannot match any of the overloads for function getEventQueue:\n  getEventQueue()\n  getEventQueue()\n");
		return 0;
	}

	// void osgViewer::GraphicsWindow::checkEvents()
	static int _bind_checkEvents(lua_State *L) {
		if (!_lg_typecheck_checkEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::checkEvents() function, expected prototype:\nvoid osgViewer::GraphicsWindow::checkEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::checkEvents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkEvents();

		return 0;
	}

	// void osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height)
	static int _bind_setWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowRectangle(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowRectangle(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowRectangle(x, y, width, height);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)
	static int _bind_setWindowRectangleImplementation(lua_State *L) {
		if (!_lg_typecheck_setWindowRectangleImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4) function, expected prototype:\nbool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);
		int _arg4=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setWindowRectangleImplementation(_arg1, _arg2, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)
	static int _bind_getWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_getWindowRectangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getWindowRectangle(int &, int &, int &, int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getWindowRectangle(x, y, width, height);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 4;
	}

	// void osgViewer::GraphicsWindow::setWindowDecoration(bool flag)
	static int _bind_setWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_setWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowDecoration(bool flag) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowDecoration(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowDecoration(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowDecoration(flag);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)
	static int _bind_setWindowDecorationImplementation(lua_State *L) {
		if (!_lg_typecheck_setWindowDecorationImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1) function, expected prototype:\nbool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setWindowDecorationImplementation(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	static int _bind_getWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_getWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::getWindowDecoration() const function, expected prototype:\nbool osgViewer::GraphicsWindow::getWindowDecoration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::getWindowDecoration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getWindowDecoration();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindow::grabFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::grabFocus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::raiseWindow()
	static int _bind_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_raiseWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::raiseWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::raiseWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->raiseWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)
	static int _bind_setWindowName(lua_State *L) {
		if (!_lg_typecheck_setWindowName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setWindowName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWindowName(_arg1);

		return 0;
	}

	// std::string osgViewer::GraphicsWindow::getWindowName()
	static int _bind_getWindowName(lua_State *L) {
		if (!_lg_typecheck_getWindowName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgViewer::GraphicsWindow::getWindowName() function, expected prototype:\nstd::string osgViewer::GraphicsWindow::getWindowName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgViewer::GraphicsWindow::getWindowName(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getWindowName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	static int _bind_useCursor(lua_State *L) {
		if (!_lg_typecheck_useCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::useCursor(bool cursorOn) function, expected prototype:\nvoid osgViewer::GraphicsWindow::useCursor(bool cursorOn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::useCursor(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useCursor(cursorOn);

		return 0;
	}

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	static int _bind_setCursor(lua_State *L) {
		if (!_lg_typecheck_setCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::GraphicsWindow::MouseCursor _arg1=(osgViewer::GraphicsWindow::MouseCursor)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCursor(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	static int _bind_setSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_setSyncToVBlank(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setSyncToVBlank(bool on) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setSyncToVBlank(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setSyncToVBlank(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSyncToVBlank(on);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::getSyncToVBlank() const
	static int _bind_getSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_getSyncToVBlank(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::getSyncToVBlank() const function, expected prototype:\nbool osgViewer::GraphicsWindow::getSyncToVBlank() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::getSyncToVBlank() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSyncToVBlank();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	static int _bind_setSwapGroup(lua_State *L) {
		if (!_lg_typecheck_setSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier) function, expected prototype:\nvoid osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::setSwapGroup(bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSwapGroup(on, group, barrier);

		return 0;
	}

	// void osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const
	static int _bind_getSwapGroup(lua_State *L) {
		if (!_lg_typecheck_getSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const function, expected prototype:\nvoid osgViewer::GraphicsWindow::getSwapGroup(bool & on, unsigned int & group, unsigned int & barrier) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getSwapGroup(bool &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getSwapGroup(on, group, barrier);

		lua_pushboolean(L,on?1:0);
		lua_pushnumber(L,group);
		lua_pushnumber(L,barrier);
		return 3;
	}

	// bool osgViewer::GraphicsWindow::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::valid() const function, expected prototype:\nbool osgViewer::GraphicsWindow::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindow::isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindow::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)
	static int _bind_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTextureImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindPBufferToTextureImplementation(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views) function, expected prototype:\nvoid osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views & views)\nClass arguments details:\narg 1 ID = 51540588\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::GraphicsWindow::Views* views_ptr=(Luna< std::list< osgViewer::View * > >::checkSubType< osgViewer::GraphicsWindow::Views >(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::GraphicsWindow::getViews function");
		}
		osgViewer::GraphicsWindow::Views & views=*views_ptr;

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::getViews(osgViewer::GraphicsWindow::Views &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getViews(views);

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestRedraw()
	static int _bind_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestRedraw() function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestRedraw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestRedraw();

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	static int _bind_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	static int _bind_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestWarpPointer(x, y);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setName(name);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::computeDataVariance();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::GraphicsWindow::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::GraphicsWindow::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::GraphicsWindow::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::GraphicsWindow::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GraphicsWindow::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::GraphicsWindow::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::GraphicsWindow::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::GraphicsWindow::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::GraphicsWindow::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GraphicsWindow::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::GraphicsWindow::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::GraphicsWindow::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_runOperations()
	static int _bind_base_runOperations(lua_State *L) {
		if (!_lg_typecheck_base_runOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_runOperations() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_runOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_runOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::runOperations();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_clear() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::clear();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_resizedImplementation(int x, int y, int width, int height)
	static int _bind_base_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_resizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_resizedImplementation(int x, int y, int width, int height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_resizedImplementation(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_resizedImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::resizedImplementation(x, y, width, height);

		return 0;
	}

	// osg::View * osgViewer::GraphicsWindow::base_asView()
	static int _bind_base_asView(lua_State *L) {
		if (!_lg_typecheck_base_asView(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osgViewer::GraphicsWindow::base_asView() function, expected prototype:\nosg::View * osgViewer::GraphicsWindow::base_asView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osgViewer::GraphicsWindow::base_asView(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->GraphicsWindow::asView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// const char * osgViewer::GraphicsWindow::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::base_libraryName() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsWindow::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::GraphicsWindow::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::GraphicsWindow::base_className() const function, expected prototype:\nconst char * osgViewer::GraphicsWindow::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::GraphicsWindow::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsWindow::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_checkEvents()
	static int _bind_base_checkEvents(lua_State *L) {
		if (!_lg_typecheck_base_checkEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_checkEvents() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_checkEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_checkEvents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::checkEvents();

		return 0;
	}

	// bool osgViewer::GraphicsWindow::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)
	static int _bind_base_setWindowRectangleImplementation(lua_State *L) {
		if (!_lg_typecheck_base_setWindowRectangleImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4) function, expected prototype:\nbool osgViewer::GraphicsWindow::base_setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);
		int _arg4=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_setWindowRectangleImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::setWindowRectangleImplementation(_arg1, _arg2, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_getWindowRectangle(int & x, int & y, int & width, int & height)
	static int _bind_base_getWindowRectangle(lua_State *L) {
		if (!_lg_typecheck_base_getWindowRectangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_getWindowRectangle(int & x, int & y, int & width, int & height) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_getWindowRectangle(int & x, int & y, int & width, int & height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_getWindowRectangle(int &, int &, int &, int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::getWindowRectangle(x, y, width, height);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 4;
	}

	// bool osgViewer::GraphicsWindow::base_setWindowDecorationImplementation(bool arg1)
	static int _bind_base_setWindowDecorationImplementation(lua_State *L) {
		if (!_lg_typecheck_base_setWindowDecorationImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_setWindowDecorationImplementation(bool arg1) function, expected prototype:\nbool osgViewer::GraphicsWindow::base_setWindowDecorationImplementation(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_setWindowDecorationImplementation(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::setWindowDecorationImplementation(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::base_getWindowDecoration() const
	static int _bind_base_getWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_base_getWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_getWindowDecoration() const function, expected prototype:\nbool osgViewer::GraphicsWindow::base_getWindowDecoration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_getWindowDecoration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::getWindowDecoration();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_grabFocus()
	static int _bind_base_grabFocus(lua_State *L) {
		if (!_lg_typecheck_base_grabFocus(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_grabFocus() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_grabFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_grabFocus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::grabFocus();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_grabFocusIfPointerInWindow()
	static int _bind_base_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_base_grabFocusIfPointerInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_grabFocusIfPointerInWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_grabFocusIfPointerInWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_grabFocusIfPointerInWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::grabFocusIfPointerInWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_raiseWindow()
	static int _bind_base_raiseWindow(lua_State *L) {
		if (!_lg_typecheck_base_raiseWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_raiseWindow() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_raiseWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_raiseWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::raiseWindow();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setWindowName(const std::string & arg1)
	static int _bind_base_setWindowName(lua_State *L) {
		if (!_lg_typecheck_base_setWindowName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setWindowName(const std::string & arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setWindowName(const std::string & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setWindowName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setWindowName(_arg1);

		return 0;
	}

	// std::string osgViewer::GraphicsWindow::base_getWindowName()
	static int _bind_base_getWindowName(lua_State *L) {
		if (!_lg_typecheck_base_getWindowName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgViewer::GraphicsWindow::base_getWindowName() function, expected prototype:\nstd::string osgViewer::GraphicsWindow::base_getWindowName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgViewer::GraphicsWindow::base_getWindowName(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->GraphicsWindow::getWindowName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_useCursor(bool cursorOn)
	static int _bind_base_useCursor(lua_State *L) {
		if (!_lg_typecheck_base_useCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_useCursor(bool cursorOn) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_useCursor(bool cursorOn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_useCursor(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::useCursor(cursorOn);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	static int _bind_base_setCursor(lua_State *L) {
		if (!_lg_typecheck_base_setCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::GraphicsWindow::MouseCursor _arg1=(osgViewer::GraphicsWindow::MouseCursor)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setCursor(osgViewer::GraphicsWindow::MouseCursor). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setCursor(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setSyncToVBlank(bool on)
	static int _bind_base_setSyncToVBlank(lua_State *L) {
		if (!_lg_typecheck_base_setSyncToVBlank(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setSyncToVBlank(bool on) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setSyncToVBlank(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setSyncToVBlank(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setSyncToVBlank(on);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	static int _bind_base_setSwapGroup(lua_State *L) {
		if (!_lg_typecheck_base_setSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_setSwapGroup(bool on, unsigned int group, unsigned int barrier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);
		unsigned int group=(unsigned int)lua_tointeger(L,3);
		unsigned int barrier=(unsigned int)lua_tointeger(L,4);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_setSwapGroup(bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::setSwapGroup(on, group, barrier);

		return 0;
	}

	// bool osgViewer::GraphicsWindow::base_valid() const
	static int _bind_base_valid(lua_State *L) {
		if (!_lg_typecheck_base_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_valid() const function, expected prototype:\nbool osgViewer::GraphicsWindow::base_valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::base_realizeImplementation()
	static int _bind_base_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_realizeImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::base_realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::base_isRealizedImplementation() const
	static int _bind_base_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_isRealizedImplementation() const function, expected prototype:\nbool osgViewer::GraphicsWindow::base_isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_closeImplementation()
	static int _bind_base_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_closeImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::closeImplementation();

		return 0;
	}

	// bool osgViewer::GraphicsWindow::base_makeCurrentImplementation()
	static int _bind_base_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_base_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_makeCurrentImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::base_makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::GraphicsWindow::base_releaseContextImplementation()
	static int _bind_base_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_base_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::GraphicsWindow::base_releaseContextImplementation() function, expected prototype:\nbool osgViewer::GraphicsWindow::base_releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::GraphicsWindow::base_releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindow::releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::GraphicsWindow::base_bindPBufferToTextureImplementation(unsigned int arg1)
	static int _bind_base_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_base_bindPBufferToTextureImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_bindPBufferToTextureImplementation(unsigned int arg1) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_bindPBufferToTextureImplementation(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_bindPBufferToTextureImplementation(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::bindPBufferToTextureImplementation(_arg1);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_swapBuffersImplementation()
	static int _bind_base_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_base_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_swapBuffersImplementation() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::swapBuffersImplementation();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_requestRedraw()
	static int _bind_base_requestRedraw(lua_State *L) {
		if (!_lg_typecheck_base_requestRedraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_requestRedraw() function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_requestRedraw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_requestRedraw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::requestRedraw();

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_requestContinuousUpdate(bool needed = true)
	static int _bind_base_requestContinuousUpdate(lua_State *L) {
		if (!_lg_typecheck_base_requestContinuousUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_requestContinuousUpdate(bool needed = true) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_requestContinuousUpdate(bool needed = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needed=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_requestContinuousUpdate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::requestContinuousUpdate(needed);

		return 0;
	}

	// void osgViewer::GraphicsWindow::base_requestWarpPointer(float x, float y)
	static int _bind_base_requestWarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_requestWarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::GraphicsWindow::base_requestWarpPointer(float x, float y) function, expected prototype:\nvoid osgViewer::GraphicsWindow::base_requestWarpPointer(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgViewer::GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< osgViewer::GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::GraphicsWindow::base_requestWarpPointer(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindow::requestWarpPointer(x, y);

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

osgViewer::GraphicsWindow* LunaTraits< osgViewer::GraphicsWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_GraphicsWindow::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
}

void LunaTraits< osgViewer::GraphicsWindow >::_bind_dtor(osgViewer::GraphicsWindow* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::GraphicsWindow >::className[] = "GraphicsWindow";
const char LunaTraits< osgViewer::GraphicsWindow >::fullName[] = "osgViewer::GraphicsWindow";
const char LunaTraits< osgViewer::GraphicsWindow >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::GraphicsWindow >::parents[] = {"osg.GraphicsContext", "osgGA.GUIActionAdapter", 0};
const int LunaTraits< osgViewer::GraphicsWindow >::hash = 90342307;
const int LunaTraits< osgViewer::GraphicsWindow >::uniqueIDs[] = {50169651, 85302998,0};

luna_RegType LunaTraits< osgViewer::GraphicsWindow >::methods[] = {
	{"libraryName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_GraphicsWindow::_bind_className},
	{"setEventQueue", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setEventQueue},
	{"getEventQueue", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getEventQueue},
	{"checkEvents", &luna_wrapper_osgViewer_GraphicsWindow::_bind_checkEvents},
	{"setWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowRectangle},
	{"setWindowRectangleImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowRectangleImplementation},
	{"getWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowRectangle},
	{"setWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowDecoration},
	{"setWindowDecorationImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowDecorationImplementation},
	{"getWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowDecoration},
	{"grabFocus", &luna_wrapper_osgViewer_GraphicsWindow::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_grabFocusIfPointerInWindow},
	{"raiseWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_raiseWindow},
	{"setWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setWindowName},
	{"getWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getWindowName},
	{"useCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_useCursor},
	{"setCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setCursor},
	{"setSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setSyncToVBlank},
	{"getSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getSyncToVBlank},
	{"setSwapGroup", &luna_wrapper_osgViewer_GraphicsWindow::_bind_setSwapGroup},
	{"getSwapGroup", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getSwapGroup},
	{"valid", &luna_wrapper_osgViewer_GraphicsWindow::_bind_valid},
	{"realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_makeCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_releaseContextImplementation},
	{"bindPBufferToTextureImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_bindPBufferToTextureImplementation},
	{"swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_swapBuffersImplementation},
	{"getViews", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getViews},
	{"requestRedraw", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestRedraw},
	{"requestContinuousUpdate", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestContinuousUpdate},
	{"requestWarpPointer", &luna_wrapper_osgViewer_GraphicsWindow::_bind_requestWarpPointer},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_releaseGLObjects},
	{"base_runOperations", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_runOperations},
	{"base_clear", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_clear},
	{"base_resizedImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_resizedImplementation},
	{"base_asView", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_asView},
	{"base_libraryName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_className},
	{"base_checkEvents", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_checkEvents},
	{"base_setWindowRectangleImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setWindowRectangleImplementation},
	{"base_getWindowRectangle", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_getWindowRectangle},
	{"base_setWindowDecorationImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setWindowDecorationImplementation},
	{"base_getWindowDecoration", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_getWindowDecoration},
	{"base_grabFocus", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_grabFocus},
	{"base_grabFocusIfPointerInWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_grabFocusIfPointerInWindow},
	{"base_raiseWindow", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_raiseWindow},
	{"base_setWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setWindowName},
	{"base_getWindowName", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_getWindowName},
	{"base_useCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_useCursor},
	{"base_setCursor", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setCursor},
	{"base_setSyncToVBlank", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setSyncToVBlank},
	{"base_setSwapGroup", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_setSwapGroup},
	{"base_valid", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_valid},
	{"base_realizeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_realizeImplementation},
	{"base_isRealizedImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_isRealizedImplementation},
	{"base_closeImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_closeImplementation},
	{"base_makeCurrentImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_makeCurrentImplementation},
	{"base_releaseContextImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_releaseContextImplementation},
	{"base_bindPBufferToTextureImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_bindPBufferToTextureImplementation},
	{"base_swapBuffersImplementation", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_swapBuffersImplementation},
	{"base_requestRedraw", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_requestRedraw},
	{"base_requestContinuousUpdate", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_requestContinuousUpdate},
	{"base_requestWarpPointer", &luna_wrapper_osgViewer_GraphicsWindow::_bind_base_requestWarpPointer},
	{"fromVoid", &luna_wrapper_osgViewer_GraphicsWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_GraphicsWindow::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_GraphicsWindow::_bind_getTable},
	{"asGUIActionAdapter", &luna_wrapper_osgViewer_GraphicsWindow::_bind_baseCast_osgGA_GUIActionAdapter},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::GraphicsWindow >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_GraphicsWindow::_cast_from_Referenced},
	{"osgGA::GUIActionAdapter", &luna_wrapper_osgViewer_GraphicsWindow::_cast_from_GUIActionAdapter},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::GraphicsWindow >::enumValues[] = {
	{"InheritCursor", osgViewer::GraphicsWindow::InheritCursor},
	{"NoCursor", osgViewer::GraphicsWindow::NoCursor},
	{"RightArrowCursor", osgViewer::GraphicsWindow::RightArrowCursor},
	{"LeftArrowCursor", osgViewer::GraphicsWindow::LeftArrowCursor},
	{"InfoCursor", osgViewer::GraphicsWindow::InfoCursor},
	{"DestroyCursor", osgViewer::GraphicsWindow::DestroyCursor},
	{"HelpCursor", osgViewer::GraphicsWindow::HelpCursor},
	{"CycleCursor", osgViewer::GraphicsWindow::CycleCursor},
	{"SprayCursor", osgViewer::GraphicsWindow::SprayCursor},
	{"WaitCursor", osgViewer::GraphicsWindow::WaitCursor},
	{"TextCursor", osgViewer::GraphicsWindow::TextCursor},
	{"CrosshairCursor", osgViewer::GraphicsWindow::CrosshairCursor},
	{"HandCursor", osgViewer::GraphicsWindow::HandCursor},
	{"UpDownCursor", osgViewer::GraphicsWindow::UpDownCursor},
	{"LeftRightCursor", osgViewer::GraphicsWindow::LeftRightCursor},
	{"TopSideCursor", osgViewer::GraphicsWindow::TopSideCursor},
	{"BottomSideCursor", osgViewer::GraphicsWindow::BottomSideCursor},
	{"LeftSideCursor", osgViewer::GraphicsWindow::LeftSideCursor},
	{"RightSideCursor", osgViewer::GraphicsWindow::RightSideCursor},
	{"TopLeftCorner", osgViewer::GraphicsWindow::TopLeftCorner},
	{"TopRightCorner", osgViewer::GraphicsWindow::TopRightCorner},
	{"BottomRightCorner", osgViewer::GraphicsWindow::BottomRightCorner},
	{"BottomLeftCorner", osgViewer::GraphicsWindow::BottomLeftCorner},
	{0,0}
};


