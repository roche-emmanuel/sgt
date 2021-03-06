#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable_EventCallback.h>

class luna_wrapper_osg_Drawable_EventCallback {
public:
	typedef Luna< osg::Drawable::EventCallback > luna_t;

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

		osg::Drawable::EventCallback* self= (osg::Drawable::EventCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Drawable::EventCallback >::push(L,self,false);
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
		//osg::Drawable::EventCallback* ptr= dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Drawable::EventCallback* ptr= luna_caster< osg::Referenced, osg::Drawable::EventCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::EventCallback >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::EventCallback::EventCallback()
	static osg::Drawable::EventCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback() function, expected prototype:\nosg::Drawable::EventCallback::EventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Drawable::EventCallback();
	}

	// osg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2)
	static osg::Drawable::EventCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable::EventCallback* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::Drawable::EventCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::EventCallback(_arg1, _arg2);
	}

	// osg::Drawable::EventCallback::EventCallback(lua_Table * data)
	static osg::Drawable::EventCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(lua_Table * data) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Drawable_EventCallback(L,NULL);
	}

	// osg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3)
	static osg::Drawable::EventCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable::EventCallback* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::Drawable::EventCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Drawable_EventCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Drawable::EventCallback::EventCallback
	static osg::Drawable::EventCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function EventCallback, cannot match any of the overloads for function EventCallback:\n  EventCallback()\n  EventCallback(const osg::Drawable::EventCallback &, const osg::CopyOp &)\n  EventCallback(lua_Table *)\n  EventCallback(lua_Table *, const osg::Drawable::EventCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::EventCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::EventCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::className() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	static int _bind_event(lua_State *L) {
		if (!_lg_typecheck_event(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2) function, expected prototype:\nvoid osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->event(_arg1, _arg2);

		return 0;
	}

	// void osg::Drawable::EventCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Drawable::EventCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Drawable::EventCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Drawable::EventCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::setName(name);

		return 0;
	}

	// void osg::Drawable::EventCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::Drawable::EventCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::computeDataVariance();

		return 0;
	}

	// void osg::Drawable::EventCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Drawable::EventCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Drawable::EventCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Drawable::EventCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Drawable::EventCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Drawable::EventCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->EventCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Drawable::EventCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Drawable::EventCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Drawable::EventCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Drawable::EventCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->EventCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::EventCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Drawable::EventCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Drawable::EventCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Drawable::EventCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->EventCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::EventCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::EventCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->EventCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::EventCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::EventCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::EventCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::EventCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::base_libraryName() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EventCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::base_className() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EventCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::EventCallback::base_event(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::base_event(osg::NodeVisitor * arg1, osg::Drawable * arg2) function, expected prototype:\nvoid osg::Drawable::EventCallback::base_event(osg::NodeVisitor * arg1, osg::Drawable * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Drawable::EventCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventCallback::event(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osg::Drawable::EventCallback* LunaTraits< osg::Drawable::EventCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_EventCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::EventCallback >::_bind_dtor(osg::Drawable::EventCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::EventCallback >::className[] = "Drawable_EventCallback";
const char LunaTraits< osg::Drawable::EventCallback >::fullName[] = "osg::Drawable::EventCallback";
const char LunaTraits< osg::Drawable::EventCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::EventCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::EventCallback >::hash = 62866000;
const int LunaTraits< osg::Drawable::EventCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::EventCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_EventCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_EventCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_EventCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_EventCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_EventCallback::_bind_className},
	{"event", &luna_wrapper_osg_Drawable_EventCallback::_bind_event},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_className},
	{"base_event", &luna_wrapper_osg_Drawable_EventCallback::_bind_base_event},
	{"fromVoid", &luna_wrapper_osg_Drawable_EventCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Drawable_EventCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Drawable_EventCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::EventCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_EventCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::EventCallback >::enumValues[] = {
	{0,0}
};


