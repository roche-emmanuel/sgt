#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DrawPlantsShadowTask.h>

class luna_wrapper_proland_DrawPlantsShadowTask {
public:
	typedef Luna< proland::DrawPlantsShadowTask > luna_t;

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

		proland::DrawPlantsShadowTask* self= (proland::DrawPlantsShadowTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawPlantsShadowTask >::push(L,self,false);
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
		//proland::DrawPlantsShadowTask* ptr= dynamic_cast< proland::DrawPlantsShadowTask* >(Luna< ork::Object >::check(L,1));
		proland::DrawPlantsShadowTask* ptr= luna_caster< ork::Object, proland::DrawPlantsShadowTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DrawPlantsShadowTask >::push(L,ptr,false);
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
	// proland::DrawPlantsShadowTask::DrawPlantsShadowTask(const string & terrain, ork::ptr< proland::Plants > plants)
	static proland::DrawPlantsShadowTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawPlantsShadowTask::DrawPlantsShadowTask(const string & terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nproland::DrawPlantsShadowTask::DrawPlantsShadowTask(const string & terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string terrain(lua_tostring(L,1),lua_objlen(L,1));
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,2);

		return new proland::DrawPlantsShadowTask(terrain, plants);
	}

	// proland::DrawPlantsShadowTask::DrawPlantsShadowTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants)
	static proland::DrawPlantsShadowTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawPlantsShadowTask::DrawPlantsShadowTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nproland::DrawPlantsShadowTask::DrawPlantsShadowTask(lua_Table * data, const string & terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string terrain(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,3);

		return new wrapper_proland_DrawPlantsShadowTask(L,NULL, terrain, plants);
	}

	// Overload binder for proland::DrawPlantsShadowTask::DrawPlantsShadowTask
	static proland::DrawPlantsShadowTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawPlantsShadowTask, cannot match any of the overloads for function DrawPlantsShadowTask:\n  DrawPlantsShadowTask(const string &, ork::ptr< proland::Plants >)\n  DrawPlantsShadowTask(lua_Table *, const string &, ork::ptr< proland::Plants >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::DrawPlantsShadowTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawPlantsShadowTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawPlantsShadowTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawPlantsShadowTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsShadowTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawPlantsShadowTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::DrawPlantsShadowTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::DrawPlantsShadowTask::base_toString() function, expected prototype:\nconst char * proland::DrawPlantsShadowTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawPlantsShadowTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsShadowTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::DrawPlantsShadowTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawPlantsShadowTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::DrawPlantsShadowTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawPlantsShadowTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawPlantsShadowTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawPlantsShadowTask* self=Luna< ork::Object >::checkSubType< proland::DrawPlantsShadowTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawPlantsShadowTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->DrawPlantsShadowTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::DrawPlantsShadowTask* LunaTraits< proland::DrawPlantsShadowTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawPlantsShadowTask::_bind_ctor(L);
}

void LunaTraits< proland::DrawPlantsShadowTask >::_bind_dtor(proland::DrawPlantsShadowTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::DrawPlantsShadowTask >::className[] = "DrawPlantsShadowTask";
const char LunaTraits< proland::DrawPlantsShadowTask >::fullName[] = "proland::DrawPlantsShadowTask";
const char LunaTraits< proland::DrawPlantsShadowTask >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawPlantsShadowTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::DrawPlantsShadowTask >::hash = 34701154;
const int LunaTraits< proland::DrawPlantsShadowTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::DrawPlantsShadowTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DrawPlantsShadowTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawPlantsShadowTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_DrawPlantsShadowTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawPlantsShadowTask >::enumValues[] = {
	{0,0}
};


