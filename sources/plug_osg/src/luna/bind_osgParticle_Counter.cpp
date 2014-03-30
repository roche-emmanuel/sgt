#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Counter.h>

class luna_wrapper_osgParticle_Counter {
public:
	typedef Luna< osgParticle::Counter > luna_t;

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

		osgParticle::Counter* self= (osgParticle::Counter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Counter >::push(L,self,false);
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
		//osgParticle::Counter* ptr= dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Counter* ptr= luna_caster< osg::Referenced, osgParticle::Counter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Counter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,2))) ) return false;
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
	// osgParticle::Counter::Counter(lua_Table * data)
	static osgParticle::Counter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Counter::Counter(lua_Table * data) function, expected prototype:\nosgParticle::Counter::Counter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Counter(L,NULL);
	}

	// osgParticle::Counter::Counter(lua_Table * data, const osgParticle::Counter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Counter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Counter::Counter(lua_Table * data, const osgParticle::Counter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Counter::Counter(lua_Table * data, const osgParticle::Counter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Counter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Counter::Counter function");
		}
		const osgParticle::Counter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Counter::Counter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Counter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Counter::Counter
	static osgParticle::Counter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Counter, cannot match any of the overloads for function Counter:\n  Counter(lua_Table *)\n  Counter(lua_Table *, const osgParticle::Counter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Counter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::libraryName() const function, expected prototype:\nconst char * osgParticle::Counter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Counter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::className() const function, expected prototype:\nconst char * osgParticle::Counter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Counter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Counter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::Counter::numParticlesToCreate(double dt) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Counter::numParticlesToCreate(double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Counter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Counter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Counter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Counter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Counter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Counter::setName(name);

		return 0;
	}

	// void osgParticle::Counter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Counter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Counter::computeDataVariance();

		return 0;
	}

	// void osgParticle::Counter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Counter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Counter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Counter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Counter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Counter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Counter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Counter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Counter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Counter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Counter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Counter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Counter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Counter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Counter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Counter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Counter::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Counter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Counter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Counter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Counter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::base_className() const function, expected prototype:\nconst char * osgParticle::Counter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Counter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Counter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Counter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Counter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Counter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgParticle::Counter* LunaTraits< osgParticle::Counter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Counter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Counter >::_bind_dtor(osgParticle::Counter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Counter >::className[] = "Counter";
const char LunaTraits< osgParticle::Counter >::fullName[] = "osgParticle::Counter";
const char LunaTraits< osgParticle::Counter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Counter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Counter >::hash = 13659321;
const int LunaTraits< osgParticle::Counter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Counter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Counter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Counter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Counter::_bind_isSameKindAs},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_Counter::_bind_numParticlesToCreate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Counter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_Counter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Counter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Counter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Counter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Counter::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Counter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Counter::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Counter::_bind_base_isSameKindAs},
	{"fromVoid", &luna_wrapper_osgParticle_Counter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Counter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Counter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Counter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Counter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Counter >::enumValues[] = {
	{0,0}
};


