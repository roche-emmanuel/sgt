#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Scheduler.h>

class luna_wrapper_ork_Scheduler {
public:
	typedef Luna< ork::Scheduler > luna_t;

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

		ork::Scheduler* self= (ork::Scheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Scheduler >::push(L,self,false);
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
		//ork::Scheduler* ptr= dynamic_cast< ork::Scheduler* >(Luna< ork::Object >::check(L,1));
		ork::Scheduler* ptr= luna_caster< ork::Object, ork::Scheduler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Scheduler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Scheduler::Scheduler(lua_Table * data, const char * type)
	static ork::Scheduler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::Scheduler::Scheduler(lua_Table * data, const char * type) function, expected prototype:\nork::Scheduler::Scheduler(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_ork_Scheduler(L,NULL, type);
	}


	// Function binds:
	// bool ork::Scheduler::supportsPrefetch(bool gpuTasks)
	static int _bind_supportsPrefetch(lua_State *L) {
		if (!_lg_typecheck_supportsPrefetch(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Scheduler::supportsPrefetch(bool gpuTasks) function, expected prototype:\nbool ork::Scheduler::supportsPrefetch(bool gpuTasks)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool gpuTasks=(bool)(lua_toboolean(L,2)==1);

		ork::Scheduler* self=Luna< ork::Object >::checkSubType< ork::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Scheduler::supportsPrefetch(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsPrefetch(gpuTasks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Scheduler::schedule(ork::ptr< ork::Task > task)
	static int _bind_schedule(lua_State *L) {
		if (!_lg_typecheck_schedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Scheduler::schedule(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::Scheduler::schedule(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::Scheduler* self=Luna< ork::Object >::checkSubType< ork::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Scheduler::schedule(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->schedule(task);

		return 0;
	}

	// void ork::Scheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	static int _bind_reschedule(lua_State *L) {
		if (!_lg_typecheck_reschedule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Scheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline) function, expected prototype:\nvoid ork::Scheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,3);
		unsigned int deadline=(unsigned int)lua_tointeger(L,4);

		ork::Scheduler* self=Luna< ork::Object >::checkSubType< ork::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Scheduler::reschedule(ork::ptr< ork::Task >, ork::Task::reason, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reschedule(task, r, deadline);

		return 0;
	}

	// void ork::Scheduler::run(ork::ptr< ork::Task > task)
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Scheduler::run(ork::ptr< ork::Task > task) function, expected prototype:\nvoid ork::Scheduler::run(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		ork::Scheduler* self=Luna< ork::Object >::checkSubType< ork::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Scheduler::run(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->run(task);

		return 0;
	}

	// const char * ork::Scheduler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Scheduler::base_toString() function, expected prototype:\nconst char * ork::Scheduler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Scheduler* self=Luna< ork::Object >::checkSubType< ork::Scheduler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Scheduler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Scheduler::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Scheduler* LunaTraits< ork::Scheduler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Scheduler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool ork::Scheduler::supportsPrefetch(bool gpuTasks)
	// void ork::Scheduler::schedule(ork::ptr< ork::Task > task)
	// void ork::Scheduler::reschedule(ork::ptr< ork::Task > task, ork::Task::reason r, unsigned int deadline)
	// void ork::Scheduler::run(ork::ptr< ork::Task > task)
}

void LunaTraits< ork::Scheduler >::_bind_dtor(ork::Scheduler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Scheduler >::className[] = "Scheduler";
const char LunaTraits< ork::Scheduler >::fullName[] = "ork::Scheduler";
const char LunaTraits< ork::Scheduler >::moduleName[] = "ork";
const char* LunaTraits< ork::Scheduler >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Scheduler >::hash = 55865406;
const int LunaTraits< ork::Scheduler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Scheduler >::methods[] = {
	{"supportsPrefetch", &luna_wrapper_ork_Scheduler::_bind_supportsPrefetch},
	{"schedule", &luna_wrapper_ork_Scheduler::_bind_schedule},
	{"reschedule", &luna_wrapper_ork_Scheduler::_bind_reschedule},
	{"run", &luna_wrapper_ork_Scheduler::_bind_run},
	{"base_toString", &luna_wrapper_ork_Scheduler::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Scheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Scheduler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Scheduler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Scheduler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Scheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Scheduler >::enumValues[] = {
	{0,0}
};


