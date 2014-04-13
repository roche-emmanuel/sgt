#ifndef _WRAPPERS_WRAPPER_ORK_UNIFORM_H_
#define _WRAPPERS_WRAPPER_ORK_UNIFORM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Uniform.h>

class wrapper_ork_Uniform : public ork::Uniform, public luna_wrapper_base {

public:
		

	~wrapper_ork_Uniform() {
		logDEBUG3("Calling delete function for wrapper ork_Uniform");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Uniform*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Uniform(lua_State* L, lua_Table* dum, const char * type, ork::Program * program, ork::UniformBlock * block, const std::string & name, int location) 
		: ork::Uniform(type, program, block, name, location), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Uniform*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Uniform*)this);
			return (_obj.callFunction<void>());
		}

		return Uniform::doRelease();
	};

	// void ork::Uniform::setValue()
	void setValue() {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function ork::Uniform::setValue");
		_obj.pushArg((ork::Uniform*)this);
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Uniform*)this);
			return (_obj.callFunction<const char*>());
		}

		return Uniform::toString();
	};

	// ork::UniformType ork::Uniform::getType() const
	ork::UniformType getType() const {
		THROW_IF(!_obj.pushFunction("getType"),"No implementation for abstract function ork::Uniform::getType");
		_obj.pushArg((ork::Uniform*)this);
		return (ork::UniformType)(_obj.callFunction<int>());
	};

	// void ork::Uniform::setValue(ork::ptr< ork::Value > v)
	void setValue(ork::ptr< ork::Value > v) {
		THROW_IF(!_obj.pushFunction("setValue"),"No implementation for abstract function ork::Uniform::setValue");
		_obj.pushArg((ork::Uniform*)this);
		_obj.pushArg((ork::Value*)v.get());
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

