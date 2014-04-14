#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SetProgramTask.h>

class luna_wrapper_ork_SetProgramTask {
public:
	typedef Luna< ork::SetProgramTask > luna_t;

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

		ork::SetProgramTask* self= (ork::SetProgramTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SetProgramTask >::push(L,self,false);
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
		//ork::SetProgramTask* ptr= dynamic_cast< ork::SetProgramTask* >(Luna< ork::Object >::check(L,1));
		ork::SetProgramTask* ptr= luna_caster< ork::Object, ork::SetProgramTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SetProgramTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

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

	// Function binds:
	// ork::ptr< ork::Task > ork::SetProgramTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetProgramTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetProgramTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetProgramTask* self=Luna< ork::Object >::checkSubType< ork::SetProgramTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetProgramTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::SetProgramTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SetProgramTask::base_toString() function, expected prototype:\nconst char * ork::SetProgramTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetProgramTask* self=Luna< ork::Object >::checkSubType< ork::SetProgramTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SetProgramTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SetProgramTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::SetProgramTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetProgramTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetProgramTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetProgramTask* self=Luna< ork::Object >::checkSubType< ork::SetProgramTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetProgramTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->SetProgramTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::SetProgramTask* LunaTraits< ork::SetProgramTask >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::SetProgramTask >::_bind_dtor(ork::SetProgramTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SetProgramTask >::className[] = "SetProgramTask";
const char LunaTraits< ork::SetProgramTask >::fullName[] = "ork::SetProgramTask";
const char LunaTraits< ork::SetProgramTask >::moduleName[] = "ork";
const char* LunaTraits< ork::SetProgramTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::SetProgramTask >::hash = 34524810;
const int LunaTraits< ork::SetProgramTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SetProgramTask >::methods[] = {
	{"getTask", &luna_wrapper_ork_SetProgramTask::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_SetProgramTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_SetProgramTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_SetProgramTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SetProgramTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SetProgramTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetProgramTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SetProgramTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetProgramTask >::enumValues[] = {
	{0,0}
};


