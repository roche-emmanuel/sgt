#ifndef _WRAPPERS_WRAPPER_ORK_TEXTURE_PARAMETERS_H_
#define _WRAPPERS_WRAPPER_ORK_TEXTURE_PARAMETERS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Texture.h>

class wrapper_ork_Texture_Parameters : public ork::Texture::Parameters, public luna_wrapper_base {

public:
		

	~wrapper_ork_Texture_Parameters() {
		logDEBUG3("Calling delete function for wrapper ork_Texture_Parameters");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Texture::Parameters*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Texture_Parameters(lua_State* L, lua_Table* dum) 
		: ork::Texture::Parameters(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters & v) const
	bool operator<(const ork::Sampler::Parameters & v) const {
		if(_obj.pushFunction("__lt")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(&v);
			return (_obj.callFunction<bool>());
		}

		return Parameters::operator<(v);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::wrapS(ork::TextureWrap wrapS)
	ork::Texture::Parameters & wrapS(ork::TextureWrap wrapS) {
		if(_obj.pushFunction("wrapS")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)wrapS);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::wrapS(wrapS);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::wrapT(ork::TextureWrap wrapT)
	ork::Texture::Parameters & wrapT(ork::TextureWrap wrapT) {
		if(_obj.pushFunction("wrapT")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)wrapT);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::wrapT(wrapT);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::wrapR(ork::TextureWrap wrapR)
	ork::Texture::Parameters & wrapR(ork::TextureWrap wrapR) {
		if(_obj.pushFunction("wrapR")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)wrapR);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::wrapR(wrapR);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::min(ork::TextureFilter min)
	ork::Texture::Parameters & min(ork::TextureFilter min) {
		if(_obj.pushFunction("min")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)min);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::min(min);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::mag(ork::TextureFilter mag)
	ork::Texture::Parameters & mag(ork::TextureFilter mag) {
		if(_obj.pushFunction("mag")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)mag);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::mag(mag);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::borderi(int r = 0, int g = 0, int b = 0, int a = 0)
	ork::Texture::Parameters & borderi(int r = 0, int g = 0, int b = 0, int a = 0) {
		if(_obj.pushFunction("borderi")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::borderi(r, g, b, a);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)
	ork::Texture::Parameters & borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f) {
		if(_obj.pushFunction("borderf")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::borderf(r, g, b, a);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::borderIi(int r = 0, int g = 0, int b = 0, int a = 0)
	ork::Texture::Parameters & borderIi(int r = 0, int g = 0, int b = 0, int a = 0) {
		if(_obj.pushFunction("borderIi")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::borderIi(r, g, b, a);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)
	ork::Texture::Parameters & borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0) {
		if(_obj.pushFunction("borderIui")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::borderIui(r, g, b, a);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::lodMin(float lodMin)
	ork::Texture::Parameters & lodMin(float lodMin) {
		if(_obj.pushFunction("lodMin")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(lodMin);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::lodMin(lodMin);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::lodMax(float lodMax)
	ork::Texture::Parameters & lodMax(float lodMax) {
		if(_obj.pushFunction("lodMax")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(lodMax);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::lodMax(lodMax);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::lodBias(float lodBias)
	ork::Texture::Parameters & lodBias(float lodBias) {
		if(_obj.pushFunction("lodBias")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(lodBias);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::lodBias(lodBias);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::compareFunc(ork::Function compareFunc)
	ork::Texture::Parameters & compareFunc(ork::Function compareFunc) {
		if(_obj.pushFunction("compareFunc")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg((int)compareFunc);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::compareFunc(compareFunc);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::maxAnisotropyEXT(float maxAnisotropy)
	ork::Texture::Parameters & maxAnisotropyEXT(float maxAnisotropy) {
		if(_obj.pushFunction("maxAnisotropyEXT")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(maxAnisotropy);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::maxAnisotropyEXT(maxAnisotropy);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::swizzle(char r, char g, char b, char a)
	ork::Texture::Parameters & swizzle(char r, char g, char b, char a) {
		if(_obj.pushFunction("swizzle")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::swizzle(r, g, b, a);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::minLevel(int minLevel)
	ork::Texture::Parameters & minLevel(int minLevel) {
		if(_obj.pushFunction("minLevel")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(minLevel);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::minLevel(minLevel);
	};

	// ork::Texture::Parameters & ork::Texture::Parameters::maxLevel(int maxLevel)
	ork::Texture::Parameters & maxLevel(int maxLevel) {
		if(_obj.pushFunction("maxLevel")) {
			_obj.pushArg((ork::Texture::Parameters*)this);
			_obj.pushArg(maxLevel);
			return *(_obj.callFunction<ork::Texture::Parameters*>());
		}

		return Parameters::maxLevel(maxLevel);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

