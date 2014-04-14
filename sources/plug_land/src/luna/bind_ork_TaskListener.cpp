#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TaskListener.h>

class luna_wrapper_ork_TaskListener {
public:
	typedef Luna< ork::TaskListener > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::TaskListener* self=(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::TaskListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59816505) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::TaskListener*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::TaskListener* rhs =(Luna< ork::TaskListener >::check(L,2));
		ork::TaskListener* self=(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		ork::TaskListener* self= (ork::TaskListener*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TaskListener >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59816505) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::TaskListener* self=(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::TaskListener");
		
		return luna_dynamicCast(L,converters,"ork::TaskListener",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_taskStateChanged(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_completionDateChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::TaskListener::TaskListener(lua_Table * data)
	static ork::TaskListener* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskListener::TaskListener(lua_Table * data) function, expected prototype:\nork::TaskListener::TaskListener(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_TaskListener(L,NULL);
	}


	// Function binds:
	// void ork::TaskListener::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	static int _bind_taskStateChanged(lua_State *L) {
		if (!_lg_typecheck_taskStateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskListener::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r) function, expected prototype:\nvoid ork::TaskListener::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		bool done=(bool)(lua_toboolean(L,3)==1);
		ork::Task::reason r=(ork::Task::reason)lua_tointeger(L,4);

		ork::TaskListener* self=(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskListener::taskStateChanged(ork::ptr< ork::Task >, bool, ork::Task::reason). Got : '%s'\n%s",typeid(Luna< ork::TaskListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->taskStateChanged(t, done, r);

		return 0;
	}

	// void ork::TaskListener::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
	static int _bind_completionDateChanged(lua_State *L) {
		if (!_lg_typecheck_completionDateChanged(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TaskListener::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date) function, expected prototype:\nvoid ork::TaskListener::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > t = Luna< ork::Object >::checkSubType< ork::Task >(L,2);
		unsigned int date=(unsigned int)lua_tointeger(L,3);

		ork::TaskListener* self=(Luna< ork::TaskListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TaskListener::completionDateChanged(ork::ptr< ork::Task >, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::TaskListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completionDateChanged(t, date);

		return 0;
	}


	// Operator binds:

};

ork::TaskListener* LunaTraits< ork::TaskListener >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TaskListener::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ork::TaskListener::taskStateChanged(ork::ptr< ork::Task > t, bool done, ork::Task::reason r)
	// void ork::TaskListener::completionDateChanged(ork::ptr< ork::Task > t, unsigned int date)
}

void LunaTraits< ork::TaskListener >::_bind_dtor(ork::TaskListener* obj) {
	delete obj;
}

const char LunaTraits< ork::TaskListener >::className[] = "TaskListener";
const char LunaTraits< ork::TaskListener >::fullName[] = "ork::TaskListener";
const char LunaTraits< ork::TaskListener >::moduleName[] = "ork";
const char* LunaTraits< ork::TaskListener >::parents[] = {0};
const int LunaTraits< ork::TaskListener >::hash = 59816505;
const int LunaTraits< ork::TaskListener >::uniqueIDs[] = {59816505,0};

luna_RegType LunaTraits< ork::TaskListener >::methods[] = {
	{"taskStateChanged", &luna_wrapper_ork_TaskListener::_bind_taskStateChanged},
	{"completionDateChanged", &luna_wrapper_ork_TaskListener::_bind_completionDateChanged},
	{"dynCast", &luna_wrapper_ork_TaskListener::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_TaskListener::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_TaskListener::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TaskListener::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TaskListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TaskListener >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TaskListener >::enumValues[] = {
	{0,0}
};


