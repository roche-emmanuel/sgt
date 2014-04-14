#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ReadbackManager_Callback.h>

class luna_wrapper_proland_ReadbackManager_Callback {
public:
	typedef Luna< proland::ReadbackManager::Callback > luna_t;

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

		proland::ReadbackManager::Callback* self= (proland::ReadbackManager::Callback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ReadbackManager::Callback >::push(L,self,false);
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
		//proland::ReadbackManager::Callback* ptr= dynamic_cast< proland::ReadbackManager::Callback* >(Luna< ork::Object >::check(L,1));
		proland::ReadbackManager::Callback* ptr= luna_caster< ork::Object, proland::ReadbackManager::Callback >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ReadbackManager::Callback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
	// proland::ReadbackManager::Callback::Callback(lua_Table * data)
	static proland::ReadbackManager::Callback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::ReadbackManager::Callback::Callback(lua_Table * data) function, expected prototype:\nproland::ReadbackManager::Callback::Callback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_ReadbackManager_Callback(L,NULL);
	}


	// Function binds:
	// const char * proland::ReadbackManager::Callback::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ReadbackManager::Callback::base_toString() function, expected prototype:\nconst char * proland::ReadbackManager::Callback::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ReadbackManager::Callback* self=Luna< ork::Object >::checkSubType< proland::ReadbackManager::Callback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ReadbackManager::Callback::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Callback::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ReadbackManager::Callback* LunaTraits< proland::ReadbackManager::Callback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ReadbackManager_Callback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void proland::ReadbackManager::Callback::dataRead(volatile void * data)
}

void LunaTraits< proland::ReadbackManager::Callback >::_bind_dtor(proland::ReadbackManager::Callback* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ReadbackManager::Callback >::className[] = "ReadbackManager_Callback";
const char LunaTraits< proland::ReadbackManager::Callback >::fullName[] = "proland::ReadbackManager::Callback";
const char LunaTraits< proland::ReadbackManager::Callback >::moduleName[] = "proland";
const char* LunaTraits< proland::ReadbackManager::Callback >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ReadbackManager::Callback >::hash = 9293861;
const int LunaTraits< proland::ReadbackManager::Callback >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ReadbackManager::Callback >::methods[] = {
	{"base_toString", &luna_wrapper_proland_ReadbackManager_Callback::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_ReadbackManager_Callback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ReadbackManager_Callback::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ReadbackManager_Callback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ReadbackManager::Callback >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ReadbackManager_Callback::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ReadbackManager::Callback >::enumValues[] = {
	{0,0}
};


