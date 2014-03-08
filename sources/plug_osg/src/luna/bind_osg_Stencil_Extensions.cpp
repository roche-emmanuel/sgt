#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Stencil_Extensions.h>

class luna_wrapper_osg_Stencil_Extensions {
public:
	typedef Luna< osg::Stencil::Extensions > luna_t;

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

		osg::Stencil::Extensions* self= (osg::Stencil::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Stencil::Extensions >::push(L,self,false);
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
		//osg::Stencil::Extensions* ptr= dynamic_cast< osg::Stencil::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::Stencil::Extensions* ptr= luna_caster< osg::Referenced, osg::Stencil::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Stencil::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setStencilWrapSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isStencilWrapSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::Stencil::Extensions::Extensions(unsigned int contextID)
	static osg::Stencil::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stencil::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Stencil::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Stencil::Extensions(contextID);
	}

	// osg::Stencil::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Stencil::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stencil::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Stencil::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Stencil_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Stencil::Extensions::Extensions
	static osg::Stencil::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Stencil::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stencil::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Stencil::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Stencil::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Stencil::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stencil::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Stencil::Extensions::setStencilWrapSupported(bool flag)
	static int _bind_setStencilWrapSupported(lua_State *L) {
		if (!_lg_typecheck_setStencilWrapSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stencil::Extensions::setStencilWrapSupported(bool flag) function, expected prototype:\nvoid osg::Stencil::Extensions::setStencilWrapSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Stencil::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Stencil::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stencil::Extensions::setStencilWrapSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilWrapSupported(flag);

		return 0;
	}

	// bool osg::Stencil::Extensions::isStencilWrapSupported() const
	static int _bind_isStencilWrapSupported(lua_State *L) {
		if (!_lg_typecheck_isStencilWrapSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stencil::Extensions::isStencilWrapSupported() const function, expected prototype:\nbool osg::Stencil::Extensions::isStencilWrapSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Stencil::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Stencil::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stencil::Extensions::isStencilWrapSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isStencilWrapSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Stencil::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stencil::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Stencil::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Stencil::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Stencil::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stencil::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Stencil::Extensions* LunaTraits< osg::Stencil::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Stencil_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Stencil::Extensions >::_bind_dtor(osg::Stencil::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Stencil::Extensions >::className[] = "Stencil_Extensions";
const char LunaTraits< osg::Stencil::Extensions >::fullName[] = "osg::Stencil::Extensions";
const char LunaTraits< osg::Stencil::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Stencil::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Stencil::Extensions >::hash = 52615665;
const int LunaTraits< osg::Stencil::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Stencil::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Stencil_Extensions::_bind_setupGLExtensions},
	{"setStencilWrapSupported", &luna_wrapper_osg_Stencil_Extensions::_bind_setStencilWrapSupported},
	{"isStencilWrapSupported", &luna_wrapper_osg_Stencil_Extensions::_bind_isStencilWrapSupported},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Stencil_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Stencil_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Stencil_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Stencil_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stencil::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Stencil_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stencil::Extensions >::enumValues[] = {
	{0,0}
};


