#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_Thread.h>

class luna_wrapper_OpenThreads_Thread {
public:
	typedef Luna< OpenThreads::Thread > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::Thread,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86558172) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Thread*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread* rhs =(Luna< OpenThreads::Thread >::check(L,2));
		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread* self= (OpenThreads::Thread*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::Thread >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86558172) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Thread");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Thread",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetConcurrency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetConcurrency(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CurrentThread(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_YieldCurrentThread(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMasterPriority(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_microSleep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThreadId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProcessId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_startThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_testCancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSchedulePriority(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSchedulePriority(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSchedulePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSchedulePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStackSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStackSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_printSchedulingInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_join(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCancelModeDisable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCancelModeAsynchronous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCancelModeDeferred(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cancelCleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProcessorAffinity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cancelCleanup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::Thread::Thread(lua_Table * data)
	static OpenThreads::Thread* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::Thread::Thread(lua_Table * data) function, expected prototype:\nOpenThreads::Thread::Thread(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_OpenThreads_Thread(L,NULL);
	}


	// Function binds:
	// static int OpenThreads::Thread::SetConcurrency(int concurrencyLevel)
	static int _bind_SetConcurrency(lua_State *L) {
		if (!_lg_typecheck_SetConcurrency(L)) {
			luaL_error(L, "luna typecheck failed in static int OpenThreads::Thread::SetConcurrency(int concurrencyLevel) function, expected prototype:\nstatic int OpenThreads::Thread::SetConcurrency(int concurrencyLevel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int concurrencyLevel=(int)lua_tointeger(L,1);

		int lret = OpenThreads::Thread::SetConcurrency(concurrencyLevel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int OpenThreads::Thread::GetConcurrency()
	static int _bind_GetConcurrency(lua_State *L) {
		if (!_lg_typecheck_GetConcurrency(L)) {
			luaL_error(L, "luna typecheck failed in static int OpenThreads::Thread::GetConcurrency() function, expected prototype:\nstatic int OpenThreads::Thread::GetConcurrency()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = OpenThreads::Thread::GetConcurrency();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static OpenThreads::Thread * OpenThreads::Thread::CurrentThread()
	static int _bind_CurrentThread(lua_State *L) {
		if (!_lg_typecheck_CurrentThread(L)) {
			luaL_error(L, "luna typecheck failed in static OpenThreads::Thread * OpenThreads::Thread::CurrentThread() function, expected prototype:\nstatic OpenThreads::Thread * OpenThreads::Thread::CurrentThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread * lret = OpenThreads::Thread::CurrentThread();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< OpenThreads::Thread >::push(L,lret,false);

		return 1;
	}

	// static void OpenThreads::Thread::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luaL_error(L, "luna typecheck failed in static void OpenThreads::Thread::Init() function, expected prototype:\nstatic void OpenThreads::Thread::Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread::Init();

		return 0;
	}

	// static int OpenThreads::Thread::YieldCurrentThread()
	static int _bind_YieldCurrentThread(lua_State *L) {
		if (!_lg_typecheck_YieldCurrentThread(L)) {
			luaL_error(L, "luna typecheck failed in static int OpenThreads::Thread::YieldCurrentThread() function, expected prototype:\nstatic int OpenThreads::Thread::YieldCurrentThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = OpenThreads::Thread::YieldCurrentThread();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static OpenThreads::Thread::ThreadPriority OpenThreads::Thread::GetMasterPriority()
	static int _bind_GetMasterPriority(lua_State *L) {
		if (!_lg_typecheck_GetMasterPriority(L)) {
			luaL_error(L, "luna typecheck failed in static OpenThreads::Thread::ThreadPriority OpenThreads::Thread::GetMasterPriority() function, expected prototype:\nstatic OpenThreads::Thread::ThreadPriority OpenThreads::Thread::GetMasterPriority()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread::ThreadPriority lret = OpenThreads::Thread::GetMasterPriority();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int OpenThreads::Thread::microSleep(unsigned int microsec)
	static int _bind_microSleep(lua_State *L) {
		if (!_lg_typecheck_microSleep(L)) {
			luaL_error(L, "luna typecheck failed in static int OpenThreads::Thread::microSleep(unsigned int microsec) function, expected prototype:\nstatic int OpenThreads::Thread::microSleep(unsigned int microsec)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int microsec=(unsigned int)lua_tointeger(L,1);

		int lret = OpenThreads::Thread::microSleep(microsec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::getThreadId()
	static int _bind_getThreadId(lua_State *L) {
		if (!_lg_typecheck_getThreadId(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::getThreadId() function, expected prototype:\nint OpenThreads::Thread::getThreadId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::getThreadId(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getThreadId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t OpenThreads::Thread::getProcessId()
	static int _bind_getProcessId(lua_State *L) {
		if (!_lg_typecheck_getProcessId(L)) {
			luaL_error(L, "luna typecheck failed in size_t OpenThreads::Thread::getProcessId() function, expected prototype:\nsize_t OpenThreads::Thread::getProcessId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t OpenThreads::Thread::getProcessId(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getProcessId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::start()
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::start() function, expected prototype:\nint OpenThreads::Thread::start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::start(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::startThread()
	static int _bind_startThread(lua_State *L) {
		if (!_lg_typecheck_startThread(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::startThread() function, expected prototype:\nint OpenThreads::Thread::startThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::startThread(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->startThread();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::testCancel()
	static int _bind_testCancel(lua_State *L) {
		if (!_lg_typecheck_testCancel(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::testCancel() function, expected prototype:\nint OpenThreads::Thread::testCancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::testCancel(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->testCancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::cancel()
	static int _bind_cancel(lua_State *L) {
		if (!_lg_typecheck_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::cancel() function, expected prototype:\nint OpenThreads::Thread::cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::cancel(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority)
	static int _bind_setSchedulePriority(lua_State *L) {
		if (!_lg_typecheck_setSchedulePriority(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority) function, expected prototype:\nint OpenThreads::Thread::setSchedulePriority(OpenThreads::Thread::ThreadPriority priority)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread::ThreadPriority priority=(OpenThreads::Thread::ThreadPriority)lua_tointeger(L,2);

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setSchedulePriority(OpenThreads::Thread::ThreadPriority). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setSchedulePriority(priority);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::getSchedulePriority()
	static int _bind_getSchedulePriority(lua_State *L) {
		if (!_lg_typecheck_getSchedulePriority(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::getSchedulePriority() function, expected prototype:\nint OpenThreads::Thread::getSchedulePriority()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::getSchedulePriority(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSchedulePriority();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setSchedulePolicy(OpenThreads::Thread::ThreadPolicy policy)
	static int _bind_setSchedulePolicy(lua_State *L) {
		if (!_lg_typecheck_setSchedulePolicy(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setSchedulePolicy(OpenThreads::Thread::ThreadPolicy policy) function, expected prototype:\nint OpenThreads::Thread::setSchedulePolicy(OpenThreads::Thread::ThreadPolicy policy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Thread::ThreadPolicy policy=(OpenThreads::Thread::ThreadPolicy)lua_tointeger(L,2);

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setSchedulePolicy(OpenThreads::Thread::ThreadPolicy). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setSchedulePolicy(policy);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::getSchedulePolicy()
	static int _bind_getSchedulePolicy(lua_State *L) {
		if (!_lg_typecheck_getSchedulePolicy(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::getSchedulePolicy() function, expected prototype:\nint OpenThreads::Thread::getSchedulePolicy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::getSchedulePolicy(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSchedulePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setStackSize(size_t size)
	static int _bind_setStackSize(lua_State *L) {
		if (!_lg_typecheck_setStackSize(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setStackSize(size_t size) function, expected prototype:\nint OpenThreads::Thread::setStackSize(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setStackSize(size_t). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setStackSize(size);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t OpenThreads::Thread::getStackSize()
	static int _bind_getStackSize(lua_State *L) {
		if (!_lg_typecheck_getStackSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t OpenThreads::Thread::getStackSize() function, expected prototype:\nsize_t OpenThreads::Thread::getStackSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t OpenThreads::Thread::getStackSize(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->getStackSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void OpenThreads::Thread::printSchedulingInfo()
	static int _bind_printSchedulingInfo(lua_State *L) {
		if (!_lg_typecheck_printSchedulingInfo(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Thread::printSchedulingInfo() function, expected prototype:\nvoid OpenThreads::Thread::printSchedulingInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Thread::printSchedulingInfo(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->printSchedulingInfo();

		return 0;
	}

	// int OpenThreads::Thread::detach()
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::detach() function, expected prototype:\nint OpenThreads::Thread::detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::detach(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->detach();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::join()
	static int _bind_join(lua_State *L) {
		if (!_lg_typecheck_join(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::join() function, expected prototype:\nint OpenThreads::Thread::join()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::join(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->join();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setCancelModeDisable()
	static int _bind_setCancelModeDisable(lua_State *L) {
		if (!_lg_typecheck_setCancelModeDisable(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setCancelModeDisable() function, expected prototype:\nint OpenThreads::Thread::setCancelModeDisable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setCancelModeDisable(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setCancelModeDisable();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setCancelModeAsynchronous()
	static int _bind_setCancelModeAsynchronous(lua_State *L) {
		if (!_lg_typecheck_setCancelModeAsynchronous(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setCancelModeAsynchronous() function, expected prototype:\nint OpenThreads::Thread::setCancelModeAsynchronous()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setCancelModeAsynchronous(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setCancelModeAsynchronous();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::setCancelModeDeferred()
	static int _bind_setCancelModeDeferred(lua_State *L) {
		if (!_lg_typecheck_setCancelModeDeferred(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setCancelModeDeferred() function, expected prototype:\nint OpenThreads::Thread::setCancelModeDeferred()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setCancelModeDeferred(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setCancelModeDeferred();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool OpenThreads::Thread::isRunning()
	static int _bind_isRunning(lua_State *L) {
		if (!_lg_typecheck_isRunning(L)) {
			luaL_error(L, "luna typecheck failed in bool OpenThreads::Thread::isRunning() function, expected prototype:\nbool OpenThreads::Thread::isRunning()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool OpenThreads::Thread::isRunning(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void OpenThreads::Thread::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Thread::run() function, expected prototype:\nvoid OpenThreads::Thread::run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Thread::run(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run();

		return 0;
	}

	// void OpenThreads::Thread::cancelCleanup()
	static int _bind_cancelCleanup(lua_State *L) {
		if (!_lg_typecheck_cancelCleanup(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Thread::cancelCleanup() function, expected prototype:\nvoid OpenThreads::Thread::cancelCleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Thread::cancelCleanup(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cancelCleanup();

		return 0;
	}

	// void * OpenThreads::Thread::getImplementation()
	static int _bind_getImplementation(lua_State *L) {
		if (!_lg_typecheck_getImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void * OpenThreads::Thread::getImplementation() function, expected prototype:\nvoid * OpenThreads::Thread::getImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * OpenThreads::Thread::getImplementation(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->getImplementation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int OpenThreads::Thread::setProcessorAffinity(unsigned int cpunum)
	static int _bind_setProcessorAffinity(lua_State *L) {
		if (!_lg_typecheck_setProcessorAffinity(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::setProcessorAffinity(unsigned int cpunum) function, expected prototype:\nint OpenThreads::Thread::setProcessorAffinity(unsigned int cpunum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cpunum=(unsigned int)lua_tointeger(L,2);

		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::setProcessorAffinity(unsigned int). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->setProcessorAffinity(cpunum);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Thread::base_cancel()
	static int _bind_base_cancel(lua_State *L) {
		if (!_lg_typecheck_base_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Thread::base_cancel() function, expected prototype:\nint OpenThreads::Thread::base_cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Thread::base_cancel(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Thread::cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void OpenThreads::Thread::base_cancelCleanup()
	static int _bind_base_cancelCleanup(lua_State *L) {
		if (!_lg_typecheck_base_cancelCleanup(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Thread::base_cancelCleanup() function, expected prototype:\nvoid OpenThreads::Thread::base_cancelCleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Thread* self=(Luna< OpenThreads::Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Thread::base_cancelCleanup(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Thread >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Thread::cancelCleanup();

		return 0;
	}


	// Operator binds:

};

OpenThreads::Thread* LunaTraits< OpenThreads::Thread >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_Thread::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void OpenThreads::Thread::run()
}

void LunaTraits< OpenThreads::Thread >::_bind_dtor(OpenThreads::Thread* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Thread >::className[] = "Thread";
const char LunaTraits< OpenThreads::Thread >::fullName[] = "OpenThreads::Thread";
const char LunaTraits< OpenThreads::Thread >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Thread >::parents[] = {0};
const int LunaTraits< OpenThreads::Thread >::hash = 86558172;
const int LunaTraits< OpenThreads::Thread >::uniqueIDs[] = {86558172,0};

luna_RegType LunaTraits< OpenThreads::Thread >::methods[] = {
	{"SetConcurrency", &luna_wrapper_OpenThreads_Thread::_bind_SetConcurrency},
	{"GetConcurrency", &luna_wrapper_OpenThreads_Thread::_bind_GetConcurrency},
	{"CurrentThread", &luna_wrapper_OpenThreads_Thread::_bind_CurrentThread},
	{"Init", &luna_wrapper_OpenThreads_Thread::_bind_Init},
	{"YieldCurrentThread", &luna_wrapper_OpenThreads_Thread::_bind_YieldCurrentThread},
	{"GetMasterPriority", &luna_wrapper_OpenThreads_Thread::_bind_GetMasterPriority},
	{"microSleep", &luna_wrapper_OpenThreads_Thread::_bind_microSleep},
	{"getThreadId", &luna_wrapper_OpenThreads_Thread::_bind_getThreadId},
	{"getProcessId", &luna_wrapper_OpenThreads_Thread::_bind_getProcessId},
	{"start", &luna_wrapper_OpenThreads_Thread::_bind_start},
	{"startThread", &luna_wrapper_OpenThreads_Thread::_bind_startThread},
	{"testCancel", &luna_wrapper_OpenThreads_Thread::_bind_testCancel},
	{"cancel", &luna_wrapper_OpenThreads_Thread::_bind_cancel},
	{"setSchedulePriority", &luna_wrapper_OpenThreads_Thread::_bind_setSchedulePriority},
	{"getSchedulePriority", &luna_wrapper_OpenThreads_Thread::_bind_getSchedulePriority},
	{"setSchedulePolicy", &luna_wrapper_OpenThreads_Thread::_bind_setSchedulePolicy},
	{"getSchedulePolicy", &luna_wrapper_OpenThreads_Thread::_bind_getSchedulePolicy},
	{"setStackSize", &luna_wrapper_OpenThreads_Thread::_bind_setStackSize},
	{"getStackSize", &luna_wrapper_OpenThreads_Thread::_bind_getStackSize},
	{"printSchedulingInfo", &luna_wrapper_OpenThreads_Thread::_bind_printSchedulingInfo},
	{"detach", &luna_wrapper_OpenThreads_Thread::_bind_detach},
	{"join", &luna_wrapper_OpenThreads_Thread::_bind_join},
	{"setCancelModeDisable", &luna_wrapper_OpenThreads_Thread::_bind_setCancelModeDisable},
	{"setCancelModeAsynchronous", &luna_wrapper_OpenThreads_Thread::_bind_setCancelModeAsynchronous},
	{"setCancelModeDeferred", &luna_wrapper_OpenThreads_Thread::_bind_setCancelModeDeferred},
	{"isRunning", &luna_wrapper_OpenThreads_Thread::_bind_isRunning},
	{"run", &luna_wrapper_OpenThreads_Thread::_bind_run},
	{"cancelCleanup", &luna_wrapper_OpenThreads_Thread::_bind_cancelCleanup},
	{"getImplementation", &luna_wrapper_OpenThreads_Thread::_bind_getImplementation},
	{"setProcessorAffinity", &luna_wrapper_OpenThreads_Thread::_bind_setProcessorAffinity},
	{"base_cancel", &luna_wrapper_OpenThreads_Thread::_bind_base_cancel},
	{"base_cancelCleanup", &luna_wrapper_OpenThreads_Thread::_bind_base_cancelCleanup},
	{"dynCast", &luna_wrapper_OpenThreads_Thread::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Thread::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_Thread::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_Thread::_bind_asVoid},
	{"getTable", &luna_wrapper_OpenThreads_Thread::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Thread >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Thread >::enumValues[] = {
	{"THREAD_PRIORITY_MAX", OpenThreads::Thread::THREAD_PRIORITY_MAX},
	{"THREAD_PRIORITY_HIGH", OpenThreads::Thread::THREAD_PRIORITY_HIGH},
	{"THREAD_PRIORITY_NOMINAL", OpenThreads::Thread::THREAD_PRIORITY_NOMINAL},
	{"THREAD_PRIORITY_LOW", OpenThreads::Thread::THREAD_PRIORITY_LOW},
	{"THREAD_PRIORITY_MIN", OpenThreads::Thread::THREAD_PRIORITY_MIN},
	{"THREAD_PRIORITY_DEFAULT", OpenThreads::Thread::THREAD_PRIORITY_DEFAULT},
	{"THREAD_SCHEDULE_FIFO", OpenThreads::Thread::THREAD_SCHEDULE_FIFO},
	{"THREAD_SCHEDULE_ROUND_ROBIN", OpenThreads::Thread::THREAD_SCHEDULE_ROUND_ROBIN},
	{"THREAD_SCHEDULE_TIME_SHARE", OpenThreads::Thread::THREAD_SCHEDULE_TIME_SHARE},
	{"THREAD_SCHEDULE_DEFAULT", OpenThreads::Thread::THREAD_SCHEDULE_DEFAULT},
	{0,0}
};


