#ifndef _WRAPPERS_WRAPPER_OPENTHREADS_BARRIER_H_
#define _WRAPPERS_WRAPPER_OPENTHREADS_BARRIER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <OpenThreads/Barrier>

class wrapper_OpenThreads_Barrier : public OpenThreads::Barrier, public luna_wrapper_base {

public:
		

	~wrapper_OpenThreads_Barrier() {
		logDEBUG3("Calling delete function for wrapper OpenThreads_Barrier");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((OpenThreads::Barrier*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_OpenThreads_Barrier(lua_State* L, lua_Table* dum, int numThreads = 0) 
		: OpenThreads::Barrier(numThreads), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((OpenThreads::Barrier*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void OpenThreads::Barrier::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((OpenThreads::Barrier*)this);
			return (_obj.callFunction<void>());
		}

		return Barrier::reset();
	};

	// void OpenThreads::Barrier::block(unsigned int numThreads = 0)
	void block(unsigned int numThreads = 0) {
		if(_obj.pushFunction("block")) {
			_obj.pushArg((OpenThreads::Barrier*)this);
			_obj.pushArg(numThreads);
			return (_obj.callFunction<void>());
		}

		return Barrier::block(numThreads);
	};

	// void OpenThreads::Barrier::release()
	void release() {
		if(_obj.pushFunction("release")) {
			_obj.pushArg((OpenThreads::Barrier*)this);
			return (_obj.callFunction<void>());
		}

		return Barrier::release();
	};

	// int OpenThreads::Barrier::numThreadsCurrentlyBlocked()
	int numThreadsCurrentlyBlocked() {
		if(_obj.pushFunction("numThreadsCurrentlyBlocked")) {
			_obj.pushArg((OpenThreads::Barrier*)this);
			return (_obj.callFunction<int>());
		}

		return Barrier::numThreadsCurrentlyBlocked();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

