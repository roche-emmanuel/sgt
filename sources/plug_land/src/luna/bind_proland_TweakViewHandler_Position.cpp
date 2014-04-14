#include <plug_common.h>

class luna_wrapper_proland_TweakViewHandler_Position {
public:
	typedef Luna< proland::TweakViewHandler::Position > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakViewHandler::Position* self= (proland::TweakViewHandler::Position*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakViewHandler::Position >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6582046) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Position(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TweakViewHandler::Position* ptr= dynamic_cast< proland::TweakViewHandler::Position* >(Luna< proland::BasicViewHandler::Position >::check(L,1));
		proland::TweakViewHandler::Position* ptr= luna_caster< proland::BasicViewHandler::Position, proland::TweakViewHandler::Position >::cast(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakViewHandler::Position >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_go(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void proland::TweakViewHandler::Position::go()
	static int _bind_go(lua_State *L) {
		if (!_lg_typecheck_go(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::Position::go() function, expected prototype:\nvoid proland::TweakViewHandler::Position::go()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::Position::go(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->go();

		return 0;
	}

	// proland::TweakViewHandler * proland::TweakViewHandler::Position::owner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakViewHandler * proland::TweakViewHandler::Position::owner() function, expected prototype:\nproland::TweakViewHandler * proland::TweakViewHandler::Position::owner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TweakViewHandler * proland::TweakViewHandler::Position::owner(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TweakViewHandler * lret = self->owner;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TweakViewHandler >::push(L,lret,false);

		return 1;
	}

	// const char * proland::TweakViewHandler::Position::name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakViewHandler::Position::name() function, expected prototype:\nconst char * proland::TweakViewHandler::Position::name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakViewHandler::Position::name(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->name;
		lua_pushstring(L,lret);

		return 1;
	}

	// char proland::TweakViewHandler::Position::key()
	static int _bind_getKey(lua_State *L) {
		if (!_lg_typecheck_getKey(L)) {
			luaL_error(L, "luna typecheck failed in char proland::TweakViewHandler::Position::key() function, expected prototype:\nchar proland::TweakViewHandler::Position::key()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call char proland::TweakViewHandler::Position::key(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->key;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TweakViewHandler::Position::owner(proland::TweakViewHandler * value)
	static int _bind_setOwner(lua_State *L) {
		if (!_lg_typecheck_setOwner(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::Position::owner(proland::TweakViewHandler * value) function, expected prototype:\nvoid proland::TweakViewHandler::Position::owner(proland::TweakViewHandler * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakViewHandler* value=(Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,2));

		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::Position::owner(proland::TweakViewHandler *). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->owner = value;

		return 0;
	}

	// void proland::TweakViewHandler::Position::key(char value)
	static int _bind_setKey(lua_State *L) {
		if (!_lg_typecheck_setKey(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::Position::key(char value) function, expected prototype:\nvoid proland::TweakViewHandler::Position::key(char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char value=(char)lua_tointeger(L,2);

		proland::TweakViewHandler::Position* self=Luna< proland::BasicViewHandler::Position >::checkSubType< proland::TweakViewHandler::Position >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::Position::key(char). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->key = value;

		return 0;
	}


	// Operator binds:

};

proland::TweakViewHandler::Position* LunaTraits< proland::TweakViewHandler::Position >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::TweakViewHandler::Position >::_bind_dtor(proland::TweakViewHandler::Position* obj) {
	delete obj;
}

const char LunaTraits< proland::TweakViewHandler::Position >::className[] = "TweakViewHandler_Position";
const char LunaTraits< proland::TweakViewHandler::Position >::fullName[] = "proland::TweakViewHandler::Position";
const char LunaTraits< proland::TweakViewHandler::Position >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakViewHandler::Position >::parents[] = {"proland.BasicViewHandler_Position", 0};
const int LunaTraits< proland::TweakViewHandler::Position >::hash = 3940765;
const int LunaTraits< proland::TweakViewHandler::Position >::uniqueIDs[] = {6582046,0};

luna_RegType LunaTraits< proland::TweakViewHandler::Position >::methods[] = {
	{"go", &luna_wrapper_proland_TweakViewHandler_Position::_bind_go},
	{"getOwner", &luna_wrapper_proland_TweakViewHandler_Position::_bind_getOwner},
	{"getName", &luna_wrapper_proland_TweakViewHandler_Position::_bind_getName},
	{"getKey", &luna_wrapper_proland_TweakViewHandler_Position::_bind_getKey},
	{"setOwner", &luna_wrapper_proland_TweakViewHandler_Position::_bind_setOwner},
	{"setKey", &luna_wrapper_proland_TweakViewHandler_Position::_bind_setKey},
	{"fromVoid", &luna_wrapper_proland_TweakViewHandler_Position::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakViewHandler_Position::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakViewHandler::Position >::converters[] = {
	{"proland::BasicViewHandler::Position", &luna_wrapper_proland_TweakViewHandler_Position::_cast_from_Position},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakViewHandler::Position >::enumValues[] = {
	{0,0}
};


