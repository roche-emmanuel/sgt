#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Method.h>

class luna_wrapper_ork_Method {
public:
	typedef Luna< ork::Method > luna_t;

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

		ork::Method* self= (ork::Method*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Method >::push(L,self,false);
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
		//ork::Method* ptr= dynamic_cast< ork::Method* >(Luna< ork::Object >::check(L,1));
		ork::Method* ptr= luna_caster< ork::Object, ork::Method >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Method >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,1) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,2) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTaskFactory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTaskFactory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Method::Method(ork::ptr< ork::TaskFactory > body)
	static ork::Method* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Method::Method(ork::ptr< ork::TaskFactory > body) function, expected prototype:\nork::Method::Method(ork::ptr< ork::TaskFactory > body)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::TaskFactory > body = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,1);

		return new ork::Method(body);
	}

	// ork::Method::Method(lua_Table * data, ork::ptr< ork::TaskFactory > body)
	static ork::Method* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Method::Method(lua_Table * data, ork::ptr< ork::TaskFactory > body) function, expected prototype:\nork::Method::Method(lua_Table * data, ork::ptr< ork::TaskFactory > body)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::TaskFactory > body = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,2);

		return new wrapper_ork_Method(L,NULL, body);
	}

	// Overload binder for ork::Method::Method
	static ork::Method* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Method, cannot match any of the overloads for function Method:\n  Method(ork::ptr< ork::TaskFactory >)\n  Method(lua_Table *, ork::ptr< ork::TaskFactory >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::SceneNode > ork::Method::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > ork::Method::getOwner() function, expected prototype:\nork::ptr< ork::SceneNode > ork::Method::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > ork::Method::getOwner(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getOwner();
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// bool ork::Method::isEnabled()
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Method::isEnabled() function, expected prototype:\nbool ork::Method::isEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Method::isEnabled(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Method::setIsEnabled(bool enabled)
	static int _bind_setIsEnabled(lua_State *L) {
		if (!_lg_typecheck_setIsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Method::setIsEnabled(bool enabled) function, expected prototype:\nvoid ork::Method::setIsEnabled(bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Method::setIsEnabled(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsEnabled(enabled);

		return 0;
	}

	// ork::ptr< ork::TaskFactory > ork::Method::getTaskFactory()
	static int _bind_getTaskFactory(lua_State *L) {
		if (!_lg_typecheck_getTaskFactory(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::TaskFactory > ork::Method::getTaskFactory() function, expected prototype:\nork::ptr< ork::TaskFactory > ork::Method::getTaskFactory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::TaskFactory > ork::Method::getTaskFactory(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::TaskFactory > lret = self->getTaskFactory();
		Luna< ork::TaskFactory >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::Method::setTaskFactory(ork::ptr< ork::TaskFactory > taskFactory)
	static int _bind_setTaskFactory(lua_State *L) {
		if (!_lg_typecheck_setTaskFactory(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Method::setTaskFactory(ork::ptr< ork::TaskFactory > taskFactory) function, expected prototype:\nvoid ork::Method::setTaskFactory(ork::ptr< ork::TaskFactory > taskFactory)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::TaskFactory > taskFactory = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,2);

		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Method::setTaskFactory(ork::ptr< ork::TaskFactory >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTaskFactory(taskFactory);

		return 0;
	}

	// ork::ptr< ork::Task > ork::Method::getTask()
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::Method::getTask() function, expected prototype:\nork::ptr< ork::Task > ork::Method::getTask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::Method::getTask(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask();
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::Method::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Method::base_toString() function, expected prototype:\nconst char * ork::Method::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Method* self=Luna< ork::Object >::checkSubType< ork::Method >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Method::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Method::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Method* LunaTraits< ork::Method >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Method::_bind_ctor(L);
}

void LunaTraits< ork::Method >::_bind_dtor(ork::Method* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Method >::className[] = "Method";
const char LunaTraits< ork::Method >::fullName[] = "ork::Method";
const char LunaTraits< ork::Method >::moduleName[] = "ork";
const char* LunaTraits< ork::Method >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Method >::hash = 47194826;
const int LunaTraits< ork::Method >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Method >::methods[] = {
	{"getOwner", &luna_wrapper_ork_Method::_bind_getOwner},
	{"isEnabled", &luna_wrapper_ork_Method::_bind_isEnabled},
	{"setIsEnabled", &luna_wrapper_ork_Method::_bind_setIsEnabled},
	{"getTaskFactory", &luna_wrapper_ork_Method::_bind_getTaskFactory},
	{"setTaskFactory", &luna_wrapper_ork_Method::_bind_setTaskFactory},
	{"getTask", &luna_wrapper_ork_Method::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_Method::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Method::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Method::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Method::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Method >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Method::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Method >::enumValues[] = {
	{0,0}
};


