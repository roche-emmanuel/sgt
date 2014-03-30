#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ThreadingHandler.h>

class luna_wrapper_osgViewer_ThreadingHandler {
public:
	typedef Luna< osgViewer::ThreadingHandler > luna_t;

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

		osgViewer::ThreadingHandler* self= (osgViewer::ThreadingHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::ThreadingHandler >::push(L,self,false);
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
		//osgViewer::ThreadingHandler* ptr= dynamic_cast< osgViewer::ThreadingHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ThreadingHandler* ptr= luna_caster< osg::Referenced, osgViewer::ThreadingHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ThreadingHandler >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setKeyEventChangeThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventChangeThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChangeThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChangeThreadingModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventChangeEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventChangeEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChangeEndBarrierPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChangeEndBarrierPosition(lua_State *L) {
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
	// osgViewer::ThreadingHandler::ThreadingHandler()
	static osgViewer::ThreadingHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ThreadingHandler::ThreadingHandler() function, expected prototype:\nosgViewer::ThreadingHandler::ThreadingHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgViewer::ThreadingHandler();
	}

	// osgViewer::ThreadingHandler::ThreadingHandler(lua_Table * data)
	static osgViewer::ThreadingHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ThreadingHandler::ThreadingHandler(lua_Table * data) function, expected prototype:\nosgViewer::ThreadingHandler::ThreadingHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_ThreadingHandler(L,NULL);
	}

	// Overload binder for osgViewer::ThreadingHandler::ThreadingHandler
	static osgViewer::ThreadingHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ThreadingHandler, cannot match any of the overloads for function ThreadingHandler:\n  ThreadingHandler()\n  ThreadingHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::ThreadingHandler::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ThreadingHandler::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ThreadingHandler::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgViewer::ThreadingHandler::setKeyEventChangeThreadingModel(int key)
	static int _bind_setKeyEventChangeThreadingModel(lua_State *L) {
		if (!_lg_typecheck_setKeyEventChangeThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::setKeyEventChangeThreadingModel(int key) function, expected prototype:\nvoid osgViewer::ThreadingHandler::setKeyEventChangeThreadingModel(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::setKeyEventChangeThreadingModel(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventChangeThreadingModel(key);

		return 0;
	}

	// int osgViewer::ThreadingHandler::getKeyEventChangeThreadingModel() const
	static int _bind_getKeyEventChangeThreadingModel(lua_State *L) {
		if (!_lg_typecheck_getKeyEventChangeThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ThreadingHandler::getKeyEventChangeThreadingModel() const function, expected prototype:\nint osgViewer::ThreadingHandler::getKeyEventChangeThreadingModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ThreadingHandler::getKeyEventChangeThreadingModel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventChangeThreadingModel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ThreadingHandler::setChangeThreadingModel(bool flag)
	static int _bind_setChangeThreadingModel(lua_State *L) {
		if (!_lg_typecheck_setChangeThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::setChangeThreadingModel(bool flag) function, expected prototype:\nvoid osgViewer::ThreadingHandler::setChangeThreadingModel(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::setChangeThreadingModel(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setChangeThreadingModel(flag);

		return 0;
	}

	// bool osgViewer::ThreadingHandler::getChangeThreadingModel() const
	static int _bind_getChangeThreadingModel(lua_State *L) {
		if (!_lg_typecheck_getChangeThreadingModel(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ThreadingHandler::getChangeThreadingModel() const function, expected prototype:\nbool osgViewer::ThreadingHandler::getChangeThreadingModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ThreadingHandler::getChangeThreadingModel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getChangeThreadingModel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ThreadingHandler::setKeyEventChangeEndBarrierPosition(int key)
	static int _bind_setKeyEventChangeEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_setKeyEventChangeEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::setKeyEventChangeEndBarrierPosition(int key) function, expected prototype:\nvoid osgViewer::ThreadingHandler::setKeyEventChangeEndBarrierPosition(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::setKeyEventChangeEndBarrierPosition(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventChangeEndBarrierPosition(key);

		return 0;
	}

	// int osgViewer::ThreadingHandler::getKeyEventChangeEndBarrierPosition() const
	static int _bind_getKeyEventChangeEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_getKeyEventChangeEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::ThreadingHandler::getKeyEventChangeEndBarrierPosition() const function, expected prototype:\nint osgViewer::ThreadingHandler::getKeyEventChangeEndBarrierPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::ThreadingHandler::getKeyEventChangeEndBarrierPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventChangeEndBarrierPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::ThreadingHandler::setChangeEndBarrierPosition(bool flag)
	static int _bind_setChangeEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_setChangeEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::setChangeEndBarrierPosition(bool flag) function, expected prototype:\nvoid osgViewer::ThreadingHandler::setChangeEndBarrierPosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::setChangeEndBarrierPosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setChangeEndBarrierPosition(flag);

		return 0;
	}

	// bool osgViewer::ThreadingHandler::getChangeEndBarrierPosition() const
	static int _bind_getChangeEndBarrierPosition(lua_State *L) {
		if (!_lg_typecheck_getChangeEndBarrierPosition(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ThreadingHandler::getChangeEndBarrierPosition() const function, expected prototype:\nbool osgViewer::ThreadingHandler::getChangeEndBarrierPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ThreadingHandler::getChangeEndBarrierPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getChangeEndBarrierPosition();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::ThreadingHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ThreadingHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::ThreadingHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ThreadingHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ThreadingHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ThreadingHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::ThreadingHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::ThreadingHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::setName(name);

		return 0;
	}

	// void osgViewer::ThreadingHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::ThreadingHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::ThreadingHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::ThreadingHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::ThreadingHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::ThreadingHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ThreadingHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::ThreadingHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::ThreadingHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::ThreadingHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::ThreadingHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ThreadingHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::ThreadingHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::ThreadingHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::ThreadingHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::ThreadingHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::ThreadingHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::ThreadingHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ThreadingHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::ThreadingHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::ThreadingHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::ThreadingHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ThreadingHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::ThreadingHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ThreadingHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::ThreadingHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ThreadingHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::ThreadingHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ThreadingHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ThreadingHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::ThreadingHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::ThreadingHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::ThreadingHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::ThreadingHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ThreadingHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::ThreadingHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::ThreadingHandler::base_className() const function, expected prototype:\nconst char * osgViewer::ThreadingHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::ThreadingHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ThreadingHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::ThreadingHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::event(nv, drawable);

		return 0;
	}

	// void osgViewer::ThreadingHandler::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ThreadingHandler::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::ThreadingHandler::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::ThreadingHandler::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ThreadingHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ThreadingHandler::getUsage(usage);

		return 0;
	}

	// bool osgViewer::ThreadingHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::ThreadingHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::ThreadingHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ThreadingHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::ThreadingHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::ThreadingHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::ThreadingHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::ThreadingHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ThreadingHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::ThreadingHandler* LunaTraits< osgViewer::ThreadingHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ThreadingHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::ThreadingHandler >::_bind_dtor(osgViewer::ThreadingHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ThreadingHandler >::className[] = "ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::fullName[] = "osgViewer::ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ThreadingHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ThreadingHandler >::hash = 9446248;
const int LunaTraits< osgViewer::ThreadingHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ThreadingHandler >::methods[] = {
	{"getUsage", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getUsage},
	{"setKeyEventChangeThreadingModel", &luna_wrapper_osgViewer_ThreadingHandler::_bind_setKeyEventChangeThreadingModel},
	{"getKeyEventChangeThreadingModel", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getKeyEventChangeThreadingModel},
	{"setChangeThreadingModel", &luna_wrapper_osgViewer_ThreadingHandler::_bind_setChangeThreadingModel},
	{"getChangeThreadingModel", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getChangeThreadingModel},
	{"setKeyEventChangeEndBarrierPosition", &luna_wrapper_osgViewer_ThreadingHandler::_bind_setKeyEventChangeEndBarrierPosition},
	{"getKeyEventChangeEndBarrierPosition", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getKeyEventChangeEndBarrierPosition},
	{"setChangeEndBarrierPosition", &luna_wrapper_osgViewer_ThreadingHandler::_bind_setChangeEndBarrierPosition},
	{"getChangeEndBarrierPosition", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getChangeEndBarrierPosition},
	{"handle", &luna_wrapper_osgViewer_ThreadingHandler::_bind_handle},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_event},
	{"base_getUsage", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_getUsage},
	{"base_handle", &luna_wrapper_osgViewer_ThreadingHandler::_bind_base_handle},
	{"fromVoid", &luna_wrapper_osgViewer_ThreadingHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_ThreadingHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_ThreadingHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ThreadingHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ThreadingHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ThreadingHandler >::enumValues[] = {
	{0,0}
};


