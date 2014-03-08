#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_DomainOperator.h>

class luna_wrapper_osgParticle_DomainOperator {
public:
	typedef Luna< osgParticle::DomainOperator > luna_t;

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

		osgParticle::DomainOperator* self= (osgParticle::DomainOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::DomainOperator >::push(L,self,false);
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
		//osgParticle::DomainOperator* ptr= dynamic_cast< osgParticle::DomainOperator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::DomainOperator* ptr= luna_caster< osg::Referenced, osgParticle::DomainOperator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::DomainOperator >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_addPointDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addLineSegmentDomain(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTriangleDomain(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addRectangleDomain(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPlaneDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addSphereDomain(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBoxDomain(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDiskDomain(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60781756) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAllDomains(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumDomains(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_operateParticles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
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
	// osgParticle::DomainOperator::DomainOperator()
	static osgParticle::DomainOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::DomainOperator() function, expected prototype:\nosgParticle::DomainOperator::DomainOperator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::DomainOperator();
	}

	// osgParticle::DomainOperator::DomainOperator(const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DomainOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::DomainOperator(const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DomainOperator::DomainOperator(const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::DomainOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DomainOperator::DomainOperator function");
		}
		const osgParticle::DomainOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DomainOperator::DomainOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::DomainOperator(copy, copyop);
	}

	// osgParticle::DomainOperator::DomainOperator(lua_Table * data)
	static osgParticle::DomainOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::DomainOperator(lua_Table * data) function, expected prototype:\nosgParticle::DomainOperator::DomainOperator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_DomainOperator(L,NULL);
	}

	// osgParticle::DomainOperator::DomainOperator(lua_Table * data, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DomainOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::DomainOperator(lua_Table * data, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DomainOperator::DomainOperator(lua_Table * data, const osgParticle::DomainOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::DomainOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DomainOperator::DomainOperator function");
		}
		const osgParticle::DomainOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DomainOperator::DomainOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_DomainOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::DomainOperator::DomainOperator
	static osgParticle::DomainOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DomainOperator, cannot match any of the overloads for function DomainOperator:\n  DomainOperator()\n  DomainOperator(const osgParticle::DomainOperator &, const osg::CopyOp &)\n  DomainOperator(lua_Table *)\n  DomainOperator(lua_Table *, const osgParticle::DomainOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::DomainOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DomainOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::DomainOperator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DomainOperator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DomainOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DomainOperator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::DomainOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::DomainOperator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::DomainOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DomainOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::DomainOperator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DomainOperator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::DomainOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DomainOperator::className() const function, expected prototype:\nconst char * osgParticle::DomainOperator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DomainOperator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::DomainOperator::addPointDomain(const osg::Vec3f & p)
	static int _bind_addPointDomain(lua_State *L) {
		if (!_lg_typecheck_addPointDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addPointDomain(const osg::Vec3f & p) function, expected prototype:\nvoid osgParticle::DomainOperator::addPointDomain(const osg::Vec3f & p)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* p_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::DomainOperator::addPointDomain function");
		}
		const osg::Vec3f & p=*p_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addPointDomain(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPointDomain(p);

		return 0;
	}

	// void osgParticle::DomainOperator::addLineSegmentDomain(const osg::Vec3f & v1, const osg::Vec3f & v2)
	static int _bind_addLineSegmentDomain(lua_State *L) {
		if (!_lg_typecheck_addLineSegmentDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addLineSegmentDomain(const osg::Vec3f & v1, const osg::Vec3f & v2) function, expected prototype:\nvoid osgParticle::DomainOperator::addLineSegmentDomain(const osg::Vec3f & v1, const osg::Vec3f & v2)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osgParticle::DomainOperator::addLineSegmentDomain function");
		}
		const osg::Vec3f & v1=*v1_ptr;
		const osg::Vec3f* v2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osgParticle::DomainOperator::addLineSegmentDomain function");
		}
		const osg::Vec3f & v2=*v2_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addLineSegmentDomain(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addLineSegmentDomain(v1, v2);

		return 0;
	}

	// void osgParticle::DomainOperator::addTriangleDomain(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3)
	static int _bind_addTriangleDomain(lua_State *L) {
		if (!_lg_typecheck_addTriangleDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addTriangleDomain(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3) function, expected prototype:\nvoid osgParticle::DomainOperator::addTriangleDomain(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osgParticle::DomainOperator::addTriangleDomain function");
		}
		const osg::Vec3f & v1=*v1_ptr;
		const osg::Vec3f* v2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osgParticle::DomainOperator::addTriangleDomain function");
		}
		const osg::Vec3f & v2=*v2_ptr;
		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osgParticle::DomainOperator::addTriangleDomain function");
		}
		const osg::Vec3f & v3=*v3_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addTriangleDomain(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTriangleDomain(v1, v2, v3);

		return 0;
	}

	// void osgParticle::DomainOperator::addRectangleDomain(const osg::Vec3f & corner, const osg::Vec3f & w, const osg::Vec3f & h)
	static int _bind_addRectangleDomain(lua_State *L) {
		if (!_lg_typecheck_addRectangleDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addRectangleDomain(const osg::Vec3f & corner, const osg::Vec3f & w, const osg::Vec3f & h) function, expected prototype:\nvoid osgParticle::DomainOperator::addRectangleDomain(const osg::Vec3f & corner, const osg::Vec3f & w, const osg::Vec3f & h)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* corner_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !corner_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg corner in osgParticle::DomainOperator::addRectangleDomain function");
		}
		const osg::Vec3f & corner=*corner_ptr;
		const osg::Vec3f* w_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !w_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg w in osgParticle::DomainOperator::addRectangleDomain function");
		}
		const osg::Vec3f & w=*w_ptr;
		const osg::Vec3f* h_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !h_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg h in osgParticle::DomainOperator::addRectangleDomain function");
		}
		const osg::Vec3f & h=*h_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addRectangleDomain(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addRectangleDomain(corner, w, h);

		return 0;
	}

	// void osgParticle::DomainOperator::addPlaneDomain(const osg::Plane & plane)
	static int _bind_addPlaneDomain(lua_State *L) {
		if (!_lg_typecheck_addPlaneDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addPlaneDomain(const osg::Plane & plane) function, expected prototype:\nvoid osgParticle::DomainOperator::addPlaneDomain(const osg::Plane & plane)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgParticle::DomainOperator::addPlaneDomain function");
		}
		const osg::Plane & plane=*plane_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addPlaneDomain(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPlaneDomain(plane);

		return 0;
	}

	// void osgParticle::DomainOperator::addSphereDomain(const osg::Vec3f & c, float r)
	static int _bind_addSphereDomain(lua_State *L) {
		if (!_lg_typecheck_addSphereDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addSphereDomain(const osg::Vec3f & c, float r) function, expected prototype:\nvoid osgParticle::DomainOperator::addSphereDomain(const osg::Vec3f & c, float r)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* c_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in osgParticle::DomainOperator::addSphereDomain function");
		}
		const osg::Vec3f & c=*c_ptr;
		float r=(float)lua_tonumber(L,3);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addSphereDomain(const osg::Vec3f &, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addSphereDomain(c, r);

		return 0;
	}

	// void osgParticle::DomainOperator::addBoxDomain(const osg::Vec3f & min, const osg::Vec3f & max)
	static int _bind_addBoxDomain(lua_State *L) {
		if (!_lg_typecheck_addBoxDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addBoxDomain(const osg::Vec3f & min, const osg::Vec3f & max) function, expected prototype:\nvoid osgParticle::DomainOperator::addBoxDomain(const osg::Vec3f & min, const osg::Vec3f & max)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* min_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !min_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg min in osgParticle::DomainOperator::addBoxDomain function");
		}
		const osg::Vec3f & min=*min_ptr;
		const osg::Vec3f* max_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !max_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg max in osgParticle::DomainOperator::addBoxDomain function");
		}
		const osg::Vec3f & max=*max_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addBoxDomain(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBoxDomain(min, max);

		return 0;
	}

	// void osgParticle::DomainOperator::addDiskDomain(const osg::Vec3f & c, const osg::Vec3f & n, float r1, float r2 = 0.0f)
	static int _bind_addDiskDomain(lua_State *L) {
		if (!_lg_typecheck_addDiskDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addDiskDomain(const osg::Vec3f & c, const osg::Vec3f & n, float r1, float r2 = 0.0f) function, expected prototype:\nvoid osgParticle::DomainOperator::addDiskDomain(const osg::Vec3f & c, const osg::Vec3f & n, float r1, float r2 = 0.0f)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* c_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in osgParticle::DomainOperator::addDiskDomain function");
		}
		const osg::Vec3f & c=*c_ptr;
		const osg::Vec3f* n_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in osgParticle::DomainOperator::addDiskDomain function");
		}
		const osg::Vec3f & n=*n_ptr;
		float r1=(float)lua_tonumber(L,4);
		float r2=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addDiskDomain(const osg::Vec3f &, const osg::Vec3f &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDiskDomain(c, n, r1, r2);

		return 0;
	}

	// void osgParticle::DomainOperator::addDomain(const osgParticle::DomainOperator::Domain & domain)
	static int _bind_addDomain(lua_State *L) {
		if (!_lg_typecheck_addDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::addDomain(const osgParticle::DomainOperator::Domain & domain) function, expected prototype:\nvoid osgParticle::DomainOperator::addDomain(const osgParticle::DomainOperator::Domain & domain)\nClass arguments details:\narg 1 ID = 60781756\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::DomainOperator::Domain* domain_ptr=(Luna< osgParticle::DomainOperator::Domain >::check(L,2));
		if( !domain_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg domain in osgParticle::DomainOperator::addDomain function");
		}
		const osgParticle::DomainOperator::Domain & domain=*domain_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::addDomain(const osgParticle::DomainOperator::Domain &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDomain(domain);

		return 0;
	}

	// const osgParticle::DomainOperator::Domain & osgParticle::DomainOperator::getDomain(unsigned int i) const
	static int _bind_getDomain(lua_State *L) {
		if (!_lg_typecheck_getDomain(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::DomainOperator::Domain & osgParticle::DomainOperator::getDomain(unsigned int i) const function, expected prototype:\nconst osgParticle::DomainOperator::Domain & osgParticle::DomainOperator::getDomain(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::DomainOperator::Domain & osgParticle::DomainOperator::getDomain(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::DomainOperator::Domain* lret = &self->getDomain(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::DomainOperator::Domain >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::DomainOperator::removeDomain(unsigned int i)
	static int _bind_removeDomain(lua_State *L) {
		if (!_lg_typecheck_removeDomain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::removeDomain(unsigned int i) function, expected prototype:\nvoid osgParticle::DomainOperator::removeDomain(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::removeDomain(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeDomain(i);

		return 0;
	}

	// void osgParticle::DomainOperator::removeAllDomains()
	static int _bind_removeAllDomains(lua_State *L) {
		if (!_lg_typecheck_removeAllDomains(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::removeAllDomains() function, expected prototype:\nvoid osgParticle::DomainOperator::removeAllDomains()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::removeAllDomains(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAllDomains();

		return 0;
	}

	// unsigned int osgParticle::DomainOperator::getNumDomains() const
	static int _bind_getNumDomains(lua_State *L) {
		if (!_lg_typecheck_getNumDomains(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::DomainOperator::getNumDomains() const function, expected prototype:\nunsigned int osgParticle::DomainOperator::getNumDomains() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::DomainOperator::getNumDomains() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumDomains();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::DomainOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginOperate(prg);

		return 0;
	}

	// void osgParticle::DomainOperator::endOperate()
	static int _bind_endOperate(lua_State *L) {
		if (!_lg_typecheck_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::endOperate() function, expected prototype:\nvoid osgParticle::DomainOperator::endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endOperate();

		return 0;
	}

	// void osgParticle::DomainOperator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::DomainOperator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::DomainOperator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::DomainOperator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::setName(name);

		return 0;
	}

	// void osgParticle::DomainOperator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::DomainOperator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::computeDataVariance();

		return 0;
	}

	// void osgParticle::DomainOperator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::DomainOperator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::DomainOperator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::DomainOperator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::DomainOperator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::DomainOperator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DomainOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::DomainOperator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::DomainOperator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::DomainOperator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::DomainOperator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DomainOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::DomainOperator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::DomainOperator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::DomainOperator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::DomainOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::DomainOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::operateParticles(ps, dt);

		return 0;
	}

	// osg::Object * osgParticle::DomainOperator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DomainOperator::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::DomainOperator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DomainOperator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DomainOperator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::DomainOperator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DomainOperator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::DomainOperator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DomainOperator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DomainOperator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DomainOperator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::DomainOperator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::DomainOperator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::DomainOperator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::DomainOperator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DomainOperator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::DomainOperator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DomainOperator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::DomainOperator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DomainOperator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DomainOperator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::DomainOperator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DomainOperator::base_className() const function, expected prototype:\nconst char * osgParticle::DomainOperator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DomainOperator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DomainOperator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::DomainOperator::base_operate(osgParticle::Particle * P, double dt)
	static int _bind_base_operate(lua_State *L) {
		if (!_lg_typecheck_base_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::DomainOperator::base_operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::operate(P, dt);

		return 0;
	}

	// void osgParticle::DomainOperator::base_beginOperate(osgParticle::Program * prg)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::DomainOperator::base_beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::beginOperate(prg);

		return 0;
	}

	// void osgParticle::DomainOperator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::base_endOperate() function, expected prototype:\nvoid osgParticle::DomainOperator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DomainOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DomainOperator::endOperate();

		return 0;
	}


	// Operator binds:

};

osgParticle::DomainOperator* LunaTraits< osgParticle::DomainOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_DomainOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::DomainOperator >::_bind_dtor(osgParticle::DomainOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::DomainOperator >::className[] = "DomainOperator";
const char LunaTraits< osgParticle::DomainOperator >::fullName[] = "osgParticle::DomainOperator";
const char LunaTraits< osgParticle::DomainOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::DomainOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::DomainOperator >::hash = 90026181;
const int LunaTraits< osgParticle::DomainOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::DomainOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_DomainOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_DomainOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_DomainOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_DomainOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_DomainOperator::_bind_className},
	{"addPointDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addPointDomain},
	{"addLineSegmentDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addLineSegmentDomain},
	{"addTriangleDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addTriangleDomain},
	{"addRectangleDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addRectangleDomain},
	{"addPlaneDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addPlaneDomain},
	{"addSphereDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addSphereDomain},
	{"addBoxDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addBoxDomain},
	{"addDiskDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addDiskDomain},
	{"addDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_addDomain},
	{"getDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_getDomain},
	{"removeDomain", &luna_wrapper_osgParticle_DomainOperator::_bind_removeDomain},
	{"removeAllDomains", &luna_wrapper_osgParticle_DomainOperator::_bind_removeAllDomains},
	{"getNumDomains", &luna_wrapper_osgParticle_DomainOperator::_bind_getNumDomains},
	{"operate", &luna_wrapper_osgParticle_DomainOperator::_bind_operate},
	{"beginOperate", &luna_wrapper_osgParticle_DomainOperator::_bind_beginOperate},
	{"endOperate", &luna_wrapper_osgParticle_DomainOperator::_bind_endOperate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_DomainOperator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_DomainOperator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_DomainOperator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_DomainOperator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_DomainOperator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_DomainOperator::_bind_base_releaseGLObjects},
	{"base_operateParticles", &luna_wrapper_osgParticle_DomainOperator::_bind_base_operateParticles},
	{"base_cloneType", &luna_wrapper_osgParticle_DomainOperator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_DomainOperator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_DomainOperator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_DomainOperator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_DomainOperator::_bind_base_className},
	{"base_operate", &luna_wrapper_osgParticle_DomainOperator::_bind_base_operate},
	{"base_beginOperate", &luna_wrapper_osgParticle_DomainOperator::_bind_base_beginOperate},
	{"base_endOperate", &luna_wrapper_osgParticle_DomainOperator::_bind_base_endOperate},
	{"fromVoid", &luna_wrapper_osgParticle_DomainOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_DomainOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_DomainOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::DomainOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_DomainOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::DomainOperator >::enumValues[] = {
	{0,0}
};


