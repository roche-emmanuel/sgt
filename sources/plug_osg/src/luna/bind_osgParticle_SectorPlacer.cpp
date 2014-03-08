#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SectorPlacer.h>

class luna_wrapper_osgParticle_SectorPlacer {
public:
	typedef Luna< osgParticle::SectorPlacer > luna_t;

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

		osgParticle::SectorPlacer* self= (osgParticle::SectorPlacer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::SectorPlacer >::push(L,self,false);
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
		//osgParticle::SectorPlacer* ptr= dynamic_cast< osgParticle::SectorPlacer* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::SectorPlacer* ptr= luna_caster< osg::Referenced, osgParticle::SectorPlacer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SectorPlacer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRadiusRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadiusRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadiusRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPhiRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		if( (!(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhiRange_overload_2(lua_State *L) {
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
	// osgParticle::SectorPlacer::SectorPlacer()
	static osgParticle::SectorPlacer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SectorPlacer::SectorPlacer() function, expected prototype:\nosgParticle::SectorPlacer::SectorPlacer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::SectorPlacer();
	}

	// osgParticle::SectorPlacer::SectorPlacer(const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SectorPlacer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SectorPlacer::SectorPlacer(const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SectorPlacer::SectorPlacer(const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SectorPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SectorPlacer::SectorPlacer function");
		}
		const osgParticle::SectorPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SectorPlacer::SectorPlacer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SectorPlacer(copy, copyop);
	}

	// osgParticle::SectorPlacer::SectorPlacer(lua_Table * data)
	static osgParticle::SectorPlacer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SectorPlacer::SectorPlacer(lua_Table * data) function, expected prototype:\nosgParticle::SectorPlacer::SectorPlacer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_SectorPlacer(L,NULL);
	}

	// osgParticle::SectorPlacer::SectorPlacer(lua_Table * data, const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SectorPlacer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SectorPlacer::SectorPlacer(lua_Table * data, const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SectorPlacer::SectorPlacer(lua_Table * data, const osgParticle::SectorPlacer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SectorPlacer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SectorPlacer::SectorPlacer function");
		}
		const osgParticle::SectorPlacer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SectorPlacer::SectorPlacer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SectorPlacer(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SectorPlacer::SectorPlacer
	static osgParticle::SectorPlacer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function SectorPlacer, cannot match any of the overloads for function SectorPlacer:\n  SectorPlacer()\n  SectorPlacer(const osgParticle::SectorPlacer &, const osg::CopyOp &)\n  SectorPlacer(lua_Table *)\n  SectorPlacer(lua_Table *, const osgParticle::SectorPlacer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const osgParticle::rangef & osgParticle::SectorPlacer::getRadiusRange() const
	static int _bind_getRadiusRange(lua_State *L) {
		if (!_lg_typecheck_getRadiusRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::SectorPlacer::getRadiusRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::SectorPlacer::getRadiusRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::SectorPlacer::getRadiusRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getRadiusRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::SectorPlacer::setRadiusRange(const osgParticle::rangef & r)
	static int _bind_setRadiusRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setRadiusRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::setRadiusRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::SectorPlacer::setRadiusRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::SectorPlacer::setRadiusRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::setRadiusRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadiusRange(r);

		return 0;
	}

	// void osgParticle::SectorPlacer::setRadiusRange(float r1, float r2)
	static int _bind_setRadiusRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setRadiusRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::setRadiusRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::SectorPlacer::setRadiusRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::setRadiusRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadiusRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::SectorPlacer::setRadiusRange
	static int _bind_setRadiusRange(lua_State *L) {
		if (_lg_typecheck_setRadiusRange_overload_1(L)) return _bind_setRadiusRange_overload_1(L);
		if (_lg_typecheck_setRadiusRange_overload_2(L)) return _bind_setRadiusRange_overload_2(L);

		luaL_error(L, "error in function setRadiusRange, cannot match any of the overloads for function setRadiusRange:\n  setRadiusRange(const osgParticle::rangef &)\n  setRadiusRange(float, float)\n");
		return 0;
	}

	// const osgParticle::rangef & osgParticle::SectorPlacer::getPhiRange() const
	static int _bind_getPhiRange(lua_State *L) {
		if (!_lg_typecheck_getPhiRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::SectorPlacer::getPhiRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::SectorPlacer::getPhiRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::SectorPlacer::getPhiRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getPhiRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::SectorPlacer::setPhiRange(const osgParticle::rangef & r)
	static int _bind_setPhiRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::setPhiRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::SectorPlacer::setPhiRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::SectorPlacer::setPhiRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::setPhiRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPhiRange(r);

		return 0;
	}

	// void osgParticle::SectorPlacer::setPhiRange(float r1, float r2)
	static int _bind_setPhiRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setPhiRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::setPhiRange(float r1, float r2) function, expected prototype:\nvoid osgParticle::SectorPlacer::setPhiRange(float r1, float r2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r1=(float)lua_tonumber(L,2);
		float r2=(float)lua_tonumber(L,3);

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::setPhiRange(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPhiRange(r1, r2);

		return 0;
	}

	// Overload binder for osgParticle::SectorPlacer::setPhiRange
	static int _bind_setPhiRange(lua_State *L) {
		if (_lg_typecheck_setPhiRange_overload_1(L)) return _bind_setPhiRange_overload_1(L);
		if (_lg_typecheck_setPhiRange_overload_2(L)) return _bind_setPhiRange_overload_2(L);

		luaL_error(L, "error in function setPhiRange, cannot match any of the overloads for function setPhiRange:\n  setPhiRange(const osgParticle::rangef &)\n  setPhiRange(float, float)\n");
		return 0;
	}

	// osg::Object * osgParticle::SectorPlacer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SectorPlacer::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SectorPlacer::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SectorPlacer::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SectorPlacer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SectorPlacer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SectorPlacer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SectorPlacer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SectorPlacer::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SectorPlacer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SectorPlacer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SectorPlacer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SectorPlacer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SectorPlacer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SectorPlacer::libraryName() const function, expected prototype:\nconst char * osgParticle::SectorPlacer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SectorPlacer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SectorPlacer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SectorPlacer::className() const function, expected prototype:\nconst char * osgParticle::SectorPlacer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SectorPlacer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SectorPlacer::place(osgParticle::Particle * P) const
	static int _bind_place(lua_State *L) {
		if (!_lg_typecheck_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::SectorPlacer::place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->place(P);

		return 0;
	}

	// float osgParticle::SectorPlacer::volume() const
	static int _bind_volume(lua_State *L) {
		if (!_lg_typecheck_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::SectorPlacer::volume() const function, expected prototype:\nfloat osgParticle::SectorPlacer::volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::SectorPlacer::volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::SectorPlacer::getControlPosition() const
	static int _bind_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::SectorPlacer::getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::SectorPlacer::getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::SectorPlacer::getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::SectorPlacer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::SectorPlacer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::SectorPlacer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::SectorPlacer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::setName(name);

		return 0;
	}

	// void osgParticle::SectorPlacer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::SectorPlacer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::computeDataVariance();

		return 0;
	}

	// void osgParticle::SectorPlacer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::SectorPlacer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::SectorPlacer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::SectorPlacer::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::SectorPlacer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::SectorPlacer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SectorPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::SectorPlacer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::SectorPlacer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::SectorPlacer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::SectorPlacer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SectorPlacer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SectorPlacer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::SectorPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::SectorPlacer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::SectorPlacer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SectorPlacer::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::SectorPlacer::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SectorPlacer::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SectorPlacer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SectorPlacer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SectorPlacer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::SectorPlacer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SectorPlacer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SectorPlacer::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SectorPlacer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SectorPlacer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SectorPlacer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SectorPlacer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SectorPlacer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SectorPlacer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SectorPlacer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SectorPlacer::base_libraryName() const function, expected prototype:\nconst char * osgParticle::SectorPlacer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SectorPlacer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SectorPlacer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SectorPlacer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SectorPlacer::base_className() const function, expected prototype:\nconst char * osgParticle::SectorPlacer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SectorPlacer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SectorPlacer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SectorPlacer::base_place(osgParticle::Particle * P) const
	static int _bind_base_place(lua_State *L) {
		if (!_lg_typecheck_base_place(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SectorPlacer::base_place(osgParticle::Particle * P) const function, expected prototype:\nvoid osgParticle::SectorPlacer::base_place(osgParticle::Particle * P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SectorPlacer::base_place(osgParticle::Particle *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SectorPlacer::place(P);

		return 0;
	}

	// float osgParticle::SectorPlacer::base_volume() const
	static int _bind_base_volume(lua_State *L) {
		if (!_lg_typecheck_base_volume(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::SectorPlacer::base_volume() const function, expected prototype:\nfloat osgParticle::SectorPlacer::base_volume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::SectorPlacer::base_volume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SectorPlacer::volume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgParticle::SectorPlacer::base_getControlPosition() const
	static int _bind_base_getControlPosition(lua_State *L) {
		if (!_lg_typecheck_base_getControlPosition(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::SectorPlacer::base_getControlPosition() const function, expected prototype:\nosg::Vec3f osgParticle::SectorPlacer::base_getControlPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SectorPlacer* self=Luna< osg::Referenced >::checkSubType< osgParticle::SectorPlacer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::SectorPlacer::base_getControlPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->SectorPlacer::getControlPosition();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::SectorPlacer* LunaTraits< osgParticle::SectorPlacer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SectorPlacer::_bind_ctor(L);
}

void LunaTraits< osgParticle::SectorPlacer >::_bind_dtor(osgParticle::SectorPlacer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SectorPlacer >::className[] = "SectorPlacer";
const char LunaTraits< osgParticle::SectorPlacer >::fullName[] = "osgParticle::SectorPlacer";
const char LunaTraits< osgParticle::SectorPlacer >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SectorPlacer >::parents[] = {"osgParticle.CenteredPlacer", 0};
const int LunaTraits< osgParticle::SectorPlacer >::hash = 69392331;
const int LunaTraits< osgParticle::SectorPlacer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SectorPlacer >::methods[] = {
	{"getRadiusRange", &luna_wrapper_osgParticle_SectorPlacer::_bind_getRadiusRange},
	{"setRadiusRange", &luna_wrapper_osgParticle_SectorPlacer::_bind_setRadiusRange},
	{"getPhiRange", &luna_wrapper_osgParticle_SectorPlacer::_bind_getPhiRange},
	{"setPhiRange", &luna_wrapper_osgParticle_SectorPlacer::_bind_setPhiRange},
	{"cloneType", &luna_wrapper_osgParticle_SectorPlacer::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SectorPlacer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SectorPlacer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_SectorPlacer::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_SectorPlacer::_bind_className},
	{"place", &luna_wrapper_osgParticle_SectorPlacer::_bind_place},
	{"volume", &luna_wrapper_osgParticle_SectorPlacer::_bind_volume},
	{"getControlPosition", &luna_wrapper_osgParticle_SectorPlacer::_bind_getControlPosition},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_className},
	{"base_place", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_place},
	{"base_volume", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_volume},
	{"base_getControlPosition", &luna_wrapper_osgParticle_SectorPlacer::_bind_base_getControlPosition},
	{"fromVoid", &luna_wrapper_osgParticle_SectorPlacer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_SectorPlacer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_SectorPlacer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SectorPlacer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SectorPlacer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SectorPlacer >::enumValues[] = {
	{0,0}
};


