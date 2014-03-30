#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleProcessor.h>

class luna_wrapper_osgParticle_ParticleProcessor {
public:
	typedef Luna< osgParticle::ParticleProcessor > luna_t;

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

		osgParticle::ParticleProcessor* self= (osgParticle::ParticleProcessor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::ParticleProcessor >::push(L,self,false);
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
		//osgParticle::ParticleProcessor* ptr= dynamic_cast< osgParticle::ParticleProcessor* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ParticleProcessor* ptr= luna_caster< osg::Referenced, osgParticle::ParticleProcessor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleProcessor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEndless(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEndless(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEndless(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLifeTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLifeTime(lua_State *L) {
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

	inline static bool _lg_typecheck_setCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResetTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResetTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAlive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transformLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotateLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformWorldToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotateWorldToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data)
	static osgParticle::ParticleProcessor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data) function, expected prototype:\nosgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_ParticleProcessor(L,NULL);
	}

	// osgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data, const osgParticle::ParticleProcessor & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleProcessor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data, const osgParticle::ParticleProcessor & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleProcessor::ParticleProcessor(lua_Table * data, const osgParticle::ParticleProcessor & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleProcessor* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleProcessor::ParticleProcessor function");
		}
		const osgParticle::ParticleProcessor & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleProcessor::ParticleProcessor function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ParticleProcessor(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ParticleProcessor::ParticleProcessor
	static osgParticle::ParticleProcessor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleProcessor, cannot match any of the overloads for function ParticleProcessor:\n  ParticleProcessor(lua_Table *)\n  ParticleProcessor(lua_Table *, const osgParticle::ParticleProcessor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::ParticleProcessor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleProcessor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::className() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleProcessor::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleProcessor::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const function, expected prototype:\nosgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleProcessor::ReferenceFrame osgParticle::ParticleProcessor::getReferenceFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleProcessor::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame rf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleProcessor::ReferenceFrame rf=(osgParticle::ParticleProcessor::ReferenceFrame)lua_tointeger(L,2);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setReferenceFrame(osgParticle::ParticleProcessor::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// bool osgParticle::ParticleProcessor::getEnabled() const
	static int _bind_getEnabled(lua_State *L) {
		if (!_lg_typecheck_getEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::getEnabled() const function, expected prototype:\nbool osgParticle::ParticleProcessor::getEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::getEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isEnabled() const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isEnabled() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setEnabled(bool v)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setEnabled(bool v) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setEnabled(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEnabled(v);

		return 0;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem()
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleProcessor::getParticleSystem() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem()\n  getParticleSystem()\n");
		return 0;
	}

	// void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleSystem(ps);

		return 0;
	}

	// void osgParticle::ParticleProcessor::setEndless(bool type)
	static int _bind_setEndless(lua_State *L) {
		if (!_lg_typecheck_setEndless(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setEndless(bool type) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setEndless(bool type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool type=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setEndless(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEndless(type);

		return 0;
	}

	// bool osgParticle::ParticleProcessor::getEndless() const
	static int _bind_getEndless(lua_State *L) {
		if (!_lg_typecheck_getEndless(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::getEndless() const function, expected prototype:\nbool osgParticle::ParticleProcessor::getEndless() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::getEndless() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getEndless();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isEndless() const
	static int _bind_isEndless(lua_State *L) {
		if (!_lg_typecheck_isEndless(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isEndless() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isEndless() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isEndless() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEndless();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setLifeTime(double t)
	static int _bind_setLifeTime(lua_State *L) {
		if (!_lg_typecheck_setLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setLifeTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setLifeTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setLifeTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLifeTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getLifeTime() const
	static int _bind_getLifeTime(lua_State *L) {
		if (!_lg_typecheck_getLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getLifeTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getLifeTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getLifeTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLifeTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setStartTime(double t)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setStartTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setStartTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setStartTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getStartTime() const
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getStartTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getStartTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getStartTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getStartTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setCurrentTime(double t)
	static int _bind_setCurrentTime(lua_State *L) {
		if (!_lg_typecheck_setCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setCurrentTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setCurrentTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setCurrentTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getCurrentTime() const
	static int _bind_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getCurrentTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getCurrentTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getCurrentTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleProcessor::setResetTime(double t)
	static int _bind_setResetTime(lua_State *L) {
		if (!_lg_typecheck_setResetTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::setResetTime(double t) function, expected prototype:\nvoid osgParticle::ParticleProcessor::setResetTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::setResetTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setResetTime(t);

		return 0;
	}

	// double osgParticle::ParticleProcessor::getResetTime() const
	static int _bind_getResetTime(lua_State *L) {
		if (!_lg_typecheck_getResetTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::ParticleProcessor::getResetTime() const function, expected prototype:\ndouble osgParticle::ParticleProcessor::getResetTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::ParticleProcessor::getResetTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getResetTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::isAlive() const
	static int _bind_isAlive(lua_State *L) {
		if (!_lg_typecheck_isAlive(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::isAlive() const function, expected prototype:\nbool osgParticle::ParticleProcessor::isAlive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::isAlive() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isAlive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleProcessor::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleProcessor::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix()
	static int _bind_getLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_getLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getLocalToWorldMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getLocalToWorldMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix()
	static int _bind_getWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_getWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getWorldToLocalMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getWorldToLocalMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix()
	static int _bind_getPreviousLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_getPreviousLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousLocalToWorldMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getPreviousLocalToWorldMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix()
	static int _bind_getPreviousWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_getPreviousWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix() function, expected prototype:\nconst osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgParticle::ParticleProcessor::getPreviousWorldToLocalMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getPreviousWorldToLocalMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P)
	static int _bind_transformLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_transformLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::transformLocalToWorld function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::transformLocalToWorld(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->transformLocalToWorld(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P)
	static int _bind_rotateLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_rotateLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::rotateLocalToWorld function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::rotateLocalToWorld(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->rotateLocalToWorld(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P)
	static int _bind_transformWorldToLocal(lua_State *L) {
		if (!_lg_typecheck_transformWorldToLocal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::transformWorldToLocal function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::transformWorldToLocal(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->transformWorldToLocal(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P)
	static int _bind_rotateWorldToLocal(lua_State *L) {
		if (!_lg_typecheck_rotateWorldToLocal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P) function, expected prototype:\nosg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f & P)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* P_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::ParticleProcessor::rotateWorldToLocal function");
		}
		const osg::Vec3f & P=*P_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::ParticleProcessor::rotateWorldToLocal(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->rotateWorldToLocal(P);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleProcessor::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::ParticleProcessor::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::setName(name);

		return 0;
	}

	// void osgParticle::ParticleProcessor::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::computeDataVariance();

		return 0;
	}

	// void osgParticle::ParticleProcessor::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ParticleProcessor::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ParticleProcessor::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ParticleProcessor::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ParticleProcessor::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ParticleProcessor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ParticleProcessor::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ParticleProcessor::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ParticleProcessor::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ParticleProcessor::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ParticleProcessor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osgParticle::ParticleProcessor::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleProcessor::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleProcessor::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleProcessor::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleProcessor::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleProcessor::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleProcessor::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ParticleProcessor::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleProcessor::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleProcessor::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ParticleProcessor::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Group * osgParticle::ParticleProcessor::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::ParticleProcessor::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::ParticleProcessor::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::ParticleProcessor::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->ParticleProcessor::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::ParticleProcessor::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::ParticleProcessor::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::ParticleProcessor::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::ParticleProcessor::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->ParticleProcessor::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::ParticleProcessor::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::ParticleProcessor::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::ParticleProcessor::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::ParticleProcessor::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->ParticleProcessor::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::ParticleProcessor::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::ParticleProcessor::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::ParticleProcessor::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::ParticleProcessor::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->ParticleProcessor::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::ParticleProcessor::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::ParticleProcessor::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::ParticleProcessor::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::ParticleProcessor::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->ParticleProcessor::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::ParticleProcessor::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::ParticleProcessor::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::ParticleProcessor::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::ParticleProcessor::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->ParticleProcessor::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::ParticleProcessor::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::ParticleProcessor::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::ParticleProcessor::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::ParticleProcessor::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->ParticleProcessor::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::ParticleProcessor::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::ParticleProcessor::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::ParticleProcessor::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::ParticleProcessor::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->ParticleProcessor::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::ParticleProcessor::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::ParticleProcessor::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::ParticleProcessor::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::ParticleProcessor::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->ParticleProcessor::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::ParticleProcessor::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::ParticleProcessor::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::ParticleProcessor::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::ParticleProcessor::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->ParticleProcessor::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleProcessor::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::ParticleProcessor::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleProcessor::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::ascend(nv);

		return 0;
	}

	// void osgParticle::ParticleProcessor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::ParticleProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::ParticleProcessor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleProcessor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleProcessor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleProcessor::base_className() const function, expected prototype:\nconst char * osgParticle::ParticleProcessor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleProcessor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleProcessor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::ParticleProcessor::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleProcessor::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleProcessor::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleProcessor::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParticleProcessor::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::ParticleProcessor::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleProcessor::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::accept(nv);

		return 0;
	}

	// void osgParticle::ParticleProcessor::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleProcessor::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleProcessor::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleProcessor::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleProcessor::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProcessor::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ParticleProcessor::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleProcessor::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleProcessor::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::ParticleProcessor* self=Luna< osg::Referenced >::checkSubType< osgParticle::ParticleProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleProcessor::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->ParticleProcessor::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleProcessor* LunaTraits< osgParticle::ParticleProcessor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleProcessor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::ParticleProcessor::process(double dt)
}

void LunaTraits< osgParticle::ParticleProcessor >::_bind_dtor(osgParticle::ParticleProcessor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleProcessor >::className[] = "ParticleProcessor";
const char LunaTraits< osgParticle::ParticleProcessor >::fullName[] = "osgParticle::ParticleProcessor";
const char LunaTraits< osgParticle::ParticleProcessor >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleProcessor >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::ParticleProcessor >::hash = 83064844;
const int LunaTraits< osgParticle::ParticleProcessor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleProcessor >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_ParticleProcessor::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_ParticleProcessor::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_ParticleProcessor::_bind_accept},
	{"getReferenceFrame", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getReferenceFrame},
	{"setReferenceFrame", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setReferenceFrame},
	{"getEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getEnabled},
	{"isEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isEnabled},
	{"setEnabled", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setEnabled},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getParticleSystem},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setParticleSystem},
	{"setEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setEndless},
	{"getEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getEndless},
	{"isEndless", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isEndless},
	{"setLifeTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setLifeTime},
	{"getLifeTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getLifeTime},
	{"setStartTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setStartTime},
	{"getStartTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getStartTime},
	{"setCurrentTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setCurrentTime},
	{"getCurrentTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getCurrentTime},
	{"setResetTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_setResetTime},
	{"getResetTime", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getResetTime},
	{"isAlive", &luna_wrapper_osgParticle_ParticleProcessor::_bind_isAlive},
	{"traverse", &luna_wrapper_osgParticle_ParticleProcessor::_bind_traverse},
	{"getLocalToWorldMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getLocalToWorldMatrix},
	{"getWorldToLocalMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getWorldToLocalMatrix},
	{"getPreviousLocalToWorldMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getPreviousLocalToWorldMatrix},
	{"getPreviousWorldToLocalMatrix", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getPreviousWorldToLocalMatrix},
	{"transformLocalToWorld", &luna_wrapper_osgParticle_ParticleProcessor::_bind_transformLocalToWorld},
	{"rotateLocalToWorld", &luna_wrapper_osgParticle_ParticleProcessor::_bind_rotateLocalToWorld},
	{"transformWorldToLocal", &luna_wrapper_osgParticle_ParticleProcessor::_bind_transformWorldToLocal},
	{"rotateWorldToLocal", &luna_wrapper_osgParticle_ParticleProcessor::_bind_rotateWorldToLocal},
	{"computeBound", &luna_wrapper_osgParticle_ParticleProcessor::_bind_computeBound},
	{"base_setName", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_clone},
	{"base_asGroup", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_ascend},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_isSameKindAs},
	{"base_accept", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_ParticleProcessor::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osgParticle_ParticleProcessor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_ParticleProcessor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_ParticleProcessor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleProcessor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleProcessor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleProcessor >::enumValues[] = {
	{"RELATIVE_RF", osgParticle::ParticleProcessor::RELATIVE_RF},
	{"ABSOLUTE_RF", osgParticle::ParticleProcessor::ABSOLUTE_RF},
	{0,0}
};


