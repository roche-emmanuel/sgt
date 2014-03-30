#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_LODScaleHandler.h>

class luna_wrapper_osgViewer_LODScaleHandler {
public:
	typedef Luna< osgViewer::LODScaleHandler > luna_t;

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

		osgViewer::LODScaleHandler* self= (osgViewer::LODScaleHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::LODScaleHandler >::push(L,self,false);
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
		//osgViewer::LODScaleHandler* ptr= dynamic_cast< osgViewer::LODScaleHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::LODScaleHandler* ptr= luna_caster< osg::Referenced, osgViewer::LODScaleHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::LODScaleHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setKeyEventIncreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventIncreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventDecreaseLODScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventDecreaseLODScale(lua_State *L) {
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
	// osgViewer::LODScaleHandler::LODScaleHandler()
	static osgViewer::LODScaleHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::LODScaleHandler::LODScaleHandler() function, expected prototype:\nosgViewer::LODScaleHandler::LODScaleHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgViewer::LODScaleHandler();
	}

	// osgViewer::LODScaleHandler::LODScaleHandler(lua_Table * data)
	static osgViewer::LODScaleHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::LODScaleHandler::LODScaleHandler(lua_Table * data) function, expected prototype:\nosgViewer::LODScaleHandler::LODScaleHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_LODScaleHandler(L,NULL);
	}

	// Overload binder for osgViewer::LODScaleHandler::LODScaleHandler
	static osgViewer::LODScaleHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LODScaleHandler, cannot match any of the overloads for function LODScaleHandler:\n  LODScaleHandler()\n  LODScaleHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key)
	static int _bind_setKeyEventIncreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_setKeyEventIncreaseLODScale(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key) function, expected prototype:\nvoid osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventIncreaseLODScale(key);

		return 0;
	}

	// int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const
	static int _bind_getKeyEventIncreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_getKeyEventIncreaseLODScale(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const function, expected prototype:\nint osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventIncreaseLODScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key)
	static int _bind_setKeyEventDecreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_setKeyEventDecreaseLODScale(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key) function, expected prototype:\nvoid osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventDecreaseLODScale(key);

		return 0;
	}

	// int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const
	static int _bind_getKeyEventDecreaseLODScale(lua_State *L) {
		if (!_lg_typecheck_getKeyEventDecreaseLODScale(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const function, expected prototype:\nint osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventDecreaseLODScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::LODScaleHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::LODScaleHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::LODScaleHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::LODScaleHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::LODScaleHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::LODScaleHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::setName(name);

		return 0;
	}

	// void osgViewer::LODScaleHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::LODScaleHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::LODScaleHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::LODScaleHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::LODScaleHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::LODScaleHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->LODScaleHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::LODScaleHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::LODScaleHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::LODScaleHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::LODScaleHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->LODScaleHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::LODScaleHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::LODScaleHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::LODScaleHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::LODScaleHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::LODScaleHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::LODScaleHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LODScaleHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::LODScaleHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::LODScaleHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::LODScaleHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::LODScaleHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::LODScaleHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LODScaleHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::LODScaleHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::LODScaleHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::LODScaleHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::LODScaleHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LODScaleHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::LODScaleHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::LODScaleHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::LODScaleHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::LODScaleHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LODScaleHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::LODScaleHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::LODScaleHandler::base_className() const function, expected prototype:\nconst char * osgViewer::LODScaleHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::LODScaleHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LODScaleHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::LODScaleHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::event(nv, drawable);

		return 0;
	}

	// bool osgViewer::LODScaleHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::LODScaleHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::LODScaleHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::LODScaleHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::LODScaleHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::LODScaleHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LODScaleHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::LODScaleHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::LODScaleHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::LODScaleHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::LODScaleHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::LODScaleHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::LODScaleHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::LODScaleHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LODScaleHandler::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::LODScaleHandler* LunaTraits< osgViewer::LODScaleHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_LODScaleHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::LODScaleHandler >::_bind_dtor(osgViewer::LODScaleHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::LODScaleHandler >::className[] = "LODScaleHandler";
const char LunaTraits< osgViewer::LODScaleHandler >::fullName[] = "osgViewer::LODScaleHandler";
const char LunaTraits< osgViewer::LODScaleHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::LODScaleHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::LODScaleHandler >::hash = 43754236;
const int LunaTraits< osgViewer::LODScaleHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::LODScaleHandler >::methods[] = {
	{"setKeyEventIncreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_setKeyEventIncreaseLODScale},
	{"getKeyEventIncreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getKeyEventIncreaseLODScale},
	{"setKeyEventDecreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_setKeyEventDecreaseLODScale},
	{"getKeyEventDecreaseLODScale", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getKeyEventDecreaseLODScale},
	{"handle", &luna_wrapper_osgViewer_LODScaleHandler::_bind_handle},
	{"getUsage", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getUsage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_event},
	{"base_handle", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgViewer_LODScaleHandler::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgViewer_LODScaleHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_LODScaleHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_LODScaleHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::LODScaleHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_LODScaleHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::LODScaleHandler >::enumValues[] = {
	{0,0}
};


