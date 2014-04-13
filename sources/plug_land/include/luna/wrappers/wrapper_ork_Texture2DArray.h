#ifndef _WRAPPERS_WRAPPER_ORK_TEXTURE_DARRAY_H_
#define _WRAPPERS_WRAPPER_ORK_TEXTURE_DARRAY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Texture2DArray.h>

class wrapper_ork_Texture2DArray : public ork::Texture2DArray, public luna_wrapper_base {

public:
		

	~wrapper_ork_Texture2DArray() {
		logDEBUG3("Calling delete function for wrapper ork_Texture2DArray");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Texture2DArray*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Texture2DArray(lua_State* L, lua_Table* dum, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) 
		: ork::Texture2DArray(w, h, l, tf, f, t, params, s, pixels), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Texture2DArray*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Texture2DArray(lua_State* L, lua_Table* dum) 
		: ork::Texture2DArray(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Texture2DArray*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Texture2DArray*)this);
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::doRelease();
	};

	// void ork::Texture2DArray::swap(ork::ptr< ork::Texture > t)
	void swap(ork::ptr< ork::Texture > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Texture2DArray*)this);
			_obj.pushArg((ork::Texture*)t.get());
			return (_obj.callFunction<void>());
		}

		return Texture2DArray::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Texture2DArray*)this);
			return (_obj.callFunction<const char*>());
		}

		return Texture2DArray::toString();
	};


	// Protected non-virtual methods:
	// void ork::Texture2DArray::init(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	void public_init(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) {
		return ork::Texture2DArray::init(w, h, l, tf, f, t, params, s, pixels);
	};

	// int ork::Texture::bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const
	int public_bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const {
		return ork::Texture::bindToTextureUnit(s, programIds);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,84580371) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_bindToTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Sampler >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27834872) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::Texture2DArray::public_init(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture2DArray::public_init(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::Texture2DArray::public_init(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 7 ID = 84580371\narg 8 ID = 85004853\narg 9 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);
		int l=(int)lua_tointeger(L,4);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,8));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture2DArray::public_init function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,9));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture2DArray::public_init function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture2DArray::public_init function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		wrapper_ork_Texture2DArray* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture2DArray::public_init(int, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(w, h, l, tf, f, t, params, s, pixels);

		return 0;
	}

	// int ork::Texture::public_bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const
	static int _bind_public_bindToTextureUnit(lua_State *L) {
		if (!_lg_typecheck_public_bindToTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture::public_bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const function, expected prototype:\nint ork::Texture::public_bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Sampler > s = Luna< ork::Object >::checkSubType< ork::Sampler >(L,2);
		const std::vector< unsigned int >* programIds_ptr=(Luna< std::vector< unsigned int > >::check(L,3));
		if( !programIds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg programIds in ork::Texture::public_bindToTextureUnit function");
		}
		const std::vector< unsigned int > & programIds=*programIds_ptr;

		wrapper_ork_Texture2DArray* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture::public_bindToTextureUnit(ork::ptr< ork::Sampler >, const std::vector< unsigned int > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_bindToTextureUnit(s, programIds);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"bindToTextureUnit",_bind_public_bindToTextureUnit},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

