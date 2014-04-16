#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_UpdateRiversTask.h>

class luna_wrapper_proland_UpdateRiversTask {
public:
	typedef Luna< proland::UpdateRiversTask > luna_t;

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

		proland::UpdateRiversTask* self= (proland::UpdateRiversTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::UpdateRiversTask >::push(L,self,false);
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
		//proland::UpdateRiversTask* ptr= dynamic_cast< proland::UpdateRiversTask* >(Luna< ork::Object >::check(L,1));
		proland::UpdateRiversTask* ptr= luna_caster< ork::Object, proland::UpdateRiversTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::UpdateRiversTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
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
	// proland::UpdateRiversTask::UpdateRiversTask(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)
	static proland::UpdateRiversTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::UpdateRiversTask::UpdateRiversTask(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f) function, expected prototype:\nproland::UpdateRiversTask::UpdateRiversTask(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::ParticleProducer > particles = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		float timeStep=luatop>1 ? (float)lua_tonumber(L,2) : (float)1.0f;

		return new proland::UpdateRiversTask(particles, timeStep);
	}

	// proland::UpdateRiversTask::UpdateRiversTask(lua_Table * data, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)
	static proland::UpdateRiversTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::UpdateRiversTask::UpdateRiversTask(lua_Table * data, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f) function, expected prototype:\nproland::UpdateRiversTask::UpdateRiversTask(lua_Table * data, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::ParticleProducer > particles = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2);
		float timeStep=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new wrapper_proland_UpdateRiversTask(L,NULL, particles, timeStep);
	}

	// Overload binder for proland::UpdateRiversTask::UpdateRiversTask
	static proland::UpdateRiversTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UpdateRiversTask, cannot match any of the overloads for function UpdateRiversTask:\n  UpdateRiversTask(ork::ptr< proland::ParticleProducer >, float)\n  UpdateRiversTask(lua_Table *, ork::ptr< proland::ParticleProducer >, float)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::UpdateRiversTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::UpdateRiversTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::UpdateRiversTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::UpdateRiversTask* self=Luna< ork::Object >::checkSubType< proland::UpdateRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::UpdateRiversTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::UpdateRiversTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::UpdateRiversTask::base_toString() function, expected prototype:\nconst char * proland::UpdateRiversTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::UpdateRiversTask* self=Luna< ork::Object >::checkSubType< proland::UpdateRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::UpdateRiversTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UpdateRiversTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::UpdateRiversTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::UpdateRiversTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::UpdateRiversTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::UpdateRiversTask* self=Luna< ork::Object >::checkSubType< proland::UpdateRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::UpdateRiversTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->UpdateRiversTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::UpdateRiversTask* LunaTraits< proland::UpdateRiversTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_UpdateRiversTask::_bind_ctor(L);
}

void LunaTraits< proland::UpdateRiversTask >::_bind_dtor(proland::UpdateRiversTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::UpdateRiversTask >::className[] = "UpdateRiversTask";
const char LunaTraits< proland::UpdateRiversTask >::fullName[] = "proland::UpdateRiversTask";
const char LunaTraits< proland::UpdateRiversTask >::moduleName[] = "proland";
const char* LunaTraits< proland::UpdateRiversTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::UpdateRiversTask >::hash = 57726281;
const int LunaTraits< proland::UpdateRiversTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::UpdateRiversTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_UpdateRiversTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_UpdateRiversTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_UpdateRiversTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_UpdateRiversTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_UpdateRiversTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_UpdateRiversTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::UpdateRiversTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_UpdateRiversTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::UpdateRiversTask >::enumValues[] = {
	{0,0}
};


