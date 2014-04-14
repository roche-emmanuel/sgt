#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SequenceTask.h>

class luna_wrapper_ork_SequenceTask {
public:
	typedef Luna< ork::SequenceTask > luna_t;

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

		ork::SequenceTask* self= (ork::SequenceTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SequenceTask >::push(L,self,false);
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
		//ork::SequenceTask* ptr= dynamic_cast< ork::SequenceTask* >(Luna< ork::Object >::check(L,1));
		ork::SequenceTask* ptr= luna_caster< ork::Object, ork::SequenceTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SequenceTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41801658) ) return false;
		if( (!(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,41801658) ) return false;
		if( (!(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,2))) ) return false;
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
	// ork::SequenceTask::SequenceTask(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)
	static ork::SequenceTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SequenceTask::SequenceTask(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks) function, expected prototype:\nork::SequenceTask::SequenceTask(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::ptr< ork::TaskFactory > >* subtasks_ptr=(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,1));
		if( !subtasks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg subtasks in ork::SequenceTask::SequenceTask function");
		}
		const std::vector< ork::ptr< ork::TaskFactory > > & subtasks=*subtasks_ptr;

		return new ork::SequenceTask(subtasks);
	}

	// ork::SequenceTask::SequenceTask(lua_Table * data, const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)
	static ork::SequenceTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::SequenceTask::SequenceTask(lua_Table * data, const std::vector< ork::ptr< ork::TaskFactory > > & subtasks) function, expected prototype:\nork::SequenceTask::SequenceTask(lua_Table * data, const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::ptr< ork::TaskFactory > >* subtasks_ptr=(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,2));
		if( !subtasks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg subtasks in ork::SequenceTask::SequenceTask function");
		}
		const std::vector< ork::ptr< ork::TaskFactory > > & subtasks=*subtasks_ptr;

		return new wrapper_ork_SequenceTask(L,NULL, subtasks);
	}

	// Overload binder for ork::SequenceTask::SequenceTask
	static ork::SequenceTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SequenceTask, cannot match any of the overloads for function SequenceTask:\n  SequenceTask(const std::vector< ork::ptr< ork::TaskFactory > > &)\n  SequenceTask(lua_Table *, const std::vector< ork::ptr< ork::TaskFactory > > &)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > ork::SequenceTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SequenceTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SequenceTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SequenceTask* self=Luna< ork::Object >::checkSubType< ork::SequenceTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SequenceTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::SequenceTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SequenceTask::base_toString() function, expected prototype:\nconst char * ork::SequenceTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SequenceTask* self=Luna< ork::Object >::checkSubType< ork::SequenceTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SequenceTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SequenceTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::SequenceTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SequenceTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SequenceTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SequenceTask* self=Luna< ork::Object >::checkSubType< ork::SequenceTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SequenceTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->SequenceTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::SequenceTask* LunaTraits< ork::SequenceTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SequenceTask::_bind_ctor(L);
}

void LunaTraits< ork::SequenceTask >::_bind_dtor(ork::SequenceTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SequenceTask >::className[] = "SequenceTask";
const char LunaTraits< ork::SequenceTask >::fullName[] = "ork::SequenceTask";
const char LunaTraits< ork::SequenceTask >::moduleName[] = "ork";
const char* LunaTraits< ork::SequenceTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::SequenceTask >::hash = 11451538;
const int LunaTraits< ork::SequenceTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SequenceTask >::methods[] = {
	{"getTask", &luna_wrapper_ork_SequenceTask::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_SequenceTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_SequenceTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_SequenceTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SequenceTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SequenceTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SequenceTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SequenceTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SequenceTask >::enumValues[] = {
	{0,0}
};


