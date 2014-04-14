#ifndef _WRAPPERS_WRAPPER_ORK_TASKGRAPH_H_
#define _WRAPPERS_WRAPPER_ORK_TASKGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/TaskGraph.h>

class wrapper_ork_TaskGraph : public ork::TaskGraph, public luna_wrapper_base {

public:
		

	~wrapper_ork_TaskGraph() {
		logDEBUG3("Calling delete function for wrapper ork_TaskGraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::TaskGraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_TaskGraph(lua_State* L, lua_Table* dum) 
		: ork::TaskGraph(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_TaskGraph(lua_State* L, lua_Table* dum, ork::ptr< ork::Task > arg1) 
		: ork::TaskGraph(arg1), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::doRelease();
	};

	// const std::type_info * ork::Task::getTypeInfo()
	const std::type_info * getTypeInfo() {
		if(_obj.pushFunction("getTypeInfo")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<std::type_info*>());
		}

		return TaskGraph::getTypeInfo();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<const char*>());
		}

		return TaskGraph::toString();
	};

	// void * ork::Task::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<void*>());
		}

		return TaskGraph::getContext();
	};

	// int ork::Task::getComplexity() const
	int getComplexity() const {
		if(_obj.pushFunction("getComplexity")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<int>());
		}

		return TaskGraph::getComplexity();
	};

	// void ork::Task::begin()
	void begin() {
		if(_obj.pushFunction("begin")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::begin();
	};

	// bool ork::Task::run()
	bool run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<bool>());
		}

		return TaskGraph::run();
	};

	// void ork::Task::end()
	void end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::end();
	};

	// bool ork::Task::isDone()
	bool isDone() {
		if(_obj.pushFunction("isDone")) {
			_obj.pushArg((ork::TaskGraph*)this);
			return (_obj.callFunction<bool>());
		}

		return TaskGraph::isDone();
	};

	// void ork::TaskGraph::init(std::set< ork::Task * > & initialized)
	void init(std::set< ork::Task * > & initialized) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.pushArg(&initialized);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::init(initialized);
	};

	// void ork::TaskGraph::setIsDone(bool done, unsigned int t, ork::Task::reason r)
	void setIsDone(bool done, unsigned int t, ork::Task::reason r) {
		if(_obj.pushFunction("setIsDone")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.pushArg(done);
			_obj.pushArg(t);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::setIsDone(done, t, r);
	};

	// void ork::TaskGraph::setPredecessorsCompletionDate(unsigned int t)
	void setPredecessorsCompletionDate(unsigned int t) {
		if(_obj.pushFunction("setPredecessorsCompletionDate")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::setPredecessorsCompletionDate(t);
	};

	// void ork::TaskGraph::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	void taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r) {
		if(_obj.pushFunction("taskStateChanged")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.pushArg((ork::Task*)t.get());
			_obj.pushArg(done);
			_obj.pushArg((int)r);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::taskStateChanged(t, done, r);
	};

	// void ork::TaskGraph::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
	void completionDateChanged(ork::ptr< ork::Task > t, unsigned int date) {
		if(_obj.pushFunction("completionDateChanged")) {
			_obj.pushArg((ork::TaskGraph*)this);
			_obj.pushArg((ork::Task*)t.get());
			_obj.pushArg(date);
			return (_obj.callFunction<void>());
		}

		return TaskGraph::completionDateChanged(t, date);
	};


	// Protected non-virtual methods:
	// void ork::TaskGraph::cleanup()
	void public_cleanup() {
		return ork::TaskGraph::cleanup();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_cleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void ork::TaskGraph::public_cleanup()
	static int _bind_public_cleanup(lua_State *L) {
		if (!_lg_typecheck_public_cleanup(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskGraph::public_cleanup() function, expected prototype:\nvoid ork::TaskGraph::public_cleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_TaskGraph* self=Luna< ork::Object >::checkSubType< wrapper_ork_TaskGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskGraph::public_cleanup(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_cleanup();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"cleanup",_bind_public_cleanup},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

