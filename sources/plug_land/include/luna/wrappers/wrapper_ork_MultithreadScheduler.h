#ifndef _WRAPPERS_WRAPPER_ORK_MULTITHREADSCHEDULER_H_
#define _WRAPPERS_WRAPPER_ORK_MULTITHREADSCHEDULER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/taskgraph/MultithreadScheduler.h>

class wrapper_ork_MultithreadScheduler : public ork::MultithreadScheduler, public luna_wrapper_base {

public:
		

	~wrapper_ork_MultithreadScheduler() {
		logDEBUG3("Calling delete function for wrapper ork_MultithreadScheduler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::MultithreadScheduler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_MultithreadScheduler(lua_State* L, lua_Table* dum, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) 
		: ork::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			return (_obj.callFunction<const char*>());
		}

		return MultithreadScheduler::toString();
	};

	// bool ork::MultithreadScheduler::supportsPrefetch(bool gpuTasks)
	bool supportsPrefetch(bool gpuTasks) {
		if(_obj.pushFunction("supportsPrefetch")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg(gpuTasks);
			return (_obj.callFunction<bool>());
		}

		return MultithreadScheduler::supportsPrefetch(gpuTasks);
	};

	// void ork::MultithreadScheduler::schedule(ork::ptr< ork::Task > task)
	void schedule(ork::ptr< ork::Task > task) {
		if(_obj.pushFunction("schedule")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg((ork::Task*)task.get());
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::schedule(task);
	};

	// void ork::MultithreadScheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	void reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline) {
		if(_obj.pushFunction("reschedule")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((int)r);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::reschedule(task, r, deadline);
	};

	// void ork::MultithreadScheduler::run(ork::ptr< ork::Task > task)
	void run(ork::ptr< ork::Task > task) {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((ork::MultithreadScheduler*)this);
			_obj.pushArg((ork::Task*)task.get());
			return (_obj.callFunction<void>());
		}

		return MultithreadScheduler::run(task);
	};


	// Protected non-virtual methods:
	// void ork::MultithreadScheduler::init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	void public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) {
		return ork::MultithreadScheduler::init(prefetchRate, prefetchQueue, frameRate, nThreads);
	};

	// void ork::Scheduler::swap(ork::ptr< ork::Scheduler > s)
	void public_swap(ork::ptr< ork::Scheduler > s) {
		return ork::Scheduler::swap(s);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads) function, expected prototype:\nvoid ork::MultithreadScheduler::public_init(int prefetchRate, int prefetchQueue, float frameRate, int nThreads)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int prefetchRate=(int)lua_tointeger(L,2);
		int prefetchQueue=(int)lua_tointeger(L,3);
		float frameRate=(float)lua_tonumber(L,4);
		int nThreads=(int)lua_tointeger(L,5);

		wrapper_ork_MultithreadScheduler* self=Luna< ork::Object >::checkSubType< wrapper_ork_MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::public_init(int, int, float, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(prefetchRate, prefetchQueue, frameRate, nThreads);

		return 0;
	}

	// void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s) function, expected prototype:\nvoid ork::Scheduler::public_swap(ork::ptr< ork::Scheduler > s)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Scheduler > s = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2);

		wrapper_ork_MultithreadScheduler* self=Luna< ork::Object >::checkSubType< wrapper_ork_MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Scheduler::public_swap(ork::ptr< ork::Scheduler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(s);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

