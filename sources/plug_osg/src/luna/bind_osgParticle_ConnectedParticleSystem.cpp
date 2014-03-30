#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ConnectedParticleSystem.h>

class luna_wrapper_osgParticle_ConnectedParticleSystem {
public:
	typedef Luna< osgParticle::ConnectedParticleSystem > luna_t;

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

		osgParticle::ConnectedParticleSystem* self= (osgParticle::ConnectedParticleSystem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ConnectedParticleSystem >::push(L,self,false);
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
		//osgParticle::ConnectedParticleSystem* ptr= dynamic_cast< osgParticle::ConnectedParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ConnectedParticleSystem* ptr= luna_caster< osg::Referenced, osgParticle::ConnectedParticleSystem >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ConnectedParticleSystem >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_createParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reuseParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartParticle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartParticle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxNumberOfParticlesToSkip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxNumberOfParticlesToSkip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_destroyParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
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

	inline static bool _lg_typecheck_base_createParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reuseParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem()
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem() function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::ConnectedParticleSystem();
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConnectedParticleSystem* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osgParticle::ConnectedParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ConnectedParticleSystem(copy, copyop);
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ConnectedParticleSystem(L,NULL);
	}

	// osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ConnectedParticleSystem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ConnectedParticleSystem::ConnectedParticleSystem(lua_Table * data, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ConnectedParticleSystem* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osgParticle::ConnectedParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ConnectedParticleSystem::ConnectedParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ConnectedParticleSystem(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::ConnectedParticleSystem
	static osgParticle::ConnectedParticleSystem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ConnectedParticleSystem, cannot match any of the overloads for function ConnectedParticleSystem:\n  ConnectedParticleSystem()\n  ConnectedParticleSystem(const osgParticle::ConnectedParticleSystem &, const osg::CopyOp &)\n  ConnectedParticleSystem(lua_Table *)\n  ConnectedParticleSystem(lua_Table *, const osgParticle::ConnectedParticleSystem &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConnectedParticleSystem::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::libraryName() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::className() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_createParticle(lua_State *L) {
		if (!_lg_typecheck_createParticle(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ConnectedParticleSystem::reuseParticle(int i)
	static int _bind_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_reuseParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::reuseParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::reuseParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reuseParticle(i);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ConnectedParticleSystem::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const
	static int _bind_getStartParticle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStartParticle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const function, expected prototype:\nconst osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle * lret = self->getStartParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle()
	static int _bind_getStartParticle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStartParticle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle() function, expected prototype:\nosgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ConnectedParticleSystem::getStartParticle(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->getStartParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::getStartParticle
	static int _bind_getStartParticle(lua_State *L) {
		if (_lg_typecheck_getStartParticle_overload_1(L)) return _bind_getStartParticle_overload_1(L);
		if (_lg_typecheck_getStartParticle_overload_2(L)) return _bind_getStartParticle_overload_2(L);

		luaL_error(L, "error in function getStartParticle, cannot match any of the overloads for function getStartParticle:\n  getStartParticle()\n  getStartParticle()\n");
		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip)
	static int _bind_setMaxNumberOfParticlesToSkip(lua_State *L) {
		if (!_lg_typecheck_setMaxNumberOfParticlesToSkip(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int maxNumberofParticlesToSkip)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int maxNumberofParticlesToSkip=(unsigned int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::setMaxNumberOfParticlesToSkip(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxNumberOfParticlesToSkip(maxNumberofParticlesToSkip);

		return 0;
	}

	// unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()
	static int _bind_getMaxNumberOfParticlesToSkip(lua_State *L) {
		if (!_lg_typecheck_getMaxNumberOfParticlesToSkip(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip() function, expected prototype:\nunsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ConnectedParticleSystem::getMaxNumberOfParticlesToSkip(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMaxNumberOfParticlesToSkip();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ConnectedParticleSystem::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setName(name);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ConnectedParticleSystem::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ConnectedParticleSystem::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ConnectedParticleSystem::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry() function, expected prototype:\nosg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->ConnectedParticleSystem::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgParticle::ConnectedParticleSystem::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->ConnectedParticleSystem::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ConnectedParticleSystem::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::computeDataVariance();

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_dirtyDisplayList() function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgParticle::ConnectedParticleSystem::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ConnectedParticleSystem::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgParticle::ConnectedParticleSystem::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ConnectedParticleSystem::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ConnectedParticleSystem::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ConnectedParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ConnectedParticleSystem::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::releaseGLObjects(state);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setUpdateCallback(ac);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setEventCallback(ac);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setCullCallback(cc);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::setDrawCallback(dc);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_destroyParticle(int i)
	static int _bind_base_destroyParticle(lua_State *L) {
		if (!_lg_typecheck_base_destroyParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_destroyParticle(int i) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_destroyParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_destroyParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::destroyParticle(i);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_update(double dt, osg::NodeVisitor & nv)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_update(double dt, osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_update(double dt, osg::NodeVisitor & nv)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ConnectedParticleSystem::base_update function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_update(double, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::update(dt, nv);

		return 0;
	}

	// osg::BoundingBoxd osgParticle::ConnectedParticleSystem::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgParticle::ConnectedParticleSystem::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgParticle::ConnectedParticleSystem::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgParticle::ConnectedParticleSystem::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->ConnectedParticleSystem::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osgParticle::ConnectedParticleSystem::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConnectedParticleSystem::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ConnectedParticleSystem::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ConnectedParticleSystem::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ConnectedParticleSystem::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConnectedParticleSystem::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ConnectedParticleSystem::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConnectedParticleSystem::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ConnectedParticleSystem::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ConnectedParticleSystem::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ConnectedParticleSystem::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ConnectedParticleSystem::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ConnectedParticleSystem::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConnectedParticleSystem::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ConnectedParticleSystem::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ConnectedParticleSystem::base_className() const function, expected prototype:\nconst char * osgParticle::ConnectedParticleSystem::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ConnectedParticleSystem::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConnectedParticleSystem::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_base_createParticle(lua_State *L) {
		if (!_lg_typecheck_base_createParticle(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ConnectedParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ConnectedParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ConnectedParticleSystem::base_createParticle(const osgParticle::Particle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->ConnectedParticleSystem::createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ConnectedParticleSystem::base_reuseParticle(int i)
	static int _bind_base_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_base_reuseParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_reuseParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_reuseParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::reuseParticle(i);

		return 0;
	}

	// void osgParticle::ConnectedParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ConnectedParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ConnectedParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ConnectedParticleSystem::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ConnectedParticleSystem::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConnectedParticleSystem::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

osgParticle::ConnectedParticleSystem* LunaTraits< osgParticle::ConnectedParticleSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_ctor(L);
}

void LunaTraits< osgParticle::ConnectedParticleSystem >::_bind_dtor(osgParticle::ConnectedParticleSystem* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ConnectedParticleSystem >::className[] = "ConnectedParticleSystem";
const char LunaTraits< osgParticle::ConnectedParticleSystem >::fullName[] = "osgParticle::ConnectedParticleSystem";
const char LunaTraits< osgParticle::ConnectedParticleSystem >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ConnectedParticleSystem >::parents[] = {"osgParticle.ParticleSystem", 0};
const int LunaTraits< osgParticle::ConnectedParticleSystem >::hash = 7321592;
const int LunaTraits< osgParticle::ConnectedParticleSystem >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ConnectedParticleSystem >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_className},
	{"createParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_createParticle},
	{"reuseParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_reuseParticle},
	{"drawImplementation", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_drawImplementation},
	{"getStartParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_getStartParticle},
	{"setMaxNumberOfParticlesToSkip", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_setMaxNumberOfParticlesToSkip},
	{"getMaxNumberOfParticlesToSkip", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_getMaxNumberOfParticlesToSkip},
	{"base_setName", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_setDrawCallback},
	{"base_destroyParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_destroyParticle},
	{"base_update", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_update},
	{"base_computeBound", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_className},
	{"base_createParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_createParticle},
	{"base_reuseParticle", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_reuseParticle},
	{"base_drawImplementation", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_base_drawImplementation},
	{"fromVoid", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ConnectedParticleSystem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ConnectedParticleSystem >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ConnectedParticleSystem::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ConnectedParticleSystem >::enumValues[] = {
	{0,0}
};


