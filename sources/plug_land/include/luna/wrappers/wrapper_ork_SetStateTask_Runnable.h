#ifndef _WRAPPERS_WRAPPER_ORK_SETSTATETASK_RUNNABLE_H_
#define _WRAPPERS_WRAPPER_ORK_SETSTATETASK_RUNNABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/SetStateTask.h>

class wrapper_ork_SetStateTask_Runnable : public ork::SetStateTask::Runnable, public luna_wrapper_base {

public:
		

	~wrapper_ork_SetStateTask_Runnable() {
		logDEBUG3("Calling delete function for wrapper ork_SetStateTask_Runnable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SetStateTask::Runnable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SetStateTask_Runnable(lua_State* L, lua_Table* dum) 
		: ork::SetStateTask::Runnable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SetStateTask::Runnable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::SetStateTask::Runnable::run(ork::ptr< ork::FrameBuffer > fb)
	void run(ork::ptr< ork::FrameBuffer > fb) {
		THROW_IF(!_obj.pushFunction("run"),"No implementation for abstract function ork::SetStateTask::Runnable::run");
		_obj.pushArg((ork::SetStateTask::Runnable*)this);
		_obj.pushArg((ork::FrameBuffer*)fb.get());
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

