#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_SampleMaski_Extensions.h>

class luna_wrapper_osg_SampleMaski_Extensions {
public:
	typedef Luna< osg::SampleMaski::Extensions > luna_t;

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

		osg::SampleMaski::Extensions* self= (osg::SampleMaski::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::SampleMaski::Extensions >::push(L,self,false);
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
		//osg::SampleMaski::Extensions* ptr= dynamic_cast< osg::SampleMaski::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::SampleMaski::Extensions* ptr= luna_caster< osg::Referenced, osg::SampleMaski::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::SampleMaski::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isOpenGL32upported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTextureMultisampleSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSampleMaskiSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glSampleMaski(lua_State *L) {
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
	// osg::SampleMaski::Extensions::Extensions(unsigned int contextID)
	static osg::SampleMaski::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::SampleMaski::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::SampleMaski::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::SampleMaski::Extensions(contextID);
	}

	// osg::SampleMaski::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::SampleMaski::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::SampleMaski::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::SampleMaski::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_SampleMaski_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::SampleMaski::Extensions::Extensions
	static osg::SampleMaski::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::SampleMaski::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SampleMaski::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::SampleMaski::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SampleMaski::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// bool osg::SampleMaski::Extensions::isOpenGL32upported() const
	static int _bind_isOpenGL32upported(lua_State *L) {
		if (!_lg_typecheck_isOpenGL32upported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::SampleMaski::Extensions::isOpenGL32upported() const function, expected prototype:\nbool osg::SampleMaski::Extensions::isOpenGL32upported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::SampleMaski::Extensions::isOpenGL32upported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOpenGL32upported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::SampleMaski::Extensions::isTextureMultisampleSupported() const
	static int _bind_isTextureMultisampleSupported(lua_State *L) {
		if (!_lg_typecheck_isTextureMultisampleSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::SampleMaski::Extensions::isTextureMultisampleSupported() const function, expected prototype:\nbool osg::SampleMaski::Extensions::isTextureMultisampleSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::SampleMaski::Extensions::isTextureMultisampleSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTextureMultisampleSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::SampleMaski::Extensions::isSampleMaskiSupported() const
	static int _bind_isSampleMaskiSupported(lua_State *L) {
		if (!_lg_typecheck_isSampleMaskiSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::SampleMaski::Extensions::isSampleMaskiSupported() const function, expected prototype:\nbool osg::SampleMaski::Extensions::isSampleMaskiSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::SampleMaski::Extensions::isSampleMaskiSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSampleMaskiSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::SampleMaski::Extensions::glSampleMaski(unsigned int maskNumber, unsigned int mask) const
	static int _bind_glSampleMaski(lua_State *L) {
		if (!_lg_typecheck_glSampleMaski(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SampleMaski::Extensions::glSampleMaski(unsigned int maskNumber, unsigned int mask) const function, expected prototype:\nvoid osg::SampleMaski::Extensions::glSampleMaski(unsigned int maskNumber, unsigned int mask) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int maskNumber=(unsigned int)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SampleMaski::Extensions::glSampleMaski(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glSampleMaski(maskNumber, mask);

		return 0;
	}

	// void osg::SampleMaski::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SampleMaski::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::SampleMaski::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::SampleMaski::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::SampleMaski::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SampleMaski::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::SampleMaski::Extensions* LunaTraits< osg::SampleMaski::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_SampleMaski_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::SampleMaski::Extensions >::_bind_dtor(osg::SampleMaski::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::SampleMaski::Extensions >::className[] = "SampleMaski_Extensions";
const char LunaTraits< osg::SampleMaski::Extensions >::fullName[] = "osg::SampleMaski::Extensions";
const char LunaTraits< osg::SampleMaski::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::SampleMaski::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::SampleMaski::Extensions >::hash = 28844559;
const int LunaTraits< osg::SampleMaski::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::SampleMaski::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_SampleMaski_Extensions::_bind_setupGLExtensions},
	{"isOpenGL32upported", &luna_wrapper_osg_SampleMaski_Extensions::_bind_isOpenGL32upported},
	{"isTextureMultisampleSupported", &luna_wrapper_osg_SampleMaski_Extensions::_bind_isTextureMultisampleSupported},
	{"isSampleMaskiSupported", &luna_wrapper_osg_SampleMaski_Extensions::_bind_isSampleMaskiSupported},
	{"glSampleMaski", &luna_wrapper_osg_SampleMaski_Extensions::_bind_glSampleMaski},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_SampleMaski_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_SampleMaski_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_SampleMaski_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_SampleMaski_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::SampleMaski::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_SampleMaski_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::SampleMaski::Extensions >::enumValues[] = {
	{0,0}
};


