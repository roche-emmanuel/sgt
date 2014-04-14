#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_LoopTask.h>

class luna_wrapper_ork_LoopTask {
public:
	typedef Luna< ork::LoopTask > luna_t;

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

		ork::LoopTask* self= (ork::LoopTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::LoopTask >::push(L,self,false);
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
		//ork::LoopTask* ptr= dynamic_cast< ork::LoopTask* >(Luna< ork::Object >::check(L,1));
		ork::LoopTask* ptr= luna_caster< ork::Object, ork::LoopTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::LoopTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,5) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,6) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::LoopTask::LoopTask(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)
	static ork::LoopTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::LoopTask::LoopTask(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask) function, expected prototype:\nork::LoopTask::LoopTask(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)\nClass arguments details:\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string var(lua_tostring(L,1),lua_objlen(L,1));
		std::string flag(lua_tostring(L,2),lua_objlen(L,2));
		bool cull=(bool)(lua_toboolean(L,3)==1);
		bool parallel=(bool)(lua_toboolean(L,4)==1);
		ork::ptr< ork::TaskFactory > subtask = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,5);

		return new ork::LoopTask(var, flag, cull, parallel, subtask);
	}

	// ork::LoopTask::LoopTask(lua_Table * data, const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)
	static ork::LoopTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::LoopTask::LoopTask(lua_Table * data, const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask) function, expected prototype:\nork::LoopTask::LoopTask(lua_Table * data, const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)\nClass arguments details:\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string var(lua_tostring(L,2),lua_objlen(L,2));
		std::string flag(lua_tostring(L,3),lua_objlen(L,3));
		bool cull=(bool)(lua_toboolean(L,4)==1);
		bool parallel=(bool)(lua_toboolean(L,5)==1);
		ork::ptr< ork::TaskFactory > subtask = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,6);

		return new wrapper_ork_LoopTask(L,NULL, var, flag, cull, parallel, subtask);
	}

	// Overload binder for ork::LoopTask::LoopTask
	static ork::LoopTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LoopTask, cannot match any of the overloads for function LoopTask:\n  LoopTask(const std::string &, const std::string &, bool, bool, ork::ptr< ork::TaskFactory >)\n  LoopTask(lua_Table *, const std::string &, const std::string &, bool, bool, ork::ptr< ork::TaskFactory >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > ork::LoopTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::LoopTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::LoopTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::LoopTask* self=Luna< ork::Object >::checkSubType< ork::LoopTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::LoopTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::LoopTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::LoopTask::base_toString() function, expected prototype:\nconst char * ork::LoopTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::LoopTask* self=Luna< ork::Object >::checkSubType< ork::LoopTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::LoopTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LoopTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::LoopTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::LoopTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::LoopTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::LoopTask* self=Luna< ork::Object >::checkSubType< ork::LoopTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::LoopTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->LoopTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::LoopTask* LunaTraits< ork::LoopTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_LoopTask::_bind_ctor(L);
}

void LunaTraits< ork::LoopTask >::_bind_dtor(ork::LoopTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::LoopTask >::className[] = "LoopTask";
const char LunaTraits< ork::LoopTask >::fullName[] = "ork::LoopTask";
const char LunaTraits< ork::LoopTask >::moduleName[] = "ork";
const char* LunaTraits< ork::LoopTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::LoopTask >::hash = 80086133;
const int LunaTraits< ork::LoopTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::LoopTask >::methods[] = {
	{"getTask", &luna_wrapper_ork_LoopTask::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_LoopTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_LoopTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_LoopTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_LoopTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_LoopTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::LoopTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_LoopTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::LoopTask >::enumValues[] = {
	{0,0}
};


