#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClampColor_Extensions.h>

class luna_wrapper_osg_ClampColor_Extensions {
public:
	typedef Luna< osg::ClampColor::Extensions > luna_t;

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

		osg::ClampColor::Extensions* self= (osg::ClampColor::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ClampColor::Extensions >::push(L,self,false);
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
		//osg::ClampColor::Extensions* ptr= dynamic_cast< osg::ClampColor::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::ClampColor::Extensions* ptr= luna_caster< osg::Referenced, osg::ClampColor::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClampColor::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setClampColorSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isClampColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glClampColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// osg::ClampColor::Extensions::Extensions(unsigned int contextID)
	static osg::ClampColor::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClampColor::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::ClampColor::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::ClampColor::Extensions(contextID);
	}

	// osg::ClampColor::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::ClampColor::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClampColor::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::ClampColor::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_ClampColor_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::ClampColor::Extensions::Extensions
	static osg::ClampColor::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::ClampColor::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::ClampColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::ClampColor::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::ClampColor::Extensions::setClampColorSupported(bool flag)
	static int _bind_setClampColorSupported(lua_State *L) {
		if (!_lg_typecheck_setClampColorSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::setClampColorSupported(bool flag) function, expected prototype:\nvoid osg::ClampColor::Extensions::setClampColorSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::ClampColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::ClampColor::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::setClampColorSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClampColorSupported(flag);

		return 0;
	}

	// bool osg::ClampColor::Extensions::isClampColorSupported() const
	static int _bind_isClampColorSupported(lua_State *L) {
		if (!_lg_typecheck_isClampColorSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClampColor::Extensions::isClampColorSupported() const function, expected prototype:\nbool osg::ClampColor::Extensions::isClampColorSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClampColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::ClampColor::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClampColor::Extensions::isClampColorSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isClampColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const
	static int _bind_glClampColor(lua_State *L) {
		if (!_lg_typecheck_glClampColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const function, expected prototype:\nvoid osg::ClampColor::Extensions::glClampColor(unsigned int target, unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::ClampColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::ClampColor::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::glClampColor(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glClampColor(target, mode);

		return 0;
	}

	// void osg::ClampColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ClampColor::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ClampColor::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::ClampColor::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampColor::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::ClampColor::Extensions* LunaTraits< osg::ClampColor::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClampColor_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::ClampColor::Extensions >::_bind_dtor(osg::ClampColor::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClampColor::Extensions >::className[] = "ClampColor_Extensions";
const char LunaTraits< osg::ClampColor::Extensions >::fullName[] = "osg::ClampColor::Extensions";
const char LunaTraits< osg::ClampColor::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::ClampColor::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ClampColor::Extensions >::hash = 80623331;
const int LunaTraits< osg::ClampColor::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClampColor::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_ClampColor_Extensions::_bind_setupGLExtensions},
	{"setClampColorSupported", &luna_wrapper_osg_ClampColor_Extensions::_bind_setClampColorSupported},
	{"isClampColorSupported", &luna_wrapper_osg_ClampColor_Extensions::_bind_isClampColorSupported},
	{"glClampColor", &luna_wrapper_osg_ClampColor_Extensions::_bind_glClampColor},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ClampColor_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_ClampColor_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ClampColor_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ClampColor_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClampColor::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClampColor_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClampColor::Extensions >::enumValues[] = {
	{0,0}
};


