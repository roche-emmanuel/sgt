#ifndef _WRAPPERS_WRAPPER_ORK_SCHEDULER_H_
#define _WRAPPERS_WRAPPER_ORK_SCHEDULER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/Scheduler.h>

class wrapper_ork_Scheduler : public ork::Scheduler, public luna_wrapper_base {

public:
		

	~wrapper_ork_Scheduler() {
		logDEBUG3("Calling delete function for wrapper ork_Scheduler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Scheduler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Scheduler(lua_State* L, lua_Table* dum, const char * type) 
		: ork::Scheduler(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Scheduler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Scheduler*)this);
			return (_obj.callFunction<void>());
		}

		return Scheduler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Scheduler*)this);
			return (_obj.callFunction<const char*>());
		}

		return Scheduler::toString();
	};

	// bool ork::Scheduler::supportsPrefetch(bool gpuTasks)
	bool supportsPrefetch(bool gpuTasks) {
		THROW_IF(!_obj.pushFunction("supportsPrefetch"),"No implementation for abstract function ork::Scheduler::supportsPrefetch");
		_obj.pushArg((ork::Scheduler*)this);
		_obj.pushArg(gpuTasks);
		return (_obj.callFunction<bool>());
	};

	// void ork::Scheduler::schedule(ork::ptr< ork::Task > task)
	void schedule(ork::ptr< ork::Task > task) {
		THROW_IF(!_obj.pushFunction("schedule"),"No implementation for abstract function ork::Scheduler::schedule");
		_obj.pushArg((ork::Scheduler*)this);
		_obj.pushArg((ork::Task*)task.get());
		return (_obj.callFunction<void>());
	};

	// void ork::Scheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	void reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline) {
		THROW_IF(!_obj.pushFunction("reschedule"),"No implementation for abstract function ork::Scheduler::reschedule");
		_obj.pushArg((ork::Scheduler*)this);
		_obj.pushArg((ork::Task*)task.get());
		_obj.pushArg((int)r);
		_obj.pushArg(deadline);
		return (_obj.callFunction<void>());
	};

	// void ork::Scheduler::run(ork::ptr< ork::Task > task)
	void run(ork::ptr< ork::Task > task) {
		THROW_IF(!_obj.pushFunction("run"),"No implementation for abstract function ork::Scheduler::run");
		_obj.pushArg((ork::Scheduler*)this);
		_obj.pushArg((ork::Task*)task.get());
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void ork::Scheduler::swap(ork::ptr< ork::Scheduler > s)
	void public_swap(ork::ptr< ork::Scheduler > s) {
		return ork::Scheduler::swap(s);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s) function, expected prototype:\nvoid ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Scheduler > s = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2);

		wrapper_ork_Scheduler* self=Luna< ork::Object >::checkSubType< wrapper_ork_Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(s);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

