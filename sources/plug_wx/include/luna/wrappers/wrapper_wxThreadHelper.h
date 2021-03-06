#ifndef _WRAPPERS_WRAPPER_WXTHREADHELPER_H_
#define _WRAPPERS_WRAPPER_WXTHREADHELPER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/thread.h>

class wrapper_wxThreadHelper : public wxThreadHelper, public luna_wrapper_base {

public:
		

	~wrapper_wxThreadHelper() {
		logDEBUG3("Calling delete function for wrapper wxThreadHelper");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxThreadHelper*)this); // No this argument or the object will be referenced again!
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


public:
// void * wxThreadHelper::Entry()
void * Entry() {
	THROW_IF(true,"The function call void * wxThreadHelper::Entry() is not implemented in wrapper.");
};

};




#endif

