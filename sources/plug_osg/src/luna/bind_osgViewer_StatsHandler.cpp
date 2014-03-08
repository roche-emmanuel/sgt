#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_StatsHandler.h>

class luna_wrapper_osgViewer_StatsHandler {
public:
	typedef Luna< osgViewer::StatsHandler > luna_t;

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

		osgViewer::StatsHandler* self= (osgViewer::StatsHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::StatsHandler >::push(L,self,false);
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
		//osgViewer::StatsHandler* ptr= dynamic_cast< osgViewer::StatsHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::StatsHandler* ptr= luna_caster< osg::Referenced, osgViewer::StatsHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::StatsHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setKeyEventTogglesOnScreenStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglesOnScreenStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventPrintsOutStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventPrintsOutStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleVSync(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleVSync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBlockMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addUserStatsLine(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		if( lua_type(L,9)!=LUA_TSTRING ) return false;
		if( lua_type(L,10)!=LUA_TSTRING ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUserStatsLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::StatsHandler::StatsHandler()
	static osgViewer::StatsHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::StatsHandler::StatsHandler() function, expected prototype:\nosgViewer::StatsHandler::StatsHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgViewer::StatsHandler();
	}

	// osgViewer::StatsHandler::StatsHandler(lua_Table * data)
	static osgViewer::StatsHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::StatsHandler::StatsHandler(lua_Table * data) function, expected prototype:\nosgViewer::StatsHandler::StatsHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_StatsHandler(L,NULL);
	}

	// Overload binder for osgViewer::StatsHandler::StatsHandler
	static osgViewer::StatsHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StatsHandler, cannot match any of the overloads for function StatsHandler:\n  StatsHandler()\n  StatsHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key)
	static int _bind_setKeyEventTogglesOnScreenStats(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglesOnScreenStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventTogglesOnScreenStats(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const
	static int _bind_getKeyEventTogglesOnScreenStats(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglesOnScreenStats(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventTogglesOnScreenStats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key)
	static int _bind_setKeyEventPrintsOutStats(lua_State *L) {
		if (!_lg_typecheck_setKeyEventPrintsOutStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventPrintsOutStats(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventPrintsOutStats(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventPrintsOutStats(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const
	static int _bind_getKeyEventPrintsOutStats(lua_State *L) {
		if (!_lg_typecheck_getKeyEventPrintsOutStats(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventPrintsOutStats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventPrintsOutStats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventPrintsOutStats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::setKeyEventToggleVSync(int key)
	static int _bind_setKeyEventToggleVSync(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleVSync(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::setKeyEventToggleVSync(int key) function, expected prototype:\nvoid osgViewer::StatsHandler::setKeyEventToggleVSync(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::setKeyEventToggleVSync(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleVSync(key);

		return 0;
	}

	// int osgViewer::StatsHandler::getKeyEventToggleVSync() const
	static int _bind_getKeyEventToggleVSync(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleVSync(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::StatsHandler::getKeyEventToggleVSync() const function, expected prototype:\nint osgViewer::StatsHandler::getKeyEventToggleVSync() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::StatsHandler::getKeyEventToggleVSync() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleVSync();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgViewer::StatsHandler::getBlockMultiplier() const
	static int _bind_getBlockMultiplier(lua_State *L) {
		if (!_lg_typecheck_getBlockMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double osgViewer::StatsHandler::getBlockMultiplier() const function, expected prototype:\ndouble osgViewer::StatsHandler::getBlockMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgViewer::StatsHandler::getBlockMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getBlockMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::reset() function, expected prototype:\nvoid osgViewer::StatsHandler::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// osg::Camera * osgViewer::StatsHandler::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::StatsHandler::getCamera() function, expected prototype:\nosg::Camera * osgViewer::StatsHandler::getCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::StatsHandler::getCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::StatsHandler::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::StatsHandler::getCamera() const function, expected prototype:\nconst osg::Camera * osgViewer::StatsHandler::getCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::StatsHandler::getCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::StatsHandler::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::StatsHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::StatsHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::StatsHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::StatsHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::StatsHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue)
	static int _bind_addUserStatsLine(lua_State *L) {
		if (!_lg_typecheck_addUserStatsLine(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue) function, expected prototype:\nvoid osgViewer::StatsHandler::addUserStatsLine(const std::string & label, const osg::Vec4f & textColor, const osg::Vec4f & barColor, const std::string & timeTakenName, float multiplier, bool average, bool averageInInverseSpace, const std::string & beginTimeName, const std::string & endTimeName, float maxValue)\nClass arguments details:\narg 2 ID = 92303235\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string label(lua_tostring(L,2),lua_objlen(L,2));
		const osg::Vec4f* textColor_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !textColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg textColor in osgViewer::StatsHandler::addUserStatsLine function");
		}
		const osg::Vec4f & textColor=*textColor_ptr;
		const osg::Vec4f* barColor_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !barColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg barColor in osgViewer::StatsHandler::addUserStatsLine function");
		}
		const osg::Vec4f & barColor=*barColor_ptr;
		std::string timeTakenName(lua_tostring(L,5),lua_objlen(L,5));
		float multiplier=(float)lua_tonumber(L,6);
		bool average=(bool)(lua_toboolean(L,7)==1);
		bool averageInInverseSpace=(bool)(lua_toboolean(L,8)==1);
		std::string beginTimeName(lua_tostring(L,9),lua_objlen(L,9));
		std::string endTimeName(lua_tostring(L,10),lua_objlen(L,10));
		float maxValue=(float)lua_tonumber(L,11);

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::addUserStatsLine(const std::string &, const osg::Vec4f &, const osg::Vec4f &, const std::string &, float, bool, bool, const std::string &, const std::string &, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUserStatsLine(label, textColor, barColor, timeTakenName, multiplier, average, averageInInverseSpace, beginTimeName, endTimeName, maxValue);

		return 0;
	}

	// void osgViewer::StatsHandler::removeUserStatsLine(const std::string & label)
	static int _bind_removeUserStatsLine(lua_State *L) {
		if (!_lg_typecheck_removeUserStatsLine(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::removeUserStatsLine(const std::string & label) function, expected prototype:\nvoid osgViewer::StatsHandler::removeUserStatsLine(const std::string & label)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string label(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::removeUserStatsLine(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUserStatsLine(label);

		return 0;
	}

	// void osgViewer::StatsHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::StatsHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::StatsHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::StatsHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::setName(name);

		return 0;
	}

	// void osgViewer::StatsHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::StatsHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::StatsHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::StatsHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::StatsHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::StatsHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::StatsHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::StatsHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StatsHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::StatsHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::StatsHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::StatsHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::StatsHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StatsHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::StatsHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::StatsHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::StatsHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::StatsHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::StatsHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::StatsHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::StatsHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StatsHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::StatsHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::StatsHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::StatsHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::StatsHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::StatsHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StatsHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::StatsHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::StatsHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::StatsHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::StatsHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StatsHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::StatsHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::StatsHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::StatsHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::StatsHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StatsHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::StatsHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::StatsHandler::base_className() const function, expected prototype:\nconst char * osgViewer::StatsHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::StatsHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StatsHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::StatsHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::StatsHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::event(nv, drawable);

		return 0;
	}

	// bool osgViewer::StatsHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::StatsHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::StatsHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::StatsHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::StatsHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::StatsHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StatsHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::StatsHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::StatsHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::StatsHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::StatsHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::StatsHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::StatsHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::StatsHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsHandler::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::StatsHandler* LunaTraits< osgViewer::StatsHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_StatsHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::StatsHandler >::_bind_dtor(osgViewer::StatsHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::StatsHandler >::className[] = "StatsHandler";
const char LunaTraits< osgViewer::StatsHandler >::fullName[] = "osgViewer::StatsHandler";
const char LunaTraits< osgViewer::StatsHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::StatsHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::StatsHandler >::hash = 90944398;
const int LunaTraits< osgViewer::StatsHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::StatsHandler >::methods[] = {
	{"setKeyEventTogglesOnScreenStats", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventTogglesOnScreenStats},
	{"getKeyEventTogglesOnScreenStats", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventTogglesOnScreenStats},
	{"setKeyEventPrintsOutStats", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventPrintsOutStats},
	{"getKeyEventPrintsOutStats", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventPrintsOutStats},
	{"setKeyEventToggleVSync", &luna_wrapper_osgViewer_StatsHandler::_bind_setKeyEventToggleVSync},
	{"getKeyEventToggleVSync", &luna_wrapper_osgViewer_StatsHandler::_bind_getKeyEventToggleVSync},
	{"getBlockMultiplier", &luna_wrapper_osgViewer_StatsHandler::_bind_getBlockMultiplier},
	{"reset", &luna_wrapper_osgViewer_StatsHandler::_bind_reset},
	{"getCamera", &luna_wrapper_osgViewer_StatsHandler::_bind_getCamera},
	{"handle", &luna_wrapper_osgViewer_StatsHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_StatsHandler::_bind_getUsage},
	{"addUserStatsLine", &luna_wrapper_osgViewer_StatsHandler::_bind_addUserStatsLine},
	{"removeUserStatsLine", &luna_wrapper_osgViewer_StatsHandler::_bind_removeUserStatsLine},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_StatsHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_StatsHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_StatsHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_StatsHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_StatsHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_StatsHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_StatsHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_StatsHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_StatsHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_StatsHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_StatsHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_StatsHandler::_bind_base_event},
	{"base_handle", &luna_wrapper_osgViewer_StatsHandler::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgViewer_StatsHandler::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgViewer_StatsHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_StatsHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_StatsHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::StatsHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_StatsHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::StatsHandler >::enumValues[] = {
	{"NO_STATS", osgViewer::StatsHandler::NO_STATS},
	{"FRAME_RATE", osgViewer::StatsHandler::FRAME_RATE},
	{"VIEWER_STATS", osgViewer::StatsHandler::VIEWER_STATS},
	{"CAMERA_SCENE_STATS", osgViewer::StatsHandler::CAMERA_SCENE_STATS},
	{"VIEWER_SCENE_STATS", osgViewer::StatsHandler::VIEWER_SCENE_STATS},
	{"LAST", osgViewer::StatsHandler::LAST},
	{0,0}
};


