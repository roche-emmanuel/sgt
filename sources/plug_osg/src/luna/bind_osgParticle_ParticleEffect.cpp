#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleEffect.h>

class luna_wrapper_osgParticle_ParticleEffect {
public:
	typedef Luna< osgParticle::ParticleEffect > luna_t;

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

		osgParticle::ParticleEffect* self= (osgParticle::ParticleEffect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ParticleEffect >::push(L,self,false);
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
		//osgParticle::ParticleEffect* ptr= dynamic_cast< osgParticle::ParticleEffect* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ParticleEffect* ptr= luna_caster< osg::Referenced, osgParticle::ParticleEffect >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleEffect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setAutomaticSetup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutomaticSetup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseLocalParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseLocalParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultParticleTemplate(lua_State *L) {
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

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEmitterDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmitterDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleDuration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleDuration(lua_State *L) {
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

	inline static bool _lg_typecheck_areAllParticlesDead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_buildEffect(lua_State *L) {
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

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_buildEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleEffect::ParticleEffect(lua_Table * data, bool automaticSetup = true)
	static osgParticle::ParticleEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleEffect::ParticleEffect(lua_Table * data, bool automaticSetup = true) function, expected prototype:\nosgParticle::ParticleEffect::ParticleEffect(lua_Table * data, bool automaticSetup = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wrapper_osgParticle_ParticleEffect(L,NULL, automaticSetup);
	}

	// osgParticle::ParticleEffect::ParticleEffect(lua_Table * data, const osgParticle::ParticleEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleEffect::ParticleEffect(lua_Table * data, const osgParticle::ParticleEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleEffect::ParticleEffect(lua_Table * data, const osgParticle::ParticleEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleEffect::ParticleEffect function");
		}
		const osgParticle::ParticleEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleEffect::ParticleEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ParticleEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ParticleEffect::ParticleEffect
	static osgParticle::ParticleEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleEffect, cannot match any of the overloads for function ParticleEffect:\n  ParticleEffect(lua_Table *, bool)\n  ParticleEffect(lua_Table *, const osgParticle::ParticleEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::ParticleEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::className() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::ParticleEffect::setAutomaticSetup(bool flag)
	static int _bind_setAutomaticSetup(lua_State *L) {
		if (!_lg_typecheck_setAutomaticSetup(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setAutomaticSetup(bool flag) function, expected prototype:\nvoid osgParticle::ParticleEffect::setAutomaticSetup(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setAutomaticSetup(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutomaticSetup(flag);

		return 0;
	}

	// bool osgParticle::ParticleEffect::getAutomaticSetup() const
	static int _bind_getAutomaticSetup(lua_State *L) {
		if (!_lg_typecheck_getAutomaticSetup(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::getAutomaticSetup() const function, expected prototype:\nbool osgParticle::ParticleEffect::getAutomaticSetup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::getAutomaticSetup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAutomaticSetup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local)
	static int _bind_setUseLocalParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setUseLocalParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local) function, expected prototype:\nvoid osgParticle::ParticleEffect::setUseLocalParticleSystem(bool local)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool local=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setUseLocalParticleSystem(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseLocalParticleSystem(local);

		return 0;
	}

	// bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const
	static int _bind_getUseLocalParticleSystem(lua_State *L) {
		if (!_lg_typecheck_getUseLocalParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const function, expected prototype:\nbool osgParticle::ParticleEffect::getUseLocalParticleSystem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::getUseLocalParticleSystem() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseLocalParticleSystem();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::setTextureFileName(const std::string & filename)
	static int _bind_setTextureFileName(lua_State *L) {
		if (!_lg_typecheck_setTextureFileName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setTextureFileName(const std::string & filename) function, expected prototype:\nvoid osgParticle::ParticleEffect::setTextureFileName(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setTextureFileName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureFileName(filename);

		return 0;
	}

	// const std::string & osgParticle::ParticleEffect::getTextureFileName() const
	static int _bind_getTextureFileName(lua_State *L) {
		if (!_lg_typecheck_getTextureFileName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgParticle::ParticleEffect::getTextureFileName() const function, expected prototype:\nconst std::string & osgParticle::ParticleEffect::getTextureFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgParticle::ParticleEffect::getTextureFileName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getTextureFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setDefaultParticleTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::ParticleEffect::setDefaultParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setDefaultParticleTemplate(const osgParticle::Particle &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultParticleTemplate(p);

		return 0;
	}

	// const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const
	static int _bind_getDefaultParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_getDefaultParticleTemplate(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::ParticleEffect::getDefaultParticleTemplate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle* lret = &self->getDefaultParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osgParticle::ParticleEffect::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::ParticleEffect::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setPosition(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleEffect::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleEffect::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleEffect::setScale(float scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setScale(float scale) function, expected prototype:\nvoid osgParticle::ParticleEffect::setScale(float scale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float scale=(float)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setScale(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale(scale);

		return 0;
	}

	// float osgParticle::ParticleEffect::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::ParticleEffect::getScale() const function, expected prototype:\nfloat osgParticle::ParticleEffect::getScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::ParticleEffect::getScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setIntensity(float intensity)
	static int _bind_setIntensity(lua_State *L) {
		if (!_lg_typecheck_setIntensity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setIntensity(float intensity) function, expected prototype:\nvoid osgParticle::ParticleEffect::setIntensity(float intensity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float intensity=(float)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setIntensity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIntensity(intensity);

		return 0;
	}

	// float osgParticle::ParticleEffect::getIntensity() const
	static int _bind_getIntensity(lua_State *L) {
		if (!_lg_typecheck_getIntensity(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::ParticleEffect::getIntensity() const function, expected prototype:\nfloat osgParticle::ParticleEffect::getIntensity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::ParticleEffect::getIntensity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getIntensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setStartTime(double startTime)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setStartTime(double startTime) function, expected prototype:\nvoid osgParticle::ParticleEffect::setStartTime(double startTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double startTime=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setStartTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTime(startTime);

		return 0;
	}

	// double osgParticle::ParticleEffect::getStartTime() const
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getStartTime() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getStartTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getStartTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getStartTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setEmitterDuration(double duration)
	static int _bind_setEmitterDuration(lua_State *L) {
		if (!_lg_typecheck_setEmitterDuration(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setEmitterDuration(double duration) function, expected prototype:\nvoid osgParticle::ParticleEffect::setEmitterDuration(double duration)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double duration=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setEmitterDuration(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEmitterDuration(duration);

		return 0;
	}

	// double osgParticle::ParticleEffect::getEmitterDuration() const
	static int _bind_getEmitterDuration(lua_State *L) {
		if (!_lg_typecheck_getEmitterDuration(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getEmitterDuration() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getEmitterDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getEmitterDuration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getEmitterDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setParticleDuration(double duration)
	static int _bind_setParticleDuration(lua_State *L) {
		if (!_lg_typecheck_setParticleDuration(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setParticleDuration(double duration) function, expected prototype:\nvoid osgParticle::ParticleEffect::setParticleDuration(double duration)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double duration=(double)lua_tonumber(L,2);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setParticleDuration(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleDuration(duration);

		return 0;
	}

	// double osgParticle::ParticleEffect::getParticleDuration() const
	static int _bind_getParticleDuration(lua_State *L) {
		if (!_lg_typecheck_getParticleDuration(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleEffect::getParticleDuration() const function, expected prototype:\ndouble osgParticle::ParticleEffect::getParticleDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleEffect::getParticleDuration() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getParticleDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind)
	static int _bind_setWind(lua_State *L) {
		if (!_lg_typecheck_setWind(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind) function, expected prototype:\nvoid osgParticle::ParticleEffect::setWind(const osg::Vec3f & wind)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* wind_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !wind_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wind in osgParticle::ParticleEffect::setWind function");
		}
		const osg::Vec3f & wind=*wind_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setWind(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWind(wind);

		return 0;
	}

	// const osg::Vec3f & osgParticle::ParticleEffect::getWind() const
	static int _bind_getWind(lua_State *L) {
		if (!_lg_typecheck_getWind(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::ParticleEffect::getWind() const function, expected prototype:\nconst osg::Vec3f & osgParticle::ParticleEffect::getWind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::ParticleEffect::getWind() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getWind();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleEffect::areAllParticlesDead() const
	static int _bind_areAllParticlesDead(lua_State *L) {
		if (!_lg_typecheck_areAllParticlesDead(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::areAllParticlesDead() const function, expected prototype:\nbool osgParticle::ParticleEffect::areAllParticlesDead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::areAllParticlesDead() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->areAllParticlesDead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::ParticleEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::ParticleEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::ParticleEffect::getProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::ParticleEffect::getProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::ParticleEffect::getProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nvoid osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleSystem(ps);

		return 0;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem()
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleEffect::getParticleSystem() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem()\n  getParticleSystem()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setDefaults() function, expected prototype:\nvoid osgParticle::ParticleEffect::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::ParticleEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::ParticleEffect::setUpEmitterAndProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::setUpEmitterAndProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// void osgParticle::ParticleEffect::buildEffect()
	static int _bind_buildEffect(lua_State *L) {
		if (!_lg_typecheck_buildEffect(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::buildEffect() function, expected prototype:\nvoid osgParticle::ParticleEffect::buildEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::buildEffect(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buildEffect();

		return 0;
	}

	// void osgParticle::ParticleEffect::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::setName(name);

		return 0;
	}

	// void osgParticle::ParticleEffect::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ParticleEffect::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::computeDataVariance();

		return 0;
	}

	// void osgParticle::ParticleEffect::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ParticleEffect::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ParticleEffect::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ParticleEffect::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ParticleEffect::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ParticleEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ParticleEffect::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ParticleEffect::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ParticleEffect::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ParticleEffect::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ParticleEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osgParticle::ParticleEffect::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::ParticleEffect::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::ParticleEffect::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::ParticleEffect::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->ParticleEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::ParticleEffect::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::ParticleEffect::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::ParticleEffect::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::ParticleEffect::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->ParticleEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::ParticleEffect::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::ParticleEffect::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::ParticleEffect::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::ParticleEffect::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->ParticleEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::ParticleEffect::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::ParticleEffect::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::ParticleEffect::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::ParticleEffect::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->ParticleEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::ParticleEffect::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::ParticleEffect::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::ParticleEffect::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::ParticleEffect::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->ParticleEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::ParticleEffect::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::ParticleEffect::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::ParticleEffect::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::ParticleEffect::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->ParticleEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::ParticleEffect::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::ParticleEffect::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::ParticleEffect::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::ParticleEffect::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->ParticleEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::ParticleEffect::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::ParticleEffect::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::ParticleEffect::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::ParticleEffect::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->ParticleEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleEffect::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::ascend(nv);

		return 0;
	}

	// osg::Object * osgParticle::ParticleEffect::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleEffect::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleEffect::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleEffect::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleEffect::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleEffect::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleEffect::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ParticleEffect::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleEffect::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleEffect::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleEffect::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Group * osgParticle::ParticleEffect::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::ParticleEffect::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::ParticleEffect::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::ParticleEffect::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->ParticleEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::ParticleEffect::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::ParticleEffect::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::ParticleEffect::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::ParticleEffect::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->ParticleEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleEffect::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osgParticle::ParticleEffect::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleEffect::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::traverse(_arg1);

		return 0;
	}

	// bool osgParticle::ParticleEffect::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_addChild(osg::Node * child) function, expected prototype:\nbool osgParticle::ParticleEffect::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleEffect::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osgParticle::ParticleEffect::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osgParticle::ParticleEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osgParticle::ParticleEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleEffect::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osgParticle::ParticleEffect::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ParticleEffect::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ParticleEffect::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ParticleEffect::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleEffect::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleEffect::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleEffect::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->ParticleEffect::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// const char * osgParticle::ParticleEffect::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleEffect::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleEffect::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleEffect::base_className() const function, expected prototype:\nconst char * osgParticle::ParticleEffect::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleEffect::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleEffect::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleEffect::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleEffect::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleEffect::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleEffect::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleEffect::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleEffect::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleEffect::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleEffect::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::accept(nv);

		return 0;
	}

	// void osgParticle::ParticleEffect::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_setDefaults() function, expected prototype:\nvoid osgParticle::ParticleEffect::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::setDefaults();

		return 0;
	}

	// void osgParticle::ParticleEffect::base_buildEffect()
	static int _bind_base_buildEffect(lua_State *L) {
		if (!_lg_typecheck_base_buildEffect(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleEffect::base_buildEffect() function, expected prototype:\nvoid osgParticle::ParticleEffect::base_buildEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleEffect::base_buildEffect(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleEffect::buildEffect();

		return 0;
	}


	// Operator binds:

};

osgParticle::ParticleEffect* LunaTraits< osgParticle::ParticleEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleEffect::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter()
	// const osgParticle::Emitter * osgParticle::ParticleEffect::getEmitter() const
	// osgParticle::Program * osgParticle::ParticleEffect::getProgram()
	// const osgParticle::Program * osgParticle::ParticleEffect::getProgram() const
	// void osgParticle::ParticleEffect::setUpEmitterAndProgram()
}

void LunaTraits< osgParticle::ParticleEffect >::_bind_dtor(osgParticle::ParticleEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleEffect >::className[] = "ParticleEffect";
const char LunaTraits< osgParticle::ParticleEffect >::fullName[] = "osgParticle::ParticleEffect";
const char LunaTraits< osgParticle::ParticleEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleEffect >::parents[] = {"osg.Group", 0};
const int LunaTraits< osgParticle::ParticleEffect >::hash = 66238168;
const int LunaTraits< osgParticle::ParticleEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleEffect >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_ParticleEffect::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleEffect::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleEffect::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_ParticleEffect::_bind_accept},
	{"setAutomaticSetup", &luna_wrapper_osgParticle_ParticleEffect::_bind_setAutomaticSetup},
	{"getAutomaticSetup", &luna_wrapper_osgParticle_ParticleEffect::_bind_getAutomaticSetup},
	{"setUseLocalParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_setUseLocalParticleSystem},
	{"getUseLocalParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_getUseLocalParticleSystem},
	{"setTextureFileName", &luna_wrapper_osgParticle_ParticleEffect::_bind_setTextureFileName},
	{"getTextureFileName", &luna_wrapper_osgParticle_ParticleEffect::_bind_getTextureFileName},
	{"setDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleEffect::_bind_setDefaultParticleTemplate},
	{"getDefaultParticleTemplate", &luna_wrapper_osgParticle_ParticleEffect::_bind_getDefaultParticleTemplate},
	{"setPosition", &luna_wrapper_osgParticle_ParticleEffect::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgParticle_ParticleEffect::_bind_getPosition},
	{"setScale", &luna_wrapper_osgParticle_ParticleEffect::_bind_setScale},
	{"getScale", &luna_wrapper_osgParticle_ParticleEffect::_bind_getScale},
	{"setIntensity", &luna_wrapper_osgParticle_ParticleEffect::_bind_setIntensity},
	{"getIntensity", &luna_wrapper_osgParticle_ParticleEffect::_bind_getIntensity},
	{"setStartTime", &luna_wrapper_osgParticle_ParticleEffect::_bind_setStartTime},
	{"getStartTime", &luna_wrapper_osgParticle_ParticleEffect::_bind_getStartTime},
	{"setEmitterDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_setEmitterDuration},
	{"getEmitterDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_getEmitterDuration},
	{"setParticleDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_setParticleDuration},
	{"getParticleDuration", &luna_wrapper_osgParticle_ParticleEffect::_bind_getParticleDuration},
	{"setWind", &luna_wrapper_osgParticle_ParticleEffect::_bind_setWind},
	{"getWind", &luna_wrapper_osgParticle_ParticleEffect::_bind_getWind},
	{"areAllParticlesDead", &luna_wrapper_osgParticle_ParticleEffect::_bind_areAllParticlesDead},
	{"getEmitter", &luna_wrapper_osgParticle_ParticleEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_ParticleEffect::_bind_getProgram},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_setParticleSystem},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleEffect::_bind_getParticleSystem},
	{"setDefaults", &luna_wrapper_osgParticle_ParticleEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_ParticleEffect::_bind_setUpEmitterAndProgram},
	{"buildEffect", &luna_wrapper_osgParticle_ParticleEffect::_bind_buildEffect},
	{"base_setName", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_ascend},
	{"base_cloneType", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_clone},
	{"base_asGroup", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_computeBound},
	{"base_libraryName", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_isSameKindAs},
	{"base_accept", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_accept},
	{"base_setDefaults", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_setDefaults},
	{"base_buildEffect", &luna_wrapper_osgParticle_ParticleEffect::_bind_base_buildEffect},
	{"fromVoid", &luna_wrapper_osgParticle_ParticleEffect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ParticleEffect::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ParticleEffect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleEffect >::enumValues[] = {
	{0,0}
};


