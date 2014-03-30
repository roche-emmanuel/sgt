#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Point_Extensions.h>

class luna_wrapper_osg_Point_Extensions {
public:
	typedef Luna< osg::Point::Extensions > luna_t;

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

		osg::Point::Extensions* self= (osg::Point::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Point::Extensions >::push(L,self,false);
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
		//osg::Point::Extensions* ptr= dynamic_cast< osg::Point::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::Point::Extensions* ptr= luna_caster< osg::Referenced, osg::Point::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Point::Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setupGLExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointParametersSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPointParametersSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPointSpriteCoordOriginSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPointSpriteCoordOriginSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glPointParameteri(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPointParameterf(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPointParameterfv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
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
	// osg::Point::Extensions::Extensions(unsigned int contextID)
	static osg::Point::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Point::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Point::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Point::Extensions(contextID);
	}

	// osg::Point::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Point::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Point::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Point::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Point_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Point::Extensions::Extensions
	static osg::Point::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Point::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Point::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Point::Extensions::setPointParametersSupported(bool flag)
	static int _bind_setPointParametersSupported(lua_State *L) {
		if (!_lg_typecheck_setPointParametersSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setPointParametersSupported(bool flag) function, expected prototype:\nvoid osg::Point::Extensions::setPointParametersSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setPointParametersSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointParametersSupported(flag);

		return 0;
	}

	// bool osg::Point::Extensions::isPointParametersSupported() const
	static int _bind_isPointParametersSupported(lua_State *L) {
		if (!_lg_typecheck_isPointParametersSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Point::Extensions::isPointParametersSupported() const function, expected prototype:\nbool osg::Point::Extensions::isPointParametersSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Point::Extensions::isPointParametersSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isPointParametersSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag)
	static int _bind_setPointSpriteCoordOriginSupported(lua_State *L) {
		if (!_lg_typecheck_setPointSpriteCoordOriginSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag) function, expected prototype:\nvoid osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::setPointSpriteCoordOriginSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointSpriteCoordOriginSupported(flag);

		return 0;
	}

	// bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const
	static int _bind_isPointSpriteCoordOriginSupported(lua_State *L) {
		if (!_lg_typecheck_isPointSpriteCoordOriginSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const function, expected prototype:\nbool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Point::Extensions::isPointSpriteCoordOriginSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isPointSpriteCoordOriginSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const
	static int _bind_glPointParameteri(lua_State *L) {
		if (!_lg_typecheck_glPointParameteri(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameteri(unsigned int pname, int param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		int param=(int)lua_tointeger(L,3);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameteri(unsigned int, int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glPointParameteri(pname, param);

		return 0;
	}

	// void osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const
	static int _bind_glPointParameterf(lua_State *L) {
		if (!_lg_typecheck_glPointParameterf(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameterf(unsigned int pname, float param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		float param=(float)lua_tonumber(L,3);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameterf(unsigned int, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glPointParameterf(pname, param);

		return 0;
	}

	// void osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const
	static int _bind_glPointParameterfv(lua_State *L) {
		if (!_lg_typecheck_glPointParameterfv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const function, expected prototype:\nvoid osg::Point::Extensions::glPointParameterfv(unsigned int pname, const float * params) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		const float* params=(const float*)Luna< void >::check(L,3);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::glPointParameterfv(unsigned int, const float *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glPointParameterfv(pname, params);

		return 0;
	}

	// void osg::Point::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Point::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Point::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Point::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Point::Extensions* LunaTraits< osg::Point::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Point_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Point::Extensions >::_bind_dtor(osg::Point::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Point::Extensions >::className[] = "Point_Extensions";
const char LunaTraits< osg::Point::Extensions >::fullName[] = "osg::Point::Extensions";
const char LunaTraits< osg::Point::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Point::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Point::Extensions >::hash = 7930307;
const int LunaTraits< osg::Point::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Point::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Point_Extensions::_bind_setupGLExtensions},
	{"setPointParametersSupported", &luna_wrapper_osg_Point_Extensions::_bind_setPointParametersSupported},
	{"isPointParametersSupported", &luna_wrapper_osg_Point_Extensions::_bind_isPointParametersSupported},
	{"setPointSpriteCoordOriginSupported", &luna_wrapper_osg_Point_Extensions::_bind_setPointSpriteCoordOriginSupported},
	{"isPointSpriteCoordOriginSupported", &luna_wrapper_osg_Point_Extensions::_bind_isPointSpriteCoordOriginSupported},
	{"glPointParameteri", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameteri},
	{"glPointParameterf", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameterf},
	{"glPointParameterfv", &luna_wrapper_osg_Point_Extensions::_bind_glPointParameterfv},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Point_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Point_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Point_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Point_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Point::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Point_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Point::Extensions >::enumValues[] = {
	{0,0}
};


