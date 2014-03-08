#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_BoxPlacer.h>

class luna_wrapper_osgParticle_BoxPlacer {
public:
	typedef Luna< osgParticle::BoxPlacer > luna_t;

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

		osgParticle::BoxPlacer* self= (osgParticle::BoxPlacer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::BoxPlacer >::push(L,self,false);
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
		//osgParticle::BoxPlacer* ptr= dynamic_cast< osgParticle::BoxPlacer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::BoxPlacer* ptr= luna_caster< osg::Referenced, osgParticle::BoxPlacer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::BoxPlacer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getXRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getYRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setYRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setZRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

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
	// osgParticle::BoxPlacer::BoxPlacer()
	static osgParticle::BoxPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer() function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::BoxPlacer();
	}

	// osgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::BoxPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer(const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::BoxPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osgParticle::BoxPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::BoxPlacer(copy, copyop);
	}

	// osgParticle::BoxPlacer::BoxPlacer(lua_Table * data)
	static osgParticle::BoxPlacer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer(lua_Table * data) function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_BoxPlacer(L,NULL);
	}

	// osgParticle::BoxPlacer::BoxPlacer(lua_Table * data, const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::BoxPlacer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::BoxPlacer::BoxPlacer(lua_Table * data, const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::BoxPlacer::BoxPlacer(lua_Table * data, const osgParticle::BoxPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::BoxPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osgParticle::BoxPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::BoxPlacer::BoxPlacer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_BoxPlacer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::BoxPlacer::BoxPlacer
	static osgParticle::BoxPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function BoxPlacer, cannot match any of the overloads for function BoxPlacer:\n  BoxPlacer()\n  BoxPlacer(const osgParticle::BoxPlacer &, const osg::CopyOp &)\n  BoxPlacer(lua_Table *)\n  BoxPlacer(lua_Table *, const osgParticle::BoxPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const
	static int _bind_getXRange(lua_State *L) {
		if (!_lg_typecheck_getXRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getXRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getXRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r)
	static int _bind_setXRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setXRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setXRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setXRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setXRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setXRange(float r1, float r2)
	static int _bind_setXRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setXRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setXRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setXRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setXRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setXRange
	static int _bind_setXRange(lua_State *L) {
		if (_lg_typecheck_setXRange_overload_1(L)) return _bind_setXRange_overload_1(L);
		if (_lg_typecheck_setXRange_overload_2(L)) return _bind_setXRange_overload_2(L);

		luaL_error(L, "error in function setXRange, cannot match any of the overloads for function setXRange:\n  setXRange(const osgParticle::rangef &)\n  setXRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const
	static int _bind_getYRange(lua_State *L) {
		if (!_lg_typecheck_getYRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getYRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getYRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r)
	static int _bind_setYRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setYRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setYRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setYRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setYRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setYRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setYRange(float r1, float r2)
	static int _bind_setYRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setYRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setYRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setYRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setYRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setYRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setYRange
	static int _bind_setYRange(lua_State *L) {
		if (_lg_typecheck_setYRange_overload_1(L)) return _bind_setYRange_overload_1(L);
		if (_lg_typecheck_setYRange_overload_2(L)) return _bind_setYRange_overload_2(L);

		luaL_error(L, "error in function setYRange, cannot match any of the overloads for function setYRange:\n  setYRange(const osgParticle::rangef &)\n  setYRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const
	static int _bind_getZRange(lua_State *L) {
		if (!_lg_typecheck_getZRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::BoxPlacer::getZRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getZRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r)
	static int _bind_setZRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setZRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::BoxPlacer::setZRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::BoxPlacer::setZRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setZRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setZRange(r);

		return 0;
	}

	// void osgParticle::BoxPlacer::setZRange(float r1, float r2)
	static int _bind_setZRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setZRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::setZRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::BoxPlacer::setZRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::setZRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setZRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::BoxPlacer::setZRange
	static int _bind_setZRange(lua_State *L) {
		if (_lg_typecheck_setZRange_overload_1(L)) return _bind_setZRange_overload_1(L);
		if (_lg_typecheck_setZRange_overload_2(L)) return _bind_setZRange_overload_2(L);

		luaL_error(L, "error in function setZRange, cannot match any of the overloads for function setZRange:\n  setZRange(const osgParticle::rangef &)\n  setZRange(float, float)\n");
		return 0;
	}

	// osg::Object * osgParticle::BoxPlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::BoxPlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::BoxPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::BoxPlacer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::className() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::BoxPlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::BoxPlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::BoxPlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::BoxPlacer::volume() const function, expected prototype:\nfloat osgParticle::BoxPlacer::volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::BoxPlacer::volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::BoxPlacer::getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::BoxPlacer::getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::BoxPlacer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::BoxPlacer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::BoxPlacer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::BoxPlacer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::setName(name);

		return 0;
	}

	// void osgParticle::BoxPlacer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::BoxPlacer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::computeDataVariance();

		return 0;
	}

	// void osgParticle::BoxPlacer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::BoxPlacer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::BoxPlacer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::BoxPlacer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::BoxPlacer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::BoxPlacer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->BoxPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::BoxPlacer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::BoxPlacer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::BoxPlacer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::BoxPlacer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->BoxPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::BoxPlacer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::BoxPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::BoxPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::BoxPlacer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BoxPlacer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::BoxPlacer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::BoxPlacer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::BoxPlacer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::BoxPlacer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::BoxPlacer::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BoxPlacer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::BoxPlacer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::BoxPlacer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::BoxPlacer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::BoxPlacer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BoxPlacer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BoxPlacer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::BoxPlacer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::BoxPlacer::base_className() const function, expected prototype:\nconst char * osgParticle::BoxPlacer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::BoxPlacer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BoxPlacer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::BoxPlacer::base_place(osgParticle::Particle * P) const
	static int _bind_base_place(lua_State *L) {
		if (!_lg_typecheck_base_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::BoxPlacer::base_place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::BoxPlacer::base_place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::BoxPlacer::base_place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BoxPlacer::place(P);

		return 0;
	}

	// float osgParticle::BoxPlacer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::BoxPlacer::base_volume() const function, expected prototype:\nfloat osgParticle::BoxPlacer::base_volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::BoxPlacer::base_volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->BoxPlacer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::BoxPlacer::base_getControlPosition() const
	static int _bind_base_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_base_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::BoxPlacer::base_getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::BoxPlacer::base_getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::BoxPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::BoxPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::BoxPlacer::base_getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->BoxPlacer::getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::BoxPlacer* LunaTraits< osgParticle::BoxPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_BoxPlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::BoxPlacer >::_bind_dtor(osgParticle::BoxPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::BoxPlacer >::className[] = "BoxPlacer";
const char LunaTraits< osgParticle::BoxPlacer >::fullName[] = "osgParticle::BoxPlacer";
const char LunaTraits< osgParticle::BoxPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::BoxPlacer >::parents[] = {"osgParticle.CenteredPlacer", 0};
const int LunaTraits< osgParticle::BoxPlacer >::hash = 31855361;
const int LunaTraits< osgParticle::BoxPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::BoxPlacer >::methods[] = {
	{"getXRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getXRange},
	{"setXRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setXRange},
	{"getYRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getYRange},
	{"setYRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setYRange},
	{"getZRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_getZRange},
	{"setZRange", &luna_wrapper_osgParticle_BoxPlacer::_bind_setZRange},
	{"cloneType", &luna_wrapper_osgParticle_BoxPlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_BoxPlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_BoxPlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_BoxPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_BoxPlacer::_bind_className},
	{"place", &luna_wrapper_osgParticle_BoxPlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_BoxPlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_BoxPlacer::_bind_getControlPosition},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_className},
	{"base_place", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_place},
	{"base_volume", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_volume},
	{"base_getControlPosition", &luna_wrapper_osgParticle_BoxPlacer::_bind_base_getControlPosition},
	{"fromVoid", &luna_wrapper_osgParticle_BoxPlacer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_BoxPlacer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_BoxPlacer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::BoxPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_BoxPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::BoxPlacer >::enumValues[] = {
	{0,0}
};


