#ifndef _WRAPPERS_WRAPPER_ORK_VALUE_H_
#define _WRAPPERS_WRAPPER_ORK_VALUE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Value.h>

class wrapper_ork_Value : public ork::Value, public luna_wrapper_base {

public:
		

	~wrapper_ork_Value() {
		logDEBUG3("Calling delete function for wrapper ork_Value");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Value*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Value(lua_State* L, lua_Table* dum, const char * type, const std::string & name) 
		: ork::Value(type, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Value*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Value*)this);
			return (_obj.callFunction<void>());
		}

		return Value::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Value*)this);
			return (_obj.callFunction<const char*>());
		}

		return Value::toString();
	};

	// ork::UniformType ork::Value::getType() const
	ork::UniformType getType() const {
		THROW_IF(!_obj.pushFunction("getType"),"No implementation for abstract function ork::Value::getType");
		_obj.pushArg((ork::Value*)this);
		return (ork::UniformType)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

