#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_PrecipitationEffect.h>

class luna_wrapper_osgParticle_PrecipitationEffect {
public:
	typedef Luna< osgParticle::PrecipitationEffect > luna_t;

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

		osgParticle::PrecipitationEffect* self= (osgParticle::PrecipitationEffect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::PrecipitationEffect >::push(L,self,false);
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
		//osgParticle::PrecipitationEffect* ptr= dynamic_cast< osgParticle::PrecipitationEffect* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::PrecipitationEffect* ptr= luna_caster< osg::Referenced, osgParticle::PrecipitationEffect >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::PrecipitationEffect >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_snow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaximumParticleDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumParticleDensity(lua_State *L) {
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCellSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCellSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNearTransition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNearTransition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFarTransition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFarTransition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseFarLineSegments(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseFarLineSegments(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuadGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuadStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointStateSet(lua_State *L) {
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

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationEffect()
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::PrecipitationEffect();
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osgParticle::PrecipitationEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::PrecipitationEffect(copy, copyop);
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_PrecipitationEffect(L,NULL);
	}

	// osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationEffect(lua_Table * data, const osgParticle::PrecipitationEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osgParticle::PrecipitationEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_PrecipitationEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationEffect
	static osgParticle::PrecipitationEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PrecipitationEffect, cannot match any of the overloads for function PrecipitationEffect:\n  PrecipitationEffect()\n  PrecipitationEffect(const osgParticle::PrecipitationEffect &, const osg::CopyOp &)\n  PrecipitationEffect(lua_Table *)\n  PrecipitationEffect(lua_Table *, const osgParticle::PrecipitationEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::PrecipitationEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::PrecipitationEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::rain(float intensity)
	static int _bind_rain(lua_State *L) {
		if (!_lg_typecheck_rain(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::rain(float intensity) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::rain(float intensity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::rain(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rain(intensity);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::snow(float intensity)
	static int _bind_snow(lua_State *L) {
		if (!_lg_typecheck_snow(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::snow(float intensity) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::snow(float intensity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::snow(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->snow(intensity);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density)
	static int _bind_setMaximumParticleDensity(lua_State *L) {
		if (!_lg_typecheck_setMaximumParticleDensity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setMaximumParticleDensity(float density)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float density=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setMaximumParticleDensity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumParticleDensity(density);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const
	static int _bind_getMaximumParticleDensity(lua_State *L) {
		if (!_lg_typecheck_getMaximumParticleDensity(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getMaximumParticleDensity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getMaximumParticleDensity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximumParticleDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::PrecipitationEffect::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setWind(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getWind() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::PrecipitationEffect::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setPosition(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize)
	static int _bind_setCellSize(lua_State *L) {
		if (!_lg_typecheck_setCellSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f & cellSize)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* cellSize_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !cellSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cellSize in osgParticle::PrecipitationEffect::setCellSize function");
		}
		const osg::Vec3f & cellSize=*cellSize_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setCellSize(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCellSize(cellSize);

		return 0;
	}

	// const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const
	static int _bind_getCellSize(lua_State *L) {
		if (!_lg_typecheck_getCellSize(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const function, expected prototype:\nconst osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::PrecipitationEffect::getCellSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getCellSize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed)
	static int _bind_setParticleSpeed(lua_State *L) {
		if (!_lg_typecheck_setParticleSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleSpeed(float particleSpeed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float particleSpeed=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleSpeed(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleSpeed(particleSpeed);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getParticleSpeed() const
	static int _bind_getParticleSpeed(lua_State *L) {
		if (!_lg_typecheck_getParticleSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getParticleSpeed() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getParticleSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getParticleSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParticleSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleSize(float particleSize)
	static int _bind_setParticleSize(lua_State *L) {
		if (!_lg_typecheck_setParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleSize(float particleSize) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleSize(float particleSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float particleSize=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleSize(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleSize(particleSize);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getParticleSize() const
	static int _bind_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getParticleSize() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getParticleSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getParticleSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color)
	static int _bind_setParticleColor(lua_State *L) {
		if (!_lg_typecheck_setParticleColor(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgParticle::PrecipitationEffect::setParticleColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setParticleColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleColor(color);

		return 0;
	}

	// const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const
	static int _bind_getParticleColor(lua_State *L) {
		if (!_lg_typecheck_getParticleColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const function, expected prototype:\nconst osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgParticle::PrecipitationEffect::getParticleColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getParticleColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setNearTransition(float nearTransition)
	static int _bind_setNearTransition(lua_State *L) {
		if (!_lg_typecheck_setNearTransition(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setNearTransition(float nearTransition) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setNearTransition(float nearTransition)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float nearTransition=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setNearTransition(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNearTransition(nearTransition);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getNearTransition() const
	static int _bind_getNearTransition(lua_State *L) {
		if (!_lg_typecheck_getNearTransition(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getNearTransition() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getNearTransition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getNearTransition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getNearTransition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setFarTransition(float farTransition)
	static int _bind_setFarTransition(lua_State *L) {
		if (!_lg_typecheck_setFarTransition(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setFarTransition(float farTransition) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setFarTransition(float farTransition)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float farTransition=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setFarTransition(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFarTransition(farTransition);

		return 0;
	}

	// float osgParticle::PrecipitationEffect::getFarTransition() const
	static int _bind_getFarTransition(lua_State *L) {
		if (!_lg_typecheck_getFarTransition(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::getFarTransition() const function, expected prototype:\nfloat osgParticle::PrecipitationEffect::getFarTransition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::getFarTransition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFarTransition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments)
	static int _bind_setUseFarLineSegments(lua_State *L) {
		if (!_lg_typecheck_setUseFarLineSegments(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setUseFarLineSegments(bool useFarLineSegments)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useFarLineSegments=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setUseFarLineSegments(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseFarLineSegments(useFarLineSegments);

		return 0;
	}

	// bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const
	static int _bind_getUseFarLineSegments(lua_State *L) {
		if (!_lg_typecheck_getUseFarLineSegments(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const function, expected prototype:\nbool osgParticle::PrecipitationEffect::getUseFarLineSegments() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::getUseFarLineSegments() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseFarLineSegments();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::setFog(osg::Fog * fog)
	static int _bind_setFog(lua_State *L) {
		if (!_lg_typecheck_setFog(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::setFog(osg::Fog * fog) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::setFog(osg::Fog * fog)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Fog* fog=(Luna< osg::Referenced >::checkSubType< osg::Fog >(L,2));

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::setFog(osg::Fog *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFog(fog);

		return 0;
	}

	// osg::Fog * osgParticle::PrecipitationEffect::getFog()
	static int _bind_getFog_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFog_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Fog * osgParticle::PrecipitationEffect::getFog() function, expected prototype:\nosg::Fog * osgParticle::PrecipitationEffect::getFog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Fog * osgParticle::PrecipitationEffect::getFog(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Fog * lret = self->getFog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Fog >::push(L,lret,false);

		return 1;
	}

	// const osg::Fog * osgParticle::PrecipitationEffect::getFog() const
	static int _bind_getFog_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFog_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Fog * osgParticle::PrecipitationEffect::getFog() const function, expected prototype:\nconst osg::Fog * osgParticle::PrecipitationEffect::getFog() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Fog * osgParticle::PrecipitationEffect::getFog() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Fog * lret = self->getFog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Fog >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::getFog
	static int _bind_getFog(lua_State *L) {
		if (_lg_typecheck_getFog_overload_1(L)) return _bind_getFog_overload_1(L);
		if (_lg_typecheck_getFog_overload_2(L)) return _bind_getFog_overload_2(L);

		luaL_error(L, "error in function getFog, cannot match any of the overloads for function getFog:\n  getFog()\n  getFog()\n");
		return 0;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry()
	static int _bind_getQuadGeometry(lua_State *L) {
		if (!_lg_typecheck_getQuadGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getQuadGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getQuadGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet()
	static int _bind_getQuadStateSet(lua_State *L) {
		if (!_lg_typecheck_getQuadStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getQuadStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getQuadStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry()
	static int _bind_getLineGeometry(lua_State *L) {
		if (!_lg_typecheck_getLineGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getLineGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getLineGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet()
	static int _bind_getLineStateSet(lua_State *L) {
		if (!_lg_typecheck_getLineStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getLineStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getLineStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry()
	static int _bind_getPointGeometry(lua_State *L) {
		if (!_lg_typecheck_getPointGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::getPointGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getPointGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet()
	static int _bind_getPointStateSet(lua_State *L) {
		if (!_lg_typecheck_getPointStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet() function, expected prototype:\nosg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgParticle::PrecipitationEffect::getPointStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getPointStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::setName(name);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::computeDataVariance();

		return 0;
	}

	// void osgParticle::PrecipitationEffect::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::PrecipitationEffect::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PrecipitationEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::PrecipitationEffect::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PrecipitationEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osgParticle::PrecipitationEffect::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PrecipitationEffect::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::PrecipitationEffect::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PrecipitationEffect::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Group * osgParticle::PrecipitationEffect::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::PrecipitationEffect::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::PrecipitationEffect::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::PrecipitationEffect::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->PrecipitationEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::PrecipitationEffect::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::PrecipitationEffect::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::PrecipitationEffect::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::PrecipitationEffect::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->PrecipitationEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::PrecipitationEffect::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::PrecipitationEffect::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::PrecipitationEffect::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::PrecipitationEffect::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->PrecipitationEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::PrecipitationEffect::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::PrecipitationEffect::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::PrecipitationEffect::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::PrecipitationEffect::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->PrecipitationEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::PrecipitationEffect::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::PrecipitationEffect::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::PrecipitationEffect::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::PrecipitationEffect::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->PrecipitationEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::PrecipitationEffect::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::PrecipitationEffect::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::PrecipitationEffect::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::PrecipitationEffect::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->PrecipitationEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::PrecipitationEffect::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->PrecipitationEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::PrecipitationEffect::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->PrecipitationEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::PrecipitationEffect::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::PrecipitationEffect::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::PrecipitationEffect::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::PrecipitationEffect::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->PrecipitationEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::PrecipitationEffect::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::PrecipitationEffect::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::PrecipitationEffect::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::PrecipitationEffect::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->PrecipitationEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::PrecipitationEffect::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::PrecipitationEffect::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::ascend(nv);

		return 0;
	}

	// osg::BoundingSphered osgParticle::PrecipitationEffect::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::PrecipitationEffect::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::PrecipitationEffect::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::PrecipitationEffect::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->PrecipitationEffect::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::PrecipitationEffect::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::base_libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PrecipitationEffect::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::base_className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PrecipitationEffect::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PrecipitationEffect::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::PrecipitationEffect::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::accept(nv);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationEffect::traverse(_arg1);

		return 0;
	}


	// Operator binds:

};

osgParticle::PrecipitationEffect* LunaTraits< osgParticle::PrecipitationEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect >::_bind_dtor(osgParticle::PrecipitationEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect >::className[] = "PrecipitationEffect";
const char LunaTraits< osgParticle::PrecipitationEffect >::fullName[] = "osgParticle::PrecipitationEffect";
const char LunaTraits< osgParticle::PrecipitationEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::PrecipitationEffect >::hash = 96995024;
const int LunaTraits< osgParticle::PrecipitationEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_accept},
	{"traverse", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_traverse},
	{"rain", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_rain},
	{"snow", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_snow},
	{"setMaximumParticleDensity", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setMaximumParticleDensity},
	{"getMaximumParticleDensity", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getMaximumParticleDensity},
	{"setWind", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getWind},
	{"setPosition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPosition},
	{"setCellSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setCellSize},
	{"getCellSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getCellSize},
	{"setParticleSpeed", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleSpeed},
	{"getParticleSpeed", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleSpeed},
	{"setParticleSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleSize},
	{"getParticleSize", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleSize},
	{"setParticleColor", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setParticleColor},
	{"getParticleColor", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getParticleColor},
	{"setNearTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setNearTransition},
	{"getNearTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getNearTransition},
	{"setFarTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setFarTransition},
	{"getFarTransition", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getFarTransition},
	{"setUseFarLineSegments", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setUseFarLineSegments},
	{"getUseFarLineSegments", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getUseFarLineSegments},
	{"setFog", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_setFog},
	{"getFog", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getFog},
	{"getQuadGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getQuadGeometry},
	{"getQuadStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getQuadStateSet},
	{"getLineGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getLineGeometry},
	{"getLineStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getLineStateSet},
	{"getPointGeometry", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPointGeometry},
	{"getPointStateSet", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getPointStateSet},
	{"base_setName", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_clone},
	{"base_asGroup", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_ascend},
	{"base_computeBound", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_computeBound},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_isSameKindAs},
	{"base_accept", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_base_traverse},
	{"fromVoid", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_PrecipitationEffect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_PrecipitationEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect >::enumValues[] = {
	{0,0}
};


