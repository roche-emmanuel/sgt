#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullSettings_ClampProjectionMatrixCallback.h>

class luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback {
public:
	typedef Luna< osg::CullSettings::ClampProjectionMatrixCallback > luna_t;

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

		osg::CullSettings::ClampProjectionMatrixCallback* self= (osg::CullSettings::ClampProjectionMatrixCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CullSettings::ClampProjectionMatrixCallback >::push(L,self,false);
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
		//osg::CullSettings::ClampProjectionMatrixCallback* ptr= dynamic_cast< osg::CullSettings::ClampProjectionMatrixCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::CullSettings::ClampProjectionMatrixCallback* ptr= luna_caster< osg::Referenced, osg::CullSettings::ClampProjectionMatrixCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CullSettings::ClampProjectionMatrixCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data)
	static osg::CullSettings::ClampProjectionMatrixCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data) function, expected prototype:\nosg::CullSettings::ClampProjectionMatrixCallback::ClampProjectionMatrixCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CullSettings_ClampProjectionMatrixCallback(L,NULL);
	}


	// Function binds:
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const function, expected prototype:\nbool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* projection_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation function");
		}
		osg::Matrixf & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osg::CullSettings::ClampProjectionMatrixCallback* self=Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,znear);
		lua_pushnumber(L,zfar);
		return 3;
	}

	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
	static int _bind_clampProjectionMatrixImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const function, expected prototype:\nbool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation function");
		}
		osg::Matrixd & projection=*projection_ptr;
		double znear=(double)lua_tonumber(L,3);
		double zfar=(double)lua_tonumber(L,4);

		osg::CullSettings::ClampProjectionMatrixCallback* self=Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->clampProjectionMatrixImplementation(projection, znear, zfar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,znear);
		lua_pushnumber(L,zfar);
		return 3;
	}

	// Overload binder for osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation
	static int _bind_clampProjectionMatrixImplementation(lua_State *L) {
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_1(L)) return _bind_clampProjectionMatrixImplementation_overload_1(L);
		if (_lg_typecheck_clampProjectionMatrixImplementation_overload_2(L)) return _bind_clampProjectionMatrixImplementation_overload_2(L);

		luaL_error(L, "error in function clampProjectionMatrixImplementation, cannot match any of the overloads for function clampProjectionMatrixImplementation:\n  clampProjectionMatrixImplementation(osg::Matrixf &, double &, double &)\n  clampProjectionMatrixImplementation(osg::Matrixd &, double &, double &)\n");
		return 0;
	}

	// void osg::CullSettings::ClampProjectionMatrixCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::ClampProjectionMatrixCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::CullSettings::ClampProjectionMatrixCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::CullSettings::ClampProjectionMatrixCallback* self=Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::ClampProjectionMatrixCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClampProjectionMatrixCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::CullSettings::ClampProjectionMatrixCallback* LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixf & projection, double & znear, double & zfar) const
	// bool osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation(osg::Matrixd & projection, double & znear, double & zfar) const
}

void LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::_bind_dtor(osg::CullSettings::ClampProjectionMatrixCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::className[] = "CullSettings_ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::fullName[] = "osg::CullSettings::ClampProjectionMatrixCallback";
const char LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::hash = 31657648;
const int LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::methods[] = {
	{"clampProjectionMatrixImplementation", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_clampProjectionMatrixImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CullSettings_ClampProjectionMatrixCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback >::enumValues[] = {
	{0,0}
};


