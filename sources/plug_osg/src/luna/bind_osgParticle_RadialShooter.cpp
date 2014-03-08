#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_RadialShooter.h>

class luna_wrapper_osgParticle_RadialShooter {
public:
	typedef Luna< osgParticle::RadialShooter > luna_t;

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

		osgParticle::RadialShooter* self= (osgParticle::RadialShooter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::RadialShooter >::push(L,self,false);
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
		//osgParticle::RadialShooter* ptr= dynamic_cast< osgParticle::RadialShooter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::RadialShooter* ptr= luna_caster< osg::Referenced, osgParticle::RadialShooter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::RadialShooter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getThetaRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThetaRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThetaRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPhiRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialSpeedRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialSpeedRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialSpeedRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialRotationalSpeedRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialRotationalSpeedRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67790331) ) return false;
		if( (!(Luna< osgParticle::range< osg::Vec3f > >::checkSubType< osgParticle::rangev3 >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialRotationalSpeedRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_shoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
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

	inline static bool _lg_typecheck_base_shoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::RadialShooter::RadialShooter()
	static osgParticle::RadialShooter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter() function, expected prototype:\nosgParticle::RadialShooter::RadialShooter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::RadialShooter();
	}

	// osgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::RadialShooter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::RadialShooter::RadialShooter(const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::RadialShooter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::RadialShooter::RadialShooter function");
		}
		const osgParticle::RadialShooter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::RadialShooter::RadialShooter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::RadialShooter(copy, copyop);
	}

	// osgParticle::RadialShooter::RadialShooter(lua_Table * data)
	static osgParticle::RadialShooter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter(lua_Table * data) function, expected prototype:\nosgParticle::RadialShooter::RadialShooter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_RadialShooter(L,NULL);
	}

	// osgParticle::RadialShooter::RadialShooter(lua_Table * data, const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::RadialShooter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::RadialShooter::RadialShooter(lua_Table * data, const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::RadialShooter::RadialShooter(lua_Table * data, const osgParticle::RadialShooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::RadialShooter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::RadialShooter::RadialShooter function");
		}
		const osgParticle::RadialShooter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::RadialShooter::RadialShooter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_RadialShooter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::RadialShooter::RadialShooter
	static osgParticle::RadialShooter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function RadialShooter, cannot match any of the overloads for function RadialShooter:\n  RadialShooter()\n  RadialShooter(const osgParticle::RadialShooter &, const osg::CopyOp &)\n  RadialShooter(lua_Table *)\n  RadialShooter(lua_Table *, const osgParticle::RadialShooter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::RadialShooter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::RadialShooter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::RadialShooter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::RadialShooter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::RadialShooter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::libraryName() const function, expected prototype:\nconst char * osgParticle::RadialShooter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::RadialShooter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::className() const function, expected prototype:\nconst char * osgParticle::RadialShooter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const
	static int _bind_getThetaRange(lua_State *L) {
		if (!_lg_typecheck_getThetaRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getThetaRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getThetaRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r)
	static int _bind_setThetaRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setThetaRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setThetaRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setThetaRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThetaRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setThetaRange(float r1, float r2)
	static int _bind_setThetaRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setThetaRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setThetaRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setThetaRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setThetaRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThetaRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setThetaRange
	static int _bind_setThetaRange(lua_State *L) {
		if (_lg_typecheck_setThetaRange_overload_1(L)) return _bind_setThetaRange_overload_1(L);
		if (_lg_typecheck_setThetaRange_overload_2(L)) return _bind_setThetaRange_overload_2(L);

		luaL_error(L, "error in function setThetaRange, cannot match any of the overloads for function setThetaRange:\n  setThetaRange(const osgParticle::rangef &)\n  setThetaRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const
	static int _bind_getPhiRange(lua_State *L) {
		if (!_lg_typecheck_getPhiRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getPhiRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getPhiRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r)
	static int _bind_setPhiRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setPhiRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setPhiRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPhiRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setPhiRange(float r1, float r2)
	static int _bind_setPhiRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setPhiRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setPhiRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setPhiRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPhiRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setPhiRange
	static int _bind_setPhiRange(lua_State *L) {
		if (_lg_typecheck_setPhiRange_overload_1(L)) return _bind_setPhiRange_overload_1(L);
		if (_lg_typecheck_setPhiRange_overload_2(L)) return _bind_setPhiRange_overload_2(L);

		luaL_error(L, "error in function setPhiRange, cannot match any of the overloads for function setPhiRange:\n  setPhiRange(const osgParticle::rangef &)\n  setPhiRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const
	static int _bind_getInitialSpeedRange(lua_State *L) {
		if (!_lg_typecheck_getInitialSpeedRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::RadialShooter::getInitialSpeedRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getInitialSpeedRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r)
	static int _bind_setInitialSpeedRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setInitialSpeedRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setInitialSpeedRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialSpeedRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialSpeedRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2)
	static int _bind_setInitialSpeedRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setInitialSpeedRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialSpeedRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialSpeedRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialSpeedRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setInitialSpeedRange
	static int _bind_setInitialSpeedRange(lua_State *L) {
		if (_lg_typecheck_setInitialSpeedRange_overload_1(L)) return _bind_setInitialSpeedRange_overload_1(L);
		if (_lg_typecheck_setInitialSpeedRange_overload_2(L)) return _bind_setInitialSpeedRange_overload_2(L);

		luaL_error(L, "error in function setInitialSpeedRange, cannot match any of the overloads for function setInitialSpeedRange:\n  setInitialSpeedRange(const osgParticle::rangef &)\n  setInitialSpeedRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const
	static int _bind_getInitialRotationalSpeedRange(lua_State *L) {
		if (!_lg_typecheck_getInitialRotationalSpeedRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const function, expected prototype:\nconst osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangev3 & osgParticle::RadialShooter::getInitialRotationalSpeedRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangev3* lret = &self->getInitialRotationalSpeedRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangev3 >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r)
	static int _bind_setInitialRotationalSpeedRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setInitialRotationalSpeedRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 & r)\nClass arguments details:\narg 1 ID = 18829253\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangev3* r_ptr=(Luna< osgParticle::range< osg::Vec3f > >::checkSubType< osgParticle::rangev3 >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osgParticle::rangev3 & r=*r_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osgParticle::rangev3 &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialRotationalSpeedRange(r);

		return 0;
	}

	// void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2)
	static int _bind_setInitialRotationalSpeedRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setInitialRotationalSpeedRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2) function, expected prototype:\nvoid osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f & r1, const osg::Vec3f & r2)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* r1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !r1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r1 in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osg::Vec3f & r1=*r1_ptr;
		const osg::Vec3f* r2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !r2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r2 in osgParticle::RadialShooter::setInitialRotationalSpeedRange function");
		}
		const osg::Vec3f & r2=*r2_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::setInitialRotationalSpeedRange(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialRotationalSpeedRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::RadialShooter::setInitialRotationalSpeedRange
	static int _bind_setInitialRotationalSpeedRange(lua_State *L) {
		if (_lg_typecheck_setInitialRotationalSpeedRange_overload_1(L)) return _bind_setInitialRotationalSpeedRange_overload_1(L);
		if (_lg_typecheck_setInitialRotationalSpeedRange_overload_2(L)) return _bind_setInitialRotationalSpeedRange_overload_2(L);

		luaL_error(L, "error in function setInitialRotationalSpeedRange, cannot match any of the overloads for function setInitialRotationalSpeedRange:\n  setInitialRotationalSpeedRange(const osgParticle::rangev3 &)\n  setInitialRotationalSpeedRange(const osg::Vec3f &, const osg::Vec3f &)\n");
		return 0;
	}

	// void osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const
	static int _bind_shoot(lua_State *L) {
		if (!_lg_typecheck_shoot(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::RadialShooter::shoot(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::shoot(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->shoot(P);

		return 0;
	}

	// void osgParticle::RadialShooter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::RadialShooter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::RadialShooter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::RadialShooter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::setName(name);

		return 0;
	}

	// void osgParticle::RadialShooter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::RadialShooter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::computeDataVariance();

		return 0;
	}

	// void osgParticle::RadialShooter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::RadialShooter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::RadialShooter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::RadialShooter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::RadialShooter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::RadialShooter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RadialShooter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::RadialShooter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::RadialShooter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::RadialShooter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::RadialShooter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RadialShooter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::RadialShooter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::RadialShooter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::RadialShooter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::RadialShooter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RadialShooter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::RadialShooter::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::RadialShooter::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::RadialShooter::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::RadialShooter::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::RadialShooter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RadialShooter::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::RadialShooter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::RadialShooter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::RadialShooter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::RadialShooter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RadialShooter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::RadialShooter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::RadialShooter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RadialShooter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::RadialShooter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::RadialShooter::base_className() const function, expected prototype:\nconst char * osgParticle::RadialShooter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::RadialShooter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RadialShooter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::RadialShooter::base_shoot(osgParticle::Particle * P) const
	static int _bind_base_shoot(lua_State *L) {
		if (!_lg_typecheck_base_shoot(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::RadialShooter::base_shoot(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::RadialShooter::base_shoot(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::RadialShooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::RadialShooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::RadialShooter::base_shoot(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RadialShooter::shoot(P);

		return 0;
	}


	// Operator binds:

};

osgParticle::RadialShooter* LunaTraits< osgParticle::RadialShooter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_RadialShooter::_bind_ctor(L);
}

void LunaTraits< osgParticle::RadialShooter >::_bind_dtor(osgParticle::RadialShooter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::RadialShooter >::className[] = "RadialShooter";
const char LunaTraits< osgParticle::RadialShooter >::fullName[] = "osgParticle::RadialShooter";
const char LunaTraits< osgParticle::RadialShooter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::RadialShooter >::parents[] = {"osgParticle.Shooter", 0};
const int LunaTraits< osgParticle::RadialShooter >::hash = 71386251;
const int LunaTraits< osgParticle::RadialShooter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::RadialShooter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_RadialShooter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_RadialShooter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_RadialShooter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_RadialShooter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_RadialShooter::_bind_className},
	{"getThetaRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getThetaRange},
	{"setThetaRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setThetaRange},
	{"getPhiRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getPhiRange},
	{"setPhiRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setPhiRange},
	{"getInitialSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getInitialSpeedRange},
	{"setInitialSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setInitialSpeedRange},
	{"getInitialRotationalSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_getInitialRotationalSpeedRange},
	{"setInitialRotationalSpeedRange", &luna_wrapper_osgParticle_RadialShooter::_bind_setInitialRotationalSpeedRange},
	{"shoot", &luna_wrapper_osgParticle_RadialShooter::_bind_shoot},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_RadialShooter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_RadialShooter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_RadialShooter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_RadialShooter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_RadialShooter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_RadialShooter::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_RadialShooter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_RadialShooter::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_RadialShooter::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_RadialShooter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_RadialShooter::_bind_base_className},
	{"base_shoot", &luna_wrapper_osgParticle_RadialShooter::_bind_base_shoot},
	{"fromVoid", &luna_wrapper_osgParticle_RadialShooter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_RadialShooter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_RadialShooter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::RadialShooter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_RadialShooter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::RadialShooter >::enumValues[] = {
	{0,0}
};


