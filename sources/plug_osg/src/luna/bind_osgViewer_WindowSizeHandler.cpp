#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_WindowSizeHandler.h>

class luna_wrapper_osgViewer_WindowSizeHandler {
public:
	typedef Luna< osgViewer::WindowSizeHandler > luna_t;

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

		osgViewer::WindowSizeHandler* self= (osgViewer::WindowSizeHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::WindowSizeHandler >::push(L,self,false);
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
		//osgViewer::WindowSizeHandler* ptr= dynamic_cast< osgViewer::WindowSizeHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::WindowSizeHandler* ptr= luna_caster< osg::Referenced, osgViewer::WindowSizeHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::WindowSizeHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getToggleFullscreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventWindowedResolutionUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventWindowedResolutionUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventWindowedResolutionDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventWindowedResolutionDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChangeWindowedResolution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChangeWindowedResolution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::WindowSizeHandler::WindowSizeHandler()
	static osgViewer::WindowSizeHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::WindowSizeHandler::WindowSizeHandler() function, expected prototype:\nosgViewer::WindowSizeHandler::WindowSizeHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgViewer::WindowSizeHandler();
	}

	// osgViewer::WindowSizeHandler::WindowSizeHandler(lua_Table * data)
	static osgViewer::WindowSizeHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::WindowSizeHandler::WindowSizeHandler(lua_Table * data) function, expected prototype:\nosgViewer::WindowSizeHandler::WindowSizeHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_WindowSizeHandler(L,NULL);
	}

	// Overload binder for osgViewer::WindowSizeHandler::WindowSizeHandler
	static osgViewer::WindowSizeHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WindowSizeHandler, cannot match any of the overloads for function WindowSizeHandler:\n  WindowSizeHandler()\n  WindowSizeHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::WindowSizeHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key)
	static int _bind_setKeyEventToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleFullscreen(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleFullscreen(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const
	static int _bind_getKeyEventToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleFullscreen(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleFullscreen();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag)
	static int _bind_setToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_setToggleFullscreen(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setToggleFullscreen(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setToggleFullscreen(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setToggleFullscreen(flag);

		return 0;
	}

	// bool osgViewer::WindowSizeHandler::getToggleFullscreen() const
	static int _bind_getToggleFullscreen(lua_State *L) {
		if (!_lg_typecheck_getToggleFullscreen(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::getToggleFullscreen() const function, expected prototype:\nbool osgViewer::WindowSizeHandler::getToggleFullscreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::getToggleFullscreen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getToggleFullscreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key)
	static int _bind_setKeyEventWindowedResolutionUp(lua_State *L) {
		if (!_lg_typecheck_setKeyEventWindowedResolutionUp(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventWindowedResolutionUp(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const
	static int _bind_getKeyEventWindowedResolutionUp(lua_State *L) {
		if (!_lg_typecheck_getKeyEventWindowedResolutionUp(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventWindowedResolutionUp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key)
	static int _bind_setKeyEventWindowedResolutionDown(lua_State *L) {
		if (!_lg_typecheck_setKeyEventWindowedResolutionDown(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventWindowedResolutionDown(key);

		return 0;
	}

	// int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const
	static int _bind_getKeyEventWindowedResolutionDown(lua_State *L) {
		if (!_lg_typecheck_getKeyEventWindowedResolutionDown(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const function, expected prototype:\nint osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventWindowedResolutionDown();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag)
	static int _bind_setChangeWindowedResolution(lua_State *L) {
		if (!_lg_typecheck_setChangeWindowedResolution(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::setChangeWindowedResolution(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setChangeWindowedResolution(flag);

		return 0;
	}

	// bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const
	static int _bind_getChangeWindowedResolution(lua_State *L) {
		if (!_lg_typecheck_getChangeWindowedResolution(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const function, expected prototype:\nbool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::getChangeWindowedResolution() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getChangeWindowedResolution();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::WindowSizeHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::WindowSizeHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::setName(name);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::WindowSizeHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::WindowSizeHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->WindowSizeHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::WindowSizeHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->WindowSizeHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::WindowSizeHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::WindowSizeHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::WindowSizeHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::WindowSizeHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::WindowSizeHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::WindowSizeHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->WindowSizeHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::WindowSizeHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::WindowSizeHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::WindowSizeHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::WindowSizeHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::WindowSizeHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->WindowSizeHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::WindowSizeHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::WindowSizeHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WindowSizeHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::WindowSizeHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::WindowSizeHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::WindowSizeHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::WindowSizeHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->WindowSizeHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::WindowSizeHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::WindowSizeHandler::base_className() const function, expected prototype:\nconst char * osgViewer::WindowSizeHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::WindowSizeHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->WindowSizeHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::WindowSizeHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::event(nv, drawable);

		return 0;
	}

	// void osgViewer::WindowSizeHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::WindowSizeHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::WindowSizeHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::WindowSizeHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::WindowSizeHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowSizeHandler::getUsage(usage);

		return 0;
	}

	// bool osgViewer::WindowSizeHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::WindowSizeHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::WindowSizeHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::WindowSizeHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::WindowSizeHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::WindowSizeHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::WindowSizeHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::WindowSizeHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WindowSizeHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::WindowSizeHandler* LunaTraits< osgViewer::WindowSizeHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_WindowSizeHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::WindowSizeHandler >::_bind_dtor(osgViewer::WindowSizeHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::WindowSizeHandler >::className[] = "WindowSizeHandler";
const char LunaTraits< osgViewer::WindowSizeHandler >::fullName[] = "osgViewer::WindowSizeHandler";
const char LunaTraits< osgViewer::WindowSizeHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::WindowSizeHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::WindowSizeHandler >::hash = 2477444;
const int LunaTraits< osgViewer::WindowSizeHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::WindowSizeHandler >::methods[] = {
	{"getUsage", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getUsage},
	{"setKeyEventToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventToggleFullscreen},
	{"getKeyEventToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventToggleFullscreen},
	{"setToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setToggleFullscreen},
	{"getToggleFullscreen", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getToggleFullscreen},
	{"setKeyEventWindowedResolutionUp", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventWindowedResolutionUp},
	{"getKeyEventWindowedResolutionUp", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventWindowedResolutionUp},
	{"setKeyEventWindowedResolutionDown", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setKeyEventWindowedResolutionDown},
	{"getKeyEventWindowedResolutionDown", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getKeyEventWindowedResolutionDown},
	{"setChangeWindowedResolution", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_setChangeWindowedResolution},
	{"getChangeWindowedResolution", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getChangeWindowedResolution},
	{"handle", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_handle},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_event},
	{"base_getUsage", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_getUsage},
	{"base_handle", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_base_handle},
	{"fromVoid", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_WindowSizeHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::WindowSizeHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_WindowSizeHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::WindowSizeHandler >::enumValues[] = {
	{0,0}
};


