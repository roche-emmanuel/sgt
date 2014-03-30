#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_DisplayRequirementsVisitor.h>

class luna_wrapper_osgUtil_DisplayRequirementsVisitor {
public:
	typedef Luna< osgUtil::DisplayRequirementsVisitor > luna_t;

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

		osgUtil::DisplayRequirementsVisitor* self= (osgUtil::DisplayRequirementsVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::DisplayRequirementsVisitor >::push(L,self,false);
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
		//osgUtil::DisplayRequirementsVisitor* ptr= dynamic_cast< osgUtil::DisplayRequirementsVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::DisplayRequirementsVisitor* ptr= luna_caster< osg::Referenced, osgUtil::DisplayRequirementsVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DisplayRequirementsVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_applyStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor()
	static osgUtil::DisplayRequirementsVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor() function, expected prototype:\nosgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::DisplayRequirementsVisitor();
	}

	// osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor(lua_Table * data)
	static osgUtil::DisplayRequirementsVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor(lua_Table * data) function, expected prototype:\nosgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_DisplayRequirementsVisitor(L,NULL);
	}

	// Overload binder for osgUtil::DisplayRequirementsVisitor::DisplayRequirementsVisitor
	static osgUtil::DisplayRequirementsVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DisplayRequirementsVisitor, cannot match any of the overloads for function DisplayRequirementsVisitor:\n  DisplayRequirementsVisitor()\n  DisplayRequirementsVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::DisplayRequirementsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DisplayRequirementsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::className() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings * ds)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DisplaySettings* ds=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::setDisplaySettings(osg::DisplaySettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisplaySettings(ds);

		return 0;
	}

	// const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const
	static int _bind_getDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osgUtil::DisplayRequirementsVisitor::getDisplaySettings() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset)
	static int _bind_applyStateSet(lua_State *L) {
		if (!_lg_typecheck_applyStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::DisplayRequirementsVisitor::applyStateSet function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::applyStateSet(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyStateSet(stateset);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DisplayRequirementsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::DisplayRequirementsVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::DisplayRequirementsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisplayRequirementsVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::base_reset() function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisplayRequirementsVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->DisplayRequirementsVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::DisplayRequirementsVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->DisplayRequirementsVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::DisplayRequirementsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DisplayRequirementsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DisplayRequirementsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DisplayRequirementsVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DisplayRequirementsVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DisplayRequirementsVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::DisplayRequirementsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DisplayRequirementsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DisplayRequirementsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DisplayRequirementsVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DisplayRequirementsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DisplayRequirementsVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::DisplayRequirementsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DisplayRequirementsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DisplayRequirementsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DisplayRequirementsVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DisplayRequirementsVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DisplayRequirementsVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::DisplayRequirementsVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DisplayRequirementsVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DisplayRequirementsVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DisplayRequirementsVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::DisplayRequirementsVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DisplayRequirementsVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DisplayRequirementsVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DisplayRequirementsVisitor::base_applyStateSet(osg::StateSet & stateset)
	static int _bind_base_applyStateSet(lua_State *L) {
		if (!_lg_typecheck_base_applyStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::base_applyStateSet(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::base_applyStateSet(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::DisplayRequirementsVisitor::base_applyStateSet function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::base_applyStateSet(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisplayRequirementsVisitor::applyStateSet(stateset);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DisplayRequirementsVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisplayRequirementsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::DisplayRequirementsVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::DisplayRequirementsVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::DisplayRequirementsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DisplayRequirementsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DisplayRequirementsVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisplayRequirementsVisitor::apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::DisplayRequirementsVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::DisplayRequirementsVisitor* LunaTraits< osgUtil::DisplayRequirementsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::DisplayRequirementsVisitor >::_bind_dtor(osgUtil::DisplayRequirementsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::className[] = "DisplayRequirementsVisitor";
const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::fullName[] = "osgUtil::DisplayRequirementsVisitor";
const char LunaTraits< osgUtil::DisplayRequirementsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DisplayRequirementsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::DisplayRequirementsVisitor >::hash = 54611615;
const int LunaTraits< osgUtil::DisplayRequirementsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DisplayRequirementsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_className},
	{"setDisplaySettings", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_getDisplaySettings},
	{"applyStateSet", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_applyStateSet},
	{"apply", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_className},
	{"base_applyStateSet", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_applyStateSet},
	{"base_apply", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DisplayRequirementsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DisplayRequirementsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DisplayRequirementsVisitor >::enumValues[] = {
	{0,0}
};


