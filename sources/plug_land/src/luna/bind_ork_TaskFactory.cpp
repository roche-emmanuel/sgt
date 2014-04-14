#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TaskFactory.h>

class luna_wrapper_ork_TaskFactory {
public:
	typedef Luna< ork::TaskFactory > luna_t;

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

		ork::TaskFactory* self= (ork::TaskFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TaskFactory >::push(L,self,false);
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
		//ork::TaskFactory* ptr= dynamic_cast< ork::TaskFactory* >(Luna< ork::Object >::check(L,1));
		ork::TaskFactory* ptr= luna_caster< ork::Object, ork::TaskFactory >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TaskFactory >::push(L,ptr,false);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::TaskFactory::TaskFactory(lua_Table * data, const char * type)
	static ork::TaskFactory* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::TaskFactory::TaskFactory(lua_Table * data, const char * type) function, expected prototype:\nork::TaskFactory::TaskFactory(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_ork_TaskFactory(L,NULL, type);
	}


	// Function binds:
	// ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::TaskFactory* self=Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::TaskFactory::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TaskFactory::base_toString() function, expected prototype:\nconst char * ork::TaskFactory::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TaskFactory* self=Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TaskFactory::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TaskFactory::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::TaskFactory* LunaTraits< ork::TaskFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TaskFactory::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::ptr< ork::Task > ork::TaskFactory::getTask(ork::ptr< ork::Object > context)
}

void LunaTraits< ork::TaskFactory >::_bind_dtor(ork::TaskFactory* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TaskFactory >::className[] = "TaskFactory";
const char LunaTraits< ork::TaskFactory >::fullName[] = "ork::TaskFactory";
const char LunaTraits< ork::TaskFactory >::moduleName[] = "ork";
const char* LunaTraits< ork::TaskFactory >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::TaskFactory >::hash = 7302064;
const int LunaTraits< ork::TaskFactory >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::TaskFactory >::methods[] = {
	{"getTask", &luna_wrapper_ork_TaskFactory::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_TaskFactory::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_TaskFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TaskFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TaskFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TaskFactory >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TaskFactory::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TaskFactory >::enumValues[] = {
	{0,0}
};


