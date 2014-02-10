#ifndef _WRAPPERS_WRAPPER_BASECLASS_H_
#define _WRAPPERS_WRAPPER_BASECLASS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_BaseClass : public BaseClass, public luna_wrapper_base {

public:
		

	~wrapper_BaseClass() {
		logDEBUG3("Calling delete function for wrapper BaseClass");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((BaseClass*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_BaseClass(lua_State* L, lua_Table* dum) 
		: BaseClass(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((BaseClass*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

