#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SmokeTrailEffect.h>

class luna_wrapper_osgParticle_SmokeTrailEffect {
public:
	typedef Luna< osgParticle::SmokeTrailEffect > luna_t;

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

		osgParticle::SmokeTrailEffect* self= (osgParticle::SmokeTrailEffect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::SmokeTrailEffect >::push(L,self,false);
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
		//osgParticle::SmokeTrailEffect* ptr= dynamic_cast< osgParticle::SmokeTrailEffect* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::SmokeTrailEffect* ptr= luna_caster< osg::Referenced, osgParticle::SmokeTrailEffect >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SmokeTrailEffect >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpEmitterAndProgram(lua_State *L) {
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

	inline static bool _lg_typecheck_base_buildEffect(lua_State *L) {
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

	inline static bool _lg_typecheck_base_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUpEmitterAndProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEmitter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEmitter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(bool automaticSetup = true)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(bool automaticSetup = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		return new osgParticle::SmokeTrailEffect(automaticSetup);
	}

	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float intensity=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new osgParticle::SmokeTrailEffect(position, scale, intensity);
	}

	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeTrailEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osgParticle::SmokeTrailEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SmokeTrailEffect(copy, copyop);
	}

	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, bool automaticSetup = true)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, bool automaticSetup = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wrapper_osgParticle_SmokeTrailEffect(L,NULL, automaticSetup);
	}

	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;
		float intensity=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;

		return new wrapper_osgParticle_SmokeTrailEffect(L,NULL, position, scale, intensity);
	}

	// osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeTrailEffect* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeTrailEffect::SmokeTrailEffect(lua_Table * data, const osgParticle::SmokeTrailEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeTrailEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osgParticle::SmokeTrailEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeTrailEffect::SmokeTrailEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SmokeTrailEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SmokeTrailEffect::SmokeTrailEffect
	static osgParticle::SmokeTrailEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function SmokeTrailEffect, cannot match any of the overloads for function SmokeTrailEffect:\n  SmokeTrailEffect(bool)\n  SmokeTrailEffect(const osg::Vec3f &, float, float)\n  SmokeTrailEffect(const osgParticle::SmokeTrailEffect &, const osg::CopyOp &)\n  SmokeTrailEffect(lua_Table *, bool)\n  SmokeTrailEffect(lua_Table *, const osg::Vec3f &, float, float)\n  SmokeTrailEffect(lua_Table *, const osgParticle::SmokeTrailEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SmokeTrailEffect::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeTrailEffect::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SmokeTrailEffect::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeTrailEffect::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SmokeTrailEffect::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeTrailEffect::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::SmokeTrailEffect::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeTrailEffect::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeTrailEffect::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SmokeTrailEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SmokeTrailEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeTrailEffect::className() const function, expected prototype:\nconst char * osgParticle::SmokeTrailEffect::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeTrailEffect::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SmokeTrailEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeTrailEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::SmokeTrailEffect::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeTrailEffect::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SmokeTrailEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeTrailEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::setDefaults() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::setUpEmitterAndProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::setUpEmitterAndProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::SmokeTrailEffect::getEmitter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::SmokeTrailEffect::getProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::SmokeTrailEffect::getProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::setName(name);

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::computeDataVariance();

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SmokeTrailEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::SmokeTrailEffect::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SmokeTrailEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::SmokeTrailEffect::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->SmokeTrailEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::SmokeTrailEffect::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->SmokeTrailEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::SmokeTrailEffect::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->SmokeTrailEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::SmokeTrailEffect::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->SmokeTrailEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->SmokeTrailEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::SmokeTrailEffect::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->SmokeTrailEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::SmokeTrailEffect::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->SmokeTrailEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::SmokeTrailEffect::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->SmokeTrailEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeTrailEffect::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::ascend(nv);

		return 0;
	}

	// osg::Group * osgParticle::SmokeTrailEffect::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::SmokeTrailEffect::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::SmokeTrailEffect::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::SmokeTrailEffect::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->SmokeTrailEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::SmokeTrailEffect::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::SmokeTrailEffect::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::SmokeTrailEffect::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::SmokeTrailEffect::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->SmokeTrailEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SmokeTrailEffect::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::traverse(_arg1);

		return 0;
	}

	// bool osgParticle::SmokeTrailEffect::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_addChild(osg::Node * child) function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::SmokeTrailEffect::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::SmokeTrailEffect::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::SmokeTrailEffect::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::SmokeTrailEffect::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::SmokeTrailEffect::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->SmokeTrailEffect::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::SmokeTrailEffect::base_buildEffect()
	static int _bind_base_buildEffect(lua_State *L) {
		if (!_lg_typecheck_base_buildEffect(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_buildEffect() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_buildEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_buildEffect(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::buildEffect();

		return 0;
	}

	// osg::Object * osgParticle::SmokeTrailEffect::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeTrailEffect::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::SmokeTrailEffect::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeTrailEffect::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SmokeTrailEffect::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SmokeTrailEffect::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeTrailEffect::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::SmokeTrailEffect::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeTrailEffect::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeTrailEffect::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SmokeTrailEffect::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SmokeTrailEffect::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeTrailEffect::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SmokeTrailEffect::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeTrailEffect::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeTrailEffect::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SmokeTrailEffect::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeTrailEffect::base_className() const function, expected prototype:\nconst char * osgParticle::SmokeTrailEffect::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeTrailEffect::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SmokeTrailEffect::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SmokeTrailEffect::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeTrailEffect::base_libraryName() const function, expected prototype:\nconst char * osgParticle::SmokeTrailEffect::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeTrailEffect::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SmokeTrailEffect::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SmokeTrailEffect::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeTrailEffect::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::accept(nv);

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_setDefaults() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::setDefaults();

		return 0;
	}

	// void osgParticle::SmokeTrailEffect::base_setUpEmitterAndProgram()
	static int _bind_base_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_base_setUpEmitterAndProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeTrailEffect::base_setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::SmokeTrailEffect::base_setUpEmitterAndProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeTrailEffect::base_setUpEmitterAndProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeTrailEffect::setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter()
	static int _bind_base_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Emitter * lret = self->SmokeTrailEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter() const
	static int _bind_base_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::SmokeTrailEffect::base_getEmitter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Emitter * lret = self->SmokeTrailEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_getEmitter
	static int _bind_base_getEmitter(lua_State *L) {
		if (_lg_typecheck_base_getEmitter_overload_1(L)) return _bind_base_getEmitter_overload_1(L);
		if (_lg_typecheck_base_getEmitter_overload_2(L)) return _bind_base_getEmitter_overload_2(L);

		luaL_error(L, "error in function base_getEmitter, cannot match any of the overloads for function base_getEmitter:\n  base_getEmitter()\n  base_getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram()
	static int _bind_base_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Program * lret = self->SmokeTrailEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram() const
	static int _bind_base_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeTrailEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeTrailEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::SmokeTrailEffect::base_getProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Program * lret = self->SmokeTrailEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeTrailEffect::base_getProgram
	static int _bind_base_getProgram(lua_State *L) {
		if (_lg_typecheck_base_getProgram_overload_1(L)) return _bind_base_getProgram_overload_1(L);
		if (_lg_typecheck_base_getProgram_overload_2(L)) return _bind_base_getProgram_overload_2(L);

		luaL_error(L, "error in function base_getProgram, cannot match any of the overloads for function base_getProgram:\n  base_getProgram()\n  base_getProgram()\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::SmokeTrailEffect* LunaTraits< osgParticle::SmokeTrailEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SmokeTrailEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::SmokeTrailEffect >::_bind_dtor(osgParticle::SmokeTrailEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SmokeTrailEffect >::className[] = "SmokeTrailEffect";
const char LunaTraits< osgParticle::SmokeTrailEffect >::fullName[] = "osgParticle::SmokeTrailEffect";
const char LunaTraits< osgParticle::SmokeTrailEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SmokeTrailEffect >::parents[] = {"osgParticle.ParticleEffect", 0};
const int LunaTraits< osgParticle::SmokeTrailEffect >::hash = 45486561;
const int LunaTraits< osgParticle::SmokeTrailEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SmokeTrailEffect >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_accept},
	{"setDefaults", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_setUpEmitterAndProgram},
	{"getEmitter", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_getProgram},
	{"base_setName", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_computeBound},
	{"base_buildEffect", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_buildEffect},
	{"base_cloneType", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_accept},
	{"base_setDefaults", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setDefaults},
	{"base_setUpEmitterAndProgram", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_setUpEmitterAndProgram},
	{"base_getEmitter", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_getEmitter},
	{"base_getProgram", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_base_getProgram},
	{"fromVoid", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_SmokeTrailEffect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SmokeTrailEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SmokeTrailEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SmokeTrailEffect >::enumValues[] = {
	{0,0}
};


