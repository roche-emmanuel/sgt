#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SetTargetTask.h>

class luna_wrapper_ork_SetTargetTask {
public:
	typedef Luna< ork::SetTargetTask > luna_t;

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

		ork::SetTargetTask* self= (ork::SetTargetTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SetTargetTask >::push(L,self,false);
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
		//ork::SetTargetTask* ptr= dynamic_cast< ork::SetTargetTask* >(Luna< ork::Object >::check(L,1));
		ork::SetTargetTask* ptr= luna_caster< ork::Object, ork::SetTargetTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SetTargetTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35026174) ) return false;
		if( (!(Luna< std::vector< ork::SetTargetTask::Target > >::check(L,1))) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,35026174) ) return false;
		if( (!(Luna< std::vector< ork::SetTargetTask::Target > >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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
	// ork::SetTargetTask::SetTargetTask(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)
	static ork::SetTargetTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SetTargetTask::SetTargetTask(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize) function, expected prototype:\nork::SetTargetTask::SetTargetTask(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::SetTargetTask::Target >* targets_ptr=(Luna< std::vector< ork::SetTargetTask::Target > >::check(L,1));
		if( !targets_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg targets in ork::SetTargetTask::SetTargetTask function");
		}
		const std::vector< ork::SetTargetTask::Target > & targets=*targets_ptr;
		bool autoResize=(bool)(lua_toboolean(L,2)==1);

		return new ork::SetTargetTask(targets, autoResize);
	}

	// ork::SetTargetTask::SetTargetTask(lua_Table * data, const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)
	static ork::SetTargetTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::SetTargetTask::SetTargetTask(lua_Table * data, const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize) function, expected prototype:\nork::SetTargetTask::SetTargetTask(lua_Table * data, const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::SetTargetTask::Target >* targets_ptr=(Luna< std::vector< ork::SetTargetTask::Target > >::check(L,2));
		if( !targets_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg targets in ork::SetTargetTask::SetTargetTask function");
		}
		const std::vector< ork::SetTargetTask::Target > & targets=*targets_ptr;
		bool autoResize=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_ork_SetTargetTask(L,NULL, targets, autoResize);
	}

	// Overload binder for ork::SetTargetTask::SetTargetTask
	static ork::SetTargetTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SetTargetTask, cannot match any of the overloads for function SetTargetTask:\n  SetTargetTask(const std::vector< ork::SetTargetTask::Target > &, bool)\n  SetTargetTask(lua_Table *, const std::vector< ork::SetTargetTask::Target > &, bool)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > ork::SetTargetTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetTargetTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetTargetTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetTargetTask* self=Luna< ork::Object >::checkSubType< ork::SetTargetTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetTargetTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::SetTargetTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SetTargetTask::base_toString() function, expected prototype:\nconst char * ork::SetTargetTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetTargetTask* self=Luna< ork::Object >::checkSubType< ork::SetTargetTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SetTargetTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SetTargetTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::SetTargetTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetTargetTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetTargetTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetTargetTask* self=Luna< ork::Object >::checkSubType< ork::SetTargetTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetTargetTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->SetTargetTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::SetTargetTask* LunaTraits< ork::SetTargetTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SetTargetTask::_bind_ctor(L);
}

void LunaTraits< ork::SetTargetTask >::_bind_dtor(ork::SetTargetTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SetTargetTask >::className[] = "SetTargetTask";
const char LunaTraits< ork::SetTargetTask >::fullName[] = "ork::SetTargetTask";
const char LunaTraits< ork::SetTargetTask >::moduleName[] = "ork";
const char* LunaTraits< ork::SetTargetTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::SetTargetTask >::hash = 56962830;
const int LunaTraits< ork::SetTargetTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SetTargetTask >::methods[] = {
	{"getTask", &luna_wrapper_ork_SetTargetTask::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_SetTargetTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_SetTargetTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_SetTargetTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SetTargetTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SetTargetTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetTargetTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SetTargetTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetTargetTask >::enumValues[] = {
	{0,0}
};


