#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleSystem.h>

class luna_wrapper_osgParticle_ParticleSystem {
public:
	typedef Luna< osgParticle::ParticleSystem > luna_t;

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

		osgParticle::ParticleSystem* self= (osgParticle::ParticleSystem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ParticleSystem >::push(L,self,false);
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
		//osgParticle::ParticleSystem* ptr= dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ParticleSystem* ptr= luna_caster< osg::Referenced, osgParticle::ParticleSystem >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleSystem >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getParticleAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignVectorX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignVectorX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignVectorY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignVectorY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlignVectors(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParticleScaleReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleScaleReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseVertexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseShaders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoublePassRendering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoublePassRendering(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrozen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numDeadParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areAllParticlesDead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reuseParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFreezeOnCull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFreezeOnCull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributesUsingShaders(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLevelOfDetail(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLevelOfDetail(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSortMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSortMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibilityDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisibilityDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
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

	inline static bool _lg_typecheck_base_destroyParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reuseParticle(lua_State *L) {
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

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleSystem::ParticleSystem()
	static osgParticle::ParticleSystem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::ParticleSystem();
	}

	// osgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem(const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystem* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osgParticle::ParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ParticleSystem(copy, copyop);
	}

	// osgParticle::ParticleSystem::ParticleSystem(lua_Table * data)
	static osgParticle::ParticleSystem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem(lua_Table * data) function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ParticleSystem(L,NULL);
	}

	// osgParticle::ParticleSystem::ParticleSystem(lua_Table * data, const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleSystem(lua_Table * data, const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystem::ParticleSystem(lua_Table * data, const osgParticle::ParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystem* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osgParticle::ParticleSystem & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystem::ParticleSystem function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ParticleSystem(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ParticleSystem::ParticleSystem
	static osgParticle::ParticleSystem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ParticleSystem, cannot match any of the overloads for function ParticleSystem:\n  ParticleSystem()\n  ParticleSystem(const osgParticle::ParticleSystem &, const osg::CopyOp &)\n  ParticleSystem(lua_Table *)\n  ParticleSystem(lua_Table *, const osgParticle::ParticleSystem &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ParticleSystem::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystem::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystem::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::className() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const
	static int _bind_getParticleAlignment(lua_State *L) {
		if (!_lg_typecheck_getParticleAlignment(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const function, expected prototype:\nosgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::Alignment osgParticle::ParticleSystem::getParticleAlignment() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem::Alignment lret = self->getParticleAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a)
	static int _bind_setParticleAlignment(lua_State *L) {
		if (!_lg_typecheck_setParticleAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a) function, expected prototype:\nvoid osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem::Alignment a=(osgParticle::ParticleSystem::Alignment)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setParticleAlignment(osgParticle::ParticleSystem::Alignment). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleAlignment(a);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const
	static int _bind_getAlignVectorX(lua_State *L) {
		if (!_lg_typecheck_getAlignVectorX(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorX() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAlignVectorX();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v)
	static int _bind_setAlignVectorX(lua_State *L) {
		if (!_lg_typecheck_setAlignVectorX(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::ParticleSystem::setAlignVectorX function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectorX(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlignVectorX(v);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const
	static int _bind_getAlignVectorY(lua_State *L) {
		if (!_lg_typecheck_getAlignVectorY(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleSystem::getAlignVectorY() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAlignVectorY();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v)
	static int _bind_setAlignVectorY(lua_State *L) {
		if (!_lg_typecheck_setAlignVectorY(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::ParticleSystem::setAlignVectorY function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectorY(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlignVectorY(v);

		return 0;
	}

	// void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y)
	static int _bind_setAlignVectors(lua_State *L) {
		if (!_lg_typecheck_setAlignVectors(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y) function, expected prototype:\nvoid osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f & X, const osg::Vec3f & Y)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* X_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !X_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg X in osgParticle::ParticleSystem::setAlignVectors function");
		}
		const osg::Vec3f & X=*X_ptr;
		const osg::Vec3f* Y_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !Y_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg Y in osgParticle::ParticleSystem::setAlignVectors function");
		}
		const osg::Vec3f & Y=*Y_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setAlignVectors(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlignVectors(X, Y);

		return 0;
	}

	// void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf)
	static int _bind_setParticleScaleReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setParticleScaleReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf) function, expected prototype:\nvoid osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem::ParticleScaleReferenceFrame rf=(osgParticle::ParticleSystem::ParticleScaleReferenceFrame)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setParticleScaleReferenceFrame(osgParticle::ParticleSystem::ParticleScaleReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleScaleReferenceFrame(rf);

		return 0;
	}

	// osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const
	static int _bind_getParticleScaleReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getParticleScaleReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const function, expected prototype:\nosgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::ParticleScaleReferenceFrame osgParticle::ParticleSystem::getParticleScaleReferenceFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem::ParticleScaleReferenceFrame lret = self->getParticleScaleReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::BoundingBoxd & osgParticle::ParticleSystem::getDefaultBoundingBox() const
	static int _bind_getDefaultBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getDefaultBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxd & osgParticle::ParticleSystem::getDefaultBoundingBox() const function, expected prototype:\nconst osg::BoundingBoxd & osgParticle::ParticleSystem::getDefaultBoundingBox() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxd & osgParticle::ParticleSystem::getDefaultBoundingBox() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->getDefaultBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxd & bbox)
	static int _bind_setDefaultBoundingBox(lua_State *L) {
		if (!_lg_typecheck_setDefaultBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxd & bbox) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxd & bbox)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bbox_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbox in osgParticle::ParticleSystem::setDefaultBoundingBox function");
		}
		const osg::BoundingBoxd & bbox=*bbox_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultBoundingBox(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultBoundingBox(bbox);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getUseVertexArray() const
	static int _bind_getUseVertexArray(lua_State *L) {
		if (!_lg_typecheck_getUseVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getUseVertexArray() const function, expected prototype:\nbool osgParticle::ParticleSystem::getUseVertexArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getUseVertexArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseVertexArray();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setUseVertexArray(bool v)
	static int _bind_setUseVertexArray(lua_State *L) {
		if (!_lg_typecheck_setUseVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setUseVertexArray(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setUseVertexArray(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setUseVertexArray(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseVertexArray(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getUseShaders() const
	static int _bind_getUseShaders(lua_State *L) {
		if (!_lg_typecheck_getUseShaders(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getUseShaders() const function, expected prototype:\nbool osgParticle::ParticleSystem::getUseShaders() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getUseShaders() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseShaders();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setUseShaders(bool v)
	static int _bind_setUseShaders(lua_State *L) {
		if (!_lg_typecheck_setUseShaders(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setUseShaders(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setUseShaders(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setUseShaders(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseShaders(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getDoublePassRendering() const
	static int _bind_getDoublePassRendering(lua_State *L) {
		if (!_lg_typecheck_getDoublePassRendering(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getDoublePassRendering() const function, expected prototype:\nbool osgParticle::ParticleSystem::getDoublePassRendering() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getDoublePassRendering() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDoublePassRendering();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setDoublePassRendering(bool v)
	static int _bind_setDoublePassRendering(lua_State *L) {
		if (!_lg_typecheck_setDoublePassRendering(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDoublePassRendering(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDoublePassRendering(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDoublePassRendering(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDoublePassRendering(v);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getFrozen() const
	static int _bind_getFrozen(lua_State *L) {
		if (!_lg_typecheck_getFrozen(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getFrozen() const function, expected prototype:\nbool osgParticle::ParticleSystem::getFrozen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getFrozen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystem::isFrozen() const
	static int _bind_isFrozen(lua_State *L) {
		if (!_lg_typecheck_isFrozen(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::isFrozen() const function, expected prototype:\nbool osgParticle::ParticleSystem::isFrozen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::isFrozen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setFrozen(bool v)
	static int _bind_setFrozen(lua_State *L) {
		if (!_lg_typecheck_setFrozen(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setFrozen(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setFrozen(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setFrozen(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrozen(v);

		return 0;
	}

	// int osgParticle::ParticleSystem::numParticles() const
	static int _bind_numParticles(lua_State *L) {
		if (!_lg_typecheck_numParticles(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::numParticles() const function, expected prototype:\nint osgParticle::ParticleSystem::numParticles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::numParticles() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::ParticleSystem::numDeadParticles() const
	static int _bind_numDeadParticles(lua_State *L) {
		if (!_lg_typecheck_numDeadParticles(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::numDeadParticles() const function, expected prototype:\nint osgParticle::ParticleSystem::numDeadParticles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::numDeadParticles() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numDeadParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleSystem::areAllParticlesDead() const
	static int _bind_areAllParticlesDead(lua_State *L) {
		if (!_lg_typecheck_areAllParticlesDead(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::areAllParticlesDead() const function, expected prototype:\nbool osgParticle::ParticleSystem::areAllParticlesDead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::areAllParticlesDead() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->areAllParticlesDead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i)
	static int _bind_getParticle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) function, expected prototype:\nosgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->getParticle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const
	static int _bind_getParticle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const function, expected prototype:\nconst osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Particle * osgParticle::ParticleSystem::getParticle(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle * lret = self->getParticle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::getParticle
	static int _bind_getParticle(lua_State *L) {
		if (_lg_typecheck_getParticle_overload_1(L)) return _bind_getParticle_overload_1(L);
		if (_lg_typecheck_getParticle_overload_2(L)) return _bind_getParticle_overload_2(L);

		luaL_error(L, "error in function getParticle, cannot match any of the overloads for function getParticle:\n  getParticle(int)\n  getParticle(int)\n");
		return 0;
	}

	// osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_createParticle(lua_State *L) {
		if (!_lg_typecheck_createParticle(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ParticleSystem::createParticle(const osgParticle::Particle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::destroyParticle(int i)
	static int _bind_destroyParticle(lua_State *L) {
		if (!_lg_typecheck_destroyParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::destroyParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::destroyParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::destroyParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->destroyParticle(i);

		return 0;
	}

	// void osgParticle::ParticleSystem::reuseParticle(int i)
	static int _bind_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_reuseParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::reuseParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::reuseParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reuseParticle(i);

		return 0;
	}

	// unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const
	static int _bind_getLastFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getLastFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const function, expected prototype:\nunsigned int osgParticle::ParticleSystem::getLastFrameNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystem::getLastFrameNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getLastFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osgParticle::ParticleSystem::getDeltaTime(double currentTime)
	static int _bind_getDeltaTime(lua_State *L) {
		if (!_lg_typecheck_getDeltaTime(L)) {
			luaL_error(L, "luna typecheck failed in double & osgParticle::ParticleSystem::getDeltaTime(double currentTime) function, expected prototype:\ndouble & osgParticle::ParticleSystem::getDeltaTime(double currentTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double currentTime=(double)lua_tonumber(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osgParticle::ParticleSystem::getDeltaTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->getDeltaTime(currentTime);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate()
	static int _bind_getDefaultParticleTemplate_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() function, expected prototype:\nosgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const
	static int _bind_getDefaultParticleTemplate_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::ParticleSystem::getDefaultParticleTemplate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::getDefaultParticleTemplate
	static int _bind_getDefaultParticleTemplate(lua_State *L) {
		if (_lg_typecheck_getDefaultParticleTemplate_overload_1(L)) return _bind_getDefaultParticleTemplate_overload_1(L);
		if (_lg_typecheck_getDefaultParticleTemplate_overload_2(L)) return _bind_getDefaultParticleTemplate_overload_2(L);

		luaL_error(L, "error in function getDefaultParticleTemplate, cannot match any of the overloads for function getDefaultParticleTemplate:\n  getDefaultParticleTemplate()\n  getDefaultParticleTemplate()\n");
		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setDefaultParticleTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::ParticleSystem::setDefaultParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultParticleTemplate(const osgParticle::Particle &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultParticleTemplate(p);

		return 0;
	}

	// bool osgParticle::ParticleSystem::getFreezeOnCull() const
	static int _bind_getFreezeOnCull(lua_State *L) {
		if (!_lg_typecheck_getFreezeOnCull(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::getFreezeOnCull() const function, expected prototype:\nbool osgParticle::ParticleSystem::getFreezeOnCull() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::getFreezeOnCull() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFreezeOnCull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystem::setFreezeOnCull(bool v)
	static int _bind_setFreezeOnCull(lua_State *L) {
		if (!_lg_typecheck_setFreezeOnCull(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setFreezeOnCull(bool v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setFreezeOnCull(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setFreezeOnCull(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFreezeOnCull(v);

		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = "", bool emissive_particles = true, bool lighting = false, int texture_unit = 0)
	static int _bind_setDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = \"\", bool emissive_particles = true, bool lighting = false, int texture_unit = 0) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultAttributes(const std::string & texturefile = \"\", bool emissive_particles = true, bool lighting = false, int texture_unit = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string texturefile(lua_tostring(L,2),lua_objlen(L,2));
		bool emissive_particles=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool lighting=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;
		int texture_unit=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultAttributes(const std::string &, bool, bool, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultAttributes(texturefile, emissive_particles, lighting, texture_unit);

		return 0;
	}

	// void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = "", bool emissive_particles = true, int texture_unit = 0)
	static int _bind_setDefaultAttributesUsingShaders(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributesUsingShaders(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = \"\", bool emissive_particles = true, int texture_unit = 0) function, expected prototype:\nvoid osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string & texturefile = \"\", bool emissive_particles = true, int texture_unit = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string texturefile(lua_tostring(L,2),lua_objlen(L,2));
		bool emissive_particles=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		int texture_unit=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setDefaultAttributesUsingShaders(const std::string &, bool, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultAttributesUsingShaders(texturefile, emissive_particles, texture_unit);

		return 0;
	}

	// int osgParticle::ParticleSystem::getLevelOfDetail() const
	static int _bind_getLevelOfDetail(lua_State *L) {
		if (!_lg_typecheck_getLevelOfDetail(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::ParticleSystem::getLevelOfDetail() const function, expected prototype:\nint osgParticle::ParticleSystem::getLevelOfDetail() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::ParticleSystem::getLevelOfDetail() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLevelOfDetail();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setLevelOfDetail(int v)
	static int _bind_setLevelOfDetail(lua_State *L) {
		if (!_lg_typecheck_setLevelOfDetail(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setLevelOfDetail(int v) function, expected prototype:\nvoid osgParticle::ParticleSystem::setLevelOfDetail(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setLevelOfDetail(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLevelOfDetail(v);

		return 0;
	}

	// osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const
	static int _bind_getSortMode(lua_State *L) {
		if (!_lg_typecheck_getSortMode(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const function, expected prototype:\nosgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem::SortMode osgParticle::ParticleSystem::getSortMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem::SortMode lret = self->getSortMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode)
	static int _bind_setSortMode(lua_State *L) {
		if (!_lg_typecheck_setSortMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode) function, expected prototype:\nvoid osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem::SortMode mode=(osgParticle::ParticleSystem::SortMode)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setSortMode(osgParticle::ParticleSystem::SortMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSortMode(mode);

		return 0;
	}

	// double osgParticle::ParticleSystem::getVisibilityDistance() const
	static int _bind_getVisibilityDistance(lua_State *L) {
		if (!_lg_typecheck_getVisibilityDistance(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleSystem::getVisibilityDistance() const function, expected prototype:\ndouble osgParticle::ParticleSystem::getVisibilityDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleSystem::getVisibilityDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getVisibilityDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::setVisibilityDistance(double distance)
	static int _bind_setVisibilityDistance(lua_State *L) {
		if (!_lg_typecheck_setVisibilityDistance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::setVisibilityDistance(double distance) function, expected prototype:\nvoid osgParticle::ParticleSystem::setVisibilityDistance(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::setVisibilityDistance(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVisibilityDistance(distance);

		return 0;
	}

	// void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystem::update function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::update(double, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(dt, nv);

		return 0;
	}

	// void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const function, expected prototype:\nosg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::ParticleSystem::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setName(name);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ParticleSystem::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ParticleSystem::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ParticleSystem::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ParticleSystem::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ParticleSystem::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ParticleSystem::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ParticleSystem::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ParticleSystem::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ParticleSystem::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ParticleSystem::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgParticle::ParticleSystem::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::ParticleSystem::base_asGeometry() function, expected prototype:\nosg::Geometry * osgParticle::ParticleSystem::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::ParticleSystem::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->ParticleSystem::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgParticle::ParticleSystem::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgParticle::ParticleSystem::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgParticle::ParticleSystem::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgParticle::ParticleSystem::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->ParticleSystem::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystem::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgParticle::ParticleSystem::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ParticleSystem::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::computeDataVariance();

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_dirtyDisplayList() function, expected prototype:\nvoid osgParticle::ParticleSystem::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgParticle::ParticleSystem::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystem::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgParticle::ParticleSystem::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystem::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ParticleSystem::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ParticleSystem::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgParticle::ParticleSystem::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::releaseGLObjects(state);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setUpdateCallback(ac);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setEventCallback(ac);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setCullCallback(cc);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osgParticle::ParticleSystem::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleSystem::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystem::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystem::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystem::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystem::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystem::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleSystem::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystem::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystem::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystem::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystem::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystem::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleSystem::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystem::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystem::base_className() const function, expected prototype:\nconst char * osgParticle::ParticleSystem::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystem::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleSystem::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgParticle::Particle * osgParticle::ParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate)
	static int _bind_base_createParticle(lua_State *L) {
		if (!_lg_typecheck_base_createParticle(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle * osgParticle::ParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate) function, expected prototype:\nosgParticle::Particle * osgParticle::ParticleSystem::base_createParticle(const osgParticle::Particle * ptemplate)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* ptemplate=(Luna< osgParticle::Particle >::check(L,2));

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle * osgParticle::ParticleSystem::base_createParticle(const osgParticle::Particle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle * lret = self->ParticleSystem::createParticle(ptemplate);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::base_destroyParticle(int i)
	static int _bind_base_destroyParticle(lua_State *L) {
		if (!_lg_typecheck_base_destroyParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_destroyParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_destroyParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_destroyParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::destroyParticle(i);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_reuseParticle(int i)
	static int _bind_base_reuseParticle(lua_State *L) {
		if (!_lg_typecheck_base_reuseParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_reuseParticle(int i) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_reuseParticle(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_reuseParticle(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::reuseParticle(i);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_update(double dt, osg::NodeVisitor & nv)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_update(double dt, osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystem::base_update(double dt, osg::NodeVisitor & nv)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystem::base_update function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_update(double, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::update(dt, nv);

		return 0;
	}

	// void osgParticle::ParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ParticleSystem::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystem::drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osgParticle::ParticleSystem::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgParticle::ParticleSystem::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgParticle::ParticleSystem::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystem* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgParticle::ParticleSystem::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->ParticleSystem::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleSystem* LunaTraits< osgParticle::ParticleSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleSystem::_bind_ctor(L);
}

void LunaTraits< osgParticle::ParticleSystem >::_bind_dtor(osgParticle::ParticleSystem* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleSystem >::className[] = "ParticleSystem";
const char LunaTraits< osgParticle::ParticleSystem >::fullName[] = "osgParticle::ParticleSystem";
const char LunaTraits< osgParticle::ParticleSystem >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleSystem >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgParticle::ParticleSystem >::hash = 84994826;
const int LunaTraits< osgParticle::ParticleSystem >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleSystem >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ParticleSystem::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ParticleSystem::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleSystem::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_ParticleSystem::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleSystem::_bind_className},
	{"getParticleAlignment", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticleAlignment},
	{"setParticleAlignment", &luna_wrapper_osgParticle_ParticleSystem::_bind_setParticleAlignment},
	{"getAlignVectorX", &luna_wrapper_osgParticle_ParticleSystem::_bind_getAlignVectorX},
	{"setAlignVectorX", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectorX},
	{"getAlignVectorY", &luna_wrapper_osgParticle_ParticleSystem::_bind_getAlignVectorY},
	{"setAlignVectorY", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectorY},
	{"setAlignVectors", &luna_wrapper_osgParticle_ParticleSystem::_bind_setAlignVectors},
	{"setParticleScaleReferenceFrame", &luna_wrapper_osgParticle_ParticleSystem::_bind_setParticleScaleReferenceFrame},
	{"getParticleScaleReferenceFrame", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticleScaleReferenceFrame},
	{"getDefaultBoundingBox", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDefaultBoundingBox},
	{"setDefaultBoundingBox", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultBoundingBox},
	{"getUseVertexArray", &luna_wrapper_osgParticle_ParticleSystem::_bind_getUseVertexArray},
	{"setUseVertexArray", &luna_wrapper_osgParticle_ParticleSystem::_bind_setUseVertexArray},
	{"getUseShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_getUseShaders},
	{"setUseShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_setUseShaders},
	{"getDoublePassRendering", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDoublePassRendering},
	{"setDoublePassRendering", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDoublePassRendering},
	{"getFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_getFrozen},
	{"isFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_isFrozen},
	{"setFrozen", &luna_wrapper_osgParticle_ParticleSystem::_bind_setFrozen},
	{"numParticles", &luna_wrapper_osgParticle_ParticleSystem::_bind_numParticles},
	{"numDeadParticles", &luna_wrapper_osgParticle_ParticleSystem::_bind_numDeadParticles},
	{"areAllParticlesDead", &luna_wrapper_osgParticle_ParticleSystem::_bind_areAllParticlesDead},
	{"getParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_getParticle},
	{"createParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_createParticle},
	{"destroyParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_destroyParticle},
	{"reuseParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_reuseParticle},
	{"getLastFrameNumber", &luna_wrapper_osgParticle_ParticleSystem::_bind_getLastFrameNumber},
	{"getDeltaTime", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDeltaTime},
	{"getDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleSystem::_bind_getDefaultParticleTemplate},
	{"setDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultParticleTemplate},
	{"getFreezeOnCull", &luna_wrapper_osgParticle_ParticleSystem::_bind_getFreezeOnCull},
	{"setFreezeOnCull", &luna_wrapper_osgParticle_ParticleSystem::_bind_setFreezeOnCull},
	{"setDefaultAttributes", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultAttributes},
	{"setDefaultAttributesUsingShaders", &luna_wrapper_osgParticle_ParticleSystem::_bind_setDefaultAttributesUsingShaders},
	{"getLevelOfDetail", &luna_wrapper_osgParticle_ParticleSystem::_bind_getLevelOfDetail},
	{"setLevelOfDetail", &luna_wrapper_osgParticle_ParticleSystem::_bind_setLevelOfDetail},
	{"getSortMode", &luna_wrapper_osgParticle_ParticleSystem::_bind_getSortMode},
	{"setSortMode", &luna_wrapper_osgParticle_ParticleSystem::_bind_setSortMode},
	{"getVisibilityDistance", &luna_wrapper_osgParticle_ParticleSystem::_bind_getVisibilityDistance},
	{"setVisibilityDistance", &luna_wrapper_osgParticle_ParticleSystem::_bind_setVisibilityDistance},
	{"update", &luna_wrapper_osgParticle_ParticleSystem::_bind_update},
	{"drawImplementation", &luna_wrapper_osgParticle_ParticleSystem::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osgParticle_ParticleSystem::_bind_computeBound},
	{"base_setName", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_className},
	{"base_createParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_createParticle},
	{"base_destroyParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_destroyParticle},
	{"base_reuseParticle", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_reuseParticle},
	{"base_update", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_update},
	{"base_drawImplementation", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_drawImplementation},
	{"base_computeBound", &luna_wrapper_osgParticle_ParticleSystem::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osgParticle_ParticleSystem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ParticleSystem::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ParticleSystem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleSystem >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleSystem::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleSystem >::enumValues[] = {
	{"BILLBOARD", osgParticle::ParticleSystem::BILLBOARD},
	{"FIXED", osgParticle::ParticleSystem::FIXED},
	{"LOCAL_COORDINATES", osgParticle::ParticleSystem::LOCAL_COORDINATES},
	{"WORLD_COORDINATES", osgParticle::ParticleSystem::WORLD_COORDINATES},
	{"NO_SORT", osgParticle::ParticleSystem::NO_SORT},
	{"SORT_FRONT_TO_BACK", osgParticle::ParticleSystem::SORT_FRONT_TO_BACK},
	{"SORT_BACK_TO_FRONT", osgParticle::ParticleSystem::SORT_BACK_TO_FRONT},
	{0,0}
};


