#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_MultithreadScheduler.h>

class luna_wrapper_ork_MultithreadScheduler {
public:
	typedef Luna< ork::MultithreadScheduler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		ork::MultithreadScheduler* self= (ork::MultithreadScheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::MultithreadScheduler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::MultithreadScheduler* ptr= dynamic_cast< ork::MultithreadScheduler* >(Luna< ork::Object >::check(L,1));
		ork::MultithreadScheduler* ptr= luna_caster< ork::Object, ork::MultithreadScheduler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::MultithreadScheduler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_supportsPrefetch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_schedule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reschedule(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_monitorTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportsPrefetch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_schedule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reschedule(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_run(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	static ork::MultithreadScheduler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) function, expected prototype:\nork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int prefetchRate=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int prefetchQueue=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		float frameRate=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		int nThreads=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new ork::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads);
	}

	// ork::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	static ork::MultithreadScheduler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) function, expected prototype:\nork::MultithreadScheduler::MultithreadScheduler(lua_Table * data, int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int prefetchRate=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int prefetchQueue=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		float frameRate=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		int nThreads=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_ork_MultithreadScheduler(L,NULL, prefetchRate, prefetchQueue, frameRate, nThreads);
	}

	// Overload binder for ork::MultithreadScheduler::MultithreadScheduler
	static ork::MultithreadScheduler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MultithreadScheduler, cannot match any of the overloads for function MultithreadScheduler:\n  MultithreadScheduler(int, int, float, int)\n  MultithreadScheduler(lua_Table *, int, int, float, int)\n");
		return NULL;
	}


	// Function binds:
	// bool ork::MultithreadScheduler::supportsPrefetch(bool gpuTasks)
	static int _bind_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_supportsPrefetch(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::MultithreadScheduler::supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool ork::MultithreadScheduler::supportsPrefetch(bool gpuTasks)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::MultithreadScheduler::supportsPrefetch(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::MultithreadScheduler::schedule(ork::ptr< ork::Task > task)
	static int _bind_schedule(lua_State *L) {
		if (!_lg_typecheck_schedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::schedule(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::MultithreadScheduler::schedule(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::schedule(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->schedule(task);

		return 0;
	}

	// void ork::MultithreadScheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	static int _bind_reschedule(lua_State *L) {
		if (!_lg_typecheck_reschedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid ork::MultithreadScheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::reschedule(ork::ptr< ork::Task >, ork::Task::reason, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reschedule(task, r, deadline);

		return 0;
	}

	// void ork::MultithreadScheduler::run(ork::ptr< ork::Task > task)
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::run(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::MultithreadScheduler::run(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::run(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run(task);

		return 0;
	}

	// void ork::MultithreadScheduler::monitorTask(const std::string & taskType)
	static int _bind_monitorTask(lua_State *L) {
		if (!_lg_typecheck_monitorTask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::monitorTask(const std::string & taskType) function, expected prototype:\nvoid ork::MultithreadScheduler::monitorTask(const std::string & taskType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string taskType(lua_tostring(L,2),lua_objlen(L,2));

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::monitorTask(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->monitorTask(taskType);

		return 0;
	}

	// const char * ork::MultithreadScheduler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::MultithreadScheduler::base_toString() function, expected prototype:\nconst char * ork::MultithreadScheduler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::MultithreadScheduler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MultithreadScheduler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool ork::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks)
	static int _bind_base_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_base_supportsPrefetch(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool ork::MultithreadScheduler::base_supportsPrefetch(bool gpuTasks)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::MultithreadScheduler::base_supportsPrefetch(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MultithreadScheduler::supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::MultithreadScheduler::base_schedule(ork::ptr< ork::Task > task)
	static int _bind_base_schedule(lua_State *L) {
		if (!_lg_typecheck_base_schedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::base_schedule(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::MultithreadScheduler::base_schedule(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::base_schedule(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultithreadScheduler::schedule(task);

		return 0;
	}

	// void ork::MultithreadScheduler::base_reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	static int _bind_base_reschedule(lua_State *L) {
		if (!_lg_typecheck_base_reschedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::base_reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid ork::MultithreadScheduler::base_reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::base_reschedule(ork::ptr< ork::Task >, ork::Task::reason, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultithreadScheduler::reschedule(task, r, deadline);

		return 0;
	}

	// void ork::MultithreadScheduler::base_run(ork::ptr< ork::Task > task)
	static int _bind_base_run(lua_State *L) {
		if (!_lg_typecheck_base_run(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MultithreadScheduler::base_run(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::MultithreadScheduler::base_run(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::MultithreadScheduler* self=Luna< ork::Object >::checkSubType< ork::MultithreadScheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MultithreadScheduler::base_run(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultithreadScheduler::run(task);

		return 0;
	}


	// Operator binds:

};

ork::MultithreadScheduler* LunaTraits< ork::MultithreadScheduler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_MultithreadScheduler::_bind_ctor(L);
}

void LunaTraits< ork::MultithreadScheduler >::_bind_dtor(ork::MultithreadScheduler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::MultithreadScheduler >::className[] = "MultithreadScheduler";
const char LunaTraits< ork::MultithreadScheduler >::fullName[] = "ork::MultithreadScheduler";
const char LunaTraits< ork::MultithreadScheduler >::moduleName[] = "ork";
const char* LunaTraits< ork::MultithreadScheduler >::parents[] = {"ork.Scheduler", 0};
const int LunaTraits< ork::MultithreadScheduler >::hash = 90054789;
const int LunaTraits< ork::MultithreadScheduler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::MultithreadScheduler >::methods[] = {
	{"supportsPrefetch", &luna_wrapper_ork_MultithreadScheduler::_bind_supportsPrefetch},
	{"schedule", &luna_wrapper_ork_MultithreadScheduler::_bind_schedule},
	{"reschedule", &luna_wrapper_ork_MultithreadScheduler::_bind_reschedule},
	{"run", &luna_wrapper_ork_MultithreadScheduler::_bind_run},
	{"monitorTask", &luna_wrapper_ork_MultithreadScheduler::_bind_monitorTask},
	{"base_toString", &luna_wrapper_ork_MultithreadScheduler::_bind_base_toString},
	{"base_supportsPrefetch", &luna_wrapper_ork_MultithreadScheduler::_bind_base_supportsPrefetch},
	{"base_schedule", &luna_wrapper_ork_MultithreadScheduler::_bind_base_schedule},
	{"base_reschedule", &luna_wrapper_ork_MultithreadScheduler::_bind_base_reschedule},
	{"base_run", &luna_wrapper_ork_MultithreadScheduler::_bind_base_run},
	{"fromVoid", &luna_wrapper_ork_MultithreadScheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_MultithreadScheduler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_MultithreadScheduler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::MultithreadScheduler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_MultithreadScheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MultithreadScheduler >::enumValues[] = {
	{0,0}
};


