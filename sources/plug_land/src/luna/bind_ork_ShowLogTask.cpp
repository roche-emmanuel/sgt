#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ShowLogTask.h>

class luna_wrapper_ork_ShowLogTask {
public:
	typedef Luna< ork::ShowLogTask > luna_t;

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

		ork::ShowLogTask* self= (ork::ShowLogTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ShowLogTask >::push(L,self,false);
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
		//ork::ShowLogTask* ptr= dynamic_cast< ork::ShowLogTask* >(Luna< ork::Object >::check(L,1));
		ork::ShowLogTask* ptr= luna_caster< ork::Object, ork::ShowLogTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ShowLogTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Font >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Font >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// ork::ShowLogTask::ShowLogTask(ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos)
	static ork::ShowLogTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ShowLogTask::ShowLogTask(ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos) function, expected prototype:\nork::ShowLogTask::ShowLogTask(ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 4 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Font > f = Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		float fontHeight=(float)lua_tonumber(L,3);
		ork::vec3i* pos_ptr=(Luna< ork::vec3i >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in ork::ShowLogTask::ShowLogTask function");
		}
		ork::vec3i pos=*pos_ptr;

		return new ork::ShowLogTask(f, p, fontHeight, pos);
	}

	// ork::ShowLogTask::ShowLogTask(lua_Table * data, ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos)
	static ork::ShowLogTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ShowLogTask::ShowLogTask(lua_Table * data, ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos) function, expected prototype:\nork::ShowLogTask::ShowLogTask(lua_Table * data, ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 5 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Font > f = Luna< ork::Object >::checkSubType< ork::Font >(L,2);
		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		float fontHeight=(float)lua_tonumber(L,4);
		ork::vec3i* pos_ptr=(Luna< ork::vec3i >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in ork::ShowLogTask::ShowLogTask function");
		}
		ork::vec3i pos=*pos_ptr;

		return new wrapper_ork_ShowLogTask(L,NULL, f, p, fontHeight, pos);
	}

	// Overload binder for ork::ShowLogTask::ShowLogTask
	static ork::ShowLogTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShowLogTask, cannot match any of the overloads for function ShowLogTask:\n  ShowLogTask(ork::ptr< ork::Font >, ork::ptr< ork::Program >, float, ork::vec3i)\n  ShowLogTask(lua_Table *, ork::ptr< ork::Font >, ork::ptr< ork::Program >, float, ork::vec3i)\n");
		return NULL;
	}


	// Function binds:
	// bool ork::ShowLogTask::enabled()
	static int _bind_getEnabled(lua_State *L) {
		if (!_lg_typecheck_getEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::ShowLogTask::enabled() function, expected prototype:\nbool ork::ShowLogTask::enabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ShowLogTask* self=Luna< ork::Object >::checkSubType< ork::ShowLogTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::ShowLogTask::enabled(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enabled;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::ShowLogTask::enabled(bool value)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ShowLogTask::enabled(bool value) function, expected prototype:\nvoid ork::ShowLogTask::enabled(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		ork::ShowLogTask* self=Luna< ork::Object >::checkSubType< ork::ShowLogTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ShowLogTask::enabled(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enabled = value;

		return 0;
	}

	// const char * ork::ShowLogTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ShowLogTask::base_toString() function, expected prototype:\nconst char * ork::ShowLogTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ShowLogTask* self=Luna< ork::Object >::checkSubType< ork::ShowLogTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ShowLogTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShowLogTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::ShowLogTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::ShowLogTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::ShowLogTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::ShowLogTask* self=Luna< ork::Object >::checkSubType< ork::ShowLogTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::ShowLogTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->ShowLogTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::ShowLogTask* LunaTraits< ork::ShowLogTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ShowLogTask::_bind_ctor(L);
}

void LunaTraits< ork::ShowLogTask >::_bind_dtor(ork::ShowLogTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ShowLogTask >::className[] = "ShowLogTask";
const char LunaTraits< ork::ShowLogTask >::fullName[] = "ork::ShowLogTask";
const char LunaTraits< ork::ShowLogTask >::moduleName[] = "ork";
const char* LunaTraits< ork::ShowLogTask >::parents[] = {"ork.ShowInfoTask", 0};
const int LunaTraits< ork::ShowLogTask >::hash = 67650897;
const int LunaTraits< ork::ShowLogTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ShowLogTask >::methods[] = {
	{"getEnabled", &luna_wrapper_ork_ShowLogTask::_bind_getEnabled},
	{"setEnabled", &luna_wrapper_ork_ShowLogTask::_bind_setEnabled},
	{"base_toString", &luna_wrapper_ork_ShowLogTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_ShowLogTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_ShowLogTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ShowLogTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ShowLogTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ShowLogTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ShowLogTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ShowLogTask >::enumValues[] = {
	{0,0}
};


