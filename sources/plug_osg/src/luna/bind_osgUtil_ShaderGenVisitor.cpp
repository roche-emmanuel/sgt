#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_ShaderGenVisitor.h>

class luna_wrapper_osgUtil_ShaderGenVisitor {
public:
	typedef Luna< osgUtil::ShaderGenVisitor > luna_t;

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

		osgUtil::ShaderGenVisitor* self= (osgUtil::ShaderGenVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::ShaderGenVisitor >::push(L,self,false);
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
		//osgUtil::ShaderGenVisitor* ptr= dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::ShaderGenVisitor* ptr= luna_caster< osg::Referenced, osgUtil::ShaderGenVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ShaderGenVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setStateCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::ShaderGenVisitor::ShaderGenVisitor()
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor() function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::ShaderGenVisitor();
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::ShaderGenCache* stateCache=(Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1));

		return new osgUtil::ShaderGenVisitor(stateCache);
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_ShaderGenVisitor(L,NULL);
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::ShaderGenCache* stateCache=(Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,2));

		return new wrapper_osgUtil_ShaderGenVisitor(L,NULL, stateCache);
	}

	// Overload binder for osgUtil::ShaderGenVisitor::ShaderGenVisitor
	static osgUtil::ShaderGenVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShaderGenVisitor, cannot match any of the overloads for function ShaderGenVisitor:\n  ShaderGenVisitor()\n  ShaderGenVisitor(osgUtil::ShaderGenCache *)\n  ShaderGenVisitor(lua_Table *)\n  ShaderGenVisitor(lua_Table *, osgUtil::ShaderGenCache *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache)
	static int _bind_setStateCache(lua_State *L) {
		if (!_lg_typecheck_setStateCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::ShaderGenCache* stateCache=(Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,2));

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateCache(stateCache);

		return 0;
	}

	// osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const
	static int _bind_getStateCache(lua_State *L) {
		if (!_lg_typecheck_getStateCache(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const function, expected prototype:\nosgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::ShaderGenCache * lret = self->getStateCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::ShaderGenCache >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet)
	static int _bind_setRootStateSet(lua_State *L) {
		if (!_lg_typecheck_setRootStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateSet=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootStateSet(stateSet);

		return 0;
	}

	// osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const
	static int _bind_getRootStateSet(lua_State *L) {
		if (!_lg_typecheck_getRootStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getRootStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::ShaderGenVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::ShaderGenVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::ShaderGenVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::ShaderGenVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::ShaderGenVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// void osgUtil::ShaderGenVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::reset() function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::ShaderGenVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderGenVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::ShaderGenVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::ShaderGenVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::ShaderGenVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::ShaderGenVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderGenVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::ShaderGenVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::ShaderGenVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::ShaderGenVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::ShaderGenVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderGenVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::ShaderGenVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::ShaderGenVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::ShaderGenVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::ShaderGenVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->ShaderGenVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::ShaderGenVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::ShaderGenVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::ShaderGenVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::ShaderGenVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->ShaderGenVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::ShaderGenVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::ShaderGenVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::ShaderGenVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::ShaderGenVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::ShaderGenVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ShaderGenVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::ShaderGenVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::ShaderGenVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::ShaderGenVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::ShaderGenVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::ShaderGenVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ShaderGenVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::ShaderGenVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::ShaderGenVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::ShaderGenVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::ShaderGenVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::ShaderGenVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ShaderGenVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::ShaderGenVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::ShaderGenVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderGenVisitor::apply(node);

		return 0;
	}

	// void osgUtil::ShaderGenVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::ShaderGenVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderGenVisitor::apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::ShaderGenVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n");
		return 0;
	}

	// void osgUtil::ShaderGenVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::base_reset() function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::ShaderGenVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderGenVisitor::reset();

		return 0;
	}


	// Operator binds:

};

osgUtil::ShaderGenVisitor* LunaTraits< osgUtil::ShaderGenVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ShaderGenVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::ShaderGenVisitor >::_bind_dtor(osgUtil::ShaderGenVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ShaderGenVisitor >::className[] = "ShaderGenVisitor";
const char LunaTraits< osgUtil::ShaderGenVisitor >::fullName[] = "osgUtil::ShaderGenVisitor";
const char LunaTraits< osgUtil::ShaderGenVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ShaderGenVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::ShaderGenVisitor >::hash = 71090722;
const int LunaTraits< osgUtil::ShaderGenVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ShaderGenVisitor >::methods[] = {
	{"setStateCache", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_setStateCache},
	{"getStateCache", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_getStateCache},
	{"setRootStateSet", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_setRootStateSet},
	{"getRootStateSet", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_getRootStateSet},
	{"apply", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_apply},
	{"reset", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_reset},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_apply},
	{"base_reset", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_base_reset},
	{"fromVoid", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ShaderGenVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ShaderGenVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ShaderGenVisitor >::enumValues[] = {
	{0,0}
};


