#ifndef _WRAPPERS_WRAPPER_OPENTHREADS_READWRITEMUTEX_H_
#define _WRAPPERS_WRAPPER_OPENTHREADS_READWRITEMUTEX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <OpenThreads/ReadWriteMutex>

class wrapper_OpenThreads_ReadWriteMutex : public OpenThreads::ReadWriteMutex, public luna_wrapper_base {

public:
		

	~wrapper_OpenThreads_ReadWriteMutex() {
		logDEBUG3("Calling delete function for wrapper OpenThreads_ReadWriteMutex");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((OpenThreads::ReadWriteMutex*)this); // No this argument or the object will be referenced again!
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

