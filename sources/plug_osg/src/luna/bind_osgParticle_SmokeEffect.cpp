#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_SmokeEffect.h>

class luna_wrapper_osgParticle_SmokeEffect {
public:
	typedef Luna< osgParticle::SmokeEffect > luna_t;

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

		osgParticle::SmokeEffect* self= (osgParticle::SmokeEffect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::SmokeEffect >::push(L,self,false);
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
		//osgParticle::SmokeEffect* ptr= dynamic_cast< osgParticle::SmokeEffect* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::SmokeEffect* ptr= luna_caster< osg::Referenced, osgParticle::SmokeEffect >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SmokeEffect >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,2))) ) return false;
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
	// osgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true)
	static osgParticle::SmokeEffect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(bool automaticSetup = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		return new osgParticle::SmokeEffect(automaticSetup);
	}

	// osgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeEffect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;
		float intensity=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new osgParticle::SmokeEffect(position, scale, intensity);
	}

	// osgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeEffect* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osgParticle::SmokeEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SmokeEffect(copy, copyop);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true)
	static osgParticle::SmokeEffect* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, bool automaticSetup = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool automaticSetup=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, automaticSetup);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)
	static osgParticle::SmokeEffect* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osg::Vec3f & position, float scale = 1.0f, float intensity = 1.0f)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::Vec3f & position=*position_ptr;
		float scale=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;
		float intensity=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, position, scale, intensity);
	}

	// osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SmokeEffect* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SmokeEffect::SmokeEffect(lua_Table * data, const osgParticle::SmokeEffect & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::SmokeEffect* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osgParticle::SmokeEffect & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::SmokeEffect function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_SmokeEffect(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::SmokeEffect::SmokeEffect
	static osgParticle::SmokeEffect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function SmokeEffect, cannot match any of the overloads for function SmokeEffect:\n  SmokeEffect(bool)\n  SmokeEffect(const osg::Vec3f &, float, float)\n  SmokeEffect(const osgParticle::SmokeEffect &, const osg::CopyOp &)\n  SmokeEffect(lua_Table *, bool)\n  SmokeEffect(lua_Table *, const osg::Vec3f &, float, float)\n  SmokeEffect(lua_Table *, const osgParticle::SmokeEffect &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SmokeEffect::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SmokeEffect::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::className() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::libraryName() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeEffect::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeEffect::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osgParticle::SmokeEffect::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::setDefaults() function, expected prototype:\nvoid osgParticle::SmokeEffect::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osgParticle::SmokeEffect::setUpEmitterAndProgram()
	static int _bind_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_setUpEmitterAndProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::SmokeEffect::setUpEmitterAndProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::setUpEmitterAndProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter()
	static int _bind_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::SmokeEffect::getEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const
	static int _bind_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEmitter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::SmokeEffect::getEmitter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Emitter * lret = self->getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::getEmitter
	static int _bind_getEmitter(lua_State *L) {
		if (_lg_typecheck_getEmitter_overload_1(L)) return _bind_getEmitter_overload_1(L);
		if (_lg_typecheck_getEmitter_overload_2(L)) return _bind_getEmitter_overload_2(L);

		luaL_error(L, "error in function getEmitter, cannot match any of the overloads for function getEmitter:\n  getEmitter()\n  getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::SmokeEffect::getProgram()
	static int _bind_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::SmokeEffect::getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::SmokeEffect::getProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::SmokeEffect::getProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const
	static int _bind_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::SmokeEffect::getProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::SmokeEffect::getProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Program * lret = self->getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::getProgram
	static int _bind_getProgram(lua_State *L) {
		if (_lg_typecheck_getProgram_overload_1(L)) return _bind_getProgram_overload_1(L);
		if (_lg_typecheck_getProgram_overload_2(L)) return _bind_getProgram_overload_2(L);

		luaL_error(L, "error in function getProgram, cannot match any of the overloads for function getProgram:\n  getProgram()\n  getProgram()\n");
		return 0;
	}

	// void osgParticle::SmokeEffect::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::setName(name);

		return 0;
	}

	// void osgParticle::SmokeEffect::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::SmokeEffect::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::computeDataVariance();

		return 0;
	}

	// void osgParticle::SmokeEffect::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::SmokeEffect::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::SmokeEffect::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::SmokeEffect::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::SmokeEffect::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SmokeEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::SmokeEffect::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::SmokeEffect::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::SmokeEffect::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::SmokeEffect::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SmokeEffect::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osgParticle::SmokeEffect::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::SmokeEffect::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::SmokeEffect::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::SmokeEffect::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->SmokeEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::SmokeEffect::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::SmokeEffect::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::SmokeEffect::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::SmokeEffect::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->SmokeEffect::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::SmokeEffect::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::SmokeEffect::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::SmokeEffect::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::SmokeEffect::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->SmokeEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::SmokeEffect::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::SmokeEffect::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::SmokeEffect::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::SmokeEffect::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->SmokeEffect::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::SmokeEffect::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::SmokeEffect::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::SmokeEffect::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::SmokeEffect::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->SmokeEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::SmokeEffect::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::SmokeEffect::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::SmokeEffect::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::SmokeEffect::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->SmokeEffect::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::SmokeEffect::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::SmokeEffect::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::SmokeEffect::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::SmokeEffect::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->SmokeEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::SmokeEffect::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::SmokeEffect::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::SmokeEffect::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::SmokeEffect::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->SmokeEffect::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::SmokeEffect::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeEffect::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::ascend(nv);

		return 0;
	}

	// osg::Group * osgParticle::SmokeEffect::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::SmokeEffect::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::SmokeEffect::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::SmokeEffect::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->SmokeEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::SmokeEffect::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::SmokeEffect::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::SmokeEffect::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::SmokeEffect::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->SmokeEffect::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osgParticle::SmokeEffect::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SmokeEffect::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::traverse(_arg1);

		return 0;
	}

	// bool osgParticle::SmokeEffect::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_addChild(osg::Node * child) function, expected prototype:\nbool osgParticle::SmokeEffect::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeEffect::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osgParticle::SmokeEffect::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osgParticle::SmokeEffect::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osgParticle::SmokeEffect::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::SmokeEffect::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osgParticle::SmokeEffect::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::SmokeEffect::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::SmokeEffect::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::SmokeEffect::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::SmokeEffect::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::SmokeEffect::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::SmokeEffect::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::SmokeEffect::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->SmokeEffect::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::SmokeEffect::base_buildEffect()
	static int _bind_base_buildEffect(lua_State *L) {
		if (!_lg_typecheck_base_buildEffect(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_buildEffect() function, expected prototype:\nvoid osgParticle::SmokeEffect::base_buildEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_buildEffect(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::buildEffect();

		return 0;
	}

	// osg::Object * osgParticle::SmokeEffect::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SmokeEffect::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SmokeEffect::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SmokeEffect::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::SmokeEffect::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SmokeEffect::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SmokeEffect::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SmokeEffect::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SmokeEffect::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::SmokeEffect::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SmokeEffect::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::SmokeEffect::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SmokeEffect::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::base_className() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SmokeEffect::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SmokeEffect::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SmokeEffect::base_libraryName() const function, expected prototype:\nconst char * osgParticle::SmokeEffect::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::SmokeEffect::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SmokeEffect::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SmokeEffect::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::SmokeEffect::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::SmokeEffect::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::accept(nv);

		return 0;
	}

	// void osgParticle::SmokeEffect::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_setDefaults() function, expected prototype:\nvoid osgParticle::SmokeEffect::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::setDefaults();

		return 0;
	}

	// void osgParticle::SmokeEffect::base_setUpEmitterAndProgram()
	static int _bind_base_setUpEmitterAndProgram(lua_State *L) {
		if (!_lg_typecheck_base_setUpEmitterAndProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SmokeEffect::base_setUpEmitterAndProgram() function, expected prototype:\nvoid osgParticle::SmokeEffect::base_setUpEmitterAndProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SmokeEffect::base_setUpEmitterAndProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SmokeEffect::setUpEmitterAndProgram();

		return 0;
	}

	// osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter()
	static int _bind_base_getEmitter_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter() function, expected prototype:\nosgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Emitter * lret = self->SmokeEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter() const
	static int _bind_base_getEmitter_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getEmitter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter() const function, expected prototype:\nconst osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Emitter * osgParticle::SmokeEffect::base_getEmitter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Emitter * lret = self->SmokeEffect::getEmitter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Emitter >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_getEmitter
	static int _bind_base_getEmitter(lua_State *L) {
		if (_lg_typecheck_base_getEmitter_overload_1(L)) return _bind_base_getEmitter_overload_1(L);
		if (_lg_typecheck_base_getEmitter_overload_2(L)) return _bind_base_getEmitter_overload_2(L);

		luaL_error(L, "error in function base_getEmitter, cannot match any of the overloads for function base_getEmitter:\n  base_getEmitter()\n  base_getEmitter()\n");
		return 0;
	}

	// osgParticle::Program * osgParticle::SmokeEffect::base_getProgram()
	static int _bind_base_getProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Program * osgParticle::SmokeEffect::base_getProgram() function, expected prototype:\nosgParticle::Program * osgParticle::SmokeEffect::base_getProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Program * osgParticle::SmokeEffect::base_getProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Program * lret = self->SmokeEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Program * osgParticle::SmokeEffect::base_getProgram() const
	static int _bind_base_getProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Program * osgParticle::SmokeEffect::base_getProgram() const function, expected prototype:\nconst osgParticle::Program * osgParticle::SmokeEffect::base_getProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::SmokeEffect* self=Luna< osg::Referenced >::checkSubType< osgParticle::SmokeEffect >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Program * osgParticle::SmokeEffect::base_getProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Program * lret = self->SmokeEffect::getProgram();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Program >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::SmokeEffect::base_getProgram
	static int _bind_base_getProgram(lua_State *L) {
		if (_lg_typecheck_base_getProgram_overload_1(L)) return _bind_base_getProgram_overload_1(L);
		if (_lg_typecheck_base_getProgram_overload_2(L)) return _bind_base_getProgram_overload_2(L);

		luaL_error(L, "error in function base_getProgram, cannot match any of the overloads for function base_getProgram:\n  base_getProgram()\n  base_getProgram()\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::SmokeEffect* LunaTraits< osgParticle::SmokeEffect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SmokeEffect::_bind_ctor(L);
}

void LunaTraits< osgParticle::SmokeEffect >::_bind_dtor(osgParticle::SmokeEffect* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SmokeEffect >::className[] = "SmokeEffect";
const char LunaTraits< osgParticle::SmokeEffect >::fullName[] = "osgParticle::SmokeEffect";
const char LunaTraits< osgParticle::SmokeEffect >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SmokeEffect >::parents[] = {"osgParticle.ParticleEffect", 0};
const int LunaTraits< osgParticle::SmokeEffect >::hash = 25401908;
const int LunaTraits< osgParticle::SmokeEffect >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SmokeEffect >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SmokeEffect::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SmokeEffect::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SmokeEffect::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_SmokeEffect::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_SmokeEffect::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_SmokeEffect::_bind_accept},
	{"setDefaults", &luna_wrapper_osgParticle_SmokeEffect::_bind_setDefaults},
	{"setUpEmitterAndProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_setUpEmitterAndProgram},
	{"getEmitter", &luna_wrapper_osgParticle_SmokeEffect::_bind_getEmitter},
	{"getProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_getProgram},
	{"base_setName", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_computeBound},
	{"base_buildEffect", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_buildEffect},
	{"base_cloneType", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_accept},
	{"base_setDefaults", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setDefaults},
	{"base_setUpEmitterAndProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_setUpEmitterAndProgram},
	{"base_getEmitter", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_getEmitter},
	{"base_getProgram", &luna_wrapper_osgParticle_SmokeEffect::_bind_base_getProgram},
	{"fromVoid", &luna_wrapper_osgParticle_SmokeEffect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_SmokeEffect::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_SmokeEffect::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SmokeEffect >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SmokeEffect::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SmokeEffect >::enumValues[] = {
	{0,0}
};


