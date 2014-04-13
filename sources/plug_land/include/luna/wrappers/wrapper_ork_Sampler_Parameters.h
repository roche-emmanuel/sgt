#ifndef _WRAPPERS_WRAPPER_ORK_SAMPLER_PARAMETERS_H_
#define _WRAPPERS_WRAPPER_ORK_SAMPLER_PARAMETERS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Sampler.h>

class wrapper_ork_Sampler_Parameters : public ork::Sampler::Parameters, public luna_wrapper_base {

public:
		

	~wrapper_ork_Sampler_Parameters() {
		logDEBUG3("Calling delete function for wrapper ork_Sampler_Parameters");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Sampler::Parameters*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Sampler_Parameters(lua_State* L, lua_Table* dum) 
		: ork::Sampler::Parameters(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapS(ork::TextureWrap wrapS)
	ork::Sampler::Parameters & wrapS(ork::TextureWrap wrapS) {
		if(_obj.pushFunction("wrapS")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)wrapS);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::wrapS(wrapS);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapT(ork::TextureWrap wrapT)
	ork::Sampler::Parameters & wrapT(ork::TextureWrap wrapT) {
		if(_obj.pushFunction("wrapT")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)wrapT);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::wrapT(wrapT);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapR(ork::TextureWrap wrapR)
	ork::Sampler::Parameters & wrapR(ork::TextureWrap wrapR) {
		if(_obj.pushFunction("wrapR")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)wrapR);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::wrapR(wrapR);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::min(ork::TextureFilter min)
	ork::Sampler::Parameters & min(ork::TextureFilter min) {
		if(_obj.pushFunction("min")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)min);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::min(min);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::mag(ork::TextureFilter mag)
	ork::Sampler::Parameters & mag(ork::TextureFilter mag) {
		if(_obj.pushFunction("mag")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)mag);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::mag(mag);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderi(int r = 0, int g = 0, int b = 0, int a = 0)
	ork::Sampler::Parameters & borderi(int r = 0, int g = 0, int b = 0, int a = 0) {
		if(_obj.pushFunction("borderi")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::borderi(r, g, b, a);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)
	ork::Sampler::Parameters & borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f) {
		if(_obj.pushFunction("borderf")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::borderf(r, g, b, a);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderIi(int r = 0, int g = 0, int b = 0, int a = 0)
	ork::Sampler::Parameters & borderIi(int r = 0, int g = 0, int b = 0, int a = 0) {
		if(_obj.pushFunction("borderIi")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::borderIi(r, g, b, a);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)
	ork::Sampler::Parameters & borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0) {
		if(_obj.pushFunction("borderIui")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(r);
			_obj.pushArg(g);
			_obj.pushArg(b);
			_obj.pushArg(a);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::borderIui(r, g, b, a);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodMin(float lodMin)
	ork::Sampler::Parameters & lodMin(float lodMin) {
		if(_obj.pushFunction("lodMin")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(lodMin);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::lodMin(lodMin);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodMax(float lodMax)
	ork::Sampler::Parameters & lodMax(float lodMax) {
		if(_obj.pushFunction("lodMax")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(lodMax);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::lodMax(lodMax);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodBias(float lodBias)
	ork::Sampler::Parameters & lodBias(float lodBias) {
		if(_obj.pushFunction("lodBias")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(lodBias);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::lodBias(lodBias);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::compareFunc(ork::Function compareFunc)
	ork::Sampler::Parameters & compareFunc(ork::Function compareFunc) {
		if(_obj.pushFunction("compareFunc")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg((int)compareFunc);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::compareFunc(compareFunc);
	};

	// ork::Sampler::Parameters & ork::Sampler::Parameters::maxAnisotropyEXT(float maxAnisotropy)
	ork::Sampler::Parameters & maxAnisotropyEXT(float maxAnisotropy) {
		if(_obj.pushFunction("maxAnisotropyEXT")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(maxAnisotropy);
			return *(_obj.callFunction<ork::Sampler::Parameters*>());
		}

		return Parameters::maxAnisotropyEXT(maxAnisotropy);
	};

	// bool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters & v) const
	bool operator<(const ork::Sampler::Parameters & v) const {
		if(_obj.pushFunction("__lt")) {
			_obj.pushArg((ork::Sampler::Parameters*)this);
			_obj.pushArg(&v);
			return (_obj.callFunction<bool>());
		}

		return Parameters::operator<(v);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

