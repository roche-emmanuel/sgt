#ifndef _WRAPPERS_WRAPPER_ORK_UNIFORMSAMPLER_H_
#define _WRAPPERS_WRAPPER_ORK_UNIFORMSAMPLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Uniform.h>

class wrapper_ork_UniformSampler : public ork::UniformSampler, public luna_wrapper_base {

public:
		

	~wrapper_ork_UniformSampler() {
		logDEBUG3("Calling delete function for wrapper ork_UniformSampler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::UniformSampler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_UniformSampler(lua_State* L, lua_Table* dum, ork::UniformType type, ork::Program * program, ork::UniformBlock * block, const std::string & name, int location) 
		: ork::UniformSampler(type, program, block, name, location), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::UniformSampler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::UniformSampler*)this);
			return (_obj.callFunction<void>());
		}

		return UniformSampler::doRelease();
	};

	// void ork::UniformSampler::setValue()
	void setValue() {
		if(_obj.pushFunction("setValue")) {
			_obj.pushArg((ork::UniformSampler*)this);
			return (_obj.callFunction<void>());
		}

		return UniformSampler::setValue();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::UniformSampler*)this);
			return (_obj.callFunction<const char*>());
		}

		return UniformSampler::toString();
	};

	// ork::UniformType ork::UniformSampler::getType() const
	ork::UniformType getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((ork::UniformSampler*)this);
			return (ork::UniformType)(_obj.callFunction<int>());
		}

		return UniformSampler::getType();
	};

	// void ork::UniformSampler::setValue(ork::ptr< ork::Value > v)
	void setValue(ork::ptr< ork::Value > v) {
		if(_obj.pushFunction("setValue")) {
			_obj.pushArg((ork::UniformSampler*)this);
			_obj.pushArg((ork::Value*)v.get());
			return (_obj.callFunction<void>());
		}

		return UniformSampler::setValue(v);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

