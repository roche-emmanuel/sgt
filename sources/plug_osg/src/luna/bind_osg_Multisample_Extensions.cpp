#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Multisample_Extensions.h>

class luna_wrapper_osg_Multisample_Extensions {
public:
	typedef Luna< osg::Multisample::Extensions > luna_t;

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

		osg::Multisample::Extensions* self= (osg::Multisample::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Multisample::Extensions >::push(L,self,false);
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
		//osg::Multisample::Extensions* ptr= dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::Multisample::Extensions* ptr= luna_caster< osg::Referenced, osg::Multisample::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Multisample::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultisampleFilterHintSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisampleFilterHintSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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
	// osg::Multisample::Extensions::Extensions(unsigned int contextID)
	static osg::Multisample::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Multisample::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Multisample::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Multisample::Extensions(contextID);
	}

	// osg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Multisample::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Multisample::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Multisample_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Multisample::Extensions::Extensions
	static osg::Multisample::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Multisample::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Multisample::Extensions::setMultisampleSupported(bool flag)
	static int _bind_setMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_setMultisampleSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setMultisampleSupported(bool flag) function, expected prototype:\nvoid osg::Multisample::Extensions::setMultisampleSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setMultisampleSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMultisampleSupported(flag);

		return 0;
	}

	// void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag)
	static int _bind_setMultisampleFilterHintSupported(lua_State *L) {
		if (!_lg_typecheck_setMultisampleFilterHintSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag) function, expected prototype:\nvoid osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::setMultisampleFilterHintSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMultisampleFilterHintSupported(flag);

		return 0;
	}

	// bool osg::Multisample::Extensions::isMultisampleSupported() const
	static int _bind_isMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::Extensions::isMultisampleSupported() const function, expected prototype:\nbool osg::Multisample::Extensions::isMultisampleSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Multisample::Extensions::isMultisampleSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMultisampleSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const
	static int _bind_isMultisampleFilterHintSupported(lua_State *L) {
		if (!_lg_typecheck_isMultisampleFilterHintSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const function, expected prototype:\nbool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Multisample::Extensions::isMultisampleFilterHintSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMultisampleFilterHintSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const
	static int _bind_glSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_glSampleCoverage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const function, expected prototype:\nvoid osg::Multisample::Extensions::glSampleCoverage(float value, unsigned char invert) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);
		unsigned char invert = (unsigned char)(lua_tointeger(L,3));

		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::glSampleCoverage(float, unsigned char) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glSampleCoverage(value, invert);

		return 0;
	}

	// void osg::Multisample::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Multisample::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Multisample::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Multisample::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Multisample::Extensions* LunaTraits< osg::Multisample::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Multisample_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Multisample::Extensions >::_bind_dtor(osg::Multisample::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Multisample::Extensions >::className[] = "Multisample_Extensions";
const char LunaTraits< osg::Multisample::Extensions >::fullName[] = "osg::Multisample::Extensions";
const char LunaTraits< osg::Multisample::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Multisample::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Multisample::Extensions >::hash = 56776103;
const int LunaTraits< osg::Multisample::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Multisample::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Multisample_Extensions::_bind_setupGLExtensions},
	{"setMultisampleSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_setMultisampleSupported},
	{"setMultisampleFilterHintSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_setMultisampleFilterHintSupported},
	{"isMultisampleSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_isMultisampleSupported},
	{"isMultisampleFilterHintSupported", &luna_wrapper_osg_Multisample_Extensions::_bind_isMultisampleFilterHintSupported},
	{"glSampleCoverage", &luna_wrapper_osg_Multisample_Extensions::_bind_glSampleCoverage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Multisample_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Multisample_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Multisample_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Multisample_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Multisample::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Multisample_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Multisample::Extensions >::enumValues[] = {
	{0,0}
};


