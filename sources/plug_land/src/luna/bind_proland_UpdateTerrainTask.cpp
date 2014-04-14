#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_UpdateTerrainTask.h>

class luna_wrapper_proland_UpdateTerrainTask {
public:
	typedef Luna< proland::UpdateTerrainTask > luna_t;

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

		proland::UpdateTerrainTask* self= (proland::UpdateTerrainTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::UpdateTerrainTask >::push(L,self,false);
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
		//proland::UpdateTerrainTask* ptr= dynamic_cast< proland::UpdateTerrainTask* >(Luna< ork::Object >::check(L,1));
		proland::UpdateTerrainTask* ptr= luna_caster< ork::Object, proland::UpdateTerrainTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::UpdateTerrainTask >::push(L,ptr,false);
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
	// ork::ptr< ork::Task > proland::UpdateTerrainTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::UpdateTerrainTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::UpdateTerrainTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::UpdateTerrainTask* self=Luna< ork::Object >::checkSubType< proland::UpdateTerrainTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::UpdateTerrainTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::UpdateTerrainTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::UpdateTerrainTask::base_toString() function, expected prototype:\nconst char * proland::UpdateTerrainTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::UpdateTerrainTask* self=Luna< ork::Object >::checkSubType< proland::UpdateTerrainTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::UpdateTerrainTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UpdateTerrainTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::UpdateTerrainTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::UpdateTerrainTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::UpdateTerrainTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::UpdateTerrainTask* self=Luna< ork::Object >::checkSubType< proland::UpdateTerrainTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::UpdateTerrainTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->UpdateTerrainTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::UpdateTerrainTask* LunaTraits< proland::UpdateTerrainTask >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::UpdateTerrainTask >::_bind_dtor(proland::UpdateTerrainTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::UpdateTerrainTask >::className[] = "UpdateTerrainTask";
const char LunaTraits< proland::UpdateTerrainTask >::fullName[] = "proland::UpdateTerrainTask";
const char LunaTraits< proland::UpdateTerrainTask >::moduleName[] = "proland";
const char* LunaTraits< proland::UpdateTerrainTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::UpdateTerrainTask >::hash = 16758467;
const int LunaTraits< proland::UpdateTerrainTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::UpdateTerrainTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_UpdateTerrainTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_UpdateTerrainTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_UpdateTerrainTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_UpdateTerrainTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_UpdateTerrainTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_UpdateTerrainTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::UpdateTerrainTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_UpdateTerrainTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::UpdateTerrainTask >::enumValues[] = {
	{0,0}
};


