#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StateAttributeCallback.h>

class luna_wrapper_osg_StateAttributeCallback {
public:
	typedef Luna< osg::StateAttributeCallback > luna_t;

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

		osg::StateAttributeCallback* self= (osg::StateAttributeCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StateAttributeCallback >::push(L,self,false);
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
		//osg::StateAttributeCallback* ptr= dynamic_cast< osg::StateAttributeCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::StateAttributeCallback* ptr= luna_caster< osg::Referenced, osg::StateAttributeCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StateAttributeCallback >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2))) ) return false;
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


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::StateAttributeCallback::StateAttributeCallback()
	static osg::StateAttributeCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback::StateAttributeCallback() function, expected prototype:\nosg::StateAttributeCallback::StateAttributeCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::StateAttributeCallback();
	}

	// osg::StateAttributeCallback::StateAttributeCallback(const osg::StateAttributeCallback & arg1, const osg::CopyOp & arg2)
	static osg::StateAttributeCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback::StateAttributeCallback(const osg::StateAttributeCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::StateAttributeCallback::StateAttributeCallback(const osg::StateAttributeCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttributeCallback* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttributeCallback::StateAttributeCallback function");
		}
		const osg::StateAttributeCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::StateAttributeCallback::StateAttributeCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::StateAttributeCallback(_arg1, _arg2);
	}

	// osg::StateAttributeCallback::StateAttributeCallback(lua_Table * data)
	static osg::StateAttributeCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback::StateAttributeCallback(lua_Table * data) function, expected prototype:\nosg::StateAttributeCallback::StateAttributeCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StateAttributeCallback(L,NULL);
	}

	// osg::StateAttributeCallback::StateAttributeCallback(lua_Table * data, const osg::StateAttributeCallback & arg2, const osg::CopyOp & arg3)
	static osg::StateAttributeCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback::StateAttributeCallback(lua_Table * data, const osg::StateAttributeCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::StateAttributeCallback::StateAttributeCallback(lua_Table * data, const osg::StateAttributeCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttributeCallback* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::StateAttributeCallback::StateAttributeCallback function");
		}
		const osg::StateAttributeCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::StateAttributeCallback::StateAttributeCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_StateAttributeCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::StateAttributeCallback::StateAttributeCallback
	static osg::StateAttributeCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function StateAttributeCallback, cannot match any of the overloads for function StateAttributeCallback:\n  StateAttributeCallback()\n  StateAttributeCallback(const osg::StateAttributeCallback &, const osg::CopyOp &)\n  StateAttributeCallback(lua_Table *)\n  StateAttributeCallback(lua_Table *, const osg::StateAttributeCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StateAttributeCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttributeCallback::cloneType() const function, expected prototype:\nosg::Object * osg::StateAttributeCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttributeCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateAttributeCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttributeCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StateAttributeCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttributeCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttributeCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateAttributeCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttributeCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateAttributeCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttributeCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateAttributeCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttributeCallback::libraryName() const function, expected prototype:\nconst char * osg::StateAttributeCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttributeCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateAttributeCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttributeCallback::className() const function, expected prototype:\nconst char * osg::StateAttributeCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttributeCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::StateAttributeCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StateAttributeCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttributeCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StateAttributeCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::StateAttributeCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttributeCallback::setName(name);

		return 0;
	}

	// void osg::StateAttributeCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::StateAttributeCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttributeCallback::computeDataVariance();

		return 0;
	}

	// void osg::StateAttributeCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::StateAttributeCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttributeCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::StateAttributeCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::StateAttributeCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::StateAttributeCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::StateAttributeCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StateAttributeCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::StateAttributeCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::StateAttributeCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::StateAttributeCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::StateAttributeCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StateAttributeCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttributeCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::StateAttributeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::StateAttributeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttributeCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::StateAttributeCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttributeCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::StateAttributeCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttributeCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StateAttributeCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateAttributeCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttributeCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StateAttributeCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttributeCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttributeCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StateAttributeCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateAttributeCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttributeCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateAttributeCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttributeCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateAttributeCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateAttributeCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttributeCallback::base_libraryName() const function, expected prototype:\nconst char * osg::StateAttributeCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttributeCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateAttributeCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateAttributeCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttributeCallback::base_className() const function, expected prototype:\nconst char * osg::StateAttributeCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttributeCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateAttributeCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::StateAttributeCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttributeCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2) function, expected prototype:\nvoid osg::StateAttributeCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute* _arg1=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::StateAttributeCallback* self=Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttributeCallback::operator()(osg::StateAttribute *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1, _arg2);

		return 0;
	}


};

osg::StateAttributeCallback* LunaTraits< osg::StateAttributeCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StateAttributeCallback::_bind_ctor(L);
}

void LunaTraits< osg::StateAttributeCallback >::_bind_dtor(osg::StateAttributeCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StateAttributeCallback >::className[] = "StateAttributeCallback";
const char LunaTraits< osg::StateAttributeCallback >::fullName[] = "osg::StateAttributeCallback";
const char LunaTraits< osg::StateAttributeCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttributeCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::StateAttributeCallback >::hash = 79865337;
const int LunaTraits< osg::StateAttributeCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StateAttributeCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StateAttributeCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StateAttributeCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StateAttributeCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StateAttributeCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_StateAttributeCallback::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_StateAttributeCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_StateAttributeCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_StateAttributeCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_StateAttributeCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_StateAttributeCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_StateAttributeCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_StateAttributeCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_StateAttributeCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_StateAttributeCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_StateAttributeCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_StateAttributeCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osg_StateAttributeCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_StateAttributeCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StateAttributeCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StateAttributeCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttributeCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StateAttributeCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttributeCallback >::enumValues[] = {
	{0,0}
};


