#ifndef _WRAPPERS_WRAPPER_OPENTHREADS_REENTRANTMUTEX_H_
#define _WRAPPERS_WRAPPER_OPENTHREADS_REENTRANTMUTEX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <OpenThreads/ReentrantMutex>

class wrapper_OpenThreads_ReentrantMutex : public OpenThreads::ReentrantMutex, public luna_wrapper_base {

public:
		

	~wrapper_OpenThreads_ReentrantMutex() {
		logDEBUG3("Calling delete function for wrapper OpenThreads_ReentrantMutex");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((OpenThreads::ReentrantMutex*)this); // No this argument or the object will be referenced again!
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

