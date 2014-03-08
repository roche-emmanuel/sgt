#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_Device.h>

class luna_wrapper_osgGA_Device {
public:
	typedef Luna< osgGA::Device > luna_t;

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

		osgGA::Device* self= (osgGA::Device*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::Device >::push(L,self,false);
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
		//osgGA::Device* ptr= dynamic_cast< osgGA::Device* >(Luna< osg::Referenced >::check(L,1));
		osgGA::Device* ptr= luna_caster< osg::Referenced, osgGA::Device >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::Device >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getCapabilities(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sendEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sendEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
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

	inline static bool _lg_typecheck_base_checkEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sendEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendEvents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1490680) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::Device::Device()
	static osgGA::Device* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::Device::Device() function, expected prototype:\nosgGA::Device::Device()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::Device();
	}

	// osgGA::Device::Device(const osgGA::Device & es, const osg::CopyOp & copyop)
	static osgGA::Device* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::Device::Device(const osgGA::Device & es, const osg::CopyOp & copyop) function, expected prototype:\nosgGA::Device::Device(const osgGA::Device & es, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::Device* es_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osgGA::Device::Device function");
		}
		const osgGA::Device & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::Device::Device function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osgGA::Device(es, copyop);
	}

	// osgGA::Device::Device(lua_Table * data)
	static osgGA::Device* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::Device::Device(lua_Table * data) function, expected prototype:\nosgGA::Device::Device(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_Device(L,NULL);
	}

	// osgGA::Device::Device(lua_Table * data, const osgGA::Device & es, const osg::CopyOp & copyop)
	static osgGA::Device* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::Device::Device(lua_Table * data, const osgGA::Device & es, const osg::CopyOp & copyop) function, expected prototype:\nosgGA::Device::Device(lua_Table * data, const osgGA::Device & es, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::Device* es_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,2));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osgGA::Device::Device function");
		}
		const osgGA::Device & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::Device::Device function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_osgGA_Device(L,NULL, es, copyop);
	}

	// Overload binder for osgGA::Device::Device
	static osgGA::Device* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Device, cannot match any of the overloads for function Device:\n  Device()\n  Device(const osgGA::Device &, const osg::CopyOp &)\n  Device(lua_Table *)\n  Device(lua_Table *, const osgGA::Device &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::Device::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::Device::cloneType() const function, expected prototype:\nosg::Object * osgGA::Device::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::Device::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::Device::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::Device::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::Device::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::Device::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::Device::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::Device::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::Device::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::Device::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::Device::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::Device::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::Device::libraryName() const function, expected prototype:\nconst char * osgGA::Device::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::Device::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::Device::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::Device::className() const function, expected prototype:\nconst char * osgGA::Device::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::Device::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgGA::Device::getCapabilities() const
	static int _bind_getCapabilities(lua_State *L) {
		if (!_lg_typecheck_getCapabilities(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::Device::getCapabilities() const function, expected prototype:\nint osgGA::Device::getCapabilities() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::Device::getCapabilities() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCapabilities();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::Device::checkEvents()
	static int _bind_checkEvents(lua_State *L) {
		if (!_lg_typecheck_checkEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::checkEvents() function, expected prototype:\nvoid osgGA::Device::checkEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::checkEvents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkEvents();

		return 0;
	}

	// void osgGA::Device::sendEvent(const osgGA::GUIEventAdapter & ea)
	static int _bind_sendEvent(lua_State *L) {
		if (!_lg_typecheck_sendEvent(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::sendEvent(const osgGA::GUIEventAdapter & ea) function, expected prototype:\nvoid osgGA::Device::sendEvent(const osgGA::GUIEventAdapter & ea)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::Device::sendEvent function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::sendEvent(const osgGA::GUIEventAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sendEvent(ea);

		return 0;
	}

	// void osgGA::Device::sendEvents(const osgGA::EventQueue::Events & events)
	static int _bind_sendEvents(lua_State *L) {
		if (!_lg_typecheck_sendEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::sendEvents(const osgGA::EventQueue::Events & events) function, expected prototype:\nvoid osgGA::Device::sendEvents(const osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::Device::sendEvents function");
		}
		const osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::sendEvents(const osgGA::EventQueue::Events &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sendEvents(events);

		return 0;
	}

	// void osgGA::Device::setEventQueue(osgGA::EventQueue * eventQueue)
	static int _bind_setEventQueue(lua_State *L) {
		if (!_lg_typecheck_setEventQueue(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::setEventQueue(osgGA::EventQueue * eventQueue) function, expected prototype:\nvoid osgGA::Device::setEventQueue(osgGA::EventQueue * eventQueue)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::EventQueue* eventQueue=(Luna< osg::Referenced >::checkSubType< osgGA::EventQueue >(L,2));

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::setEventQueue(osgGA::EventQueue *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventQueue(eventQueue);

		return 0;
	}

	// osgGA::EventQueue * osgGA::Device::getEventQueue()
	static int _bind_getEventQueue_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventQueue * osgGA::Device::getEventQueue() function, expected prototype:\nosgGA::EventQueue * osgGA::Device::getEventQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::EventQueue * osgGA::Device::getEventQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// const osgGA::EventQueue * osgGA::Device::getEventQueue() const
	static int _bind_getEventQueue_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventQueue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::EventQueue * osgGA::Device::getEventQueue() const function, expected prototype:\nconst osgGA::EventQueue * osgGA::Device::getEventQueue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::EventQueue * osgGA::Device::getEventQueue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::EventQueue * lret = self->getEventQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventQueue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::Device::getEventQueue
	static int _bind_getEventQueue(lua_State *L) {
		if (_lg_typecheck_getEventQueue_overload_1(L)) return _bind_getEventQueue_overload_1(L);
		if (_lg_typecheck_getEventQueue_overload_2(L)) return _bind_getEventQueue_overload_2(L);

		luaL_error(L, "error in function getEventQueue, cannot match any of the overloads for function getEventQueue:\n  getEventQueue()\n  getEventQueue()\n");
		return 0;
	}

	// void osgGA::Device::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::Device::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::Device::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::Device::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::setName(name);

		return 0;
	}

	// void osgGA::Device::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_computeDataVariance() function, expected prototype:\nvoid osgGA::Device::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::computeDataVariance();

		return 0;
	}

	// void osgGA::Device::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::Device::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::Device::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::Device::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::Device::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::Device::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Device::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::Device::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::Device::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::Device::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::Device::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Device::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::Device::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::Device::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::Device::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::Device::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::Device::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::Device::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::Device::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Device::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::Device::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::Device::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::Device::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::Device::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::Device::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Device::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::Device::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::Device::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::Device::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::Device::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Device::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::Device::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::Device::base_libraryName() const function, expected prototype:\nconst char * osgGA::Device::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::Device::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Device::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::Device::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::Device::base_className() const function, expected prototype:\nconst char * osgGA::Device::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::Device::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Device::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::Device::base_checkEvents()
	static int _bind_base_checkEvents(lua_State *L) {
		if (!_lg_typecheck_base_checkEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_checkEvents() function, expected prototype:\nvoid osgGA::Device::base_checkEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_checkEvents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::checkEvents();

		return 0;
	}

	// void osgGA::Device::base_sendEvent(const osgGA::GUIEventAdapter & ea)
	static int _bind_base_sendEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendEvent(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_sendEvent(const osgGA::GUIEventAdapter & ea) function, expected prototype:\nvoid osgGA::Device::base_sendEvent(const osgGA::GUIEventAdapter & ea)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::Device::base_sendEvent function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_sendEvent(const osgGA::GUIEventAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::sendEvent(ea);

		return 0;
	}

	// void osgGA::Device::base_sendEvents(const osgGA::EventQueue::Events & events)
	static int _bind_base_sendEvents(lua_State *L) {
		if (!_lg_typecheck_base_sendEvents(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::Device::base_sendEvents(const osgGA::EventQueue::Events & events) function, expected prototype:\nvoid osgGA::Device::base_sendEvents(const osgGA::EventQueue::Events & events)\nClass arguments details:\narg 1 ID = 42735238\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::EventQueue::Events* events_ptr=(Luna< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > >::checkSubType< osgGA::EventQueue::Events >(L,2));
		if( !events_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg events in osgGA::Device::base_sendEvents function");
		}
		const osgGA::EventQueue::Events & events=*events_ptr;

		osgGA::Device* self=Luna< osg::Referenced >::checkSubType< osgGA::Device >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::Device::base_sendEvents(const osgGA::EventQueue::Events &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Device::sendEvents(events);

		return 0;
	}


	// Operator binds:

};

osgGA::Device* LunaTraits< osgGA::Device >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_Device::_bind_ctor(L);
}

void LunaTraits< osgGA::Device >::_bind_dtor(osgGA::Device* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::Device >::className[] = "Device";
const char LunaTraits< osgGA::Device >::fullName[] = "osgGA::Device";
const char LunaTraits< osgGA::Device >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::Device >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgGA::Device >::hash = 42030539;
const int LunaTraits< osgGA::Device >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::Device >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_Device::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_Device::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_Device::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_Device::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_Device::_bind_className},
	{"getCapabilities", &luna_wrapper_osgGA_Device::_bind_getCapabilities},
	{"checkEvents", &luna_wrapper_osgGA_Device::_bind_checkEvents},
	{"sendEvent", &luna_wrapper_osgGA_Device::_bind_sendEvent},
	{"sendEvents", &luna_wrapper_osgGA_Device::_bind_sendEvents},
	{"setEventQueue", &luna_wrapper_osgGA_Device::_bind_setEventQueue},
	{"getEventQueue", &luna_wrapper_osgGA_Device::_bind_getEventQueue},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_Device::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_Device::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_Device::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_Device::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_Device::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_Device::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_Device::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_Device::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_Device::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_Device::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_Device::_bind_base_className},
	{"base_checkEvents", &luna_wrapper_osgGA_Device::_bind_base_checkEvents},
	{"base_sendEvent", &luna_wrapper_osgGA_Device::_bind_base_sendEvent},
	{"base_sendEvents", &luna_wrapper_osgGA_Device::_bind_base_sendEvents},
	{"fromVoid", &luna_wrapper_osgGA_Device::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_Device::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_Device::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::Device >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_Device::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::Device >::enumValues[] = {
	{"UNKNOWN", osgGA::Device::UNKNOWN},
	{"RECEIVE_EVENTS", osgGA::Device::RECEIVE_EVENTS},
	{"SEND_EVENTS", osgGA::Device::SEND_EVENTS},
	{0,0}
};


