#ifndef _WRAPPERS_WRAPPER_ORK_VALUESAMPLER_H_
#define _WRAPPERS_WRAPPER_ORK_VALUESAMPLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Value.h>

class wrapper_ork_ValueSampler : public ork::ValueSampler, public luna_wrapper_base {

public:
		

	~wrapper_ork_ValueSampler() {
		logDEBUG3("Calling delete function for wrapper ork_ValueSampler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ValueSampler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ValueSampler(lua_State* L, lua_Table* dum, ork::UniformType type, const std::string & name) 
		: ork::ValueSampler(type, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ValueSampler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_ValueSampler(lua_State* L, lua_Table* dum, ork::UniformType type, const std::string & name, ork::ptr< ork::Texture > value) 
		: ork::ValueSampler(type, name, value), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ValueSampler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ValueSampler*)this);
			return (_obj.callFunction<void>());
		}

		return ValueSampler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ValueSampler*)this);
			return (_obj.callFunction<const char*>());
		}

		return ValueSampler::toString();
	};

	// ork::UniformType ork::ValueSampler::getType() const
	ork::UniformType getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((ork::ValueSampler*)this);
			return (ork::UniformType)(_obj.callFunction<int>());
		}

		return ValueSampler::getType();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

