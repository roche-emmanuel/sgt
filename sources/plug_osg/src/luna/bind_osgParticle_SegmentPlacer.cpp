#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SegmentPlacer.h>

class luna_wrapper_osgParticle_SegmentPlacer {
public:
	typedef Luna< osgParticle::SegmentPlacer > luna_t;

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

		osgParticle::SegmentPlacer* self= (osgParticle::SegmentPlacer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::SegmentPlacer >::push(L,self,false);
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
		//osgParticle::SegmentPlacer* ptr= dynamic_cast< osgParticle::SegmentPlacer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::SegmentPlacer* ptr= luna_caster< osg::Referenced, osgParticle::SegmentPlacer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SegmentPlacer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getVertexA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSegment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
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

	inline static bool _lg_typecheck_base_place(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_volume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getControlPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::SegmentPlacer::SegmentPlacer()
	static osgParticle::SegmentPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SegmentPlacer::SegmentPlacer() function, expected prototype:\nosgParticle::SegmentPlacer::SegmentPlacer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::SegmentPlacer();
	}

	// osgParticle::SegmentPlacer::SegmentPlacer(const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SegmentPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SegmentPlacer::SegmentPlacer(const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SegmentPlacer::SegmentPlacer(const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SegmentPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SegmentPlacer::SegmentPlacer function");
		}
		const osgParticle::SegmentPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SegmentPlacer::SegmentPlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SegmentPlacer(copy, copyop);
	}

	// osgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data)
	static osgParticle::SegmentPlacer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data) function, expected prototype:\nosgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_SegmentPlacer(L,NULL);
	}

	// osgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data, const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SegmentPlacer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data, const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SegmentPlacer::SegmentPlacer(lua_Table * data, const osgParticle::SegmentPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SegmentPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SegmentPlacer::SegmentPlacer function");
		}
		const osgParticle::SegmentPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SegmentPlacer::SegmentPlacer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SegmentPlacer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SegmentPlacer::SegmentPlacer
	static osgParticle::SegmentPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function SegmentPlacer, cannot match any of the overloads for function SegmentPlacer:\n  SegmentPlacer()\n  SegmentPlacer(const osgParticle::SegmentPlacer &, const osg::CopyOp &)\n  SegmentPlacer(lua_Table *)\n  SegmentPlacer(lua_Table *, const osgParticle::SegmentPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SegmentPlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SegmentPlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SegmentPlacer::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SegmentPlacer::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SegmentPlacer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SegmentPlacer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SegmentPlacer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SegmentPlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SegmentPlacer::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SegmentPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SegmentPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SegmentPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SegmentPlacer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SegmentPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SegmentPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::SegmentPlacer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SegmentPlacer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SegmentPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SegmentPlacer::className() const function, expected prototype:\nconst char * osgParticle::SegmentPlacer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SegmentPlacer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::SegmentPlacer::getVertexA() const
	static int _bind_getVertexA(lua_State *L) {
		if (!_lg_typecheck_getVertexA(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::SegmentPlacer::getVertexA() const function, expected prototype:\nconst osg::Vec3f & osgParticle::SegmentPlacer::getVertexA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::SegmentPlacer::getVertexA() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getVertexA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::SegmentPlacer::setVertexA(const osg::Vec3f & v)
	static int _bind_setVertexA_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexA_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::setVertexA(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::SegmentPlacer::setVertexA(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::SegmentPlacer::setVertexA function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::setVertexA(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexA(v);

		return 0;
	}

	// void osgParticle::SegmentPlacer::setVertexA(float x, float y, float z)
	static int _bind_setVertexA_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexA_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::setVertexA(float x, float y, float z) function, expected prototype:\nvoid osgParticle::SegmentPlacer::setVertexA(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::setVertexA(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexA(x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::SegmentPlacer::setVertexA
	static int _bind_setVertexA(lua_State *L) {
		if (_lg_typecheck_setVertexA_overload_1(L)) return _bind_setVertexA_overload_1(L);
		if (_lg_typecheck_setVertexA_overload_2(L)) return _bind_setVertexA_overload_2(L);

		luaL_error(L, "error in function setVertexA, cannot match any of the overloads for function setVertexA:\n  setVertexA(const osg::Vec3f &)\n  setVertexA(float, float, float)\n");
		return 0;
	}

	// const osg::Vec3f & osgParticle::SegmentPlacer::getVertexB() const
	static int _bind_getVertexB(lua_State *L) {
		if (!_lg_typecheck_getVertexB(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::SegmentPlacer::getVertexB() const function, expected prototype:\nconst osg::Vec3f & osgParticle::SegmentPlacer::getVertexB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::SegmentPlacer::getVertexB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getVertexB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::SegmentPlacer::setVertexB(const osg::Vec3f & v)
	static int _bind_setVertexB_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexB_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::setVertexB(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::SegmentPlacer::setVertexB(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::SegmentPlacer::setVertexB function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::setVertexB(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexB(v);

		return 0;
	}

	// void osgParticle::SegmentPlacer::setVertexB(float x, float y, float z)
	static int _bind_setVertexB_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexB_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::setVertexB(float x, float y, float z) function, expected prototype:\nvoid osgParticle::SegmentPlacer::setVertexB(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::setVertexB(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexB(x, y, z);

		return 0;
	}

	// Overload binder for osgParticle::SegmentPlacer::setVertexB
	static int _bind_setVertexB(lua_State *L) {
		if (_lg_typecheck_setVertexB_overload_1(L)) return _bind_setVertexB_overload_1(L);
		if (_lg_typecheck_setVertexB_overload_2(L)) return _bind_setVertexB_overload_2(L);

		luaL_error(L, "error in function setVertexB, cannot match any of the overloads for function setVertexB:\n  setVertexB(const osg::Vec3f &)\n  setVertexB(float, float, float)\n");
		return 0;
	}

	// void osgParticle::SegmentPlacer::setSegment(const osg::Vec3f & A, const osg::Vec3f & B)
	static int _bind_setSegment(lua_State *L) {
		if (!_lg_typecheck_setSegment(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::setSegment(const osg::Vec3f & A, const osg::Vec3f & B) function, expected prototype:\nvoid osgParticle::SegmentPlacer::setSegment(const osg::Vec3f & A, const osg::Vec3f & B)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* A_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !A_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg A in osgParticle::SegmentPlacer::setSegment function");
		}
		const osg::Vec3f & A=*A_ptr;
		const osg::Vec3f* B_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !B_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg B in osgParticle::SegmentPlacer::setSegment function");
		}
		const osg::Vec3f & B=*B_ptr;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::setSegment(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSegment(A, B);

		return 0;
	}

	// void osgParticle::SegmentPlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::SegmentPlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::SegmentPlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::SegmentPlacer::volume() const function, expected prototype:\nfloat osgParticle::SegmentPlacer::volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::SegmentPlacer::volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::SegmentPlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::SegmentPlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::SegmentPlacer::getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::SegmentPlacer::getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::SegmentPlacer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::SegmentPlacer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::setName(name);

		return 0;
	}

	// void osgParticle::SegmentPlacer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::computeDataVariance();

		return 0;
	}

	// void osgParticle::SegmentPlacer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::SegmentPlacer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::SegmentPlacer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::SegmentPlacer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::SegmentPlacer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SegmentPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::SegmentPlacer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::SegmentPlacer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::SegmentPlacer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::SegmentPlacer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SegmentPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SegmentPlacer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::SegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::SegmentPlacer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SegmentPlacer::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::SegmentPlacer::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SegmentPlacer::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SegmentPlacer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SegmentPlacer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SegmentPlacer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SegmentPlacer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SegmentPlacer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SegmentPlacer::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SegmentPlacer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SegmentPlacer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SegmentPlacer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SegmentPlacer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SegmentPlacer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SegmentPlacer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SegmentPlacer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SegmentPlacer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::SegmentPlacer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SegmentPlacer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SegmentPlacer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SegmentPlacer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SegmentPlacer::base_className() const function, expected prototype:\nconst char * osgParticle::SegmentPlacer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SegmentPlacer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SegmentPlacer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SegmentPlacer::base_place(osgParticle::Particle * P) const
	static int _bind_base_place(lua_State *L) {
		if (!_lg_typecheck_base_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SegmentPlacer::base_place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::SegmentPlacer::base_place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SegmentPlacer::base_place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SegmentPlacer::place(P);

		return 0;
	}

	// float osgParticle::SegmentPlacer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::SegmentPlacer::base_volume() const function, expected prototype:\nfloat osgParticle::SegmentPlacer::base_volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::SegmentPlacer::base_volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SegmentPlacer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::SegmentPlacer::base_getControlPosition() const
	static int _bind_base_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_base_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::SegmentPlacer::base_getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::SegmentPlacer::base_getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SegmentPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SegmentPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::SegmentPlacer::base_getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->SegmentPlacer::getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::SegmentPlacer* LunaTraits< osgParticle::SegmentPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SegmentPlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::SegmentPlacer >::_bind_dtor(osgParticle::SegmentPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SegmentPlacer >::className[] = "SegmentPlacer";
const char LunaTraits< osgParticle::SegmentPlacer >::fullName[] = "osgParticle::SegmentPlacer";
const char LunaTraits< osgParticle::SegmentPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SegmentPlacer >::parents[] = {"osgParticle.Placer", 0};
const int LunaTraits< osgParticle::SegmentPlacer >::hash = 91352702;
const int LunaTraits< osgParticle::SegmentPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SegmentPlacer >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SegmentPlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SegmentPlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SegmentPlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_SegmentPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_SegmentPlacer::_bind_className},
	{"getVertexA", &luna_wrapper_osgParticle_SegmentPlacer::_bind_getVertexA},
	{"setVertexA", &luna_wrapper_osgParticle_SegmentPlacer::_bind_setVertexA},
	{"getVertexB", &luna_wrapper_osgParticle_SegmentPlacer::_bind_getVertexB},
	{"setVertexB", &luna_wrapper_osgParticle_SegmentPlacer::_bind_setVertexB},
	{"setSegment", &luna_wrapper_osgParticle_SegmentPlacer::_bind_setSegment},
	{"place", &luna_wrapper_osgParticle_SegmentPlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_SegmentPlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_SegmentPlacer::_bind_getControlPosition},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_className},
	{"base_place", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_place},
	{"base_volume", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_volume},
	{"base_getControlPosition", &luna_wrapper_osgParticle_SegmentPlacer::_bind_base_getControlPosition},
	{"fromVoid", &luna_wrapper_osgParticle_SegmentPlacer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_SegmentPlacer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_SegmentPlacer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SegmentPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SegmentPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SegmentPlacer >::enumValues[] = {
	{0,0}
};


