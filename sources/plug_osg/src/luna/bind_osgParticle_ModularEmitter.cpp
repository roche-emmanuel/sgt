#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ModularEmitter.h>

class luna_wrapper_osgParticle_ModularEmitter {
public:
	typedef Luna< osgParticle::ModularEmitter > luna_t;

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

		osgParticle::ModularEmitter* self= (osgParticle::ModularEmitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ModularEmitter >::push(L,self,false);
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
		//osgParticle::ModularEmitter* ptr= dynamic_cast< osgParticle::ModularEmitter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ModularEmitter* ptr= luna_caster< osg::Referenced, osgParticle::ModularEmitter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ModularEmitter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCounter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCounter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCounter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlacer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPlacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShooter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShooter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShooter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ModularEmitter::ModularEmitter()
	static osgParticle::ModularEmitter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter() function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::ModularEmitter();
	}

	// osgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ModularEmitter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter(const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ModularEmitter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osgParticle::ModularEmitter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ModularEmitter(copy, copyop);
	}

	// osgParticle::ModularEmitter::ModularEmitter(lua_Table * data)
	static osgParticle::ModularEmitter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter(lua_Table * data) function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ModularEmitter(L,NULL);
	}

	// osgParticle::ModularEmitter::ModularEmitter(lua_Table * data, const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ModularEmitter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ModularEmitter::ModularEmitter(lua_Table * data, const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ModularEmitter::ModularEmitter(lua_Table * data, const osgParticle::ModularEmitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ModularEmitter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osgParticle::ModularEmitter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::ModularEmitter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ModularEmitter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ModularEmitter::ModularEmitter
	static osgParticle::ModularEmitter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ModularEmitter, cannot match any of the overloads for function ModularEmitter:\n  ModularEmitter()\n  ModularEmitter(const osgParticle::ModularEmitter &, const osg::CopyOp &)\n  ModularEmitter(lua_Table *)\n  ModularEmitter(lua_Table *, const osgParticle::ModularEmitter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ModularEmitter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ModularEmitter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ModularEmitter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::className() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::libraryName() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularEmitter::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularEmitter::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osgParticle::Counter * osgParticle::ModularEmitter::getCounter()
	static int _bind_getCounter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCounter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Counter * osgParticle::ModularEmitter::getCounter() function, expected prototype:\nosgParticle::Counter * osgParticle::ModularEmitter::getCounter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Counter * osgParticle::ModularEmitter::getCounter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Counter * lret = self->getCounter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Counter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const
	static int _bind_getCounter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCounter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const function, expected prototype:\nconst osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Counter * osgParticle::ModularEmitter::getCounter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Counter * lret = self->getCounter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Counter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getCounter
	static int _bind_getCounter(lua_State *L) {
		if (_lg_typecheck_getCounter_overload_1(L)) return _bind_getCounter_overload_1(L);
		if (_lg_typecheck_getCounter_overload_2(L)) return _bind_getCounter_overload_2(L);

		luaL_error(L, "error in function getCounter, cannot match any of the overloads for function getCounter:\n  getCounter()\n  getCounter()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c)
	static int _bind_setCounter(lua_State *L) {
		if (!_lg_typecheck_setCounter(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c) function, expected prototype:\nvoid osgParticle::ModularEmitter::setCounter(osgParticle::Counter * c)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Counter* c=(Luna< osg::Referenced >::checkSubType< osgParticle::Counter >(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setCounter(osgParticle::Counter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCounter(c);

		return 0;
	}

	// float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const
	static int _bind_getNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if (!_lg_typecheck_getNumParticlesToCreateMovementCompensationRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const function, expected prototype:\nfloat osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::ModularEmitter::getNumParticlesToCreateMovementCompensationRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getNumParticlesToCreateMovementCompensationRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r)
	static int _bind_setNumParticlesToCreateMovementCompensationRatio(lua_State *L) {
		if (!_lg_typecheck_setNumParticlesToCreateMovementCompensationRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r) function, expected prototype:\nvoid osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float r)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumParticlesToCreateMovementCompensationRatio(r);

		return 0;
	}

	// osgParticle::Placer * osgParticle::ModularEmitter::getPlacer()
	static int _bind_getPlacer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() function, expected prototype:\nosgParticle::Placer * osgParticle::ModularEmitter::getPlacer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Placer * osgParticle::ModularEmitter::getPlacer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Placer * lret = self->getPlacer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const
	static int _bind_getPlacer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPlacer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const function, expected prototype:\nconst osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Placer * osgParticle::ModularEmitter::getPlacer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Placer * lret = self->getPlacer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getPlacer
	static int _bind_getPlacer(lua_State *L) {
		if (_lg_typecheck_getPlacer_overload_1(L)) return _bind_getPlacer_overload_1(L);
		if (_lg_typecheck_getPlacer_overload_2(L)) return _bind_getPlacer_overload_2(L);

		luaL_error(L, "error in function getPlacer, cannot match any of the overloads for function getPlacer:\n  getPlacer()\n  getPlacer()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p)
	static int _bind_setPlacer(lua_State *L) {
		if (!_lg_typecheck_setPlacer(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p) function, expected prototype:\nvoid osgParticle::ModularEmitter::setPlacer(osgParticle::Placer * p)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Placer* p=(Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setPlacer(osgParticle::Placer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPlacer(p);

		return 0;
	}

	// osgParticle::Shooter * osgParticle::ModularEmitter::getShooter()
	static int _bind_getShooter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShooter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() function, expected prototype:\nosgParticle::Shooter * osgParticle::ModularEmitter::getShooter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Shooter * osgParticle::ModularEmitter::getShooter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Shooter * lret = self->getShooter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Shooter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const
	static int _bind_getShooter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShooter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const function, expected prototype:\nconst osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Shooter * osgParticle::ModularEmitter::getShooter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Shooter * lret = self->getShooter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Shooter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::getShooter
	static int _bind_getShooter(lua_State *L) {
		if (_lg_typecheck_getShooter_overload_1(L)) return _bind_getShooter_overload_1(L);
		if (_lg_typecheck_getShooter_overload_2(L)) return _bind_getShooter_overload_2(L);

		luaL_error(L, "error in function getShooter, cannot match any of the overloads for function getShooter:\n  getShooter()\n  getShooter()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s)
	static int _bind_setShooter(lua_State *L) {
		if (!_lg_typecheck_setShooter(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s) function, expected prototype:\nvoid osgParticle::ModularEmitter::setShooter(osgParticle::Shooter * s)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Shooter* s=(Luna< osg::Referenced >::checkSubType< osgParticle::Shooter >(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::setShooter(osgParticle::Shooter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShooter(s);

		return 0;
	}

	// void osgParticle::ModularEmitter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::setName(name);

		return 0;
	}

	// void osgParticle::ModularEmitter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ModularEmitter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::computeDataVariance();

		return 0;
	}

	// void osgParticle::ModularEmitter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ModularEmitter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ModularEmitter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ModularEmitter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ModularEmitter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ModularEmitter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ModularEmitter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ModularEmitter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ModularEmitter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ModularEmitter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ModularEmitter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osgParticle::ModularEmitter::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::ModularEmitter::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::ModularEmitter::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::ModularEmitter::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->ModularEmitter::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::ModularEmitter::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::ModularEmitter::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::ModularEmitter::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::ModularEmitter::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->ModularEmitter::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::ModularEmitter::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::ModularEmitter::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::ModularEmitter::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::ModularEmitter::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->ModularEmitter::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::ModularEmitter::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::ModularEmitter::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::ModularEmitter::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::ModularEmitter::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->ModularEmitter::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::ModularEmitter::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::ModularEmitter::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::ModularEmitter::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::ModularEmitter::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->ModularEmitter::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::ModularEmitter::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::ModularEmitter::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::ModularEmitter::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::ModularEmitter::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->ModularEmitter::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::ModularEmitter::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::ModularEmitter::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::ModularEmitter::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::ModularEmitter::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->ModularEmitter::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::ModularEmitter::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::ModularEmitter::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::ModularEmitter::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::ModularEmitter::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->ModularEmitter::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::ModularEmitter::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::ModularEmitter::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::ModularEmitter::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::ModularEmitter::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->ModularEmitter::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::ModularEmitter::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::ModularEmitter::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::ModularEmitter::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::ModularEmitter::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->ModularEmitter::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularEmitter::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::ModularEmitter::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularEmitter::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::ascend(nv);

		return 0;
	}

	// void osgParticle::ModularEmitter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ModularEmitter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ModularEmitter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::ModularEmitter::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ModularEmitter::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ModularEmitter::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ModularEmitter::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ModularEmitter::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ModularEmitter::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->ModularEmitter::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osgParticle::ModularEmitter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ModularEmitter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ModularEmitter::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularEmitter::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ModularEmitter::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularEmitter::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularEmitter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ModularEmitter::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ModularEmitter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ModularEmitter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ModularEmitter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ModularEmitter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ModularEmitter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::base_className() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ModularEmitter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ModularEmitter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularEmitter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ModularEmitter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularEmitter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ModularEmitter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ModularEmitter::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularEmitter::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularEmitter::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularEmitter::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularEmitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularEmitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ModularEmitter::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModularEmitter::accept(nv);

		return 0;
	}


	// Operator binds:

};

osgParticle::ModularEmitter* LunaTraits< osgParticle::ModularEmitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ModularEmitter::_bind_ctor(L);
}

void LunaTraits< osgParticle::ModularEmitter >::_bind_dtor(osgParticle::ModularEmitter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ModularEmitter >::className[] = "ModularEmitter";
const char LunaTraits< osgParticle::ModularEmitter >::fullName[] = "osgParticle::ModularEmitter";
const char LunaTraits< osgParticle::ModularEmitter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ModularEmitter >::parents[] = {"osgParticle.Emitter", 0};
const int LunaTraits< osgParticle::ModularEmitter >::hash = 79450830;
const int LunaTraits< osgParticle::ModularEmitter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ModularEmitter >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ModularEmitter::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ModularEmitter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ModularEmitter::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ModularEmitter::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ModularEmitter::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ModularEmitter::_bind_accept},
	{"getCounter", &luna_wrapper_osgParticle_ModularEmitter::_bind_getCounter},
	{"setCounter", &luna_wrapper_osgParticle_ModularEmitter::_bind_setCounter},
	{"getNumParticlesToCreateMovementCompensationRatio", &luna_wrapper_osgParticle_ModularEmitter::_bind_getNumParticlesToCreateMovementCompensationRatio},
	{"setNumParticlesToCreateMovementCompensationRatio", &luna_wrapper_osgParticle_ModularEmitter::_bind_setNumParticlesToCreateMovementCompensationRatio},
	{"getPlacer", &luna_wrapper_osgParticle_ModularEmitter::_bind_getPlacer},
	{"setPlacer", &luna_wrapper_osgParticle_ModularEmitter::_bind_setPlacer},
	{"getShooter", &luna_wrapper_osgParticle_ModularEmitter::_bind_getShooter},
	{"setShooter", &luna_wrapper_osgParticle_ModularEmitter::_bind_setShooter},
	{"base_setName", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_ascend},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_releaseGLObjects},
	{"base_traverse", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_ModularEmitter::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osgParticle_ModularEmitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ModularEmitter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ModularEmitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ModularEmitter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ModularEmitter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ModularEmitter >::enumValues[] = {
	{0,0}
};


