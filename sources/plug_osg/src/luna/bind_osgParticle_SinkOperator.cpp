#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SinkOperator.h>

class luna_wrapper_osgParticle_SinkOperator {
public:
	typedef Luna< osgParticle::SinkOperator > luna_t;

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

		osgParticle::SinkOperator* self= (osgParticle::SinkOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::SinkOperator >::push(L,self,false);
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
		//osgParticle::SinkOperator* ptr= dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::SinkOperator* ptr= luna_caster< osg::Referenced, osgParticle::SinkOperator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SinkOperator >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setSinkTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSinkTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSinkStrategy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSinkStrategy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_operate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::SinkOperator::SinkOperator()
	static osgParticle::SinkOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator() function, expected prototype:\nosgParticle::SinkOperator::SinkOperator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::SinkOperator();
	}

	// osgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SinkOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SinkOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SinkOperator::SinkOperator function");
		}
		const osgParticle::SinkOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SinkOperator::SinkOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SinkOperator(copy, copyop);
	}

	// osgParticle::SinkOperator::SinkOperator(lua_Table * data)
	static osgParticle::SinkOperator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator(lua_Table * data) function, expected prototype:\nosgParticle::SinkOperator::SinkOperator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_SinkOperator(L,NULL);
	}

	// osgParticle::SinkOperator::SinkOperator(lua_Table * data, const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SinkOperator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator(lua_Table * data, const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SinkOperator::SinkOperator(lua_Table * data, const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SinkOperator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SinkOperator::SinkOperator function");
		}
		const osgParticle::SinkOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SinkOperator::SinkOperator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SinkOperator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SinkOperator::SinkOperator
	static osgParticle::SinkOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function SinkOperator, cannot match any of the overloads for function SinkOperator:\n  SinkOperator()\n  SinkOperator(const osgParticle::SinkOperator &, const osg::CopyOp &)\n  SinkOperator(lua_Table *)\n  SinkOperator(lua_Table *, const osgParticle::SinkOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SinkOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SinkOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SinkOperator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SinkOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::SinkOperator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SinkOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::className() const function, expected prototype:\nconst char * osgParticle::SinkOperator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so)
	static int _bind_setSinkTarget(lua_State *L) {
		if (!_lg_typecheck_setSinkTarget(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so) function, expected prototype:\nvoid osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::SinkOperator::SinkTarget so=(osgParticle::SinkOperator::SinkTarget)lua_tointeger(L,2);

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSinkTarget(so);

		return 0;
	}

	// osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const
	static int _bind_getSinkTarget(lua_State *L) {
		if (!_lg_typecheck_getSinkTarget(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const function, expected prototype:\nosgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::SinkOperator::SinkTarget lret = self->getSinkTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss)
	static int _bind_setSinkStrategy(lua_State *L) {
		if (!_lg_typecheck_setSinkStrategy(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss) function, expected prototype:\nvoid osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::SinkOperator::SinkStrategy ss=(osgParticle::SinkOperator::SinkStrategy)lua_tointeger(L,2);

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSinkStrategy(ss);

		return 0;
	}

	// osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const
	static int _bind_getSinkStrategy(lua_State *L) {
		if (!_lg_typecheck_getSinkStrategy(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const function, expected prototype:\nosgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::SinkOperator::SinkStrategy lret = self->getSinkStrategy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginOperate(prg);

		return 0;
	}

	// void osgParticle::SinkOperator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::SinkOperator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::SinkOperator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::SinkOperator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::setName(name);

		return 0;
	}

	// void osgParticle::SinkOperator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::SinkOperator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::computeDataVariance();

		return 0;
	}

	// void osgParticle::SinkOperator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::SinkOperator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::SinkOperator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::SinkOperator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::SinkOperator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::SinkOperator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SinkOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::SinkOperator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::SinkOperator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::SinkOperator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::SinkOperator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SinkOperator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SinkOperator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::SinkOperator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::SinkOperator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::SinkOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)
	static int _bind_base_operateParticles(lua_State *L) {
		if (!_lg_typecheck_base_operateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt) function, expected prototype:\nvoid osgParticle::SinkOperator::base_operateParticles(osgParticle::ParticleSystem * ps, double dt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_operateParticles(osgParticle::ParticleSystem *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::operateParticles(ps, dt);

		return 0;
	}

	// void osgParticle::SinkOperator::base_operate(osgParticle::Particle * P, double dt)
	static int _bind_base_operate(lua_State *L) {
		if (!_lg_typecheck_base_operate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_operate(osgParticle::Particle * P, double dt) function, expected prototype:\nvoid osgParticle::SinkOperator::base_operate(osgParticle::Particle * P, double dt)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		double dt=(double)lua_tonumber(L,3);

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_operate(osgParticle::Particle *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::operate(P, dt);

		return 0;
	}

	// void osgParticle::SinkOperator::base_endOperate()
	static int _bind_base_endOperate(lua_State *L) {
		if (!_lg_typecheck_base_endOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_endOperate() function, expected prototype:\nvoid osgParticle::SinkOperator::base_endOperate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_endOperate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::endOperate();

		return 0;
	}

	// osg::Object * osgParticle::SinkOperator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SinkOperator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SinkOperator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SinkOperator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SinkOperator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SinkOperator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SinkOperator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SinkOperator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SinkOperator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SinkOperator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SinkOperator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::SinkOperator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SinkOperator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SinkOperator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::base_className() const function, expected prototype:\nconst char * osgParticle::SinkOperator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SinkOperator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::base_beginOperate(osgParticle::Program * prg)
	static int _bind_base_beginOperate(lua_State *L) {
		if (!_lg_typecheck_base_beginOperate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::base_beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::SinkOperator::base_beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Program* prg=(Luna< osg::Referenced >::checkSubType< osgParticle::Program >(L,2));

		osgParticle::SinkOperator* self=Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::base_beginOperate(osgParticle::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SinkOperator::beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::SinkOperator* LunaTraits< osgParticle::SinkOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SinkOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::SinkOperator >::_bind_dtor(osgParticle::SinkOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SinkOperator >::className[] = "SinkOperator";
const char LunaTraits< osgParticle::SinkOperator >::fullName[] = "osgParticle::SinkOperator";
const char LunaTraits< osgParticle::SinkOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SinkOperator >::parents[] = {"osgParticle.DomainOperator", 0};
const int LunaTraits< osgParticle::SinkOperator >::hash = 50198331;
const int LunaTraits< osgParticle::SinkOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SinkOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SinkOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SinkOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SinkOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_SinkOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_SinkOperator::_bind_className},
	{"setSinkTarget", &luna_wrapper_osgParticle_SinkOperator::_bind_setSinkTarget},
	{"getSinkTarget", &luna_wrapper_osgParticle_SinkOperator::_bind_getSinkTarget},
	{"setSinkStrategy", &luna_wrapper_osgParticle_SinkOperator::_bind_setSinkStrategy},
	{"getSinkStrategy", &luna_wrapper_osgParticle_SinkOperator::_bind_getSinkStrategy},
	{"beginOperate", &luna_wrapper_osgParticle_SinkOperator::_bind_beginOperate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_SinkOperator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_SinkOperator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_SinkOperator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_SinkOperator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_SinkOperator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_SinkOperator::_bind_base_releaseGLObjects},
	{"base_operateParticles", &luna_wrapper_osgParticle_SinkOperator::_bind_base_operateParticles},
	{"base_operate", &luna_wrapper_osgParticle_SinkOperator::_bind_base_operate},
	{"base_endOperate", &luna_wrapper_osgParticle_SinkOperator::_bind_base_endOperate},
	{"base_cloneType", &luna_wrapper_osgParticle_SinkOperator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_SinkOperator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_SinkOperator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_SinkOperator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_SinkOperator::_bind_base_className},
	{"base_beginOperate", &luna_wrapper_osgParticle_SinkOperator::_bind_base_beginOperate},
	{"fromVoid", &luna_wrapper_osgParticle_SinkOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_SinkOperator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_SinkOperator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SinkOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SinkOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SinkOperator >::enumValues[] = {
	{"SINK_POSITION", osgParticle::SinkOperator::SINK_POSITION},
	{"SINK_VELOCITY", osgParticle::SinkOperator::SINK_VELOCITY},
	{"SINK_ANGULAR_VELOCITY", osgParticle::SinkOperator::SINK_ANGULAR_VELOCITY},
	{"SINK_INSIDE", osgParticle::SinkOperator::SINK_INSIDE},
	{"SINK_OUTSIDE", osgParticle::SinkOperator::SINK_OUTSIDE},
	{0,0}
};


