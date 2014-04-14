#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ObjectTileStorage.h>

class luna_wrapper_proland_ObjectTileStorage {
public:
	typedef Luna< proland::ObjectTileStorage > luna_t;

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

		proland::ObjectTileStorage* self= (proland::ObjectTileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ObjectTileStorage >::push(L,self,false);
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
		//proland::ObjectTileStorage* ptr= dynamic_cast< proland::ObjectTileStorage* >(Luna< ork::Object >::check(L,1));
		proland::ObjectTileStorage* ptr= luna_caster< ork::Object, proland::ObjectTileStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ObjectTileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// proland::ObjectTileStorage::ObjectTileStorage(int capacity)
	static proland::ObjectTileStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ObjectTileStorage::ObjectTileStorage(int capacity) function, expected prototype:\nproland::ObjectTileStorage::ObjectTileStorage(int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,1);

		return new proland::ObjectTileStorage(capacity);
	}

	// proland::ObjectTileStorage::ObjectTileStorage(lua_Table * data, int capacity)
	static proland::ObjectTileStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ObjectTileStorage::ObjectTileStorage(lua_Table * data, int capacity) function, expected prototype:\nproland::ObjectTileStorage::ObjectTileStorage(lua_Table * data, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,2);

		return new wrapper_proland_ObjectTileStorage(L,NULL, capacity);
	}

	// Overload binder for proland::ObjectTileStorage::ObjectTileStorage
	static proland::ObjectTileStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectTileStorage, cannot match any of the overloads for function ObjectTileStorage:\n  ObjectTileStorage(int)\n  ObjectTileStorage(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// const char * proland::ObjectTileStorage::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ObjectTileStorage::base_toString() function, expected prototype:\nconst char * proland::ObjectTileStorage::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ObjectTileStorage* self=Luna< ork::Object >::checkSubType< proland::ObjectTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ObjectTileStorage::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ObjectTileStorage::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ObjectTileStorage* LunaTraits< proland::ObjectTileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ObjectTileStorage::_bind_ctor(L);
}

void LunaTraits< proland::ObjectTileStorage >::_bind_dtor(proland::ObjectTileStorage* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ObjectTileStorage >::className[] = "ObjectTileStorage";
const char LunaTraits< proland::ObjectTileStorage >::fullName[] = "proland::ObjectTileStorage";
const char LunaTraits< proland::ObjectTileStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::ObjectTileStorage >::parents[] = {"proland.TileStorage", 0};
const int LunaTraits< proland::ObjectTileStorage >::hash = 90833238;
const int LunaTraits< proland::ObjectTileStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ObjectTileStorage >::methods[] = {
	{"base_toString", &luna_wrapper_proland_ObjectTileStorage::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_ObjectTileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ObjectTileStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ObjectTileStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ObjectTileStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ObjectTileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ObjectTileStorage >::enumValues[] = {
	{0,0}
};


