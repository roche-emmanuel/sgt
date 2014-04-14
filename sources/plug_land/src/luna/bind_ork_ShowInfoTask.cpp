#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_ShowInfoTask.h>

class luna_wrapper_ork_ShowInfoTask {
public:
	typedef Luna< ork::ShowInfoTask > luna_t;

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

		ork::ShowInfoTask* self= (ork::ShowInfoTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::ShowInfoTask >::push(L,self,false);
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
		//ork::ShowInfoTask* ptr= dynamic_cast< ork::ShowInfoTask* >(Luna< ork::Object >::check(L,1));
		ork::ShowInfoTask* ptr= luna_caster< ork::Object, ork::ShowInfoTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::ShowInfoTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Font >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Font >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// ork::ShowInfoTask::ShowInfoTask(ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos)
	static ork::ShowInfoTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ShowInfoTask::ShowInfoTask(ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos) function, expected prototype:\nork::ShowInfoTask::ShowInfoTask(ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 5 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Font > font = Luna< ork::Object >::checkSubType< ork::Font >(L,1);
		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int color=(int)lua_tointeger(L,3);
		float size=(float)lua_tonumber(L,4);
		ork::vec3i* pos_ptr=(Luna< ork::vec3i >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in ork::ShowInfoTask::ShowInfoTask function");
		}
		ork::vec3i pos=*pos_ptr;

		return new ork::ShowInfoTask(font, p, color, size, pos);
	}

	// ork::ShowInfoTask::ShowInfoTask(lua_Table * data, ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos)
	static ork::ShowInfoTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::ShowInfoTask::ShowInfoTask(lua_Table * data, ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos) function, expected prototype:\nork::ShowInfoTask::ShowInfoTask(lua_Table * data, ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 6 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Font > font = Luna< ork::Object >::checkSubType< ork::Font >(L,2);
		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int color=(int)lua_tointeger(L,4);
		float size=(float)lua_tonumber(L,5);
		ork::vec3i* pos_ptr=(Luna< ork::vec3i >::check(L,6));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in ork::ShowInfoTask::ShowInfoTask function");
		}
		ork::vec3i pos=*pos_ptr;

		return new wrapper_ork_ShowInfoTask(L,NULL, font, p, color, size, pos);
	}

	// Overload binder for ork::ShowInfoTask::ShowInfoTask
	static ork::ShowInfoTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShowInfoTask, cannot match any of the overloads for function ShowInfoTask:\n  ShowInfoTask(ork::ptr< ork::Font >, ork::ptr< ork::Program >, int, float, ork::vec3i)\n  ShowInfoTask(lua_Table *, ork::ptr< ork::Font >, ork::ptr< ork::Program >, int, float, ork::vec3i)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::ShowInfoTask* self=Luna< ork::Object >::checkSubType< ork::ShowInfoTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// static void ork::ShowInfoTask::setInfo(const std::string & topic, const std::string & info)
	static int _bind_setInfo(lua_State *L) {
		if (!_lg_typecheck_setInfo(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::ShowInfoTask::setInfo(const std::string & topic, const std::string & info) function, expected prototype:\nstatic void ork::ShowInfoTask::setInfo(const std::string & topic, const std::string & info)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,1),lua_objlen(L,1));
		std::string info(lua_tostring(L,2),lua_objlen(L,2));

		ork::ShowInfoTask::setInfo(topic, info);

		return 0;
	}

	// const char * ork::ShowInfoTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::ShowInfoTask::base_toString() function, expected prototype:\nconst char * ork::ShowInfoTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ShowInfoTask* self=Luna< ork::Object >::checkSubType< ork::ShowInfoTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::ShowInfoTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShowInfoTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::ShowInfoTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::ShowInfoTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::ShowInfoTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::ShowInfoTask* self=Luna< ork::Object >::checkSubType< ork::ShowInfoTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::ShowInfoTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->ShowInfoTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::ShowInfoTask* LunaTraits< ork::ShowInfoTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_ShowInfoTask::_bind_ctor(L);
}

void LunaTraits< ork::ShowInfoTask >::_bind_dtor(ork::ShowInfoTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::ShowInfoTask >::className[] = "ShowInfoTask";
const char LunaTraits< ork::ShowInfoTask >::fullName[] = "ork::ShowInfoTask";
const char LunaTraits< ork::ShowInfoTask >::moduleName[] = "ork";
const char* LunaTraits< ork::ShowInfoTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::ShowInfoTask >::hash = 67745523;
const int LunaTraits< ork::ShowInfoTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::ShowInfoTask >::methods[] = {
	{"getTask", &luna_wrapper_ork_ShowInfoTask::_bind_getTask},
	{"setInfo", &luna_wrapper_ork_ShowInfoTask::_bind_setInfo},
	{"base_toString", &luna_wrapper_ork_ShowInfoTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_ShowInfoTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_ShowInfoTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_ShowInfoTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_ShowInfoTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::ShowInfoTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_ShowInfoTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::ShowInfoTask >::enumValues[] = {
	{0,0}
};


