#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_AccelOperator.h>

class luna_wrapper_osgParticle_AccelOperator {
public:
	typedef Luna< osgParticle::AccelOperator > luna_t;

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

		osgParticle::AccelOperator* self= (osgParticle::AccelOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::AccelOperator >::push(L,self,false);
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
		//osgParticle::AccelOperator* ptr= dynamic_cast< osgParticle::AccelOperator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::AccelOperator* ptr= luna_caster< osg::Referenced, osgParticle::AccelOperator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::AccelOperator >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getAcceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setToGravity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_operateParticles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_endOperate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::AccelOperator::AccelOperator()
	static osgParticle::AccelOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator() function, expected prototype:\nosgParticle::AccelOperator::AccelOperator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::AccelOperator();
	}

	// osgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AccelOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::AccelOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AccelOperator::AccelOperator function");
		}
		const osgParticle::AccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AccelOperator::AccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::AccelOperator(copy, copyop);
	}

	// osgParticle::AccelOperator::AccelOperator(lua_Table * data)
	static osgParticle::AccelOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(lua_Table * data) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_AccelOperator(L,NULL);
	}

	// osgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::AccelOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::AccelOperator::AccelOperator(lua_Table * data, const osgParticle::AccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::AccelOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::AccelOperator::AccelOperator function");
		}
		const osgParticle::AccelOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::AccelOperator::AccelOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_AccelOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::AccelOperator::AccelOperator
	static osgParticle::AccelOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AccelOperator, cannot match any of the overloads for function AccelOperator:\n  AccelOperator()\n  AccelOperator(const osgParticle::AccelOperator &, const osg::CopyOp &)\n  AccelOperator(lua_Table *)\n  AccelOperator(lua_Table *, const osgParticle::AccelOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::AccelOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AccelOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::AccelOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::AccelOperator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::AccelOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::AccelOperator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::AccelOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::className() const function, expected prototype:\nconst char * osgParticle::AccelOperator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const
	static int _bind_getAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAcceleration(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const function, expected prototype:\nconst osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::AccelOperator::getAcceleration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAcceleration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v)
	static int _bind_setAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAcceleration(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::AccelOperator::setAcceleration(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::AccelOperator::setAcceleration function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::setAcceleration(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAcceleration(v);

		return 0;
	}

	// void osgParticle::AccelOperator::setToGravity(float scale = 1)
	static int _bind_setToGravity(lua_State *L) {
		if (!_lg_typecheck_setToGravity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::setToGravity(float scale = 1) function, expected prototype:\nvoid osgParticle::AccelOperator::setToGravity(float scale = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float scale=luatop>1 ? (float)lua_tonumber(L,2) : (float)1;

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::setToGravity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setToGravity(scale);

		return 0;
	}

	// void osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::AccelOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::AccelOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginOperate(prg);

		return 0;
	}

	// void osgParticle::AccelOperator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::AccelOperator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::AccelOperator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::AccelOperator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::setName(name);

		return 0;
	}

	// void osgParticle::AccelOperator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::AccelOperator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::computeDataVariance();

		return 0;
	}

	// void osgParticle::AccelOperator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::AccelOperator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::AccelOperator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::AccelOperator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::AccelOperator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::AccelOperator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AccelOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::AccelOperator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::AccelOperator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::AccelOperator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::AccelOperator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AccelOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::AccelOperator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::AccelOperator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::AccelOperator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::AccelOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::AccelOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::AccelOperator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_endOperate() function, expected prototype:\nvoid osgParticle::AccelOperator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::endOperate();

		return 0;
	}

	// osg::Object * osgParticle::AccelOperator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AccelOperator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::AccelOperator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::AccelOperator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::AccelOperator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AccelOperator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::AccelOperator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AccelOperator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::AccelOperator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::AccelOperator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::AccelOperator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::AccelOperator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AccelOperator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::AccelOperator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::AccelOperator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AccelOperator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::AccelOperator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::AccelOperator::base_className() const function, expected prototype:\nconst char * osgParticle::AccelOperator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::AccelOperator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AccelOperator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::AccelOperator::base_operate(osgParticle::Particle * P, double dt)
	static int _bind_base_operate(lua_State *L) {
		if (!_lg_typecheck_base_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::AccelOperator::base_operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::operate(P, dt);

		return 0;
	}

	// void osgParticle::AccelOperator::base_beginOperate(osgParticle::Program * prg)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::AccelOperator::base_beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::AccelOperator::base_beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::AccelOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::AccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::AccelOperator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AccelOperator::beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::AccelOperator* LunaTraits< osgParticle::AccelOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_AccelOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::AccelOperator >::_bind_dtor(osgParticle::AccelOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::AccelOperator >::className[] = "AccelOperator";
const char LunaTraits< osgParticle::AccelOperator >::fullName[] = "osgParticle::AccelOperator";
const char LunaTraits< osgParticle::AccelOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::AccelOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::AccelOperator >::hash = 6494541;
const int LunaTraits< osgParticle::AccelOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::AccelOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_AccelOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_AccelOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_AccelOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_AccelOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_AccelOperator::_bind_className},
	{"getAcceleration", &luna_wrapper_osgParticle_AccelOperator::_bind_getAcceleration},
	{"setAcceleration", &luna_wrapper_osgParticle_AccelOperator::_bind_setAcceleration},
	{"setToGravity", &luna_wrapper_osgParticle_AccelOperator::_bind_setToGravity},
	{"operate", &luna_wrapper_osgParticle_AccelOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_AccelOperator::_bind_beginOperate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_AccelOperator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_AccelOperator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_AccelOperator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_AccelOperator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_AccelOperator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_AccelOperator::_bind_base_releaseGLObjects},
	{"base_operateParticles", &luna_wrapper_osgParticle_AccelOperator::_bind_base_operateParticles},
	{"base_endOperate", &luna_wrapper_osgParticle_AccelOperator::_bind_base_endOperate},
	{"base_cloneType", &luna_wrapper_osgParticle_AccelOperator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_AccelOperator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_AccelOperator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_AccelOperator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_AccelOperator::_bind_base_className},
	{"base_operate", &luna_wrapper_osgParticle_AccelOperator::_bind_base_operate},
	{"base_beginOperate", &luna_wrapper_osgParticle_AccelOperator::_bind_base_beginOperate},
	{"fromVoid", &luna_wrapper_osgParticle_AccelOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_AccelOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_AccelOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::AccelOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_AccelOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::AccelOperator >::enumValues[] = {
	{0,0}
};


