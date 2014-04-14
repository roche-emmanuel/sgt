#ifndef _WRAPPERS_WRAPPER_ORK_TASK_H_
#define _WRAPPERS_WRAPPER_ORK_TASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/Task.h>

class wrapper_ork_Task : public ork::Task, public luna_wrapper_base {

public:
		

	~wrapper_ork_Task() {
		logDEBUG3("Calling delete function for wrapper ork_Task");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Task*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Task(lua_State* L, lua_Table* dum, const char * type, bool gpuTask, unsigned int deadline) 
		: ork::Task(type, gpuTask, deadline), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Task*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<void>());
		}

		return Task::doRelease();
	};

	// const std::type_info * ork::Task::getTypeInfo()
	const std::type_info * getTypeInfo() {
		if(_obj.pushFunction("getTypeInfo")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<std::type_info*>());
		}

		return Task::getTypeInfo();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<const char*>());
		}

		return Task::toString();
	};

	// void * ork::Task::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<void*>());
		}

		return Task::getContext();
	};

	// int ork::Task::getComplexity() const
	int getComplexity() const {
		if(_obj.pushFunction("getComplexity")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<int>());
		}

		return Task::getComplexity();
	};

	// void ork::Task::init(std::set< ork::Task * > & initialized)
	void init(std::set< ork::Task * > & initialized) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((ork::Task*)this);
			_obj.pushArg(&initialized);
			return (_obj.callFunction<void>());
		}

		return Task::init(initialized);
	};

	// void ork::Task::begin()
	void begin() {
		if(_obj.pushFunction("begin")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<void>());
		}

		return Task::begin();
	};

	// bool ork::Task::run()
	bool run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<bool>());
		}

		return Task::run();
	};

	// void ork::Task::end()
	void end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<void>());
		}

		return Task::end();
	};

	// bool ork::Task::isDone()
	bool isDone() {
		if(_obj.pushFunction("isDone")) {
			_obj.pushArg((ork::Task*)this);
			return (_obj.callFunction<bool>());
		}

		return Task::isDone();
	};

	// void ork::Task::setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED)
	void setIsDone(bool done, unsigned int t, ork::Task::reason r = ork::Task::DATA_NEEDED) {
		if(_obj.pushFunction("setIsDone")) {
			_obj.pushArg((ork::Task*)this);
			_obj.pushArg(done);
			_obj.pushArg(t);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return Task::setIsDone(done, t, r);
	};

	// void ork::Task::setPredecessorsCompletionDate(unsigned int t)
	void setPredecessorsCompletionDate(unsigned int t) {
		if(_obj.pushFunction("setPredecessorsCompletionDate")) {
			_obj.pushArg((ork::Task*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return Task::setPredecessorsCompletionDate(t);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

