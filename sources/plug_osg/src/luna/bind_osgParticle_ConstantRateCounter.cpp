#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ConstantRateCounter.h>

class luna_wrapper_osgParticle_ConstantRateCounter {
public:
	typedef Luna< osgParticle::ConstantRateCounter > luna_t;

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

		osgParticle::ConstantRateCounter* self= (osgParticle::ConstantRateCounter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ConstantRateCounter >::push(L,self,false);
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
		//osgParticle::ConstantRateCounter* ptr= dynamic_cast< osgParticle::ConstantRateCounter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ConstantRateCounter* ptr= luna_caster< osg::Referenced, osgParticle::ConstantRateCounter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ConstantRateCounter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setMinimumNumberOfParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumberOfParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ConstantRateCounter::ConstantRateCounter()
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter() function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::ConstantRateCounter();
	}

	// osgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter(const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConstantRateCounter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osgParticle::ConstantRateCounter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ConstantRateCounter(copy, copyop);
	}

	// osgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data)
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data) function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ConstantRateCounter(L,NULL);
	}

	// osgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data, const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConstantRateCounter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data, const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConstantRateCounter::ConstantRateCounter(lua_Table * data, const osgParticle::ConstantRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConstantRateCounter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osgParticle::ConstantRateCounter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConstantRateCounter::ConstantRateCounter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ConstantRateCounter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ConstantRateCounter::ConstantRateCounter
	static osgParticle::ConstantRateCounter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ConstantRateCounter, cannot match any of the overloads for function ConstantRateCounter:\n  ConstantRateCounter()\n  ConstantRateCounter(const osgParticle::ConstantRateCounter &, const osg::CopyOp &)\n  ConstantRateCounter(lua_Table *)\n  ConstantRateCounter(lua_Table *, const osgParticle::ConstantRateCounter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ConstantRateCounter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConstantRateCounter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ConstantRateCounter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::libraryName() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::className() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate)
	static int _bind_setMinimumNumberOfParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumberOfParticlesToCreate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int minNumToCreate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minNumToCreate=(int)lua_tointeger(L,2);

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::setMinimumNumberOfParticlesToCreate(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinimumNumberOfParticlesToCreate(minNumToCreate);

		return 0;
	}

	// int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const
	static int _bind_getMinimumNumberOfParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumberOfParticlesToCreate(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const function, expected prototype:\nint osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ConstantRateCounter::getMinimumNumberOfParticlesToCreate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMinimumNumberOfParticlesToCreate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond)
	static int _bind_setNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if (!_lg_typecheck_setNumberOfParticlesPerSecondToCreate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double numPerSecond)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double numPerSecond=(double)lua_tonumber(L,2);

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumberOfParticlesPerSecondToCreate(numPerSecond);

		return 0;
	}

	// double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const
	static int _bind_getNumberOfParticlesPerSecondToCreate(lua_State *L) {
		if (!_lg_typecheck_getNumberOfParticlesPerSecondToCreate(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const function, expected prototype:\ndouble osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ConstantRateCounter::getNumberOfParticlesPerSecondToCreate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getNumberOfParticlesPerSecondToCreate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::ConstantRateCounter::numParticlesToCreate(double dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ConstantRateCounter::numParticlesToCreate(double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ConstantRateCounter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstantRateCounter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ConstantRateCounter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstantRateCounter::setName(name);

		return 0;
	}

	// void osgParticle::ConstantRateCounter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ConstantRateCounter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstantRateCounter::computeDataVariance();

		return 0;
	}

	// void osgParticle::ConstantRateCounter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ConstantRateCounter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstantRateCounter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ConstantRateCounter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ConstantRateCounter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ConstantRateCounter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ConstantRateCounter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ConstantRateCounter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::ConstantRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConstantRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ConstantRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConstantRateCounter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConstantRateCounter::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::ConstantRateCounter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConstantRateCounter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConstantRateCounter::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConstantRateCounter::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ConstantRateCounter::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConstantRateCounter::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConstantRateCounter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConstantRateCounter::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConstantRateCounter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConstantRateCounter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConstantRateCounter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ConstantRateCounter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ConstantRateCounter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConstantRateCounter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConstantRateCounter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConstantRateCounter::base_className() const function, expected prototype:\nconst char * osgParticle::ConstantRateCounter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConstantRateCounter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConstantRateCounter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgParticle::ConstantRateCounter::base_numParticlesToCreate(double dt) const
	static int _bind_base_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_base_numParticlesToCreate(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ConstantRateCounter::base_numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::ConstantRateCounter::base_numParticlesToCreate(double dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::ConstantRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConstantRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ConstantRateCounter::base_numParticlesToCreate(double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ConstantRateCounter::numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::ConstantRateCounter* LunaTraits< osgParticle::ConstantRateCounter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ConstantRateCounter::_bind_ctor(L);
}

void LunaTraits< osgParticle::ConstantRateCounter >::_bind_dtor(osgParticle::ConstantRateCounter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ConstantRateCounter >::className[] = "ConstantRateCounter";
const char LunaTraits< osgParticle::ConstantRateCounter >::fullName[] = "osgParticle::ConstantRateCounter";
const char LunaTraits< osgParticle::ConstantRateCounter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ConstantRateCounter >::parents[] = {"osgParticle.Counter", 0};
const int LunaTraits< osgParticle::ConstantRateCounter >::hash = 65979983;
const int LunaTraits< osgParticle::ConstantRateCounter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ConstantRateCounter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_className},
	{"setMinimumNumberOfParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_setMinimumNumberOfParticlesToCreate},
	{"getMinimumNumberOfParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_getMinimumNumberOfParticlesToCreate},
	{"setNumberOfParticlesPerSecondToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_setNumberOfParticlesPerSecondToCreate},
	{"getNumberOfParticlesPerSecondToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_getNumberOfParticlesPerSecondToCreate},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_numParticlesToCreate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_className},
	{"base_numParticlesToCreate", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_base_numParticlesToCreate},
	{"fromVoid", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ConstantRateCounter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ConstantRateCounter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ConstantRateCounter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ConstantRateCounter >::enumValues[] = {
	{0,0}
};


