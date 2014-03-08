#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_FluidProgram.h>

class luna_wrapper_osgParticle_FluidProgram {
public:
	typedef Luna< osgParticle::FluidProgram > luna_t;

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

		osgParticle::FluidProgram* self= (osgParticle::FluidProgram*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::FluidProgram >::push(L,self,false);
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
		//osgParticle::FluidProgram* ptr= dynamic_cast< osgParticle::FluidProgram* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::FluidProgram* ptr= luna_caster< osg::Referenced, osgParticle::FluidProgram >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::FluidProgram >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFluidViscosity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidViscosity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFluidDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAcceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAcceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setToGravity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFluidToAir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFluidToWater(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgParticle::FluidProgram::FluidProgram()
	static osgParticle::FluidProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram() function, expected prototype:\nosgParticle::FluidProgram::FluidProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::FluidProgram();
	}

	// osgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FluidProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FluidProgram::FluidProgram(const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::FluidProgram* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FluidProgram::FluidProgram function");
		}
		const osgParticle::FluidProgram & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::FluidProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::FluidProgram(copy, copyop);
	}

	// osgParticle::FluidProgram::FluidProgram(lua_Table * data)
	static osgParticle::FluidProgram* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram(lua_Table * data) function, expected prototype:\nosgParticle::FluidProgram::FluidProgram(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_FluidProgram(L,NULL);
	}

	// osgParticle::FluidProgram::FluidProgram(lua_Table * data, const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::FluidProgram* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::FluidProgram::FluidProgram(lua_Table * data, const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::FluidProgram::FluidProgram(lua_Table * data, const osgParticle::FluidProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::FluidProgram* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::FluidProgram::FluidProgram function");
		}
		const osgParticle::FluidProgram & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::FluidProgram function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_FluidProgram(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::FluidProgram::FluidProgram
	static osgParticle::FluidProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FluidProgram, cannot match any of the overloads for function FluidProgram:\n  FluidProgram()\n  FluidProgram(const osgParticle::FluidProgram &, const osg::CopyOp &)\n  FluidProgram(lua_Table *)\n  FluidProgram(lua_Table *, const osgParticle::FluidProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::FluidProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::cloneType() const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FluidProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::FluidProgram::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FluidProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::className() const function, expected prototype:\nconst char * osgParticle::FluidProgram::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FluidProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::libraryName() const function, expected prototype:\nconst char * osgParticle::FluidProgram::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FluidProgram::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FluidProgram::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidViscosity(float v)
	static int _bind_setFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_setFluidViscosity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidViscosity(float v) function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidViscosity(float v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidViscosity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFluidViscosity(v);

		return 0;
	}

	// float osgParticle::FluidProgram::getFluidViscosity() const
	static int _bind_getFluidViscosity(lua_State *L) {
		if (!_lg_typecheck_getFluidViscosity(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidProgram::getFluidViscosity() const function, expected prototype:\nfloat osgParticle::FluidProgram::getFluidViscosity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::FluidProgram::getFluidViscosity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFluidViscosity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::setFluidDensity(float d)
	static int _bind_setFluidDensity(lua_State *L) {
		if (!_lg_typecheck_setFluidDensity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidDensity(float d) function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidDensity(float d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float d=(float)lua_tonumber(L,2);

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidDensity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFluidDensity(d);

		return 0;
	}

	// float osgParticle::FluidProgram::getFluidDensity() const
	static int _bind_getFluidDensity(lua_State *L) {
		if (!_lg_typecheck_getFluidDensity(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::FluidProgram::getFluidDensity() const function, expected prototype:\nfloat osgParticle::FluidProgram::getFluidDensity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::FluidProgram::getFluidDensity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFluidDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::FluidProgram::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::FluidProgram::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setWind(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::FluidProgram::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::FluidProgram::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::FluidProgram::getWind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::FluidProgram::getWind() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v)
	static int _bind_setAcceleration(lua_State *L) {
		if (!_lg_typecheck_setAcceleration(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::FluidProgram::setAcceleration(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::FluidProgram::setAcceleration function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setAcceleration(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAcceleration(v);

		return 0;
	}

	// const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const
	static int _bind_getAcceleration(lua_State *L) {
		if (!_lg_typecheck_getAcceleration(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const function, expected prototype:\nconst osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::FluidProgram::getAcceleration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAcceleration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::FluidProgram::setToGravity(float scale = 1.0f)
	static int _bind_setToGravity(lua_State *L) {
		if (!_lg_typecheck_setToGravity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setToGravity(float scale = 1.0f) function, expected prototype:\nvoid osgParticle::FluidProgram::setToGravity(float scale = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float scale=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setToGravity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setToGravity(scale);

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidToAir()
	static int _bind_setFluidToAir(lua_State *L) {
		if (!_lg_typecheck_setFluidToAir(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidToAir() function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidToAir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidToAir(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFluidToAir();

		return 0;
	}

	// void osgParticle::FluidProgram::setFluidToWater()
	static int _bind_setFluidToWater(lua_State *L) {
		if (!_lg_typecheck_setFluidToWater(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::setFluidToWater() function, expected prototype:\nvoid osgParticle::FluidProgram::setFluidToWater()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::setFluidToWater(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFluidToWater();

		return 0;
	}

	// void osgParticle::FluidProgram::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::FluidProgram::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::setName(name);

		return 0;
	}

	// void osgParticle::FluidProgram::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::FluidProgram::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::computeDataVariance();

		return 0;
	}

	// void osgParticle::FluidProgram::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::FluidProgram::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::FluidProgram::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::FluidProgram::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::FluidProgram::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::FluidProgram::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->FluidProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::FluidProgram::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::FluidProgram::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::FluidProgram::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::FluidProgram::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->FluidProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osgParticle::FluidProgram::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::FluidProgram::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::FluidProgram::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::FluidProgram::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->FluidProgram::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::FluidProgram::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::FluidProgram::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::FluidProgram::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::FluidProgram::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->FluidProgram::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::FluidProgram::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::FluidProgram::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::FluidProgram::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::FluidProgram::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->FluidProgram::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::FluidProgram::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::FluidProgram::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::FluidProgram::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::FluidProgram::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->FluidProgram::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::FluidProgram::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::FluidProgram::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::FluidProgram::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::FluidProgram::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->FluidProgram::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::FluidProgram::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::FluidProgram::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::FluidProgram::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::FluidProgram::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->FluidProgram::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::FluidProgram::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::FluidProgram::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::FluidProgram::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::FluidProgram::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->FluidProgram::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::FluidProgram::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::FluidProgram::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::FluidProgram::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::FluidProgram::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->FluidProgram::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::FluidProgram::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::FluidProgram::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::FluidProgram::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::FluidProgram::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->FluidProgram::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::FluidProgram::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::FluidProgram::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::FluidProgram::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::FluidProgram::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->FluidProgram::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::FluidProgram::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::FluidProgram::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FluidProgram::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FluidProgram::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::ascend(nv);

		return 0;
	}

	// void osgParticle::FluidProgram::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::FluidProgram::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::FluidProgram::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::FluidProgram::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::FluidProgram::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::FluidProgram::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::FluidProgram::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::FluidProgram::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::FluidProgram::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::FluidProgram::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::FluidProgram::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->FluidProgram::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osgParticle::FluidProgram::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FluidProgram::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::FluidProgram::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::FluidProgram::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::FluidProgram::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::FluidProgram::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::FluidProgram::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FluidProgram::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::FluidProgram::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::FluidProgram::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::FluidProgram::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::FluidProgram::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FluidProgram::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::FluidProgram::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::base_className() const function, expected prototype:\nconst char * osgParticle::FluidProgram::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FluidProgram::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::FluidProgram::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::FluidProgram::base_libraryName() const function, expected prototype:\nconst char * osgParticle::FluidProgram::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::FluidProgram::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FluidProgram::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::FluidProgram::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::FluidProgram::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::FluidProgram::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::FluidProgram::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::FluidProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::FluidProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::FluidProgram::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FluidProgram::accept(nv);

		return 0;
	}


	// Operator binds:

};

osgParticle::FluidProgram* LunaTraits< osgParticle::FluidProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_FluidProgram::_bind_ctor(L);
}

void LunaTraits< osgParticle::FluidProgram >::_bind_dtor(osgParticle::FluidProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::FluidProgram >::className[] = "FluidProgram";
const char LunaTraits< osgParticle::FluidProgram >::fullName[] = "osgParticle::FluidProgram";
const char LunaTraits< osgParticle::FluidProgram >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::FluidProgram >::parents[] = {"osgParticle.Program", 0};
const int LunaTraits< osgParticle::FluidProgram >::hash = 33104881;
const int LunaTraits< osgParticle::FluidProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::FluidProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_FluidProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_FluidProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_FluidProgram::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_FluidProgram::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_FluidProgram::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_FluidProgram::_bind_accept},
	{"setFluidViscosity", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidViscosity},
	{"getFluidViscosity", &luna_wrapper_osgParticle_FluidProgram::_bind_getFluidViscosity},
	{"setFluidDensity", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidDensity},
	{"getFluidDensity", &luna_wrapper_osgParticle_FluidProgram::_bind_getFluidDensity},
	{"setWind", &luna_wrapper_osgParticle_FluidProgram::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_FluidProgram::_bind_getWind},
	{"setAcceleration", &luna_wrapper_osgParticle_FluidProgram::_bind_setAcceleration},
	{"getAcceleration", &luna_wrapper_osgParticle_FluidProgram::_bind_getAcceleration},
	{"setToGravity", &luna_wrapper_osgParticle_FluidProgram::_bind_setToGravity},
	{"setFluidToAir", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidToAir},
	{"setFluidToWater", &luna_wrapper_osgParticle_FluidProgram::_bind_setFluidToWater},
	{"base_setName", &luna_wrapper_osgParticle_FluidProgram::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_FluidProgram::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_FluidProgram::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_FluidProgram::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osgParticle_FluidProgram::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_FluidProgram::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_FluidProgram::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_FluidProgram::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_FluidProgram::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_FluidProgram::_bind_base_ascend},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_FluidProgram::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_FluidProgram::_bind_base_releaseGLObjects},
	{"base_traverse", &luna_wrapper_osgParticle_FluidProgram::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_FluidProgram::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osgParticle_FluidProgram::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_FluidProgram::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_FluidProgram::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_FluidProgram::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_FluidProgram::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_FluidProgram::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osgParticle_FluidProgram::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_FluidProgram::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_FluidProgram::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::FluidProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_FluidProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::FluidProgram >::enumValues[] = {
	{0,0}
};


