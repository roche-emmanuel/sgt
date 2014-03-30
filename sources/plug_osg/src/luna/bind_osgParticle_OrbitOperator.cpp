#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_OrbitOperator.h>

class luna_wrapper_osgParticle_OrbitOperator {
public:
	typedef Luna< osgParticle::OrbitOperator > luna_t;

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

		osgParticle::OrbitOperator* self= (osgParticle::OrbitOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::OrbitOperator >::push(L,self,false);
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
		//osgParticle::OrbitOperator* ptr= dynamic_cast< osgParticle::OrbitOperator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::OrbitOperator* ptr= luna_caster< osg::Referenced, osgParticle::OrbitOperator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::OrbitOperator >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMagnitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMagnitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEpsilon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEpsilon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgParticle::OrbitOperator::OrbitOperator()
	static osgParticle::OrbitOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator() function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::OrbitOperator();
	}

	// osgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::OrbitOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator(const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::OrbitOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osgParticle::OrbitOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::OrbitOperator(copy, copyop);
	}

	// osgParticle::OrbitOperator::OrbitOperator(lua_Table * data)
	static osgParticle::OrbitOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator(lua_Table * data) function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_OrbitOperator(L,NULL);
	}

	// osgParticle::OrbitOperator::OrbitOperator(lua_Table * data, const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::OrbitOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::OrbitOperator::OrbitOperator(lua_Table * data, const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::OrbitOperator::OrbitOperator(lua_Table * data, const osgParticle::OrbitOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::OrbitOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osgParticle::OrbitOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::OrbitOperator::OrbitOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_OrbitOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::OrbitOperator::OrbitOperator
	static osgParticle::OrbitOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function OrbitOperator, cannot match any of the overloads for function OrbitOperator:\n  OrbitOperator()\n  OrbitOperator(const osgParticle::OrbitOperator &, const osg::CopyOp &)\n  OrbitOperator(lua_Table *)\n  OrbitOperator(lua_Table *, const osgParticle::OrbitOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::OrbitOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::OrbitOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::OrbitOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::OrbitOperator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::className() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c) function, expected prototype:\nvoid osgParticle::OrbitOperator::setCenter(const osg::Vec3f & c)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* c_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in osgParticle::OrbitOperator::setCenter function");
		}
		const osg::Vec3f & c=*c_ptr;

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setCenter(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(c);

		return 0;
	}

	// const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const function, expected prototype:\nconst osg::Vec3f & osgParticle::OrbitOperator::getCenter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::OrbitOperator::getCenter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::OrbitOperator::setMagnitude(float mag)
	static int _bind_setMagnitude(lua_State *L) {
		if (!_lg_typecheck_setMagnitude(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setMagnitude(float mag) function, expected prototype:\nvoid osgParticle::OrbitOperator::setMagnitude(float mag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float mag=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setMagnitude(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMagnitude(mag);

		return 0;
	}

	// float osgParticle::OrbitOperator::getMagnitude() const
	static int _bind_getMagnitude(lua_State *L) {
		if (!_lg_typecheck_getMagnitude(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getMagnitude() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getMagnitude() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getMagnitude() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMagnitude();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setEpsilon(float eps)
	static int _bind_setEpsilon(lua_State *L) {
		if (!_lg_typecheck_setEpsilon(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setEpsilon(float eps) function, expected prototype:\nvoid osgParticle::OrbitOperator::setEpsilon(float eps)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float eps=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setEpsilon(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEpsilon(eps);

		return 0;
	}

	// float osgParticle::OrbitOperator::getEpsilon() const
	static int _bind_getEpsilon(lua_State *L) {
		if (!_lg_typecheck_getEpsilon(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getEpsilon() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getEpsilon() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getEpsilon() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getEpsilon();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::setMaxRadius(float max)
	static int _bind_setMaxRadius(lua_State *L) {
		if (!_lg_typecheck_setMaxRadius(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::setMaxRadius(float max) function, expected prototype:\nvoid osgParticle::OrbitOperator::setMaxRadius(float max)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float max=(float)lua_tonumber(L,2);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::setMaxRadius(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxRadius(max);

		return 0;
	}

	// float osgParticle::OrbitOperator::getMaxRadius() const
	static int _bind_getMaxRadius(lua_State *L) {
		if (!_lg_typecheck_getMaxRadius(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::OrbitOperator::getMaxRadius() const function, expected prototype:\nfloat osgParticle::OrbitOperator::getMaxRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::OrbitOperator::getMaxRadius() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaxRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::OrbitOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::OrbitOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginOperate(prg);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::setName(name);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::OrbitOperator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::computeDataVariance();

		return 0;
	}

	// void osgParticle::OrbitOperator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::OrbitOperator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::OrbitOperator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::OrbitOperator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::OrbitOperator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->OrbitOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::OrbitOperator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::OrbitOperator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::OrbitOperator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::OrbitOperator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->OrbitOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::OrbitOperator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::OrbitOperator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::OrbitOperator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_endOperate() function, expected prototype:\nvoid osgParticle::OrbitOperator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::endOperate();

		return 0;
	}

	// osg::Object * osgParticle::OrbitOperator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OrbitOperator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::OrbitOperator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::OrbitOperator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::OrbitOperator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::OrbitOperator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::OrbitOperator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OrbitOperator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::OrbitOperator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::OrbitOperator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::OrbitOperator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::OrbitOperator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OrbitOperator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OrbitOperator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::OrbitOperator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::OrbitOperator::base_className() const function, expected prototype:\nconst char * osgParticle::OrbitOperator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::OrbitOperator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OrbitOperator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::OrbitOperator::base_operate(osgParticle::Particle * P, double dt)
	static int _bind_base_operate(lua_State *L) {
		if (!_lg_typecheck_base_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::operate(P, dt);

		return 0;
	}

	// void osgParticle::OrbitOperator::base_beginOperate(osgParticle::Program * prg)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::OrbitOperator::base_beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::OrbitOperator::base_beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::OrbitOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::OrbitOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::OrbitOperator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrbitOperator::beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::OrbitOperator* LunaTraits< osgParticle::OrbitOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_OrbitOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::OrbitOperator >::_bind_dtor(osgParticle::OrbitOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::OrbitOperator >::className[] = "OrbitOperator";
const char LunaTraits< osgParticle::OrbitOperator >::fullName[] = "osgParticle::OrbitOperator";
const char LunaTraits< osgParticle::OrbitOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::OrbitOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::OrbitOperator >::hash = 25921605;
const int LunaTraits< osgParticle::OrbitOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::OrbitOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_OrbitOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_OrbitOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_OrbitOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_OrbitOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_OrbitOperator::_bind_className},
	{"setCenter", &luna_wrapper_osgParticle_OrbitOperator::_bind_setCenter},
	{"getCenter", &luna_wrapper_osgParticle_OrbitOperator::_bind_getCenter},
	{"setMagnitude", &luna_wrapper_osgParticle_OrbitOperator::_bind_setMagnitude},
	{"getMagnitude", &luna_wrapper_osgParticle_OrbitOperator::_bind_getMagnitude},
	{"setEpsilon", &luna_wrapper_osgParticle_OrbitOperator::_bind_setEpsilon},
	{"getEpsilon", &luna_wrapper_osgParticle_OrbitOperator::_bind_getEpsilon},
	{"setMaxRadius", &luna_wrapper_osgParticle_OrbitOperator::_bind_setMaxRadius},
	{"getMaxRadius", &luna_wrapper_osgParticle_OrbitOperator::_bind_getMaxRadius},
	{"operate", &luna_wrapper_osgParticle_OrbitOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_OrbitOperator::_bind_beginOperate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_releaseGLObjects},
	{"base_operateParticles", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_operateParticles},
	{"base_endOperate", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_endOperate},
	{"base_cloneType", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_className},
	{"base_operate", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_operate},
	{"base_beginOperate", &luna_wrapper_osgParticle_OrbitOperator::_bind_base_beginOperate},
	{"fromVoid", &luna_wrapper_osgParticle_OrbitOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_OrbitOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_OrbitOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::OrbitOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_OrbitOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::OrbitOperator >::enumValues[] = {
	{0,0}
};


