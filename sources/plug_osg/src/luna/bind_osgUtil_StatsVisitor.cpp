#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StatsVisitor.h>

class luna_wrapper_osgUtil_StatsVisitor {
public:
	typedef Luna< osgUtil::StatsVisitor > luna_t;

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

		osgUtil::StatsVisitor* self= (osgUtil::StatsVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::StatsVisitor >::push(L,self,false);
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
		//osgUtil::StatsVisitor* ptr= dynamic_cast< osgUtil::StatsVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::StatsVisitor* ptr= luna_caster< osg::Referenced, osgUtil::StatsVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StatsVisitor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_reset(lua_State *L) {
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_totalUpStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedSwitch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedLOD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedGeode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedFastGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumInstancedStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroupSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLodSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwitchSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeodeSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawableSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFastGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStatesetSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniqueStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInstancedStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedSwitch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedLOD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedGeode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedFastGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumInstancedStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroupSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLodSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwitchSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGeodeSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73927809) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawableSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFastGeometrySet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatesetSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97002577) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniqueStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInstancedStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_totalUpStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_print(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StatsVisitor::StatsVisitor()
	static osgUtil::StatsVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StatsVisitor() function, expected prototype:\nosgUtil::StatsVisitor::StatsVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::StatsVisitor();
	}

	// osgUtil::StatsVisitor::StatsVisitor(lua_Table * data)
	static osgUtil::StatsVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StatsVisitor(lua_Table * data) function, expected prototype:\nosgUtil::StatsVisitor::StatsVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_StatsVisitor(L,NULL);
	}

	// Overload binder for osgUtil::StatsVisitor::StatsVisitor
	static osgUtil::StatsVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StatsVisitor, cannot match any of the overloads for function StatsVisitor:\n  StatsVisitor()\n  StatsVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::StatsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::className() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StatsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::reset() function, expected prototype:\nvoid osgUtil::StatsVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Switch &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StatsVisitor::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(drawable);

		return 0;
	}

	// void osgUtil::StatsVisitor::apply(osg::StateSet & ss)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::apply(osg::StateSet & ss) function, expected prototype:\nvoid osgUtil::StatsVisitor::apply(osg::StateSet & ss)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !ss_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ss in osgUtil::StatsVisitor::apply function");
		}
		osg::StateSet & ss=*ss_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::apply(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(ss);

		return 0;
	}

	// Overload binder for osgUtil::StatsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::LOD &)\n  apply(osg::Switch &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n  apply(osg::StateSet &)\n");
		return 0;
	}

	// void osgUtil::StatsVisitor::totalUpStats()
	static int _bind_totalUpStats(lua_State *L) {
		if (!_lg_typecheck_totalUpStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::totalUpStats() function, expected prototype:\nvoid osgUtil::StatsVisitor::totalUpStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::totalUpStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->totalUpStats();

		return 0;
	}

	// void osgUtil::StatsVisitor::print(std::ostream & out)
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::print(std::ostream & out) function, expected prototype:\nvoid osgUtil::StatsVisitor::print(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osgUtil::StatsVisitor::print function");
		}
		std::ostream & out=*out_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::print(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print(out);

		return 0;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGroup()
	static int _bind_getNumInstancedGroup(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedGroup(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGroup() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedSwitch()
	static int _bind_getNumInstancedSwitch(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedSwitch(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedSwitch() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedSwitch;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedLOD()
	static int _bind_getNumInstancedLOD(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedLOD(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedLOD() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedLOD()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedLOD(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedLOD;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedTransform()
	static int _bind_getNumInstancedTransform(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedTransform(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedTransform() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedTransform;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGeode()
	static int _bind_getNumInstancedGeode(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedGeode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGeode() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedGeode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedDrawable()
	static int _bind_getNumInstancedDrawable(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedDrawable(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedDrawable() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedDrawable(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedDrawable;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedGeometry()
	static int _bind_getNumInstancedGeometry(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedGeometry(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedGeometry() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedGeometry;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry()
	static int _bind_getNumInstancedFastGeometry(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedFastGeometry(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedFastGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedFastGeometry;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::StatsVisitor::_numInstancedStateSet()
	static int _bind_getNumInstancedStateSet(lua_State *L) {
		if (!_lg_typecheck_getNumInstancedStateSet(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StatsVisitor::_numInstancedStateSet() function, expected prototype:\nunsigned int osgUtil::StatsVisitor::_numInstancedStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StatsVisitor::_numInstancedStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numInstancedStateSet;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet()
	static int _bind_getGroupSet(lua_State *L) {
		if (!_lg_typecheck_getGroupSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_groupSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_groupSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet()
	static int _bind_getTransformSet(lua_State *L) {
		if (!_lg_typecheck_getTransformSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_transformSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_transformSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet()
	static int _bind_getLodSet(lua_State *L) {
		if (!_lg_typecheck_getLodSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_lodSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_lodSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet()
	static int _bind_getSwitchSet(lua_State *L) {
		if (!_lg_typecheck_getSwitchSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_switchSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_switchSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet()
	static int _bind_getGeodeSet(lua_State *L) {
		if (!_lg_typecheck_getGeodeSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet() function, expected prototype:\nosgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::NodeSet osgUtil::StatsVisitor::_geodeSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::NodeSet* lret = &self->_geodeSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::NodeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet()
	static int _bind_getDrawableSet(lua_State *L) {
		if (!_lg_typecheck_getDrawableSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_drawableSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_drawableSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet()
	static int _bind_getGeometrySet(lua_State *L) {
		if (!_lg_typecheck_getGeometrySet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_geometrySet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_geometrySet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet()
	static int _bind_getFastGeometrySet(lua_State *L) {
		if (!_lg_typecheck_getFastGeometrySet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet() function, expected prototype:\nosgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::DrawableSet osgUtil::StatsVisitor::_fastGeometrySet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::DrawableSet* lret = &self->_fastGeometrySet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet()
	static int _bind_getStatesetSet(lua_State *L) {
		if (!_lg_typecheck_getStatesetSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet() function, expected prototype:\nosgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StatsVisitor::StateSetSet osgUtil::StatsVisitor::_statesetSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StatsVisitor::StateSetSet* lret = &self->_statesetSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StatsVisitor::StateSetSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats()
	static int _bind_getUniqueStats(lua_State *L) {
		if (!_lg_typecheck_getUniqueStats(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats() function, expected prototype:\nosgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics osgUtil::StatsVisitor::_uniqueStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics* lret = &self->_uniqueStats;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats()
	static int _bind_getInstancedStats(lua_State *L) {
		if (!_lg_typecheck_getInstancedStats(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats() function, expected prototype:\nosgUtil::Statistics osgUtil::StatsVisitor::_instancedStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics osgUtil::StatsVisitor::_instancedStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics* lret = &self->_instancedStats;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value)
	static int _bind_setNumInstancedGroup(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGroup(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGroup(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedGroup = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value)
	static int _bind_setNumInstancedSwitch(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedSwitch(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedSwitch(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedSwitch = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value)
	static int _bind_setNumInstancedLOD(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedLOD(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedLOD(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedLOD(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedLOD = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value)
	static int _bind_setNumInstancedTransform(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedTransform(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedTransform(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedTransform(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedTransform = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value)
	static int _bind_setNumInstancedGeode(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedGeode(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGeode(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGeode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedGeode = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value)
	static int _bind_setNumInstancedDrawable(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedDrawable(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedDrawable = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value)
	static int _bind_setNumInstancedGeometry(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedGeometry(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedGeometry = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value)
	static int _bind_setNumInstancedFastGeometry(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedFastGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedFastGeometry(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedFastGeometry = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value)
	static int _bind_setNumInstancedStateSet(lua_State *L) {
		if (!_lg_typecheck_setNumInstancedStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_numInstancedStateSet(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numInstancedStateSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_setGroupSet(lua_State *L) {
		if (!_lg_typecheck_setGroupSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_groupSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_groupSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_groupSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_setTransformSet(lua_State *L) {
		if (!_lg_typecheck_setTransformSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_transformSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_transformSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_transformSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_setLodSet(lua_State *L) {
		if (!_lg_typecheck_setLodSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_lodSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_lodSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_lodSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_setSwitchSet(lua_State *L) {
		if (!_lg_typecheck_setSwitchSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_switchSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_switchSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_switchSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value)
	static int _bind_setGeodeSet(lua_State *L) {
		if (!_lg_typecheck_setGeodeSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet value)\nClass arguments details:\narg 1 ID = 22793184\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::NodeSet* value_ptr=(Luna< std::set< osg::Node * > >::checkSubType< osgUtil::StatsVisitor::NodeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_geodeSet function");
		}
		osgUtil::StatsVisitor::NodeSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_geodeSet(osgUtil::StatsVisitor::NodeSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_geodeSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_setDrawableSet(lua_State *L) {
		if (!_lg_typecheck_setDrawableSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_drawableSet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_drawableSet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_drawableSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_setGeometrySet(lua_State *L) {
		if (!_lg_typecheck_setGeometrySet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_geometrySet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_geometrySet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_geometrySet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value)
	static int _bind_setFastGeometrySet(lua_State *L) {
		if (!_lg_typecheck_setFastGeometrySet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet value)\nClass arguments details:\narg 1 ID = 41381585\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StatsVisitor::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_fastGeometrySet function");
		}
		osgUtil::StatsVisitor::DrawableSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_fastGeometrySet(osgUtil::StatsVisitor::DrawableSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_fastGeometrySet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value)
	static int _bind_setStatesetSet(lua_State *L) {
		if (!_lg_typecheck_setStatesetSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet value)\nClass arguments details:\narg 1 ID = 77774778\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StatsVisitor::StateSetSet* value_ptr=(Luna< std::set< osg::StateSet * > >::checkSubType< osgUtil::StatsVisitor::StateSetSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_statesetSet function");
		}
		osgUtil::StatsVisitor::StateSetSet value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_statesetSet(osgUtil::StatsVisitor::StateSetSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_statesetSet = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value)
	static int _bind_setUniqueStats(lua_State *L) {
		if (!_lg_typecheck_setUniqueStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics value)\nClass arguments details:\narg 1 ID = 95996950\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics* value_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_uniqueStats function");
		}
		osgUtil::Statistics value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_uniqueStats(osgUtil::Statistics). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_uniqueStats = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value)
	static int _bind_setInstancedStats(lua_State *L) {
		if (!_lg_typecheck_setInstancedStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value) function, expected prototype:\nvoid osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics value)\nClass arguments details:\narg 1 ID = 95996950\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics* value_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StatsVisitor::_instancedStats function");
		}
		osgUtil::Statistics value=*value_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::_instancedStats(osgUtil::Statistics). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_instancedStats = value;

		return 0;
	}

	// void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->StatsVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StatsVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->StatsVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StatsVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StatsVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StatsVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StatsVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StatsVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StatsVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StatsVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StatsVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::StatsVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StatsVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StatsVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StatsVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_reset() function, expected prototype:\nvoid osgUtil::StatsVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::reset();

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Group & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Transform & node)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::LOD & node)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Switch & node)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Switch &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(node);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::Drawable & drawable)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StatsVisitor::base_apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(drawable);

		return 0;
	}

	// void osgUtil::StatsVisitor::base_apply(osg::StateSet & ss)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_apply(osg::StateSet & ss) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_apply(osg::StateSet & ss)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !ss_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ss in osgUtil::StatsVisitor::base_apply function");
		}
		osg::StateSet & ss=*ss_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_apply(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::apply(ss);

		return 0;
	}

	// Overload binder for osgUtil::StatsVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Group &)\n  base_apply(osg::Transform &)\n  base_apply(osg::LOD &)\n  base_apply(osg::Switch &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Drawable &)\n  base_apply(osg::StateSet &)\n");
		return 0;
	}

	// void osgUtil::StatsVisitor::base_totalUpStats()
	static int _bind_base_totalUpStats(lua_State *L) {
		if (!_lg_typecheck_base_totalUpStats(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_totalUpStats() function, expected prototype:\nvoid osgUtil::StatsVisitor::base_totalUpStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_totalUpStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::totalUpStats();

		return 0;
	}

	// void osgUtil::StatsVisitor::base_print(std::ostream & out)
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StatsVisitor::base_print(std::ostream & out) function, expected prototype:\nvoid osgUtil::StatsVisitor::base_print(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osgUtil::StatsVisitor::base_print function");
		}
		std::ostream & out=*out_ptr;

		osgUtil::StatsVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::StatsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StatsVisitor::base_print(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StatsVisitor::print(out);

		return 0;
	}


	// Operator binds:

};

osgUtil::StatsVisitor* LunaTraits< osgUtil::StatsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StatsVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::StatsVisitor >::_bind_dtor(osgUtil::StatsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StatsVisitor >::className[] = "StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::fullName[] = "osgUtil::StatsVisitor";
const char LunaTraits< osgUtil::StatsVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StatsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StatsVisitor >::hash = 36035742;
const int LunaTraits< osgUtil::StatsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StatsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_StatsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_StatsVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_StatsVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_StatsVisitor::_bind_apply},
	{"totalUpStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_totalUpStats},
	{"print", &luna_wrapper_osgUtil_StatsVisitor::_bind_print},
	{"getNumInstancedGroup", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedGroup},
	{"getNumInstancedSwitch", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedSwitch},
	{"getNumInstancedLOD", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedLOD},
	{"getNumInstancedTransform", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedTransform},
	{"getNumInstancedGeode", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedGeode},
	{"getNumInstancedDrawable", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedDrawable},
	{"getNumInstancedGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedGeometry},
	{"getNumInstancedFastGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedFastGeometry},
	{"getNumInstancedStateSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getNumInstancedStateSet},
	{"getGroupSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getGroupSet},
	{"getTransformSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getTransformSet},
	{"getLodSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getLodSet},
	{"getSwitchSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getSwitchSet},
	{"getGeodeSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getGeodeSet},
	{"getDrawableSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getDrawableSet},
	{"getGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getGeometrySet},
	{"getFastGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getFastGeometrySet},
	{"getStatesetSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_getStatesetSet},
	{"getUniqueStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_getUniqueStats},
	{"getInstancedStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_getInstancedStats},
	{"setNumInstancedGroup", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedGroup},
	{"setNumInstancedSwitch", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedSwitch},
	{"setNumInstancedLOD", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedLOD},
	{"setNumInstancedTransform", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedTransform},
	{"setNumInstancedGeode", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedGeode},
	{"setNumInstancedDrawable", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedDrawable},
	{"setNumInstancedGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedGeometry},
	{"setNumInstancedFastGeometry", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedFastGeometry},
	{"setNumInstancedStateSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setNumInstancedStateSet},
	{"setGroupSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setGroupSet},
	{"setTransformSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setTransformSet},
	{"setLodSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setLodSet},
	{"setSwitchSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setSwitchSet},
	{"setGeodeSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setGeodeSet},
	{"setDrawableSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setDrawableSet},
	{"setGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setGeometrySet},
	{"setFastGeometrySet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setFastGeometrySet},
	{"setStatesetSet", &luna_wrapper_osgUtil_StatsVisitor::_bind_setStatesetSet},
	{"setUniqueStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_setUniqueStats},
	{"setInstancedStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_setInstancedStats},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_getEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_apply},
	{"base_totalUpStats", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_totalUpStats},
	{"base_print", &luna_wrapper_osgUtil_StatsVisitor::_bind_base_print},
	{"fromVoid", &luna_wrapper_osgUtil_StatsVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_StatsVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_StatsVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StatsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StatsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StatsVisitor >::enumValues[] = {
	{0,0}
};


