#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TextureCube.h>

class luna_wrapper_ork_TextureCube {
public:
	typedef Luna< ork::TextureCube > luna_t;

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

		ork::TextureCube* self= (ork::TextureCube*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TextureCube >::push(L,self,false);
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
		//ork::TextureCube* ptr= dynamic_cast< ork::TextureCube* >(Luna< ork::Object >::check(L,1));
		ork::TextureCube* ptr= luna_caster< ork::Object, ork::TextureCube >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TextureCube >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompressedSubImage(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
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
	// int ork::TextureCube::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureCube::getWidth() function, expected prototype:\nint ork::TextureCube::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCube* self=Luna< ork::Object >::checkSubType< ork::TextureCube >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureCube::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::TextureCube::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureCube::getHeight() function, expected prototype:\nint ork::TextureCube::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCube* self=Luna< ork::Object >::checkSubType< ork::TextureCube >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureCube::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::TextureCube::setSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_setSubImage(lua_State *L) {
		if (!_lg_typecheck_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TextureCube::setSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::TextureCube::setSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 9 ID = 85004853\narg 10 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,8);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,9);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,10));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::TextureCube::setSubImage function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,11));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::TextureCube::setSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::TextureCube* self=Luna< ork::Object >::checkSubType< ork::TextureCube >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TextureCube::setSubImage(ork::CubeFace, int, int, int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubImage(cf, level, x, y, w, h, f, t, s, pixels);

		return 0;
	}

	// void ork::TextureCube::setCompressedSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, int s, const ork::Buffer & pixels)
	static int _bind_setCompressedSubImage(lua_State *L) {
		if (!_lg_typecheck_setCompressedSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TextureCube::setCompressedSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, int s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::TextureCube::setCompressedSubImage(ork::CubeFace cf, int level, int x, int y, int w, int h, int s, const ork::Buffer & pixels)\nClass arguments details:\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		int s=(int)lua_tointeger(L,8);
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::TextureCube::setCompressedSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::TextureCube* self=Luna< ork::Object >::checkSubType< ork::TextureCube >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TextureCube::setCompressedSubImage(ork::CubeFace, int, int, int, int, int, int, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCompressedSubImage(cf, level, x, y, w, h, s, pixels);

		return 0;
	}

	// const char * ork::TextureCube::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TextureCube::base_toString() function, expected prototype:\nconst char * ork::TextureCube::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCube* self=Luna< ork::Object >::checkSubType< ork::TextureCube >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TextureCube::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureCube::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::TextureCube* LunaTraits< ork::TextureCube >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::TextureCube >::_bind_dtor(ork::TextureCube* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TextureCube >::className[] = "TextureCube";
const char LunaTraits< ork::TextureCube >::fullName[] = "ork::TextureCube";
const char LunaTraits< ork::TextureCube >::moduleName[] = "ork";
const char* LunaTraits< ork::TextureCube >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::TextureCube >::hash = 51002178;
const int LunaTraits< ork::TextureCube >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::TextureCube >::methods[] = {
	{"getWidth", &luna_wrapper_ork_TextureCube::_bind_getWidth},
	{"getHeight", &luna_wrapper_ork_TextureCube::_bind_getHeight},
	{"setSubImage", &luna_wrapper_ork_TextureCube::_bind_setSubImage},
	{"setCompressedSubImage", &luna_wrapper_ork_TextureCube::_bind_setCompressedSubImage},
	{"base_toString", &luna_wrapper_ork_TextureCube::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_TextureCube::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TextureCube::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TextureCube::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TextureCube >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TextureCube::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TextureCube >::enumValues[] = {
	{0,0}
};


