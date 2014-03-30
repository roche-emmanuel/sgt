#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendFunc_Extensions.h>

class luna_wrapper_osg_BlendFunc_Extensions {
public:
	typedef Luna< osg::BlendFunc::Extensions > luna_t;

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

		osg::BlendFunc::Extensions* self= (osg::BlendFunc::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BlendFunc::Extensions >::push(L,self,false);
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
		//osg::BlendFunc::Extensions* ptr= dynamic_cast< osg::BlendFunc::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendFunc::Extensions* ptr= luna_caster< osg::Referenced, osg::BlendFunc::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendFunc::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setBlendFuncSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBlendFuncSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendFuncSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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
	// osg::BlendFunc::Extensions::Extensions(unsigned int contextID)
	static osg::BlendFunc::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::BlendFunc::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::BlendFunc::Extensions(contextID);
	}

	// osg::BlendFunc::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::BlendFunc::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendFunc::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::BlendFunc::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_BlendFunc_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::BlendFunc::Extensions::Extensions
	static osg::BlendFunc::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::BlendFunc::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BlendFunc::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag)
	static int _bind_setBlendFuncSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_setBlendFuncSeparateSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag) function, expected prototype:\nvoid osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::BlendFunc::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::setBlendFuncSeparateSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlendFuncSeparateSupported(flag);

		return 0;
	}

	// bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const
	static int _bind_isBlendFuncSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendFuncSeparateSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const function, expected prototype:\nbool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendFunc::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendFunc::Extensions::isBlendFuncSeparateSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBlendFuncSeparateSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const
	static int _bind_glBlendFuncSeparate(lua_State *L) {
		if (!_lg_typecheck_glBlendFuncSeparate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const function, expected prototype:\nvoid osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int sfactorRGB, unsigned int dfactorRGB, unsigned int sfactorAlpha, unsigned int dfactorAlpha) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int sfactorRGB=(unsigned int)lua_tointeger(L,2);
		unsigned int dfactorRGB=(unsigned int)lua_tointeger(L,3);
		unsigned int sfactorAlpha=(unsigned int)lua_tointeger(L,4);
		unsigned int dfactorAlpha=(unsigned int)lua_tointeger(L,5);

		osg::BlendFunc::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

		return 0;
	}

	// void osg::BlendFunc::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendFunc::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlendFunc::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlendFunc::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendFunc::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendFunc::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::BlendFunc::Extensions* LunaTraits< osg::BlendFunc::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendFunc_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::BlendFunc::Extensions >::_bind_dtor(osg::BlendFunc::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendFunc::Extensions >::className[] = "BlendFunc_Extensions";
const char LunaTraits< osg::BlendFunc::Extensions >::fullName[] = "osg::BlendFunc::Extensions";
const char LunaTraits< osg::BlendFunc::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendFunc::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::BlendFunc::Extensions >::hash = 38271692;
const int LunaTraits< osg::BlendFunc::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendFunc::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_BlendFunc_Extensions::_bind_setupGLExtensions},
	{"setBlendFuncSeparateSupported", &luna_wrapper_osg_BlendFunc_Extensions::_bind_setBlendFuncSeparateSupported},
	{"isBlendFuncSeparateSupported", &luna_wrapper_osg_BlendFunc_Extensions::_bind_isBlendFuncSeparateSupported},
	{"glBlendFuncSeparate", &luna_wrapper_osg_BlendFunc_Extensions::_bind_glBlendFuncSeparate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlendFunc_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_BlendFunc_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BlendFunc_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BlendFunc_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendFunc::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendFunc_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendFunc::Extensions >::enumValues[] = {
	{0,0}
};


