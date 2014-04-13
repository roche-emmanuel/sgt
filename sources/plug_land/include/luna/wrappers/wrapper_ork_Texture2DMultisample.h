#ifndef _WRAPPERS_WRAPPER_ORK_TEXTURE_DMULTISAMPLE_H_
#define _WRAPPERS_WRAPPER_ORK_TEXTURE_DMULTISAMPLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Texture2DMultisample.h>

class wrapper_ork_Texture2DMultisample : public ork::Texture2DMultisample, public luna_wrapper_base {

public:
		

	~wrapper_ork_Texture2DMultisample() {
		logDEBUG3("Calling delete function for wrapper ork_Texture2DMultisample");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Texture2DMultisample*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Texture2DMultisample(lua_State* L, lua_Table* dum, int w, int h, int samples, ork::TextureInternalFormat tf, bool fixedLocations) 
		: ork::Texture2DMultisample(w, h, samples, tf, fixedLocations), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Texture2DMultisample*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Texture2DMultisample*)this);
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::doRelease();
	};

	// void ork::Texture::swap(ork::ptr< ork::Texture > t)
	void swap(ork::ptr< ork::Texture > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Texture2DMultisample*)this);
			_obj.pushArg((ork::Texture*)t.get());
			return (_obj.callFunction<void>());
		}

		return Texture2DMultisample::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Texture2DMultisample*)this);
			return (_obj.callFunction<const char*>());
		}

		return Texture2DMultisample::toString();
	};


	// Protected non-virtual methods:
	// void ork::Texture::init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)
	void public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params) {
		return ork::Texture::init(tf, params);
	};

	// int ork::Texture::bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const
	int public_bindToTextureUnit(ork::ptr< ork::Sampler > s, const std::vector< unsigned int > & programIds) const {
		return ork::Texture::bindToTextureUnit(s, programIds);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,84580371) ) return false;
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
	// void ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params) function, expected prototype:\nvoid ork::Texture::public_init(ork::TextureInternalFormat tf, const ork::Texture::Parameters & params)\nClass arguments details:\narg 2 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,2);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,3));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture::public_init function");
		}
		const ork::Texture::Parameters & params=*params_ptr;

		wrapper_ork_Texture2DMultisample* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture2DMultisample >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture::public_init(ork::TextureInternalFormat, const ork::Texture::Parameters &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tf, params);

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

		wrapper_ork_Texture2DMultisample* self=Luna< ork::Object >::checkSubType< wrapper_ork_Texture2DMultisample >(L,1);
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

