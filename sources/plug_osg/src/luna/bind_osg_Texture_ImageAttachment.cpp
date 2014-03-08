#include <plug_common.h>

class luna_wrapper_osg_Texture_ImageAttachment {
public:
	typedef Luna< osg::Texture::ImageAttachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12425423) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Texture::ImageAttachment*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::ImageAttachment* rhs =(Luna< osg::Texture::ImageAttachment >::check(L,2));
		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osg::Texture::ImageAttachment* self= (osg::Texture::ImageAttachment*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture::ImageAttachment >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12425423) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Texture::ImageAttachment");
		
		return luna_dynamicCast(L,converters,"osg::Texture::ImageAttachment",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUnit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccess(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLayered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccess(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::ImageAttachment::ImageAttachment()
	static osg::Texture::ImageAttachment* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::ImageAttachment::ImageAttachment() function, expected prototype:\nosg::Texture::ImageAttachment::ImageAttachment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Texture::ImageAttachment();
	}


	// Function binds:
	// unsigned int osg::Texture::ImageAttachment::unit()
	static int _bind_getUnit(lua_State *L) {
		if (!_lg_typecheck_getUnit(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::ImageAttachment::unit() function, expected prototype:\nunsigned int osg::Texture::ImageAttachment::unit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::ImageAttachment::unit(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->unit;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::ImageAttachment::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::ImageAttachment::level() function, expected prototype:\nint osg::Texture::ImageAttachment::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::ImageAttachment::level(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char osg::Texture::ImageAttachment::layered()
	static int _bind_getLayered(lua_State *L) {
		if (!_lg_typecheck_getLayered(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Texture::ImageAttachment::layered() function, expected prototype:\nunsigned char osg::Texture::ImageAttachment::layered()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Texture::ImageAttachment::layered(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->layered;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// int osg::Texture::ImageAttachment::layer()
	static int _bind_getLayer(lua_State *L) {
		if (!_lg_typecheck_getLayer(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::ImageAttachment::layer() function, expected prototype:\nint osg::Texture::ImageAttachment::layer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::ImageAttachment::layer(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->layer;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::ImageAttachment::access()
	static int _bind_getAccess(lua_State *L) {
		if (!_lg_typecheck_getAccess(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::ImageAttachment::access() function, expected prototype:\nunsigned int osg::Texture::ImageAttachment::access()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::ImageAttachment::access(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->access;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::ImageAttachment::format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::ImageAttachment::format() function, expected prototype:\nunsigned int osg::Texture::ImageAttachment::format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::ImageAttachment::format(). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::ImageAttachment::unit(unsigned int value)
	static int _bind_setUnit(lua_State *L) {
		if (!_lg_typecheck_setUnit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::unit(unsigned int value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::unit(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::unit(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unit = value;

		return 0;
	}

	// void osg::Texture::ImageAttachment::level(int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::level(int value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::level(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::level(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void osg::Texture::ImageAttachment::layered(unsigned char value)
	static int _bind_setLayered(lua_State *L) {
		if (!_lg_typecheck_setLayered(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::layered(unsigned char value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::layered(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::layered(unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->layered = value;

		return 0;
	}

	// void osg::Texture::ImageAttachment::layer(int value)
	static int _bind_setLayer(lua_State *L) {
		if (!_lg_typecheck_setLayer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::layer(int value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::layer(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::layer(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->layer = value;

		return 0;
	}

	// void osg::Texture::ImageAttachment::access(unsigned int value)
	static int _bind_setAccess(lua_State *L) {
		if (!_lg_typecheck_setAccess(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::access(unsigned int value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::access(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::access(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->access = value;

		return 0;
	}

	// void osg::Texture::ImageAttachment::format(unsigned int value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::ImageAttachment::format(unsigned int value) function, expected prototype:\nvoid osg::Texture::ImageAttachment::format(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::ImageAttachment* self=(Luna< osg::Texture::ImageAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::ImageAttachment::format(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::ImageAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format = value;

		return 0;
	}


	// Operator binds:

};

osg::Texture::ImageAttachment* LunaTraits< osg::Texture::ImageAttachment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_ImageAttachment::_bind_ctor(L);
}

void LunaTraits< osg::Texture::ImageAttachment >::_bind_dtor(osg::Texture::ImageAttachment* obj) {
	delete obj;
}

const char LunaTraits< osg::Texture::ImageAttachment >::className[] = "Texture_ImageAttachment";
const char LunaTraits< osg::Texture::ImageAttachment >::fullName[] = "osg::Texture::ImageAttachment";
const char LunaTraits< osg::Texture::ImageAttachment >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::ImageAttachment >::parents[] = {0};
const int LunaTraits< osg::Texture::ImageAttachment >::hash = 12425423;
const int LunaTraits< osg::Texture::ImageAttachment >::uniqueIDs[] = {12425423,0};

luna_RegType LunaTraits< osg::Texture::ImageAttachment >::methods[] = {
	{"getUnit", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getUnit},
	{"getLevel", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getLevel},
	{"getLayered", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getLayered},
	{"getLayer", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getLayer},
	{"getAccess", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getAccess},
	{"getFormat", &luna_wrapper_osg_Texture_ImageAttachment::_bind_getFormat},
	{"setUnit", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setUnit},
	{"setLevel", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setLevel},
	{"setLayered", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setLayered},
	{"setLayer", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setLayer},
	{"setAccess", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setAccess},
	{"setFormat", &luna_wrapper_osg_Texture_ImageAttachment::_bind_setFormat},
	{"dynCast", &luna_wrapper_osg_Texture_ImageAttachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Texture_ImageAttachment::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Texture_ImageAttachment::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture_ImageAttachment::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::ImageAttachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::ImageAttachment >::enumValues[] = {
	{0,0}
};


