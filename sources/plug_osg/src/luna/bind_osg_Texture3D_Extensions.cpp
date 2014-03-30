#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture3D_Extensions.h>

class luna_wrapper_osg_Texture3D_Extensions {
public:
	typedef Luna< osg::Texture3D::Extensions > luna_t;

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

		osg::Texture3D::Extensions* self= (osg::Texture3D::Extensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture3D::Extensions >::push(L,self,false);
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
		//osg::Texture3D::Extensions* ptr= dynamic_cast< osg::Texture3D::Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture3D::Extensions* ptr= luna_caster< osg::Referenced, osg::Texture3D::Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture3D::Extensions >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setTexture3DSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTexture3DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexture3DFast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTexture3DFast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTexture3DSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxTexture3DSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexImage3DSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressedTexSubImage3DSupported(lua_State *L) {
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
	// osg::Texture3D::Extensions::Extensions(unsigned int contextID)
	static osg::Texture3D::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Texture3D::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture3D::Extensions(contextID);
	}

	// osg::Texture3D::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Texture3D::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture3D::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Texture3D::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Texture3D_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Texture3D::Extensions::Extensions
	static osg::Texture3D::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Texture3D::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Texture3D::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture3D::Extensions::setupGLExtensions(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Texture3D::Extensions::setTexture3DSupported(bool flag)
	static int _bind_setTexture3DSupported(lua_State *L) {
		if (!_lg_typecheck_setTexture3DSupported(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::Extensions::setTexture3DSupported(bool flag) function, expected prototype:\nvoid osg::Texture3D::Extensions::setTexture3DSupported(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture3D::Extensions::setTexture3DSupported(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexture3DSupported(flag);

		return 0;
	}

	// bool osg::Texture3D::Extensions::isTexture3DSupported() const
	static int _bind_isTexture3DSupported(lua_State *L) {
		if (!_lg_typecheck_isTexture3DSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture3D::Extensions::isTexture3DSupported() const function, expected prototype:\nbool osg::Texture3D::Extensions::isTexture3DSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture3D::Extensions::isTexture3DSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTexture3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture3D::Extensions::setTexture3DFast(bool flag)
	static int _bind_setTexture3DFast(lua_State *L) {
		if (!_lg_typecheck_setTexture3DFast(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::Extensions::setTexture3DFast(bool flag) function, expected prototype:\nvoid osg::Texture3D::Extensions::setTexture3DFast(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture3D::Extensions::setTexture3DFast(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexture3DFast(flag);

		return 0;
	}

	// bool osg::Texture3D::Extensions::isTexture3DFast() const
	static int _bind_isTexture3DFast(lua_State *L) {
		if (!_lg_typecheck_isTexture3DFast(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture3D::Extensions::isTexture3DFast() const function, expected prototype:\nbool osg::Texture3D::Extensions::isTexture3DFast() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture3D::Extensions::isTexture3DFast() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTexture3DFast();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture3D::Extensions::setMaxTexture3DSize(int maxsize)
	static int _bind_setMaxTexture3DSize(lua_State *L) {
		if (!_lg_typecheck_setMaxTexture3DSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::Extensions::setMaxTexture3DSize(int maxsize) function, expected prototype:\nvoid osg::Texture3D::Extensions::setMaxTexture3DSize(int maxsize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxsize=(int)lua_tointeger(L,2);

		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture3D::Extensions::setMaxTexture3DSize(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxTexture3DSize(maxsize);

		return 0;
	}

	// int osg::Texture3D::Extensions::maxTexture3DSize() const
	static int _bind_maxTexture3DSize(lua_State *L) {
		if (!_lg_typecheck_maxTexture3DSize(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture3D::Extensions::maxTexture3DSize() const function, expected prototype:\nint osg::Texture3D::Extensions::maxTexture3DSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture3D::Extensions::maxTexture3DSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->maxTexture3DSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture3D::Extensions::isCompressedTexImage3DSupported() const
	static int _bind_isCompressedTexImage3DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexImage3DSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture3D::Extensions::isCompressedTexImage3DSupported() const function, expected prototype:\nbool osg::Texture3D::Extensions::isCompressedTexImage3DSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture3D::Extensions::isCompressedTexImage3DSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCompressedTexImage3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported() const
	static int _bind_isCompressedTexSubImage3DSupported(lua_State *L) {
		if (!_lg_typecheck_isCompressedTexSubImage3DSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported() const function, expected prototype:\nbool osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCompressedTexSubImage3DSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture3D::Extensions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture3D::Extensions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Texture3D::Extensions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Texture3D::Extensions* self=Luna< osg::Referenced >::checkSubType< osg::Texture3D::Extensions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture3D::Extensions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Extensions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Texture3D::Extensions* LunaTraits< osg::Texture3D::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture3D_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Texture3D::Extensions >::_bind_dtor(osg::Texture3D::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture3D::Extensions >::className[] = "Texture3D_Extensions";
const char LunaTraits< osg::Texture3D::Extensions >::fullName[] = "osg::Texture3D::Extensions";
const char LunaTraits< osg::Texture3D::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture3D::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture3D::Extensions >::hash = 32801573;
const int LunaTraits< osg::Texture3D::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture3D::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Texture3D_Extensions::_bind_setupGLExtensions},
	{"setTexture3DSupported", &luna_wrapper_osg_Texture3D_Extensions::_bind_setTexture3DSupported},
	{"isTexture3DSupported", &luna_wrapper_osg_Texture3D_Extensions::_bind_isTexture3DSupported},
	{"setTexture3DFast", &luna_wrapper_osg_Texture3D_Extensions::_bind_setTexture3DFast},
	{"isTexture3DFast", &luna_wrapper_osg_Texture3D_Extensions::_bind_isTexture3DFast},
	{"setMaxTexture3DSize", &luna_wrapper_osg_Texture3D_Extensions::_bind_setMaxTexture3DSize},
	{"maxTexture3DSize", &luna_wrapper_osg_Texture3D_Extensions::_bind_maxTexture3DSize},
	{"isCompressedTexImage3DSupported", &luna_wrapper_osg_Texture3D_Extensions::_bind_isCompressedTexImage3DSupported},
	{"isCompressedTexSubImage3DSupported", &luna_wrapper_osg_Texture3D_Extensions::_bind_isCompressedTexSubImage3DSupported},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Texture3D_Extensions::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Texture3D_Extensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture3D_Extensions::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Texture3D_Extensions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture3D::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture3D_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture3D::Extensions >::enumValues[] = {
	{0,0}
};


