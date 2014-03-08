#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Placer.h>

class luna_wrapper_osgParticle_Placer {
public:
	typedef Luna< osgParticle::Placer > luna_t;

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

		osgParticle::Placer* self= (osgParticle::Placer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Placer >::push(L,self,false);
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
		//osgParticle::Placer* ptr= dynamic_cast< osgParticle::Placer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Placer* ptr= luna_caster< osg::Referenced, osgParticle::Placer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Placer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getControlPosition(lua_State *L) {
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

	inline static bool _lg_typecheck_base_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::Placer::Placer(lua_Table * data)
	static osgParticle::Placer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Placer::Placer(lua_Table * data) function, expected prototype:\nosgParticle::Placer::Placer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Placer(L,NULL);
	}

	// osgParticle::Placer::Placer(lua_Table * data, const osgParticle::Placer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Placer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Placer::Placer(lua_Table * data, const osgParticle::Placer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Placer::Placer(lua_Table * data, const osgParticle::Placer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Placer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Placer::Placer function");
		}
		const osgParticle::Placer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Placer::Placer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Placer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Placer::Placer
	static osgParticle::Placer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Placer, cannot match any of the overloads for function Placer:\n  Placer(lua_Table *)\n  Placer(lua_Table *, const osgParticle::Placer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Placer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::libraryName() const function, expected prototype:\nconst char * osgParticle::Placer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Placer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::className() const function, expected prototype:\nconst char * osgParticle::Placer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Placer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::Placer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::Placer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Placer::volume() const function, expected prototype:\nfloat osgParticle::Placer::volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Placer::volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::Placer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::Placer::getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::Placer::getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::Placer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Placer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Placer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Placer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Placer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Placer::setName(name);

		return 0;
	}

	// void osgParticle::Placer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Placer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Placer::computeDataVariance();

		return 0;
	}

	// void osgParticle::Placer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Placer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Placer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Placer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Placer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Placer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Placer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Placer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Placer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Placer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Placer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Placer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Placer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Placer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Placer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Placer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Placer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Placer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Placer::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Placer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Placer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Placer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Placer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Placer::base_className() const function, expected prototype:\nconst char * osgParticle::Placer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Placer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Placer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Placer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Placer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Placer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Placer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Placer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osgParticle::Placer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Placer::base_volume() const function, expected prototype:\nfloat osgParticle::Placer::base_volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Placer* self=Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Placer::base_volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Placer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::Placer* LunaTraits< osgParticle::Placer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Placer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Placer >::_bind_dtor(osgParticle::Placer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Placer >::className[] = "Placer";
const char LunaTraits< osgParticle::Placer >::fullName[] = "osgParticle::Placer";
const char LunaTraits< osgParticle::Placer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Placer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Placer >::hash = 49887278;
const int LunaTraits< osgParticle::Placer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Placer >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Placer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Placer::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Placer::_bind_isSameKindAs},
	{"place", &luna_wrapper_osgParticle_Placer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_Placer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_Placer::_bind_getControlPosition},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Placer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_Placer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Placer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Placer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Placer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Placer::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Placer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Placer::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Placer::_bind_base_isSameKindAs},
	{"base_volume", &luna_wrapper_osgParticle_Placer::_bind_base_volume},
	{"fromVoid", &luna_wrapper_osgParticle_Placer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Placer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Placer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Placer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Placer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Placer >::enumValues[] = {
	{0,0}
};


