#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DrawPlantsTask.h>

class luna_wrapper_proland_DrawPlantsTask {
public:
	typedef Luna< proland::DrawPlantsTask > luna_t;

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

		proland::DrawPlantsTask* self= (proland::DrawPlantsTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawPlantsTask >::push(L,self,false);
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
		//proland::DrawPlantsTask* ptr= dynamic_cast< proland::DrawPlantsTask* >(Luna< ork::Object >::check(L,1));
		proland::DrawPlantsTask* ptr= luna_caster< ork::Object, proland::DrawPlantsTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DrawPlantsTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,3) ) return false;
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
	// proland::DrawPlantsTask::DrawPlantsTask(const string & terrain, ork::ptr< proland::Plants > plants)
	static proland::DrawPlantsTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawPlantsTask::DrawPlantsTask(const string & terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nproland::DrawPlantsTask::DrawPlantsTask(const string & terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string terrain(lua_tostring(L,1),lua_objlen(L,1));
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,2);

		return new proland::DrawPlantsTask(terrain, plants);
	}

	// proland::DrawPlantsTask::DrawPlantsTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants)
	static proland::DrawPlantsTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawPlantsTask::DrawPlantsTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nproland::DrawPlantsTask::DrawPlantsTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string terrain(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,3);

		return new wrapper_proland_DrawPlantsTask(L,NULL, terrain, plants);
	}

	// Overload binder for proland::DrawPlantsTask::DrawPlantsTask
	static proland::DrawPlantsTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawPlantsTask, cannot match any of the overloads for function DrawPlantsTask:\n  DrawPlantsTask(const string &, ork::ptr< proland::Plants >)\n  DrawPlantsTask(lua_Table *, const string &, ork::ptr< proland::Plants >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::DrawPlantsTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawPlantsTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawPlantsTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawPlantsTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawPlantsTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::DrawPlantsTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::DrawPlantsTask::base_toString() function, expected prototype:\nconst char * proland::DrawPlantsTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawPlantsTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::DrawPlantsTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawPlantsTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::DrawPlantsTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawPlantsTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawPlantsTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawPlantsTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawPlantsTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->DrawPlantsTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::DrawPlantsTask* LunaTraits< proland::DrawPlantsTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawPlantsTask::_bind_ctor(L);
}

void LunaTraits< proland::DrawPlantsTask >::_bind_dtor(proland::DrawPlantsTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::DrawPlantsTask >::className[] = "DrawPlantsTask";
const char LunaTraits< proland::DrawPlantsTask >::fullName[] = "proland::DrawPlantsTask";
const char LunaTraits< proland::DrawPlantsTask >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawPlantsTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::DrawPlantsTask >::hash = 77221417;
const int LunaTraits< proland::DrawPlantsTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::DrawPlantsTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_DrawPlantsTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_DrawPlantsTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_DrawPlantsTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_DrawPlantsTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawPlantsTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DrawPlantsTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawPlantsTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_DrawPlantsTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawPlantsTask >::enumValues[] = {
	{0,0}
};


