#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileStorage.h>

class luna_wrapper_proland_TileStorage {
public:
	typedef Luna< proland::TileStorage > luna_t;

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

		proland::TileStorage* self= (proland::TileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileStorage >::push(L,self,false);
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
		//proland::TileStorage* ptr= dynamic_cast< proland::TileStorage* >(Luna< ork::Object >::check(L,1));
		proland::TileStorage* ptr= luna_caster< ork::Object, proland::TileStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_newSlot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteSlot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFreeSlots(lua_State *L) {
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
	// proland::TileStorage::TileStorage(int tileSize, int capacity)
	static proland::TileStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileStorage::TileStorage(int tileSize, int capacity) function, expected prototype:\nproland::TileStorage::TileStorage(int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,1);
		int capacity=(int)lua_tointeger(L,2);

		return new proland::TileStorage(tileSize, capacity);
	}

	// proland::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity)
	static proland::TileStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity) function, expected prototype:\nproland::TileStorage::TileStorage(lua_Table * data, int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int capacity=(int)lua_tointeger(L,3);

		return new wrapper_proland_TileStorage(L,NULL, tileSize, capacity);
	}

	// Overload binder for proland::TileStorage::TileStorage
	static proland::TileStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileStorage, cannot match any of the overloads for function TileStorage:\n  TileStorage(int, int)\n  TileStorage(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// proland::TileStorage::Slot * proland::TileStorage::newSlot()
	static int _bind_newSlot(lua_State *L) {
		if (!_lg_typecheck_newSlot(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileStorage::Slot * proland::TileStorage::newSlot() function, expected prototype:\nproland::TileStorage::Slot * proland::TileStorage::newSlot()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileStorage::Slot * proland::TileStorage::newSlot(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileStorage::Slot * lret = self->newSlot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileStorage::Slot >::push(L,lret,false);

		return 1;
	}

	// void proland::TileStorage::deleteSlot(proland::TileStorage::Slot * t)
	static int _bind_deleteSlot(lua_State *L) {
		if (!_lg_typecheck_deleteSlot(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileStorage::deleteSlot(proland::TileStorage::Slot * t) function, expected prototype:\nvoid proland::TileStorage::deleteSlot(proland::TileStorage::Slot * t)\nClass arguments details:\narg 1 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage::Slot* t=(Luna< proland::TileStorage::Slot >::check(L,2));

		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileStorage::deleteSlot(proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deleteSlot(t);

		return 0;
	}

	// int proland::TileStorage::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileStorage::getTileSize() function, expected prototype:\nint proland::TileStorage::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileStorage::getTileSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TileStorage::getCapacity()
	static int _bind_getCapacity(lua_State *L) {
		if (!_lg_typecheck_getCapacity(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileStorage::getCapacity() function, expected prototype:\nint proland::TileStorage::getCapacity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileStorage::getCapacity(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCapacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TileStorage::getFreeSlots()
	static int _bind_getFreeSlots(lua_State *L) {
		if (!_lg_typecheck_getFreeSlots(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileStorage::getFreeSlots() function, expected prototype:\nint proland::TileStorage::getFreeSlots()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileStorage::getFreeSlots(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFreeSlots();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * proland::TileStorage::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileStorage::base_toString() function, expected prototype:\nconst char * proland::TileStorage::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileStorage* self=Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileStorage::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileStorage::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::TileStorage* LunaTraits< proland::TileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileStorage::_bind_ctor(L);
}

void LunaTraits< proland::TileStorage >::_bind_dtor(proland::TileStorage* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileStorage >::className[] = "TileStorage";
const char LunaTraits< proland::TileStorage >::fullName[] = "proland::TileStorage";
const char LunaTraits< proland::TileStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::TileStorage >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileStorage >::hash = 70663957;
const int LunaTraits< proland::TileStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileStorage >::methods[] = {
	{"newSlot", &luna_wrapper_proland_TileStorage::_bind_newSlot},
	{"deleteSlot", &luna_wrapper_proland_TileStorage::_bind_deleteSlot},
	{"getTileSize", &luna_wrapper_proland_TileStorage::_bind_getTileSize},
	{"getCapacity", &luna_wrapper_proland_TileStorage::_bind_getCapacity},
	{"getFreeSlots", &luna_wrapper_proland_TileStorage::_bind_getFreeSlots},
	{"base_toString", &luna_wrapper_proland_TileStorage::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_TileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileStorage >::enumValues[] = {
	{0,0}
};


