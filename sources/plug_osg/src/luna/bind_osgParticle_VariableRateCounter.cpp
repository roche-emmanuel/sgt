#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_VariableRateCounter.h>

class luna_wrapper_osgParticle_VariableRateCounter {
public:
	typedef Luna< osgParticle::VariableRateCounter > luna_t;

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

		osgParticle::VariableRateCounter* self= (osgParticle::VariableRateCounter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::VariableRateCounter >::push(L,self,false);
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
		//osgParticle::VariableRateCounter* ptr= dynamic_cast< osgParticle::VariableRateCounter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::VariableRateCounter* ptr= luna_caster< osg::Referenced, osgParticle::VariableRateCounter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::VariableRateCounter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getRateRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRateRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRateRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data)
	static osgParticle::VariableRateCounter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data) function, expected prototype:\nosgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_VariableRateCounter(L,NULL);
	}

	// osgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data, const osgParticle::VariableRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::VariableRateCounter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data, const osgParticle::VariableRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::VariableRateCounter::VariableRateCounter(lua_Table * data, const osgParticle::VariableRateCounter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::VariableRateCounter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::VariableRateCounter::VariableRateCounter function");
		}
		const osgParticle::VariableRateCounter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::VariableRateCounter::VariableRateCounter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_VariableRateCounter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::VariableRateCounter::VariableRateCounter
	static osgParticle::VariableRateCounter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VariableRateCounter, cannot match any of the overloads for function VariableRateCounter:\n  VariableRateCounter(lua_Table *)\n  VariableRateCounter(lua_Table *, const osgParticle::VariableRateCounter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::VariableRateCounter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::libraryName() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::VariableRateCounter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::className() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::VariableRateCounter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const
	static int _bind_getRateRange(lua_State *L) {
		if (!_lg_typecheck_getRateRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::VariableRateCounter::getRateRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getRateRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r)
	static int _bind_setRateRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setRateRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::VariableRateCounter::setRateRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::setRateRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRateRange(r);

		return 0;
	}

	// void osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange)
	static int _bind_setRateRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setRateRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange) function, expected prototype:\nvoid osgParticle::VariableRateCounter::setRateRange(float minrange, float maxrange)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float minrange=(float)lua_tonumber(L,2);
		float maxrange=(float)lua_tonumber(L,3);

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::setRateRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRateRange(minrange, maxrange);

		return 0;
	}

	// Overload binder for osgParticle::VariableRateCounter::setRateRange
	static int _bind_setRateRange(lua_State *L) {
		if (_lg_typecheck_setRateRange_overload_1(L)) return _bind_setRateRange_overload_1(L);
		if (_lg_typecheck_setRateRange_overload_2(L)) return _bind_setRateRange_overload_2(L);

		luaL_error(L, "error in function setRateRange, cannot match any of the overloads for function setRateRange:\n  setRateRange(const osgParticle::rangef &)\n  setRateRange(float, float)\n");
		return 0;
	}

	// void osgParticle::VariableRateCounter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::VariableRateCounter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VariableRateCounter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::VariableRateCounter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::VariableRateCounter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VariableRateCounter::setName(name);

		return 0;
	}

	// void osgParticle::VariableRateCounter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::VariableRateCounter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VariableRateCounter::computeDataVariance();

		return 0;
	}

	// void osgParticle::VariableRateCounter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::VariableRateCounter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VariableRateCounter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::VariableRateCounter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::VariableRateCounter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::VariableRateCounter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::VariableRateCounter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->VariableRateCounter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::VariableRateCounter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::VariableRateCounter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::VariableRateCounter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::VariableRateCounter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->VariableRateCounter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::VariableRateCounter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::VariableRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::VariableRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::VariableRateCounter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::VariableRateCounter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VariableRateCounter::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::VariableRateCounter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VariableRateCounter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::VariableRateCounter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::VariableRateCounter::base_className() const function, expected prototype:\nconst char * osgParticle::VariableRateCounter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::VariableRateCounter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VariableRateCounter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::VariableRateCounter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::VariableRateCounter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::VariableRateCounter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::VariableRateCounter* self=Luna< osg::Referenced >::checkSubType< osgParticle::VariableRateCounter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::VariableRateCounter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VariableRateCounter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgParticle::VariableRateCounter* LunaTraits< osgParticle::VariableRateCounter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_VariableRateCounter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::VariableRateCounter >::_bind_dtor(osgParticle::VariableRateCounter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::VariableRateCounter >::className[] = "VariableRateCounter";
const char LunaTraits< osgParticle::VariableRateCounter >::fullName[] = "osgParticle::VariableRateCounter";
const char LunaTraits< osgParticle::VariableRateCounter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::VariableRateCounter >::parents[] = {"osgParticle.Counter", 0};
const int LunaTraits< osgParticle::VariableRateCounter >::hash = 7113933;
const int LunaTraits< osgParticle::VariableRateCounter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::VariableRateCounter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_VariableRateCounter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_VariableRateCounter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_VariableRateCounter::_bind_isSameKindAs},
	{"getRateRange", &luna_wrapper_osgParticle_VariableRateCounter::_bind_getRateRange},
	{"setRateRange", &luna_wrapper_osgParticle_VariableRateCounter::_bind_setRateRange},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_VariableRateCounter::_bind_base_isSameKindAs},
	{"fromVoid", &luna_wrapper_osgParticle_VariableRateCounter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_VariableRateCounter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_VariableRateCounter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::VariableRateCounter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_VariableRateCounter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::VariableRateCounter >::enumValues[] = {
	{0,0}
};


