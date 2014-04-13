#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TextureCubeArray.h>

class luna_wrapper_ork_TextureCubeArray {
public:
	typedef Luna< ork::TextureCubeArray > luna_t;

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

		ork::TextureCubeArray* self= (ork::TextureCubeArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TextureCubeArray >::push(L,self,false);
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
		//ork::TextureCubeArray* ptr= dynamic_cast< ork::TextureCubeArray* >(Luna< ork::Object >::check(L,1));
		ork::TextureCubeArray* ptr= luna_caster< ork::Object, ork::TextureCubeArray >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TextureCubeArray >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayers(lua_State *L) {
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
	// ork::TextureCubeArray::TextureCubeArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels)
	static ork::TextureCubeArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureCubeArray::TextureCubeArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels) function, expected prototype:\nork::TextureCubeArray::TextureCubeArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels)\nClass arguments details:\narg 7 ID = 84580371\narg 8 ID = 85004853\narg 9 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,1);
		int h=(int)lua_tointeger(L,2);
		int l=(int)lua_tointeger(L,3);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,4);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,5);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,6);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::TextureCubeArray::TextureCubeArray function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,8));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::TextureCubeArray::TextureCubeArray function");
		}
		ork::Buffer::Parameters s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::TextureCubeArray::TextureCubeArray function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new ork::TextureCubeArray(w, h, l, tf, f, t, params, s, pixels);
	}

	// ork::TextureCubeArray::TextureCubeArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels)
	static ork::TextureCubeArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureCubeArray::TextureCubeArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels) function, expected prototype:\nork::TextureCubeArray::TextureCubeArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, ork::Buffer::Parameters s, const ork::Buffer & pixels)\nClass arguments details:\narg 8 ID = 84580371\narg 9 ID = 85004853\narg 10 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);
		int l=(int)lua_tointeger(L,4);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,8));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::TextureCubeArray::TextureCubeArray function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,9));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::TextureCubeArray::TextureCubeArray function");
		}
		ork::Buffer::Parameters s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::TextureCubeArray::TextureCubeArray function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new wrapper_ork_TextureCubeArray(L,NULL, w, h, l, tf, f, t, params, s, pixels);
	}

	// Overload binder for ork::TextureCubeArray::TextureCubeArray
	static ork::TextureCubeArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureCubeArray, cannot match any of the overloads for function TextureCubeArray:\n  TextureCubeArray(int, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, ork::Buffer::Parameters, const ork::Buffer &)\n  TextureCubeArray(lua_Table *, int, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, ork::Buffer::Parameters, const ork::Buffer &)\n");
		return NULL;
	}


	// Function binds:
	// int ork::TextureCubeArray::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureCubeArray::getWidth() function, expected prototype:\nint ork::TextureCubeArray::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCubeArray* self=Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureCubeArray::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::TextureCubeArray::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureCubeArray::getHeight() function, expected prototype:\nint ork::TextureCubeArray::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCubeArray* self=Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureCubeArray::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::TextureCubeArray::getLayers()
	static int _bind_getLayers(lua_State *L) {
		if (!_lg_typecheck_getLayers(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureCubeArray::getLayers() function, expected prototype:\nint ork::TextureCubeArray::getLayers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCubeArray* self=Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureCubeArray::getLayers(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::TextureCubeArray::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TextureCubeArray::base_toString() function, expected prototype:\nconst char * ork::TextureCubeArray::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureCubeArray* self=Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TextureCubeArray::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureCubeArray::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::TextureCubeArray* LunaTraits< ork::TextureCubeArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TextureCubeArray::_bind_ctor(L);
}

void LunaTraits< ork::TextureCubeArray >::_bind_dtor(ork::TextureCubeArray* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TextureCubeArray >::className[] = "TextureCubeArray";
const char LunaTraits< ork::TextureCubeArray >::fullName[] = "ork::TextureCubeArray";
const char LunaTraits< ork::TextureCubeArray >::moduleName[] = "ork";
const char* LunaTraits< ork::TextureCubeArray >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::TextureCubeArray >::hash = 69850655;
const int LunaTraits< ork::TextureCubeArray >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::TextureCubeArray >::methods[] = {
	{"getWidth", &luna_wrapper_ork_TextureCubeArray::_bind_getWidth},
	{"getHeight", &luna_wrapper_ork_TextureCubeArray::_bind_getHeight},
	{"getLayers", &luna_wrapper_ork_TextureCubeArray::_bind_getLayers},
	{"base_toString", &luna_wrapper_ork_TextureCubeArray::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_TextureCubeArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TextureCubeArray::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TextureCubeArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TextureCubeArray >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TextureCubeArray::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TextureCubeArray >::enumValues[] = {
	{0,0}
};


