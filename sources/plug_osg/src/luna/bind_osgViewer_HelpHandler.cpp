#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_HelpHandler.h>

class luna_wrapper_osgViewer_HelpHandler {
public:
	typedef Luna< osgViewer::HelpHandler > luna_t;

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

		osgViewer::HelpHandler* self= (osgViewer::HelpHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::HelpHandler >::push(L,self,false);
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
		//osgViewer::HelpHandler* ptr= dynamic_cast< osgViewer::HelpHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::HelpHandler* ptr= luna_caster< osg::Referenced, osgViewer::HelpHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::HelpHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setApplicationUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventTogglesOnScreenHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglesOnScreenHelp(lua_State *L) {
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
	// osgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0)
	static osgViewer::HelpHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0) function, expected prototype:\nosgViewer::HelpHandler::HelpHandler(osg::ApplicationUsage * au = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::ApplicationUsage* au=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1)) : (osg::ApplicationUsage*)0;

		return new osgViewer::HelpHandler(au);
	}

	// osgViewer::HelpHandler::HelpHandler(lua_Table * data, osg::ApplicationUsage * au = 0)
	static osgViewer::HelpHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::HelpHandler::HelpHandler(lua_Table * data, osg::ApplicationUsage * au = 0) function, expected prototype:\nosgViewer::HelpHandler::HelpHandler(lua_Table * data, osg::ApplicationUsage * au = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::ApplicationUsage* au=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2)) : (osg::ApplicationUsage*)0;

		return new wrapper_osgViewer_HelpHandler(L,NULL, au);
	}

	// Overload binder for osgViewer::HelpHandler::HelpHandler
	static osgViewer::HelpHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HelpHandler, cannot match any of the overloads for function HelpHandler:\n  HelpHandler(osg::ApplicationUsage *)\n  HelpHandler(lua_Table *, osg::ApplicationUsage *)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au)
	static int _bind_setApplicationUsage(lua_State *L) {
		if (!_lg_typecheck_setApplicationUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au) function, expected prototype:\nvoid osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage * au)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* au=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::setApplicationUsage(osg::ApplicationUsage *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setApplicationUsage(au);

		return 0;
	}

	// osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage()
	static int _bind_getApplicationUsage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() function, expected prototype:\nosg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const
	static int _bind_getApplicationUsage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const function, expected prototype:\nconst osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage * osgViewer::HelpHandler::getApplicationUsage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::HelpHandler::getApplicationUsage
	static int _bind_getApplicationUsage(lua_State *L) {
		if (_lg_typecheck_getApplicationUsage_overload_1(L)) return _bind_getApplicationUsage_overload_1(L);
		if (_lg_typecheck_getApplicationUsage_overload_2(L)) return _bind_getApplicationUsage_overload_2(L);

		luaL_error(L, "error in function getApplicationUsage, cannot match any of the overloads for function getApplicationUsage:\n  getApplicationUsage()\n  getApplicationUsage()\n");
		return 0;
	}

	// void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key)
	static int _bind_setKeyEventTogglesOnScreenHelp(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglesOnScreenHelp(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key) function, expected prototype:\nvoid osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::setKeyEventTogglesOnScreenHelp(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventTogglesOnScreenHelp(key);

		return 0;
	}

	// int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const
	static int _bind_getKeyEventTogglesOnScreenHelp(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglesOnScreenHelp(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const function, expected prototype:\nint osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::HelpHandler::getKeyEventTogglesOnScreenHelp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventTogglesOnScreenHelp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::HelpHandler::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::reset() function, expected prototype:\nvoid osgViewer::HelpHandler::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// osg::Camera * osgViewer::HelpHandler::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::HelpHandler::getCamera() function, expected prototype:\nosg::Camera * osgViewer::HelpHandler::getCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::HelpHandler::getCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::HelpHandler::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::HelpHandler::getCamera() const function, expected prototype:\nconst osg::Camera * osgViewer::HelpHandler::getCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::HelpHandler::getCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::HelpHandler::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::HelpHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::HelpHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::HelpHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::HelpHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::HelpHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::HelpHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::HelpHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::HelpHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::HelpHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::setName(name);

		return 0;
	}

	// void osgViewer::HelpHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::HelpHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::HelpHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::HelpHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::HelpHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::HelpHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::HelpHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::HelpHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->HelpHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::HelpHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::HelpHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::HelpHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::HelpHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->HelpHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::HelpHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::HelpHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::HelpHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::HelpHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::HelpHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::HelpHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::HelpHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->HelpHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::HelpHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::HelpHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::HelpHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::HelpHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::HelpHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->HelpHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::HelpHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::HelpHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::HelpHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::HelpHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HelpHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::HelpHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::HelpHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::HelpHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::HelpHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->HelpHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::HelpHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::HelpHandler::base_className() const function, expected prototype:\nconst char * osgViewer::HelpHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::HelpHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->HelpHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::HelpHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::HelpHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::event(nv, drawable);

		return 0;
	}

	// bool osgViewer::HelpHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::HelpHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::HelpHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::HelpHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::HelpHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::HelpHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HelpHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::HelpHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::HelpHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::HelpHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::HelpHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::HelpHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::HelpHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::HelpHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HelpHandler::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::HelpHandler* LunaTraits< osgViewer::HelpHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_HelpHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::HelpHandler >::_bind_dtor(osgViewer::HelpHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::HelpHandler >::className[] = "HelpHandler";
const char LunaTraits< osgViewer::HelpHandler >::fullName[] = "osgViewer::HelpHandler";
const char LunaTraits< osgViewer::HelpHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::HelpHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::HelpHandler >::hash = 27239095;
const int LunaTraits< osgViewer::HelpHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::HelpHandler >::methods[] = {
	{"setApplicationUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_setApplicationUsage},
	{"getApplicationUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_getApplicationUsage},
	{"setKeyEventTogglesOnScreenHelp", &luna_wrapper_osgViewer_HelpHandler::_bind_setKeyEventTogglesOnScreenHelp},
	{"getKeyEventTogglesOnScreenHelp", &luna_wrapper_osgViewer_HelpHandler::_bind_getKeyEventTogglesOnScreenHelp},
	{"reset", &luna_wrapper_osgViewer_HelpHandler::_bind_reset},
	{"getCamera", &luna_wrapper_osgViewer_HelpHandler::_bind_getCamera},
	{"handle", &luna_wrapper_osgViewer_HelpHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_getUsage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_HelpHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_HelpHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_HelpHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_HelpHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_HelpHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_HelpHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_HelpHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_HelpHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_HelpHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_HelpHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_HelpHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_HelpHandler::_bind_base_event},
	{"base_handle", &luna_wrapper_osgViewer_HelpHandler::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgViewer_HelpHandler::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgViewer_HelpHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_HelpHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_HelpHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::HelpHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_HelpHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::HelpHandler >::enumValues[] = {
	{0,0}
};


