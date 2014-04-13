#ifndef _WRAPPERS_WRAPPER_ORK_VALUESUBROUTINE_H_
#define _WRAPPERS_WRAPPER_ORK_VALUESUBROUTINE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Value.h>

class wrapper_ork_ValueSubroutine : public ork::ValueSubroutine, public luna_wrapper_base {

public:
		

	~wrapper_ork_ValueSubroutine() {
		logDEBUG3("Calling delete function for wrapper ork_ValueSubroutine");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ValueSubroutine*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ValueSubroutine(lua_State* L, lua_Table* dum, ork::Stage stage, const std::string & name) 
		: ork::ValueSubroutine(stage, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ValueSubroutine*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_ValueSubroutine(lua_State* L, lua_Table* dum, ork::Stage stage, const std::string & name, const std::string & value) 
		: ork::ValueSubroutine(stage, name, value), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ValueSubroutine*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ValueSubroutine*)this);
			return (_obj.callFunction<void>());
		}

		return ValueSubroutine::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ValueSubroutine*)this);
			return (_obj.callFunction<const char*>());
		}

		return ValueSubroutine::toString();
	};

	// ork::UniformType ork::ValueSubroutine::getType() const
	ork::UniformType getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((ork::ValueSubroutine*)this);
			return (ork::UniformType)(_obj.callFunction<int>());
		}

		return ValueSubroutine::getType();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

