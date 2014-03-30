#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_CenteredPlacer.h>

class luna_wrapper_osgParticle_CenteredPlacer {
public:
	typedef Luna< osgParticle::CenteredPlacer > luna_t;

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

		osgParticle::CenteredPlacer* self= (osgParticle::CenteredPlacer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::CenteredPlacer >::push(L,self,false);
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
		//osgParticle::CenteredPlacer* ptr= dynamic_cast< osgParticle::CenteredPlacer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::CenteredPlacer* ptr= luna_caster< osg::Referenced, osgParticle::CenteredPlacer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::CenteredPlacer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCenter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data)
	static osgParticle::CenteredPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data) function, expected prototype:\nosgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_CenteredPlacer(L,NULL);
	}

	// osgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data, const osgParticle::CenteredPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::CenteredPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data, const osgParticle::CenteredPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::CenteredPlacer::CenteredPlacer(lua_Table * data, const osgParticle::CenteredPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::CenteredPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::CenteredPlacer::CenteredPlacer function");
		}
		const osgParticle::CenteredPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::CenteredPlacer::CenteredPlacer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_CenteredPlacer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::CenteredPlacer::CenteredPlacer
	static osgParticle::CenteredPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CenteredPlacer, cannot match any of the overloads for function CenteredPlacer:\n  CenteredPlacer(lua_Table *)\n  CenteredPlacer(lua_Table *, const osgParticle::CenteredPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::CenteredPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::CenteredPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::className() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::CenteredPlacer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const function, expected prototype:\nconst osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::CenteredPlacer::getCenter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v)
	static int _bind_setCenter_overload_1(lua_State *L) {
		if (!_lg_typecheck_setCenter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::CenteredPlacer::setCenter(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::CenteredPlacer::setCenter function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::setCenter(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(v);

		return 0;
	}

	// void osgParticle::CenteredPlacer::setCenter(float x, float y, float z)
	static int _bind_setCenter_overload_2(lua_State *L) {
		if (!_lg_typecheck_setCenter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::setCenter(float x, float y, float z) function, expected prototype:\nvoid osgParticle::CenteredPlacer::setCenter(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::setCenter(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::CenteredPlacer::setCenter
	static int _bind_setCenter(lua_State *L) {
		if (_lg_typecheck_setCenter_overload_1(L)) return _bind_setCenter_overload_1(L);
		if (_lg_typecheck_setCenter_overload_2(L)) return _bind_setCenter_overload_2(L);

		luaL_error(L, "error in function setCenter, cannot match any of the overloads for function setCenter:\n  setCenter(const osg::Vec3f &)\n  setCenter(float, float, float)\n");
		return 0;
	}

	// void osgParticle::CenteredPlacer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::CenteredPlacer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenteredPlacer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::CenteredPlacer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::CenteredPlacer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenteredPlacer::setName(name);

		return 0;
	}

	// void osgParticle::CenteredPlacer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::CenteredPlacer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenteredPlacer::computeDataVariance();

		return 0;
	}

	// void osgParticle::CenteredPlacer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::CenteredPlacer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenteredPlacer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::CenteredPlacer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::CenteredPlacer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::CenteredPlacer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::CenteredPlacer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->CenteredPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::CenteredPlacer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::CenteredPlacer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::CenteredPlacer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::CenteredPlacer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->CenteredPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::CenteredPlacer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::CenteredPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::CenteredPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::CenteredPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::CenteredPlacer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenteredPlacer::releaseGLObjects(_arg1);

		return 0;
	}

	// float osgParticle::CenteredPlacer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::CenteredPlacer::base_volume() const function, expected prototype:\nfloat osgParticle::CenteredPlacer::base_volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::CenteredPlacer::base_volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->CenteredPlacer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgParticle::CenteredPlacer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CenteredPlacer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::CenteredPlacer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::CenteredPlacer::base_className() const function, expected prototype:\nconst char * osgParticle::CenteredPlacer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::CenteredPlacer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CenteredPlacer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::CenteredPlacer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::CenteredPlacer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::CenteredPlacer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::CenteredPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::CenteredPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::CenteredPlacer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CenteredPlacer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgParticle::CenteredPlacer* LunaTraits< osgParticle::CenteredPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_CenteredPlacer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::CenteredPlacer >::_bind_dtor(osgParticle::CenteredPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::CenteredPlacer >::className[] = "CenteredPlacer";
const char LunaTraits< osgParticle::CenteredPlacer >::fullName[] = "osgParticle::CenteredPlacer";
const char LunaTraits< osgParticle::CenteredPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::CenteredPlacer >::parents[] = {"osgParticle.Placer", 0};
const int LunaTraits< osgParticle::CenteredPlacer >::hash = 32091638;
const int LunaTraits< osgParticle::CenteredPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::CenteredPlacer >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_CenteredPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_CenteredPlacer::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_CenteredPlacer::_bind_isSameKindAs},
	{"getCenter", &luna_wrapper_osgParticle_CenteredPlacer::_bind_getCenter},
	{"setCenter", &luna_wrapper_osgParticle_CenteredPlacer::_bind_setCenter},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_releaseGLObjects},
	{"base_volume", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_volume},
	{"base_libraryName", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_CenteredPlacer::_bind_base_isSameKindAs},
	{"fromVoid", &luna_wrapper_osgParticle_CenteredPlacer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_CenteredPlacer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_CenteredPlacer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::CenteredPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_CenteredPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::CenteredPlacer >::enumValues[] = {
	{0,0}
};


