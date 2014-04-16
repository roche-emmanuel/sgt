#ifndef _WRAPPERS_WRAPPER_STATIC_REF_H_
#define _WRAPPERS_WRAPPER_STATIC_REF_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/core/Object.h>

class wrapper_static_ref : public static_ref, public luna_wrapper_base {

public:
		

	~wrapper_static_ref() {
		logDEBUG3("Calling delete function for wrapper static_ref");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((static_ref*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_static_ref(lua_State* L, lua_Table* dum) 
		: static_ref(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((static_ref*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void static_ref::erase()
	void erase() {
		THROW_IF(!_obj.pushFunction("erase"),"No implementation for abstract function static_ref::erase");
		_obj.pushArg((static_ref*)this);
		return (_obj.callFunction<void>());
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

