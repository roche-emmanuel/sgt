#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Emitter.h>

class luna_wrapper_osgParticle_Emitter {
public:
	typedef Luna< osgParticle::Emitter > luna_t;

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

		osgParticle::Emitter* self= (osgParticle::Emitter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Emitter >::push(L,self,false);
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
		//osgParticle::Emitter* ptr= dynamic_cast< osgParticle::Emitter* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Emitter* ptr= luna_caster< osg::Referenced, osgParticle::Emitter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Emitter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleTemplate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseDefaultTemplate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseDefaultTemplate(lua_State *L) {
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

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::Emitter::Emitter(lua_Table * data)
	static osgParticle::Emitter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter::Emitter(lua_Table * data) function, expected prototype:\nosgParticle::Emitter::Emitter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Emitter(L,NULL);
	}

	// osgParticle::Emitter::Emitter(lua_Table * data, const osgParticle::Emitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Emitter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Emitter::Emitter(lua_Table * data, const osgParticle::Emitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Emitter::Emitter(lua_Table * data, const osgParticle::Emitter & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Emitter* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Emitter::Emitter function");
		}
		const osgParticle::Emitter & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Emitter::Emitter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Emitter(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Emitter::Emitter
	static osgParticle::Emitter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Emitter, cannot match any of the overloads for function Emitter:\n  Emitter(lua_Table *)\n  Emitter(lua_Table *, const osgParticle::Emitter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Emitter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::libraryName() const function, expected prototype:\nconst char * osgParticle::Emitter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Emitter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::className() const function, expected prototype:\nconst char * osgParticle::Emitter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Emitter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Emitter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Emitter::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::Emitter::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::Emitter::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const
	static int _bind_getParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_getParticleTemplate(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const function, expected prototype:\nconst osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Particle & osgParticle::Emitter::getParticleTemplate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Particle* lret = &self->getParticleTemplate();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Particle >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p)
	static int _bind_setParticleTemplate(lua_State *L) {
		if (!_lg_typecheck_setParticleTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p) function, expected prototype:\nvoid osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle & p)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* p_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::Emitter::setParticleTemplate function");
		}
		const osgParticle::Particle & p=*p_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::setParticleTemplate(const osgParticle::Particle &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleTemplate(p);

		return 0;
	}

	// bool osgParticle::Emitter::getUseDefaultTemplate() const
	static int _bind_getUseDefaultTemplate(lua_State *L) {
		if (!_lg_typecheck_getUseDefaultTemplate(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Emitter::getUseDefaultTemplate() const function, expected prototype:\nbool osgParticle::Emitter::getUseDefaultTemplate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Emitter::getUseDefaultTemplate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseDefaultTemplate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Emitter::setUseDefaultTemplate(bool v)
	static int _bind_setUseDefaultTemplate(lua_State *L) {
		if (!_lg_typecheck_setUseDefaultTemplate(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::setUseDefaultTemplate(bool v) function, expected prototype:\nvoid osgParticle::Emitter::setUseDefaultTemplate(bool v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool v=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::setUseDefaultTemplate(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseDefaultTemplate(v);

		return 0;
	}

	// void osgParticle::Emitter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Emitter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::setName(name);

		return 0;
	}

	// void osgParticle::Emitter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Emitter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::computeDataVariance();

		return 0;
	}

	// void osgParticle::Emitter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Emitter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Emitter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Emitter::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Emitter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Emitter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Emitter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Emitter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Emitter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Emitter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Emitter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Emitter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osgParticle::Emitter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::Emitter::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::Emitter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::Emitter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Emitter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::Emitter::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::Emitter::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::Emitter::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Emitter::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::Emitter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Emitter::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Group * osgParticle::Emitter::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::Emitter::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::Emitter::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::Emitter::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Emitter::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::Emitter::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::Emitter::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::Emitter::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::Emitter::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Emitter::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::Emitter::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::Emitter::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::Emitter::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::Emitter::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Emitter::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::Emitter::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::Emitter::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::Emitter::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::Emitter::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Emitter::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osgParticle::Emitter::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgParticle::Emitter::base_asCamera() function, expected prototype:\nosg::Camera * osgParticle::Emitter::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgParticle::Emitter::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Emitter::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgParticle::Emitter::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgParticle::Emitter::base_asCamera() const function, expected prototype:\nconst osg::Camera * osgParticle::Emitter::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgParticle::Emitter::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Emitter::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osgParticle::Emitter::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::Emitter::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::Emitter::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::Emitter::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Emitter::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::Emitter::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::Emitter::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::Emitter::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::Emitter::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Emitter::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::Emitter::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::Emitter::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::Emitter::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::Emitter::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Emitter::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::Emitter::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::Emitter::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::Emitter::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::Emitter::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Emitter::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Emitter::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::Emitter::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::Emitter::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::Emitter::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::ascend(nv);

		return 0;
	}

	// void osgParticle::Emitter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Emitter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Emitter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Emitter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::Emitter::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::Emitter::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::Emitter::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::Emitter::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::Emitter::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::Emitter::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::Emitter::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Emitter::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// const char * osgParticle::Emitter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Emitter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Emitter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Emitter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Emitter::base_className() const function, expected prototype:\nconst char * osgParticle::Emitter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Emitter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Emitter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Emitter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Emitter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Emitter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Emitter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Emitter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Emitter::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Emitter::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::Emitter::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::Emitter::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::Emitter* self=Luna< osg::Referenced >::checkSubType< osgParticle::Emitter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Emitter::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emitter::accept(nv);

		return 0;
	}


	// Operator binds:

};

osgParticle::Emitter* LunaTraits< osgParticle::Emitter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Emitter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgParticle::Emitter::emitParticles(double dt)
}

void LunaTraits< osgParticle::Emitter >::_bind_dtor(osgParticle::Emitter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Emitter >::className[] = "Emitter";
const char LunaTraits< osgParticle::Emitter >::fullName[] = "osgParticle::Emitter";
const char LunaTraits< osgParticle::Emitter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Emitter >::parents[] = {"osgParticle.ParticleProcessor", 0};
const int LunaTraits< osgParticle::Emitter >::hash = 20504566;
const int LunaTraits< osgParticle::Emitter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Emitter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Emitter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Emitter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Emitter::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_Emitter::_bind_accept},
	{"getParticleTemplate", &luna_wrapper_osgParticle_Emitter::_bind_getParticleTemplate},
	{"setParticleTemplate", &luna_wrapper_osgParticle_Emitter::_bind_setParticleTemplate},
	{"getUseDefaultTemplate", &luna_wrapper_osgParticle_Emitter::_bind_getUseDefaultTemplate},
	{"setUseDefaultTemplate", &luna_wrapper_osgParticle_Emitter::_bind_setUseDefaultTemplate},
	{"base_setName", &luna_wrapper_osgParticle_Emitter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Emitter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Emitter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Emitter::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osgParticle_Emitter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_Emitter::_bind_base_clone},
	{"base_asGroup", &luna_wrapper_osgParticle_Emitter::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_Emitter::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osgParticle_Emitter::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osgParticle_Emitter::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_Emitter::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_Emitter::_bind_base_ascend},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Emitter::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Emitter::_bind_base_releaseGLObjects},
	{"base_traverse", &luna_wrapper_osgParticle_Emitter::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_Emitter::_bind_base_computeBound},
	{"base_libraryName", &luna_wrapper_osgParticle_Emitter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Emitter::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Emitter::_bind_base_isSameKindAs},
	{"base_accept", &luna_wrapper_osgParticle_Emitter::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osgParticle_Emitter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Emitter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Emitter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Emitter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Emitter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Emitter >::enumValues[] = {
	{0,0}
};


