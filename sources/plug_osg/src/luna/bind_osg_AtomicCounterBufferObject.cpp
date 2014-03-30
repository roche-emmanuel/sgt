#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AtomicCounterBufferObject.h>

class luna_wrapper_osg_AtomicCounterBufferObject {
public:
	typedef Luna< osg::AtomicCounterBufferObject > luna_t;

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

		osg::AtomicCounterBufferObject* self= (osg::AtomicCounterBufferObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AtomicCounterBufferObject >::push(L,self,false);
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
		//osg::AtomicCounterBufferObject* ptr= dynamic_cast< osg::AtomicCounterBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::AtomicCounterBufferObject* ptr= luna_caster< osg::Referenced, osg::AtomicCounterBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AtomicCounterBufferObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AtomicCounterBufferObject::AtomicCounterBufferObject()
	static osg::AtomicCounterBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferObject::AtomicCounterBufferObject() function, expected prototype:\nosg::AtomicCounterBufferObject::AtomicCounterBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::AtomicCounterBufferObject();
	}

	// osg::AtomicCounterBufferObject::AtomicCounterBufferObject(const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AtomicCounterBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferObject::AtomicCounterBufferObject(const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AtomicCounterBufferObject::AtomicCounterBufferObject(const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AtomicCounterBufferObject* ubo_ptr=(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1));
		if( !ubo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ubo in osg::AtomicCounterBufferObject::AtomicCounterBufferObject function");
		}
		const osg::AtomicCounterBufferObject & ubo=*ubo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AtomicCounterBufferObject::AtomicCounterBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::AtomicCounterBufferObject(ubo, copyop);
	}

	// osg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data)
	static osg::AtomicCounterBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data) function, expected prototype:\nosg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AtomicCounterBufferObject(L,NULL);
	}

	// osg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data, const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AtomicCounterBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data, const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AtomicCounterBufferObject::AtomicCounterBufferObject(lua_Table * data, const osg::AtomicCounterBufferObject & ubo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AtomicCounterBufferObject* ubo_ptr=(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,2));
		if( !ubo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ubo in osg::AtomicCounterBufferObject::AtomicCounterBufferObject function");
		}
		const osg::AtomicCounterBufferObject & ubo=*ubo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AtomicCounterBufferObject::AtomicCounterBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AtomicCounterBufferObject(L,NULL, ubo, copyop);
	}

	// Overload binder for osg::AtomicCounterBufferObject::AtomicCounterBufferObject
	static osg::AtomicCounterBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AtomicCounterBufferObject, cannot match any of the overloads for function AtomicCounterBufferObject:\n  AtomicCounterBufferObject()\n  AtomicCounterBufferObject(const osg::AtomicCounterBufferObject &, const osg::CopyOp &)\n  AtomicCounterBufferObject(lua_Table *)\n  AtomicCounterBufferObject(lua_Table *, const osg::AtomicCounterBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AtomicCounterBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferObject::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferObject::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AtomicCounterBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferObject::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AtomicCounterBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AtomicCounterBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferObject::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AtomicCounterBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferObject::libraryName() const function, expected prototype:\nconst char * osg::AtomicCounterBufferObject::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferObject::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AtomicCounterBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferObject::className() const function, expected prototype:\nconst char * osg::AtomicCounterBufferObject::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferObject::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AtomicCounterBufferObject::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferObject::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AtomicCounterBufferObject::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferObject::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferObject::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AtomicCounterBufferObject::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferObject::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AtomicCounterBufferObject::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferObject::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferObject::setName(name);

		return 0;
	}

	// void osg::AtomicCounterBufferObject::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferObject::base_computeDataVariance() function, expected prototype:\nvoid osg::AtomicCounterBufferObject::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferObject::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferObject::computeDataVariance();

		return 0;
	}

	// void osg::AtomicCounterBufferObject::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferObject::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AtomicCounterBufferObject::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferObject::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferObject::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AtomicCounterBufferObject::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AtomicCounterBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AtomicCounterBufferObject::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AtomicCounterBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AtomicCounterBufferObject::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::AtomicCounterBufferObject::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferObject::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::AtomicCounterBufferObject::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferObject::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferObject::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::AtomicCounterBufferObject::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferObject::base_cloneType() const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferObject::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferObject::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AtomicCounterBufferObject::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AtomicCounterBufferObject::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferObject::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferObject::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferObject::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferObject::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AtomicCounterBufferObject::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AtomicCounterBufferObject::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferObject::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AtomicCounterBufferObject::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferObject::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AtomicCounterBufferObject::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AtomicCounterBufferObject::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferObject::base_libraryName() const function, expected prototype:\nconst char * osg::AtomicCounterBufferObject::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferObject::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AtomicCounterBufferObject::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AtomicCounterBufferObject::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferObject::base_className() const function, expected prototype:\nconst char * osg::AtomicCounterBufferObject::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferObject::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AtomicCounterBufferObject::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AtomicCounterBufferObject* LunaTraits< osg::AtomicCounterBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AtomicCounterBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::AtomicCounterBufferObject >::_bind_dtor(osg::AtomicCounterBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AtomicCounterBufferObject >::className[] = "AtomicCounterBufferObject";
const char LunaTraits< osg::AtomicCounterBufferObject >::fullName[] = "osg::AtomicCounterBufferObject";
const char LunaTraits< osg::AtomicCounterBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::AtomicCounterBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::AtomicCounterBufferObject >::hash = 93147120;
const int LunaTraits< osg::AtomicCounterBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AtomicCounterBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AtomicCounterBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AtomicCounterBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AtomicCounterBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AtomicCounterBufferObject >::enumValues[] = {
	{0,0}
};


