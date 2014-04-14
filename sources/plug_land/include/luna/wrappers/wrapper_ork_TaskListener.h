#ifndef _WRAPPERS_WRAPPER_ORK_TASKLISTENER_H_
#define _WRAPPERS_WRAPPER_ORK_TASKLISTENER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/Task.h>

class wrapper_ork_TaskListener : public ork::TaskListener, public luna_wrapper_base {

public:
		

	~wrapper_ork_TaskListener() {
		logDEBUG3("Calling delete function for wrapper ork_TaskListener");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::TaskListener*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_TaskListener(lua_State* L, lua_Table* dum) 
		: ork::TaskListener(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::TaskListener*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void ork::TaskListener::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	void taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r) {
		THROW_IF(!_obj.pushFunction("taskStateChanged"),"No implementation for abstract function ork::TaskListener::taskStateChanged");
		_obj.pushArg((ork::TaskListener*)this);
		_obj.pushArg((ork::Task*)t.get());
		_obj.pushArg(done);
		_obj.pushArg((int)r);
		return (_obj.callFunction<void>());
	};

	// void ork::TaskListener::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
	void completionDateChanged(ork::ptr< ork::Task > t, unsigned int date) {
		THROW_IF(!_obj.pushFunction("completionDateChanged"),"No implementation for abstract function ork::TaskListener::completionDateChanged");
		_obj.pushArg((ork::TaskListener*)this);
		_obj.pushArg((ork::Task*)t.get());
		_obj.pushArg(date);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

