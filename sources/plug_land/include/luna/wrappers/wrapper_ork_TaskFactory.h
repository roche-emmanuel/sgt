#ifndef _WRAPPERS_WRAPPER_ORK_TASKFACTORY_H_
#define _WRAPPERS_WRAPPER_ORK_TASKFACTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/TaskFactory.h>

class wrapper_ork_TaskFactory : public ork::TaskFactory, public luna_wrapper_base {

public:
		

	~wrapper_ork_TaskFactory() {
		logDEBUG3("Calling delete function for wrapper ork_TaskFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::TaskFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_TaskFactory(lua_State* L, lua_Table* dum, const char * type) 
		: ork::TaskFactory(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::TaskFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::TaskFactory*)this);
			return (_obj.callFunction<void>());
		}

		return TaskFactory::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::TaskFactory*)this);
			return (_obj.callFunction<const char*>());
		}

		return TaskFactory::toString();
	};

	// ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		THROW_IF(!_obj.pushFunction("getTask"),"No implementation for abstract function ork::TaskFactory::getTask");
		_obj.pushArg((ork::TaskFactory*)this);
		_obj.pushArg((ork::Object*)context.get());
		return _obj.callFunction< ork::Task* >();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

