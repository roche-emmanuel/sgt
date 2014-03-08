#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Camera_DrawCallback.h>

class luna_wrapper_osg_Camera_DrawCallback {
public:
	typedef Luna< osg::Camera::DrawCallback > luna_t;

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

		osg::Camera::DrawCallback* self= (osg::Camera::DrawCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Camera::DrawCallback >::push(L,self,false);
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
		//osg::Camera::DrawCallback* ptr= dynamic_cast< osg::Camera::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Camera::DrawCallback* ptr= luna_caster< osg::Referenced, osg::Camera::DrawCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Camera::DrawCallback >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2))) ) return false;
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
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (!(Luna< osg::RenderInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Camera::DrawCallback::DrawCallback()
	static osg::Camera::DrawCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback() function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Camera::DrawCallback();
	}

	// osg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2)
	static osg::Camera::DrawCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(const osg::Camera::DrawCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera::DrawCallback* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::Camera::DrawCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Camera::DrawCallback(_arg1, _arg2);
	}

	// osg::Camera::DrawCallback::DrawCallback(lua_Table * data)
	static osg::Camera::DrawCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(lua_Table * data) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Camera_DrawCallback(L,NULL);
	}

	// osg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3)
	static osg::Camera::DrawCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Camera::DrawCallback::DrawCallback(lua_Table * data, const osg::Camera::DrawCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera::DrawCallback* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::Camera::DrawCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Camera::DrawCallback::DrawCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Camera_DrawCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Camera::DrawCallback::DrawCallback
	static osg::Camera::DrawCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DrawCallback, cannot match any of the overloads for function DrawCallback:\n  DrawCallback()\n  DrawCallback(const osg::Camera::DrawCallback &, const osg::CopyOp &)\n  DrawCallback(lua_Table *)\n  DrawCallback(lua_Table *, const osg::Camera::DrawCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Camera::DrawCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Camera::DrawCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::DrawCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::libraryName() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::className() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Camera::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Camera::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Camera::DrawCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Camera::DrawCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::setName(name);

		return 0;
	}

	// void osg::Camera::DrawCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::Camera::DrawCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::computeDataVariance();

		return 0;
	}

	// void osg::Camera::DrawCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Camera::DrawCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Camera::DrawCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Camera::DrawCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Camera::DrawCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Camera::DrawCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DrawCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Camera::DrawCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Camera::DrawCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Camera::DrawCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Camera::DrawCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DrawCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::DrawCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Camera::DrawCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Camera::DrawCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Camera::DrawCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Camera::DrawCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::DrawCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Camera::DrawCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::DrawCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Camera::DrawCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::DrawCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Camera::DrawCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::DrawCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::base_libraryName() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Camera::DrawCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::DrawCallback::base_className() const function, expected prototype:\nconst char * osg::Camera::DrawCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::DrawCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Camera::DrawCallback::operator()(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Camera::DrawCallback::operator() function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::operator()(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(renderInfo);

		return 0;
	}

	// void osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const function, expected prototype:\nvoid osg::Camera::DrawCallback::operator()(const osg::Camera & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::DrawCallback::operator() function");
		}
		const osg::Camera & _arg1=*_arg1_ptr;

		osg::Camera::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::DrawCallback::operator()(const osg::Camera &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1);

		return 0;
	}

	// Overload binder for osg::Camera::DrawCallback::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::RenderInfo &)\n  operator()(const osg::Camera &)\n");
		return 0;
	}


};

osg::Camera::DrawCallback* LunaTraits< osg::Camera::DrawCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Camera_DrawCallback::_bind_ctor(L);
}

void LunaTraits< osg::Camera::DrawCallback >::_bind_dtor(osg::Camera::DrawCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Camera::DrawCallback >::className[] = "Camera_DrawCallback";
const char LunaTraits< osg::Camera::DrawCallback >::fullName[] = "osg::Camera::DrawCallback";
const char LunaTraits< osg::Camera::DrawCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera::DrawCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Camera::DrawCallback >::hash = 71550717;
const int LunaTraits< osg::Camera::DrawCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Camera::DrawCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Camera_DrawCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Camera_DrawCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Camera_DrawCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Camera_DrawCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Camera_DrawCallback::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Camera_DrawCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osg_Camera_DrawCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_Camera_DrawCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Camera_DrawCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Camera_DrawCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera::DrawCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Camera_DrawCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera::DrawCallback >::enumValues[] = {
	{0,0}
};


