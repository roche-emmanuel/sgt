#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Texture.h>

class luna_wrapper_ork_Texture {
public:
	typedef Luna< ork::Texture > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::Texture* self= (ork::Texture*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Texture >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::Texture* ptr= dynamic_cast< ork::Texture* >(Luna< ork::Object >::check(L,1));
		ork::Texture* ptr= luna_caster< ork::Object, ork::Texture >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Texture >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getComponents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalFormatName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasMipmaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompressedSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompressedImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int ork::Texture::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Texture::getId() const function, expected prototype:\nunsigned int ork::Texture::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Texture::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int ork::Texture::getComponents() const
	static int _bind_getComponents(lua_State *L) {
		if (!_lg_typecheck_getComponents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Texture::getComponents() const function, expected prototype:\nunsigned int ork::Texture::getComponents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Texture::getComponents() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getComponents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::Texture::getInternalFormatName() const
	static int _bind_getInternalFormatName(lua_State *L) {
		if (!_lg_typecheck_getInternalFormatName(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Texture::getInternalFormatName() const function, expected prototype:\nconst char * ork::Texture::getInternalFormatName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Texture::getInternalFormatName() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getInternalFormatName();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::TextureInternalFormat ork::Texture::getInternalFormat() const
	static int _bind_getInternalFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalFormat(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureInternalFormat ork::Texture::getInternalFormat() const function, expected prototype:\nork::TextureInternalFormat ork::Texture::getInternalFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureInternalFormat ork::Texture::getInternalFormat() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureInternalFormat lret = self->getInternalFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::TextureFormat ork::Texture::getFormat() const
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureFormat ork::Texture::getFormat() const function, expected prototype:\nork::TextureFormat ork::Texture::getFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureFormat ork::Texture::getFormat() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureFormat lret = self->getFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::Texture::hasMipmaps() const
	static int _bind_hasMipmaps(lua_State *L) {
		if (!_lg_typecheck_hasMipmaps(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Texture::hasMipmaps() const function, expected prototype:\nbool ork::Texture::hasMipmaps() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Texture::hasMipmaps() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasMipmaps();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Texture::isCompressed() const
	static int _bind_isCompressed(lua_State *L) {
		if (!_lg_typecheck_isCompressed(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Texture::isCompressed() const function, expected prototype:\nbool ork::Texture::isCompressed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Texture::isCompressed() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCompressed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int ork::Texture::getCompressedSize(int level) const
	static int _bind_getCompressedSize(lua_State *L) {
		if (!_lg_typecheck_getCompressedSize(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture::getCompressedSize(int level) const function, expected prototype:\nint ork::Texture::getCompressedSize(int level) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);

		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture::getCompressedSize(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCompressedSize(level);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Texture::getImage(int level, ork::TextureFormat f, ork::PixelType t, void * pixels)
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture::getImage(int level, ork::TextureFormat f, ork::PixelType t, void * pixels) function, expected prototype:\nvoid ork::Texture::getImage(int level, ork::TextureFormat f, ork::PixelType t, void * pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,3);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,4);
		void* pixels=(Luna< void >::check(L,5));

		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture::getImage(int, ork::TextureFormat, ork::PixelType, void *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getImage(level, f, t, pixels);

		return 0;
	}

	// void ork::Texture::getCompressedImage(int level, void * pixels) const
	static int _bind_getCompressedImage(lua_State *L) {
		if (!_lg_typecheck_getCompressedImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture::getCompressedImage(int level, void * pixels) const function, expected prototype:\nvoid ork::Texture::getCompressedImage(int level, void * pixels) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		void* pixels=(Luna< void >::check(L,3));

		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture::getCompressedImage(int, void *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getCompressedImage(level, pixels);

		return 0;
	}

	// void ork::Texture::generateMipMap()
	static int _bind_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_generateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture::generateMipMap() function, expected prototype:\nvoid ork::Texture::generateMipMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture::generateMipMap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateMipMap();

		return 0;
	}

	// const char * ork::Texture::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Texture::base_toString() function, expected prototype:\nconst char * ork::Texture::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture* self=Luna< ork::Object >::checkSubType< ork::Texture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Texture::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Texture* LunaTraits< ork::Texture >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::Texture >::_bind_dtor(ork::Texture* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Texture >::className[] = "Texture";
const char LunaTraits< ork::Texture >::fullName[] = "ork::Texture";
const char LunaTraits< ork::Texture >::moduleName[] = "ork";
const char* LunaTraits< ork::Texture >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Texture >::hash = 79622400;
const int LunaTraits< ork::Texture >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Texture >::methods[] = {
	{"getId", &luna_wrapper_ork_Texture::_bind_getId},
	{"getComponents", &luna_wrapper_ork_Texture::_bind_getComponents},
	{"getInternalFormatName", &luna_wrapper_ork_Texture::_bind_getInternalFormatName},
	{"getInternalFormat", &luna_wrapper_ork_Texture::_bind_getInternalFormat},
	{"getFormat", &luna_wrapper_ork_Texture::_bind_getFormat},
	{"hasMipmaps", &luna_wrapper_ork_Texture::_bind_hasMipmaps},
	{"isCompressed", &luna_wrapper_ork_Texture::_bind_isCompressed},
	{"getCompressedSize", &luna_wrapper_ork_Texture::_bind_getCompressedSize},
	{"getImage", &luna_wrapper_ork_Texture::_bind_getImage},
	{"getCompressedImage", &luna_wrapper_ork_Texture::_bind_getCompressedImage},
	{"generateMipMap", &luna_wrapper_ork_Texture::_bind_generateMipMap},
	{"base_toString", &luna_wrapper_ork_Texture::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Texture::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Texture::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Texture::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Texture >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Texture::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Texture >::enumValues[] = {
	{0,0}
};


