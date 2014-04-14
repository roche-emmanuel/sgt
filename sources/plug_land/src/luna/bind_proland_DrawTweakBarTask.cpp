#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DrawTweakBarTask.h>

class luna_wrapper_proland_DrawTweakBarTask {
public:
	typedef Luna< proland::DrawTweakBarTask > luna_t;

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

		proland::DrawTweakBarTask* self= (proland::DrawTweakBarTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawTweakBarTask >::push(L,self,false);
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
		//proland::DrawTweakBarTask* ptr= dynamic_cast< proland::DrawTweakBarTask* >(Luna< ork::Object >::check(L,1));
		proland::DrawTweakBarTask* ptr= luna_caster< ork::Object, proland::DrawTweakBarTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DrawTweakBarTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
	// proland::DrawTweakBarTask::DrawTweakBarTask()
	static proland::DrawTweakBarTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawTweakBarTask::DrawTweakBarTask() function, expected prototype:\nproland::DrawTweakBarTask::DrawTweakBarTask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::DrawTweakBarTask();
	}

	// proland::DrawTweakBarTask::DrawTweakBarTask(lua_Table * data)
	static proland::DrawTweakBarTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawTweakBarTask::DrawTweakBarTask(lua_Table * data) function, expected prototype:\nproland::DrawTweakBarTask::DrawTweakBarTask(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_DrawTweakBarTask(L,NULL);
	}

	// Overload binder for proland::DrawTweakBarTask::DrawTweakBarTask
	static proland::DrawTweakBarTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawTweakBarTask, cannot match any of the overloads for function DrawTweakBarTask:\n  DrawTweakBarTask()\n  DrawTweakBarTask(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::DrawTweakBarTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawTweakBarTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawTweakBarTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawTweakBarTask* self=Luna< ork::Object >::checkSubType< proland::DrawTweakBarTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawTweakBarTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::DrawTweakBarTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::DrawTweakBarTask::base_toString() function, expected prototype:\nconst char * proland::DrawTweakBarTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawTweakBarTask* self=Luna< ork::Object >::checkSubType< proland::DrawTweakBarTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::DrawTweakBarTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawTweakBarTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::DrawTweakBarTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawTweakBarTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawTweakBarTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawTweakBarTask* self=Luna< ork::Object >::checkSubType< proland::DrawTweakBarTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawTweakBarTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->DrawTweakBarTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::DrawTweakBarTask* LunaTraits< proland::DrawTweakBarTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawTweakBarTask::_bind_ctor(L);
}

void LunaTraits< proland::DrawTweakBarTask >::_bind_dtor(proland::DrawTweakBarTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::DrawTweakBarTask >::className[] = "DrawTweakBarTask";
const char LunaTraits< proland::DrawTweakBarTask >::fullName[] = "proland::DrawTweakBarTask";
const char LunaTraits< proland::DrawTweakBarTask >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawTweakBarTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::DrawTweakBarTask >::hash = 49546760;
const int LunaTraits< proland::DrawTweakBarTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::DrawTweakBarTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_DrawTweakBarTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_DrawTweakBarTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_DrawTweakBarTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_DrawTweakBarTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawTweakBarTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DrawTweakBarTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawTweakBarTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_DrawTweakBarTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawTweakBarTask >::enumValues[] = {
	{0,0}
};


