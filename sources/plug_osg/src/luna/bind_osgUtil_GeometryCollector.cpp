#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_GeometryCollector.h>

class luna_wrapper_osgUtil_GeometryCollector {
public:
	typedef Luna< osgUtil::GeometryCollector > luna_t;

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

		osgUtil::GeometryCollector* self= (osgUtil::GeometryCollector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::GeometryCollector >::push(L,self,false);
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
		//osgUtil::GeometryCollector* ptr= dynamic_cast< osgUtil::GeometryCollector* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::GeometryCollector* ptr= luna_caster< osg::Referenced, osgUtil::GeometryCollector >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::GeometryCollector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeometryList(lua_State *L) {
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)
	static osgUtil::GeometryCollector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options) function, expected prototype:\nosgUtil::GeometryCollector::GeometryCollector(osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)\nClass arguments details:\narg 1 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,1));
		osgUtil::Optimizer::OptimizationOptions options=(osgUtil::Optimizer::OptimizationOptions)lua_tointeger(L,2);

		return new osgUtil::GeometryCollector(optimizer, options);
	}

	// osgUtil::GeometryCollector::GeometryCollector(lua_Table * data, osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)
	static osgUtil::GeometryCollector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::GeometryCollector::GeometryCollector(lua_Table * data, osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options) function, expected prototype:\nosgUtil::GeometryCollector::GeometryCollector(lua_Table * data, osgUtil::Optimizer * optimizer, osgUtil::Optimizer::OptimizationOptions options)\nClass arguments details:\narg 2 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,2));
		osgUtil::Optimizer::OptimizationOptions options=(osgUtil::Optimizer::OptimizationOptions)lua_tointeger(L,3);

		return new wrapper_osgUtil_GeometryCollector(L,NULL, optimizer, options);
	}

	// Overload binder for osgUtil::GeometryCollector::GeometryCollector
	static osgUtil::GeometryCollector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GeometryCollector, cannot match any of the overloads for function GeometryCollector:\n  GeometryCollector(osgUtil::Optimizer *, osgUtil::Optimizer::OptimizationOptions)\n  GeometryCollector(lua_Table *, osgUtil::Optimizer *, osgUtil::Optimizer::OptimizationOptions)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::GeometryCollector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::reset() function, expected prototype:\nvoid osgUtil::GeometryCollector::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::GeometryCollector::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::GeometryCollector::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::GeometryCollector::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList()
	static int _bind_getGeometryList(lua_State *L) {
		if (!_lg_typecheck_getGeometryList(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList() function, expected prototype:\nosgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::GeometryCollector::GeometryList & osgUtil::GeometryCollector::getGeometryList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::GeometryCollector::GeometryList* lret = &self->getGeometryList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::GeometryCollector::GeometryList >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::GeometryCollector::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::GeometryCollector::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GeometryCollector::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::GeometryCollector::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::GeometryCollector::base_libraryName() const function, expected prototype:\nconst char * osgUtil::GeometryCollector::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::GeometryCollector::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GeometryCollector::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::GeometryCollector::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::GeometryCollector::base_className() const function, expected prototype:\nconst char * osgUtil::GeometryCollector::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::GeometryCollector::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GeometryCollector::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::GeometryCollector::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::GeometryCollector::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::GeometryCollector::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::GeometryCollector::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->GeometryCollector::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::GeometryCollector::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::GeometryCollector::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::GeometryCollector::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::GeometryCollector::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->GeometryCollector::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::GeometryCollector::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::GeometryCollector::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::GeometryCollector::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::GeometryCollector::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::GeometryCollector::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GeometryCollector::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::GeometryCollector::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::GeometryCollector::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::GeometryCollector::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::GeometryCollector::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::GeometryCollector::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GeometryCollector::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::GeometryCollector::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::GeometryCollector::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::GeometryCollector::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::GeometryCollector::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::GeometryCollector::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GeometryCollector::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::GeometryCollector::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::base_reset() function, expected prototype:\nvoid osgUtil::GeometryCollector::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GeometryCollector::reset();

		return 0;
	}

	// void osgUtil::GeometryCollector::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::GeometryCollector::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::GeometryCollector::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::GeometryCollector::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::GeometryCollector* self=Luna< osg::Referenced >::checkSubType< osgUtil::GeometryCollector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::GeometryCollector::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GeometryCollector::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::GeometryCollector* LunaTraits< osgUtil::GeometryCollector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_GeometryCollector::_bind_ctor(L);
}

void LunaTraits< osgUtil::GeometryCollector >::_bind_dtor(osgUtil::GeometryCollector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::GeometryCollector >::className[] = "GeometryCollector";
const char LunaTraits< osgUtil::GeometryCollector >::fullName[] = "osgUtil::GeometryCollector";
const char LunaTraits< osgUtil::GeometryCollector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::GeometryCollector >::parents[] = {"osgUtil.BaseOptimizerVisitor", 0};
const int LunaTraits< osgUtil::GeometryCollector >::hash = 62755262;
const int LunaTraits< osgUtil::GeometryCollector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::GeometryCollector >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_GeometryCollector::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_GeometryCollector::_bind_apply},
	{"getGeometryList", &luna_wrapper_osgUtil_GeometryCollector::_bind_getGeometryList},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_getDistanceToViewPoint},
	{"base_reset", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_GeometryCollector::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_GeometryCollector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_GeometryCollector::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_GeometryCollector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::GeometryCollector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_GeometryCollector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::GeometryCollector >::enumValues[] = {
	{0,0}
};


