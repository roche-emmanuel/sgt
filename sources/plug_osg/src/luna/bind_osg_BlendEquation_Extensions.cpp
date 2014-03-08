#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendEquation_Extensions.h>

class luna_wrapper_osg_BlendEquation_Extensions {
public:
	typedef Luna< osg::BlendEquation::Extensions > luna_t;

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

		osg::BlendEquation::Extensions* self= (osg::BlendEquation::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BlendEquation::Extensions >::push(L,self,false);
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
		//osg::BlendEquation::Extensions* ptr= dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendEquation::Extensions* ptr= luna_caster< osg::Referenced, osg::BlendEquation::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendEquation::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isBlendEquationSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBlendEquationSeparateSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSGIXMinMaxSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLogicOpSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendEquation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBlendEquationSeparate(lua_State *L) {
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
	// osg::BlendEquation::Extensions::Extensions(unsigned int contextID)
	static osg::BlendEquation::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::BlendEquation::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::BlendEquation::Extensions(contextID);
	}

	// osg::BlendEquation::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::BlendEquation::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::BlendEquation::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_BlendEquation_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::BlendEquation::Extensions::Extensions
	static osg::BlendEquation::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::BlendEquation::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// bool osg::BlendEquation::Extensions::isBlendEquationSupported() const
	static int _bind_isBlendEquationSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendEquationSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isBlendEquationSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isBlendEquationSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isBlendEquationSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBlendEquationSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const
	static int _bind_isBlendEquationSeparateSupported(lua_State *L) {
		if (!_lg_typecheck_isBlendEquationSeparateSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isBlendEquationSeparateSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBlendEquationSeparateSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const
	static int _bind_isSGIXMinMaxSupported(lua_State *L) {
		if (!_lg_typecheck_isSGIXMinMaxSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isSGIXMinMaxSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSGIXMinMaxSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::Extensions::isLogicOpSupported() const
	static int _bind_isLogicOpSupported(lua_State *L) {
		if (!_lg_typecheck_isLogicOpSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::Extensions::isLogicOpSupported() const function, expected prototype:\nbool osg::BlendEquation::Extensions::isLogicOpSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::Extensions::isLogicOpSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLogicOpSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const
	static int _bind_glBlendEquation(lua_State *L) {
		if (!_lg_typecheck_glBlendEquation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const function, expected prototype:\nvoid osg::BlendEquation::Extensions::glBlendEquation(unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::glBlendEquation(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glBlendEquation(mode);

		return 0;
	}

	// void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const
	static int _bind_glBlendEquationSeparate(lua_State *L) {
		if (!_lg_typecheck_glBlendEquationSeparate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const function, expected prototype:\nvoid osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int modeRGB=(unsigned int)lua_tointeger(L,2);
		unsigned int modeAlpha=(unsigned int)lua_tointeger(L,3);

		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::glBlendEquationSeparate(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glBlendEquationSeparate(modeRGB, modeAlpha);

		return 0;
	}

	// void osg::BlendEquation::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlendEquation::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlendEquation::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::BlendEquation::Extensions* LunaTraits< osg::BlendEquation::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendEquation_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::BlendEquation::Extensions >::_bind_dtor(osg::BlendEquation::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendEquation::Extensions >::className[] = "BlendEquation_Extensions";
const char LunaTraits< osg::BlendEquation::Extensions >::fullName[] = "osg::BlendEquation::Extensions";
const char LunaTraits< osg::BlendEquation::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendEquation::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::BlendEquation::Extensions >::hash = 32642110;
const int LunaTraits< osg::BlendEquation::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendEquation::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_BlendEquation_Extensions::_bind_setupGLExtensions},
	{"isBlendEquationSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isBlendEquationSupported},
	{"isBlendEquationSeparateSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isBlendEquationSeparateSupported},
	{"isSGIXMinMaxSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isSGIXMinMaxSupported},
	{"isLogicOpSupported", &luna_wrapper_osg_BlendEquation_Extensions::_bind_isLogicOpSupported},
	{"glBlendEquation", &luna_wrapper_osg_BlendEquation_Extensions::_bind_glBlendEquation},
	{"glBlendEquationSeparate", &luna_wrapper_osg_BlendEquation_Extensions::_bind_glBlendEquationSeparate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlendEquation_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_BlendEquation_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BlendEquation_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BlendEquation_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendEquation::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendEquation_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendEquation::Extensions >::enumValues[] = {
	{0,0}
};


