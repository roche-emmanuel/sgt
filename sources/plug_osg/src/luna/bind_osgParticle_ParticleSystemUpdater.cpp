#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleSystemUpdater.h>

class luna_wrapper_osgParticle_ParticleSystemUpdater {
public:
	typedef Luna< osgParticle::ParticleSystemUpdater > luna_t;

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

		osgParticle::ParticleSystemUpdater* self= (osgParticle::ParticleSystemUpdater*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ParticleSystemUpdater >::push(L,self,false);
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
		//osgParticle::ParticleSystemUpdater* ptr= dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ParticleSystemUpdater* ptr= luna_caster< osg::Referenced, osgParticle::ParticleSystemUpdater >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleSystemUpdater >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_addParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeParticleSystem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParticleSystems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystemIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_addParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeParticleSystem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater()
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater() function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::ParticleSystemUpdater();
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystemUpdater* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osgParticle::ParticleSystemUpdater & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ParticleSystemUpdater(copy, copyop);
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ParticleSystemUpdater(L,NULL);
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystemUpdater* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osgParticle::ParticleSystemUpdater & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ParticleSystemUpdater(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::ParticleSystemUpdater
	static osgParticle::ParticleSystemUpdater* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ParticleSystemUpdater, cannot match any of the overloads for function ParticleSystemUpdater:\n  ParticleSystemUpdater()\n  ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater &, const osg::CopyOp &)\n  ParticleSystemUpdater(lua_Table *)\n  ParticleSystemUpdater(lua_Table *, const osgParticle::ParticleSystemUpdater &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::className() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystemUpdater::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_addParticleSystem(lua_State *L) {
		if (!_lg_typecheck_addParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_removeParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeParticleSystem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)
	static int _bind_removeParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeParticleSystem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numParticleSystemsToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeParticleSystem(i, numParticleSystemsToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::removeParticleSystem
	static int _bind_removeParticleSystem(lua_State *L) {
		if (_lg_typecheck_removeParticleSystem_overload_1(L)) return _bind_removeParticleSystem_overload_1(L);
		if (_lg_typecheck_removeParticleSystem_overload_2(L)) return _bind_removeParticleSystem_overload_2(L);

		luaL_error(L, "error in function removeParticleSystem, cannot match any of the overloads for function removeParticleSystem:\n  removeParticleSystem(osgParticle::ParticleSystem *)\n  removeParticleSystem(unsigned int, unsigned int)\n");
		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)
	static int _bind_replaceParticleSystem(lua_State *L) {
		if (!_lg_typecheck_replaceParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* origPS=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		osgParticle::ParticleSystem* newPS=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,3));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem *, osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->replaceParticleSystem(origPS, newPS);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,3));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int, osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setParticleSystem(i, ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const
	static int _bind_getNumParticleSystems(lua_State *L) {
		if (!_lg_typecheck_getNumParticleSystems(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const function, expected prototype:\nunsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParticleSystems();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i)
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem(unsigned int)\n  getParticleSystem(unsigned int)\n");
		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const
	static int _bind_containsParticleSystem(lua_State *L) {
		if (!_lg_typecheck_containsParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const
	static int _bind_getParticleSystemIndex(lua_State *L) {
		if (!_lg_typecheck_getParticleSystemIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const function, expected prototype:\nunsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getParticleSystemIndex(ps);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystemUpdater::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::setName(name);

		return 0;
	}

	// void osgParticle::ParticleSystemUpdater::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::computeDataVariance();

		return 0;
	}

	// void osgParticle::ParticleSystemUpdater::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ParticleSystemUpdater::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ParticleSystemUpdater::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ParticleSystemUpdater::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::ParticleSystemUpdater::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->ParticleSystemUpdater::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::ParticleSystemUpdater::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->ParticleSystemUpdater::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->ParticleSystemUpdater::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::ParticleSystemUpdater::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->ParticleSystemUpdater::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->ParticleSystemUpdater::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::ParticleSystemUpdater::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->ParticleSystemUpdater::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->ParticleSystemUpdater::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::ParticleSystemUpdater::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->ParticleSystemUpdater::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->ParticleSystemUpdater::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::ParticleSystemUpdater::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->ParticleSystemUpdater::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::ParticleSystemUpdater::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystemUpdater::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::ascend(nv);

		return 0;
	}

	// void osgParticle::ParticleSystemUpdater::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ParticleSystemUpdater::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgParticle::ParticleSystemUpdater::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleSystemUpdater::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystemUpdater::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleSystemUpdater::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::base_className() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleSystemUpdater::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleSystemUpdater::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystemUpdater::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::accept(nv);

		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::base_addParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_base_addParticleSystem(lua_State *L) {
		if (!_lg_typecheck_base_addParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_addParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_addParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_addParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::addParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_base_removeParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_removeParticleSystem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::removeParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)
	static int _bind_base_removeParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_removeParticleSystem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numParticleSystemsToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_removeParticleSystem(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::removeParticleSystem(i, numParticleSystemsToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::base_removeParticleSystem
	static int _bind_base_removeParticleSystem(lua_State *L) {
		if (_lg_typecheck_base_removeParticleSystem_overload_1(L)) return _bind_base_removeParticleSystem_overload_1(L);
		if (_lg_typecheck_base_removeParticleSystem_overload_2(L)) return _bind_base_removeParticleSystem_overload_2(L);

		luaL_error(L, "error in function base_removeParticleSystem, cannot match any of the overloads for function base_removeParticleSystem:\n  base_removeParticleSystem(osgParticle::ParticleSystem *)\n  base_removeParticleSystem(unsigned int, unsigned int)\n");
		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::base_replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)
	static int _bind_base_replaceParticleSystem(lua_State *L) {
		if (!_lg_typecheck_base_replaceParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* origPS=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));
		osgParticle::ParticleSystem* newPS=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,3));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_replaceParticleSystem(osgParticle::ParticleSystem *, osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::replaceParticleSystem(origPS, newPS);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::base_setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)
	static int _bind_base_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_base_setParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::base_setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::base_setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,3));

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::base_setParticleSystem(unsigned int, osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleSystemUpdater::setParticleSystem(i, ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystemUpdater::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleSystemUpdater::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ParticleSystemUpdater::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleSystemUpdater::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleSystemUpdater::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleSystemUpdater* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystemUpdater >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleSystemUpdater::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->ParticleSystemUpdater::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleSystemUpdater* LunaTraits< osgParticle::ParticleSystemUpdater >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_ctor(L);
}

void LunaTraits< osgParticle::ParticleSystemUpdater >::_bind_dtor(osgParticle::ParticleSystemUpdater* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleSystemUpdater >::className[] = "ParticleSystemUpdater";
const char LunaTraits< osgParticle::ParticleSystemUpdater >::fullName[] = "osgParticle::ParticleSystemUpdater";
const char LunaTraits< osgParticle::ParticleSystemUpdater >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleSystemUpdater >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::ParticleSystemUpdater >::hash = 16157989;
const int LunaTraits< osgParticle::ParticleSystemUpdater >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleSystemUpdater >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_accept},
	{"addParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_addParticleSystem},
	{"removeParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_removeParticleSystem},
	{"replaceParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_replaceParticleSystem},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_setParticleSystem},
	{"getNumParticleSystems", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getNumParticleSystems},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getParticleSystem},
	{"containsParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_containsParticleSystem},
	{"getParticleSystemIndex", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getParticleSystemIndex},
	{"traverse", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_traverse},
	{"computeBound", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_computeBound},
	{"base_setName", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_ascend},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_accept},
	{"base_addParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_addParticleSystem},
	{"base_removeParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_removeParticleSystem},
	{"base_replaceParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_replaceParticleSystem},
	{"base_setParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_setParticleSystem},
	{"base_traverse", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleSystemUpdater >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleSystemUpdater::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleSystemUpdater >::enumValues[] = {
	{0,0}
};


