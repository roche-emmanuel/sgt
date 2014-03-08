#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_DampingOperator.h>

class luna_wrapper_osgParticle_DampingOperator {
public:
	typedef Luna< osgParticle::DampingOperator > luna_t;

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

		osgParticle::DampingOperator* self= (osgParticle::DampingOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::DampingOperator >::push(L,self,false);
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
		//osgParticle::DampingOperator* ptr= dynamic_cast< osgParticle::DampingOperator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::DampingOperator* ptr= luna_caster< osg::Referenced, osgParticle::DampingOperator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::DampingOperator >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDamping_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoff(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCutoffLow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCutoffHigh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::DampingOperator::DampingOperator()
	static osgParticle::DampingOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator() function, expected prototype:\nosgParticle::DampingOperator::DampingOperator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::DampingOperator();
	}

	// osgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DampingOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::DampingOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DampingOperator::DampingOperator function");
		}
		const osgParticle::DampingOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DampingOperator::DampingOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::DampingOperator(copy, copyop);
	}

	// osgParticle::DampingOperator::DampingOperator(lua_Table * data)
	static osgParticle::DampingOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(lua_Table * data) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_DampingOperator(L,NULL);
	}

	// osgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::DampingOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::DampingOperator::DampingOperator(lua_Table * data, const osgParticle::DampingOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::DampingOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::DampingOperator::DampingOperator function");
		}
		const osgParticle::DampingOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::DampingOperator::DampingOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_DampingOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::DampingOperator::DampingOperator
	static osgParticle::DampingOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DampingOperator, cannot match any of the overloads for function DampingOperator:\n  DampingOperator()\n  DampingOperator(const osgParticle::DampingOperator &, const osg::CopyOp &)\n  DampingOperator(lua_Table *)\n  DampingOperator(lua_Table *, const osgParticle::DampingOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::DampingOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DampingOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::DampingOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::DampingOperator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::DampingOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::DampingOperator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::DampingOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::className() const function, expected prototype:\nconst char * osgParticle::DampingOperator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::DampingOperator::setDamping(float x, float y, float z)
	static int _bind_setDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(float x, float y, float z) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDamping(x, y, z);

		return 0;
	}

	// void osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping)
	static int _bind_setDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(const osg::Vec3f & damping)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* damping_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !damping_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg damping in osgParticle::DampingOperator::setDamping function");
		}
		const osg::Vec3f & damping=*damping_ptr;

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDamping(damping);

		return 0;
	}

	// void osgParticle::DampingOperator::setDamping(float x)
	static int _bind_setDamping_overload_3(lua_State *L) {
		if (!_lg_typecheck_setDamping_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setDamping(float x) function, expected prototype:\nvoid osgParticle::DampingOperator::setDamping(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setDamping(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDamping(x);

		return 0;
	}

	// Overload binder for osgParticle::DampingOperator::setDamping
	static int _bind_setDamping(lua_State *L) {
		if (_lg_typecheck_setDamping_overload_1(L)) return _bind_setDamping_overload_1(L);
		if (_lg_typecheck_setDamping_overload_2(L)) return _bind_setDamping_overload_2(L);
		if (_lg_typecheck_setDamping_overload_3(L)) return _bind_setDamping_overload_3(L);

		luaL_error(L, "error in function setDamping, cannot match any of the overloads for function setDamping:\n  setDamping(float, float, float)\n  setDamping(const osg::Vec3f &)\n  setDamping(float)\n");
		return 0;
	}

	// void osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const
	static int _bind_getDamping_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const function, expected prototype:\nvoid osgParticle::DampingOperator::getDamping(float & x, float & y, float & z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::getDamping(float &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getDamping(x, y, z);

		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,z);
		return 3;
	}

	// const osg::Vec3f & osgParticle::DampingOperator::getDamping() const
	static int _bind_getDamping_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDamping_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::DampingOperator::getDamping() const function, expected prototype:\nconst osg::Vec3f & osgParticle::DampingOperator::getDamping() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::DampingOperator::getDamping() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getDamping();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::DampingOperator::getDamping
	static int _bind_getDamping(lua_State *L) {
		if (_lg_typecheck_getDamping_overload_1(L)) return _bind_getDamping_overload_1(L);
		if (_lg_typecheck_getDamping_overload_2(L)) return _bind_getDamping_overload_2(L);

		luaL_error(L, "error in function getDamping, cannot match any of the overloads for function getDamping:\n  getDamping(float &, float &, float &)\n  getDamping()\n");
		return 0;
	}

	// void osgParticle::DampingOperator::setCutoff(float low, float high)
	static int _bind_setCutoff(lua_State *L) {
		if (!_lg_typecheck_setCutoff(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoff(float low, float high) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoff(float low, float high)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoff(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCutoff(low, high);

		return 0;
	}

	// void osgParticle::DampingOperator::setCutoffLow(float low)
	static int _bind_setCutoffLow(lua_State *L) {
		if (!_lg_typecheck_setCutoffLow(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoffLow(float low) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoffLow(float low)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoffLow(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCutoffLow(low);

		return 0;
	}

	// void osgParticle::DampingOperator::setCutoffHigh(float low)
	static int _bind_setCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_setCutoffHigh(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::setCutoffHigh(float low) function, expected prototype:\nvoid osgParticle::DampingOperator::setCutoffHigh(float low)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float low=(float)lua_tonumber(L,2);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::setCutoffHigh(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCutoffHigh(low);

		return 0;
	}

	// void osgParticle::DampingOperator::getCutoff(float & low, float & high) const
	static int _bind_getCutoff(lua_State *L) {
		if (!_lg_typecheck_getCutoff(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::getCutoff(float & low, float & high) const function, expected prototype:\nvoid osgParticle::DampingOperator::getCutoff(float & low, float & high) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::getCutoff(float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getCutoff(low, high);

		lua_pushnumber(L,low);
		lua_pushnumber(L,high);
		return 2;
	}

	// float osgParticle::DampingOperator::getCutoffLow() const
	static int _bind_getCutoffLow(lua_State *L) {
		if (!_lg_typecheck_getCutoffLow(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::DampingOperator::getCutoffLow() const function, expected prototype:\nfloat osgParticle::DampingOperator::getCutoffLow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::DampingOperator::getCutoffLow() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCutoffLow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::DampingOperator::getCutoffHigh() const
	static int _bind_getCutoffHigh(lua_State *L) {
		if (!_lg_typecheck_getCutoffHigh(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::DampingOperator::getCutoffHigh() const function, expected prototype:\nfloat osgParticle::DampingOperator::getCutoffHigh() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::DampingOperator::getCutoffHigh() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCutoffHigh();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt)
	static int _bind_operate(lua_State *L) {
		if (!_lg_typecheck_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::DampingOperator::operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operate(P, dt);

		return 0;
	}

	// void osgParticle::DampingOperator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::DampingOperator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::DampingOperator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::DampingOperator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::setName(name);

		return 0;
	}

	// void osgParticle::DampingOperator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::DampingOperator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::computeDataVariance();

		return 0;
	}

	// void osgParticle::DampingOperator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::DampingOperator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::DampingOperator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::DampingOperator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::DampingOperator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::DampingOperator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DampingOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::DampingOperator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::DampingOperator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::DampingOperator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::DampingOperator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DampingOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::DampingOperator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::DampingOperator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::DampingOperator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::DampingOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::DampingOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::DampingOperator::base_beginOperate(osgParticle::Program * arg1)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_beginOperate(osgParticle::Program * arg1) function, expected prototype:\nvoid osgParticle::DampingOperator::base_beginOperate(osgParticle::Program * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* _arg1=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::beginOperate(_arg1);

		return 0;
	}

	// void osgParticle::DampingOperator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_endOperate() function, expected prototype:\nvoid osgParticle::DampingOperator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::endOperate();

		return 0;
	}

	// osg::Object * osgParticle::DampingOperator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DampingOperator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::DampingOperator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::DampingOperator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::DampingOperator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DampingOperator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::DampingOperator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DampingOperator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::DampingOperator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::DampingOperator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::DampingOperator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::DampingOperator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DampingOperator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::DampingOperator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::DampingOperator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DampingOperator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::DampingOperator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::DampingOperator::base_className() const function, expected prototype:\nconst char * osgParticle::DampingOperator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::DampingOperator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DampingOperator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::DampingOperator::base_operate(osgParticle::Particle * P, double dt)
	static int _bind_base_operate(lua_State *L) {
		if (!_lg_typecheck_base_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DampingOperator::base_operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::DampingOperator::base_operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::DampingOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::DampingOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DampingOperator::base_operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DampingOperator::operate(P, dt);

		return 0;
	}


	// Operator binds:

};

osgParticle::DampingOperator* LunaTraits< osgParticle::DampingOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_DampingOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::DampingOperator >::_bind_dtor(osgParticle::DampingOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::DampingOperator >::className[] = "DampingOperator";
const char LunaTraits< osgParticle::DampingOperator >::fullName[] = "osgParticle::DampingOperator";
const char LunaTraits< osgParticle::DampingOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::DampingOperator >::parents[] = {"osgParticle.Operator", 0};
const int LunaTraits< osgParticle::DampingOperator >::hash = 59156275;
const int LunaTraits< osgParticle::DampingOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::DampingOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_DampingOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_DampingOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_DampingOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_DampingOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_DampingOperator::_bind_className},
	{"setDamping", &luna_wrapper_osgParticle_DampingOperator::_bind_setDamping},
	{"getDamping", &luna_wrapper_osgParticle_DampingOperator::_bind_getDamping},
	{"setCutoff", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoff},
	{"setCutoffLow", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoffLow},
	{"setCutoffHigh", &luna_wrapper_osgParticle_DampingOperator::_bind_setCutoffHigh},
	{"getCutoff", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoff},
	{"getCutoffLow", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoffLow},
	{"getCutoffHigh", &luna_wrapper_osgParticle_DampingOperator::_bind_getCutoffHigh},
	{"operate", &luna_wrapper_osgParticle_DampingOperator::_bind_operate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_DampingOperator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_DampingOperator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_DampingOperator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_DampingOperator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_DampingOperator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_DampingOperator::_bind_base_releaseGLObjects},
	{"base_operateParticles", &luna_wrapper_osgParticle_DampingOperator::_bind_base_operateParticles},
	{"base_beginOperate", &luna_wrapper_osgParticle_DampingOperator::_bind_base_beginOperate},
	{"base_endOperate", &luna_wrapper_osgParticle_DampingOperator::_bind_base_endOperate},
	{"base_cloneType", &luna_wrapper_osgParticle_DampingOperator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_DampingOperator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_DampingOperator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_DampingOperator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_DampingOperator::_bind_base_className},
	{"base_operate", &luna_wrapper_osgParticle_DampingOperator::_bind_base_operate},
	{"fromVoid", &luna_wrapper_osgParticle_DampingOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_DampingOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_DampingOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::DampingOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_DampingOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::DampingOperator >::enumValues[] = {
	{0,0}
};


