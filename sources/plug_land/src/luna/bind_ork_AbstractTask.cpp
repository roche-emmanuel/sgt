#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_AbstractTask.h>

class luna_wrapper_ork_AbstractTask {
public:
	typedef Luna< ork::AbstractTask > luna_t;

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

		ork::AbstractTask* self= (ork::AbstractTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::AbstractTask >::push(L,self,false);
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
		//ork::AbstractTask* ptr= dynamic_cast< ork::AbstractTask* >(Luna< ork::Object >::check(L,1));
		ork::AbstractTask* ptr= luna_caster< ork::Object, ork::AbstractTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::AbstractTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::AbstractTask::AbstractTask(lua_Table * data, const char * type)
	static ork::AbstractTask* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::AbstractTask::AbstractTask(lua_Table * data, const char * type) function, expected prototype:\nork::AbstractTask::AbstractTask(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_ork_AbstractTask(L,NULL, type);
	}


	// Function binds:
	// const char * ork::AbstractTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::AbstractTask::base_toString() function, expected prototype:\nconst char * ork::AbstractTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::AbstractTask* self=Luna< ork::Object >::checkSubType< ork::AbstractTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::AbstractTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AbstractTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::AbstractTask* LunaTraits< ork::AbstractTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_AbstractTask::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context)
}

void LunaTraits< ork::AbstractTask >::_bind_dtor(ork::AbstractTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::AbstractTask >::className[] = "AbstractTask";
const char LunaTraits< ork::AbstractTask >::fullName[] = "ork::AbstractTask";
const char LunaTraits< ork::AbstractTask >::moduleName[] = "ork";
const char* LunaTraits< ork::AbstractTask >::parents[] = {"ork.TaskFactory", 0};
const int LunaTraits< ork::AbstractTask >::hash = 59595995;
const int LunaTraits< ork::AbstractTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::AbstractTask >::methods[] = {
	{"base_toString", &luna_wrapper_ork_AbstractTask::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_AbstractTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_AbstractTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_AbstractTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::AbstractTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_AbstractTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::AbstractTask >::enumValues[] = {
	{0,0}
};


