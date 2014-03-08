#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Operator.h>

class luna_wrapper_osgParticle_Operator {
public:
	typedef Luna< osgParticle::Operator > luna_t;

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

		osgParticle::Operator* self= (osgParticle::Operator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Operator >::push(L,self,false);
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
		//osgParticle::Operator* ptr= dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Operator* ptr= luna_caster< osg::Referenced, osgParticle::Operator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Operator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_operateParticles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_endOperate(lua_State *L) {
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_operateParticles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_endOperate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::Operator::Operator(lua_Table * data)
	static osgParticle::Operator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Operator::Operator(lua_Table * data) function, expected prototype:\nosgParticle::Operator::Operator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Operator(L,NULL);
	}

	// osgParticle::Operator::Operator(lua_Table * data, const osgParticle::Operator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Operator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Operator::Operator(lua_Table * data, const osgParticle::Operator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Operator::Operator(lua_Table * data, const osgParticle::Operator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Operator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Operator::Operator function");
		}
		const osgParticle::Operator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Operator::Operator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Operator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Operator::Operator
	static osgParticle::Operator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Operator, cannot match any of the overloads for function Operator:\n  Operator(lua_Table *)\n  Operator(lua_Table *, const osgParticle::Operator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Operator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::libraryName() const function, expected prototype:\nconst char * osgParticle::Operator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Operator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::className() const function, expected prototype:\nconst char * osgParticle::Operator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Operator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Operator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::Operator::isEnabled() const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Operator::isEnabled() const function, expected prototype:\nbool osgParticle::Operator::isEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Operator::isEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Operator::setEnabled(bool v)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::setEnabled(bool v) function, expected prototype:\nvoid osgParticle::Operator::setEnabled(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::setEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEnabled(v);

		return 0;
	}

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_operateParticles(lua_State *L) {
		if (!_lg_typecheck_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::Operator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::Operator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::Operator::beginOperate(osgParticle::Program * arg1)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::beginOperate(osgParticle::Program * arg1) function, expected prototype:\nvoid osgParticle::Operator::beginOperate(osgParticle::Program * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* _arg1=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginOperate(_arg1);

		return 0;
	}

	// void osgParticle::Operator::endOperate()
	static int _bind_endOperate(lua_State *L) {
		if (!_lg_typecheck_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::endOperate() function, expected prototype:\nvoid osgParticle::Operator::endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endOperate();

		return 0;
	}

	// void osgParticle::Operator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Operator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Operator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Operator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::setName(name);

		return 0;
	}

	// void osgParticle::Operator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Operator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::computeDataVariance();

		return 0;
	}

	// void osgParticle::Operator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Operator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Operator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Operator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Operator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Operator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Operator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Operator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Operator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Operator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Operator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Operator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Operator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Operator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Operator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Operator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Operator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Operator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Operator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Operator::base_className() const function, expected prototype:\nconst char * osgParticle::Operator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Operator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Operator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Operator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Operator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Operator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Operator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Operator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Operator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::Operator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::Operator::base_beginOperate(osgParticle::Program * arg1)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_beginOperate(osgParticle::Program * arg1) function, expected prototype:\nvoid osgParticle::Operator::base_beginOperate(osgParticle::Program * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* _arg1=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::beginOperate(_arg1);

		return 0;
	}

	// void osgParticle::Operator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Operator::base_endOperate() function, expected prototype:\nvoid osgParticle::Operator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Operator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Operator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operator::endOperate();

		return 0;
	}


	// Operator binds:

};

osgParticle::Operator* LunaTraits< osgParticle::Operator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Operator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::Operator::operate(osgParticle::Particle * P, double dt)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Operator >::_bind_dtor(osgParticle::Operator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Operator >::className[] = "Operator";
const char LunaTraits< osgParticle::Operator >::fullName[] = "osgParticle::Operator";
const char LunaTraits< osgParticle::Operator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Operator >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Operator >::hash = 7325659;
const int LunaTraits< osgParticle::Operator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Operator >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Operator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Operator::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Operator::_bind_isSameKindAs},
	{"isEnabled", &luna_wrapper_osgParticle_Operator::_bind_isEnabled},
	{"setEnabled", &luna_wrapper_osgParticle_Operator::_bind_setEnabled},
	{"operateParticles", &luna_wrapper_osgParticle_Operator::_bind_operateParticles},
	{"operate", &luna_wrapper_osgParticle_Operator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_Operator::_bind_beginOperate},
	{"endOperate", &luna_wrapper_osgParticle_Operator::_bind_endOperate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Operator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_Operator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Operator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Operator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Operator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Operator::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Operator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Operator::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Operator::_bind_base_isSameKindAs},
	{"base_operateParticles", &luna_wrapper_osgParticle_Operator::_bind_base_operateParticles},
	{"base_beginOperate", &luna_wrapper_osgParticle_Operator::_bind_base_beginOperate},
	{"base_endOperate", &luna_wrapper_osgParticle_Operator::_bind_base_endOperate},
	{"fromVoid", &luna_wrapper_osgParticle_Operator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Operator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Operator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Operator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Operator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Operator >::enumValues[] = {
	{0,0}
};


