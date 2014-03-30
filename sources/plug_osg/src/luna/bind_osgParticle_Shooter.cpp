#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Shooter.h>

class luna_wrapper_osgParticle_Shooter {
public:
	typedef Luna< osgParticle::Shooter > luna_t;

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

		osgParticle::Shooter* self= (osgParticle::Shooter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Shooter >::push(L,self,false);
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
		//osgParticle::Shooter* ptr= dynamic_cast< osgParticle::Shooter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Shooter* ptr= luna_caster< osg::Referenced, osgParticle::Shooter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Shooter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,2))) ) return false;
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
	// osgParticle::Shooter::Shooter(lua_Table * data)
	static osgParticle::Shooter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Shooter::Shooter(lua_Table * data) function, expected prototype:\nosgParticle::Shooter::Shooter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Shooter(L,NULL);
	}

	// osgParticle::Shooter::Shooter(lua_Table * data, const osgParticle::Shooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Shooter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Shooter::Shooter(lua_Table * data, const osgParticle::Shooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Shooter::Shooter(lua_Table * data, const osgParticle::Shooter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Shooter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Shooter::Shooter function");
		}
		const osgParticle::Shooter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Shooter::Shooter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Shooter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Shooter::Shooter
	static osgParticle::Shooter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Shooter, cannot match any of the overloads for function Shooter:\n  Shooter(lua_Table *)\n  Shooter(lua_Table *, const osgParticle::Shooter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Shooter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::libraryName() const function, expected prototype:\nconst char * osgParticle::Shooter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Shooter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::className() const function, expected prototype:\nconst char * osgParticle::Shooter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Shooter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Shooter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Shooter::shoot(osgParticle::Particle * P) const
	static int _bind_shoot(lua_State *L) {
		if (!_lg_typecheck_shoot(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::shoot(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::Shooter::shoot(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::shoot(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->shoot(P);

		return 0;
	}

	// void osgParticle::Shooter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Shooter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shooter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Shooter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Shooter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shooter::setName(name);

		return 0;
	}

	// void osgParticle::Shooter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Shooter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shooter::computeDataVariance();

		return 0;
	}

	// void osgParticle::Shooter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Shooter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shooter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Shooter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Shooter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Shooter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Shooter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Shooter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Shooter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Shooter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Shooter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Shooter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Shooter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Shooter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Shooter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Shooter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Shooter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Shooter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shooter::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Shooter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Shooter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Shooter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Shooter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Shooter::base_className() const function, expected prototype:\nconst char * osgParticle::Shooter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Shooter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Shooter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Shooter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Shooter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Shooter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Shooter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Shooter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Shooter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgParticle::Shooter* LunaTraits< osgParticle::Shooter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Shooter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::Shooter::shoot(osgParticle::Particle * P) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Shooter >::_bind_dtor(osgParticle::Shooter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Shooter >::className[] = "Shooter";
const char LunaTraits< osgParticle::Shooter >::fullName[] = "osgParticle::Shooter";
const char LunaTraits< osgParticle::Shooter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Shooter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Shooter >::hash = 7800180;
const int LunaTraits< osgParticle::Shooter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Shooter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Shooter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Shooter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Shooter::_bind_isSameKindAs},
	{"shoot", &luna_wrapper_osgParticle_Shooter::_bind_shoot},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Shooter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_Shooter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Shooter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Shooter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Shooter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Shooter::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Shooter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Shooter::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Shooter::_bind_base_isSameKindAs},
	{"fromVoid", &luna_wrapper_osgParticle_Shooter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Shooter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Shooter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Shooter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Shooter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Shooter >::enumValues[] = {
	{0,0}
};


