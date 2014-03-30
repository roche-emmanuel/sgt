#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ScreenCaptureHandler.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler > luna_t;

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

		osgViewer::ScreenCaptureHandler* self= (osgViewer::ScreenCaptureHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::ScreenCaptureHandler >::push(L,self,false);
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
		//osgViewer::ScreenCaptureHandler* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ScreenCaptureHandler* ptr= luna_caster< osg::Referenced, osgViewer::ScreenCaptureHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventTakeScreenShot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTakeScreenShot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleContinuousCapture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleContinuousCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCaptureOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCaptureOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_captureNextFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFramesToCapture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFramesToCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_startCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_captureNextFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)
	static osgViewer::ScreenCaptureHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1) function, expected prototype:\nosgViewer::ScreenCaptureHandler::ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ScreenCaptureHandler::CaptureOperation* defaultOperation=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,1)) : (osgViewer::ScreenCaptureHandler::CaptureOperation*)0;
		int numFrames=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		return new osgViewer::ScreenCaptureHandler(defaultOperation, numFrames);
	}

	// osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(lua_Table * data, osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)
	static osgViewer::ScreenCaptureHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::ScreenCaptureHandler(lua_Table * data, osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1) function, expected prototype:\nosgViewer::ScreenCaptureHandler::ScreenCaptureHandler(lua_Table * data, osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation = 0, int numFrames = 1)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgViewer::ScreenCaptureHandler::CaptureOperation* defaultOperation=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,2)) : (osgViewer::ScreenCaptureHandler::CaptureOperation*)0;
		int numFrames=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;

		return new wrapper_osgViewer_ScreenCaptureHandler(L,NULL, defaultOperation, numFrames);
	}

	// Overload binder for osgViewer::ScreenCaptureHandler::ScreenCaptureHandler
	static osgViewer::ScreenCaptureHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ScreenCaptureHandler, cannot match any of the overloads for function ScreenCaptureHandler:\n  ScreenCaptureHandler(osgViewer::ScreenCaptureHandler::CaptureOperation *, int)\n  ScreenCaptureHandler(lua_Table *, osgViewer::ScreenCaptureHandler::CaptureOperation *, int)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key)
	static int _bind_setKeyEventTakeScreenShot(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTakeScreenShot(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventTakeScreenShot(key);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const
	static int _bind_getKeyEventTakeScreenShot(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTakeScreenShot(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventTakeScreenShot();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key)
	static int _bind_setKeyEventToggleContinuousCapture(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleContinuousCapture(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleContinuousCapture(key);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const
	static int _bind_getKeyEventToggleContinuousCapture(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleContinuousCapture(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleContinuousCapture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation)
	static int _bind_setCaptureOperation(lua_State *L) {
		if (!_lg_typecheck_setCaptureOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ScreenCaptureHandler::CaptureOperation* operation=(Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,2));

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setCaptureOperation(osgViewer::ScreenCaptureHandler::CaptureOperation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCaptureOperation(operation);

		return 0;
	}

	// osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const
	static int _bind_getCaptureOperation(lua_State *L) {
		if (!_lg_typecheck_getCaptureOperation(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const function, expected prototype:\nosgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ScreenCaptureHandler::CaptureOperation * osgViewer::ScreenCaptureHandler::getCaptureOperation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgViewer::ScreenCaptureHandler::CaptureOperation * lret = self->getCaptureOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ScreenCaptureHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ScreenCaptureHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ScreenCaptureHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer)
	static int _bind_captureNextFrame(lua_State *L) {
		if (!_lg_typecheck_captureNextFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::captureNextFrame function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::captureNextFrame(osgViewer::ViewerBase &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->captureNextFrame(viewer);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames)
	static int _bind_setFramesToCapture(lua_State *L) {
		if (!_lg_typecheck_setFramesToCapture(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::setFramesToCapture(int numFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numFrames=(int)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::setFramesToCapture(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFramesToCapture(numFrames);

		return 0;
	}

	// int osgViewer::ScreenCaptureHandler::getFramesToCapture() const
	static int _bind_getFramesToCapture(lua_State *L) {
		if (!_lg_typecheck_getFramesToCapture(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ScreenCaptureHandler::getFramesToCapture() const function, expected prototype:\nint osgViewer::ScreenCaptureHandler::getFramesToCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ScreenCaptureHandler::getFramesToCapture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFramesToCapture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::startCapture()
	static int _bind_startCapture(lua_State *L) {
		if (!_lg_typecheck_startCapture(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::startCapture() function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::startCapture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::startCapture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCapture();

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::stopCapture()
	static int _bind_stopCapture(lua_State *L) {
		if (!_lg_typecheck_stopCapture(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::stopCapture() function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::stopCapture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::stopCapture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCapture();

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ScreenCaptureHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::setName(name);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ScreenCaptureHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::ScreenCaptureHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ScreenCaptureHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ScreenCaptureHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::ScreenCaptureHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::ScreenCaptureHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::ScreenCaptureHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::ScreenCaptureHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ScreenCaptureHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::ScreenCaptureHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::ScreenCaptureHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::ScreenCaptureHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ScreenCaptureHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::ScreenCaptureHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ScreenCaptureHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::ScreenCaptureHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ScreenCaptureHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::ScreenCaptureHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ScreenCaptureHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScreenCaptureHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::ScreenCaptureHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::ScreenCaptureHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::ScreenCaptureHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::ScreenCaptureHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ScreenCaptureHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::ScreenCaptureHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::ScreenCaptureHandler::base_className() const function, expected prototype:\nconst char * osgViewer::ScreenCaptureHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::ScreenCaptureHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ScreenCaptureHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::event(nv, drawable);

		return 0;
	}

	// bool osgViewer::ScreenCaptureHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ScreenCaptureHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::ScreenCaptureHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ScreenCaptureHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ScreenCaptureHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ScreenCaptureHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScreenCaptureHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ScreenCaptureHandler::base_captureNextFrame(osgViewer::ViewerBase & viewer)
	static int _bind_base_captureNextFrame(lua_State *L) {
		if (!_lg_typecheck_base_captureNextFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_captureNextFrame(osgViewer::ViewerBase & viewer) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_captureNextFrame(osgViewer::ViewerBase & viewer)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgViewer::ViewerBase* viewer_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ViewerBase >(L,2));
		if( !viewer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewer in osgViewer::ScreenCaptureHandler::base_captureNextFrame function");
		}
		osgViewer::ViewerBase & viewer=*viewer_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_captureNextFrame(osgViewer::ViewerBase &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::captureNextFrame(viewer);

		return 0;
	}

	// void osgViewer::ScreenCaptureHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ScreenCaptureHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ScreenCaptureHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenCaptureHandler::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::ScreenCaptureHandler* LunaTraits< osgViewer::ScreenCaptureHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::ScreenCaptureHandler >::_bind_dtor(osgViewer::ScreenCaptureHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler >::className[] = "ScreenCaptureHandler";
const char LunaTraits< osgViewer::ScreenCaptureHandler >::fullName[] = "osgViewer::ScreenCaptureHandler";
const char LunaTraits< osgViewer::ScreenCaptureHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler >::hash = 3689079;
const int LunaTraits< osgViewer::ScreenCaptureHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler >::methods[] = {
	{"setKeyEventTakeScreenShot", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setKeyEventTakeScreenShot},
	{"getKeyEventTakeScreenShot", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getKeyEventTakeScreenShot},
	{"setKeyEventToggleContinuousCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setKeyEventToggleContinuousCapture},
	{"getKeyEventToggleContinuousCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getKeyEventToggleContinuousCapture},
	{"setCaptureOperation", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setCaptureOperation},
	{"getCaptureOperation", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getCaptureOperation},
	{"handle", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_handle},
	{"captureNextFrame", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_captureNextFrame},
	{"setFramesToCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_setFramesToCapture},
	{"getFramesToCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getFramesToCapture},
	{"startCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_startCapture},
	{"stopCapture", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_stopCapture},
	{"getUsage", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getUsage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_event},
	{"base_handle", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_handle},
	{"base_captureNextFrame", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_captureNextFrame},
	{"base_getUsage", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_ScreenCaptureHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler >::enumValues[] = {
	{0,0}
};


