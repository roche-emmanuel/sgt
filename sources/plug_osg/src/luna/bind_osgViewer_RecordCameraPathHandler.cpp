#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_RecordCameraPathHandler.h>

class luna_wrapper_osgViewer_RecordCameraPathHandler {
public:
	typedef Luna< osgViewer::RecordCameraPathHandler > luna_t;

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

		osgViewer::RecordCameraPathHandler* self= (osgViewer::RecordCameraPathHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::RecordCameraPathHandler >::push(L,self,false);
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
		//osgViewer::RecordCameraPathHandler* ptr= dynamic_cast< osgViewer::RecordCameraPathHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::RecordCameraPathHandler* ptr= luna_caster< osg::Referenced, osgViewer::RecordCameraPathHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::RecordCameraPathHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setKeyEventToggleRecord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleRecord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventTogglePlayback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventTogglePlayback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoIncrementFilename(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = "saved_animation.path", float fps = 25.0f)
	static osgViewer::RecordCameraPathHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = \"saved_animation.path\", float fps = 25.0f) function, expected prototype:\nosgViewer::RecordCameraPathHandler::RecordCameraPathHandler(const std::string & filename = \"saved_animation.path\", float fps = 25.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		float fps=luatop>1 ? (float)lua_tonumber(L,2) : (float)25.0f;

		return new osgViewer::RecordCameraPathHandler(filename, fps);
	}

	// osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(lua_Table * data, const std::string & filename = "saved_animation.path", float fps = 25.0f)
	static osgViewer::RecordCameraPathHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::RecordCameraPathHandler::RecordCameraPathHandler(lua_Table * data, const std::string & filename = \"saved_animation.path\", float fps = 25.0f) function, expected prototype:\nosgViewer::RecordCameraPathHandler::RecordCameraPathHandler(lua_Table * data, const std::string & filename = \"saved_animation.path\", float fps = 25.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		float fps=luatop>2 ? (float)lua_tonumber(L,3) : (float)25.0f;

		return new wrapper_osgViewer_RecordCameraPathHandler(L,NULL, filename, fps);
	}

	// Overload binder for osgViewer::RecordCameraPathHandler::RecordCameraPathHandler
	static osgViewer::RecordCameraPathHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RecordCameraPathHandler, cannot match any of the overloads for function RecordCameraPathHandler:\n  RecordCameraPathHandler(const std::string &, float)\n  RecordCameraPathHandler(lua_Table *, const std::string &, float)\n");
		return NULL;
	}


	// Function binds:
	// void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key)
	static int _bind_setKeyEventToggleRecord(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleRecord(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setKeyEventToggleRecord(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleRecord(key);

		return 0;
	}

	// int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const
	static int _bind_getKeyEventToggleRecord(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleRecord(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const function, expected prototype:\nint osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::RecordCameraPathHandler::getKeyEventToggleRecord() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleRecord();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key)
	static int _bind_setKeyEventTogglePlayback(lua_State *L) {
		if (!_lg_typecheck_setKeyEventTogglePlayback(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setKeyEventTogglePlayback(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventTogglePlayback(key);

		return 0;
	}

	// int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const
	static int _bind_getKeyEventTogglePlayback(lua_State *L) {
		if (!_lg_typecheck_getKeyEventTogglePlayback(L)) {
			luaL_error(L, "luna typecheck failed in int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const function, expected prototype:\nint osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgViewer::RecordCameraPathHandler::getKeyEventTogglePlayback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventTogglePlayback();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true)
	static int _bind_setAutoIncrementFilename(lua_State *L) {
		if (!_lg_typecheck_setAutoIncrementFilename(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool autoinc = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool autoinc=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::setAutoIncrementFilename(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoIncrementFilename(autoinc);

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(_arg1);

		return 0;
	}

	// bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::RecordCameraPathHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::RecordCameraPathHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::setName(name);

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RecordCameraPathHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::RecordCameraPathHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RecordCameraPathHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::RecordCameraPathHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::RecordCameraPathHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::RecordCameraPathHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::RecordCameraPathHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::RecordCameraPathHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RecordCameraPathHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::RecordCameraPathHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::RecordCameraPathHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::RecordCameraPathHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::RecordCameraPathHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RecordCameraPathHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::RecordCameraPathHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::RecordCameraPathHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::RecordCameraPathHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::RecordCameraPathHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RecordCameraPathHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::RecordCameraPathHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::RecordCameraPathHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::RecordCameraPathHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::RecordCameraPathHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RecordCameraPathHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::RecordCameraPathHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::RecordCameraPathHandler::base_className() const function, expected prototype:\nconst char * osgViewer::RecordCameraPathHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::RecordCameraPathHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RecordCameraPathHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::RecordCameraPathHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::event(nv, drawable);

		return 0;
	}

	// void osgViewer::RecordCameraPathHandler::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::RecordCameraPathHandler::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgViewer::RecordCameraPathHandler::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::RecordCameraPathHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecordCameraPathHandler::getUsage(_arg1);

		return 0;
	}

	// bool osgViewer::RecordCameraPathHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::RecordCameraPathHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nbool osgViewer::RecordCameraPathHandler::base_handle(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::RecordCameraPathHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::RecordCameraPathHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgViewer::RecordCameraPathHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::RecordCameraPathHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::RecordCameraPathHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RecordCameraPathHandler::handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::RecordCameraPathHandler* LunaTraits< osgViewer::RecordCameraPathHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::RecordCameraPathHandler >::_bind_dtor(osgViewer::RecordCameraPathHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::RecordCameraPathHandler >::className[] = "RecordCameraPathHandler";
const char LunaTraits< osgViewer::RecordCameraPathHandler >::fullName[] = "osgViewer::RecordCameraPathHandler";
const char LunaTraits< osgViewer::RecordCameraPathHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::RecordCameraPathHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::RecordCameraPathHandler >::hash = 77463182;
const int LunaTraits< osgViewer::RecordCameraPathHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::RecordCameraPathHandler >::methods[] = {
	{"setKeyEventToggleRecord", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setKeyEventToggleRecord},
	{"getKeyEventToggleRecord", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getKeyEventToggleRecord},
	{"setKeyEventTogglePlayback", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setKeyEventTogglePlayback},
	{"getKeyEventTogglePlayback", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getKeyEventTogglePlayback},
	{"setAutoIncrementFilename", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_setAutoIncrementFilename},
	{"getUsage", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getUsage},
	{"handle", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_handle},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_className},
	{"base_event", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_event},
	{"base_getUsage", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_getUsage},
	{"base_handle", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_base_handle},
	{"fromVoid", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_RecordCameraPathHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::RecordCameraPathHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_RecordCameraPathHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::RecordCameraPathHandler >::enumValues[] = {
	{0,0}
};


