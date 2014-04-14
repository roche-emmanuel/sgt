#include <plug_common.h>

class luna_wrapper_proland_ScreenParticleLayer_ScreenParticle {
public:
	typedef Luna< proland::ScreenParticleLayer::ScreenParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15286603) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ScreenParticleLayer::ScreenParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ScreenParticleLayer::ScreenParticle* rhs =(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,2));
		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
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

		proland::ScreenParticleLayer::ScreenParticle* self= (proland::ScreenParticleLayer::ScreenParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ScreenParticleLayer::ScreenParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15286603) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
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

		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ScreenParticleLayer::ScreenParticle");
		
		return luna_dynamicCast(L,converters,"proland::ScreenParticleLayer::ScreenParticle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getScreenPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReason(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScreenPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReason(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::vec2f proland::ScreenParticleLayer::ScreenParticle::screenPos()
	static int _bind_getScreenPos(lua_State *L) {
		if (!_lg_typecheck_getScreenPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f proland::ScreenParticleLayer::ScreenParticle::screenPos() function, expected prototype:\nork::vec2f proland::ScreenParticleLayer::ScreenParticle::screenPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f proland::ScreenParticleLayer::ScreenParticle::screenPos(). Got : '%s'\n%s",typeid(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec2f* lret = &self->screenPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,false);

		return 1;
	}

	// proland::ScreenParticleLayer::status proland::ScreenParticleLayer::ScreenParticle::reason()
	static int _bind_getReason(lua_State *L) {
		if (!_lg_typecheck_getReason(L)) {
			luaL_error(L, "luna typecheck failed in proland::ScreenParticleLayer::status proland::ScreenParticleLayer::ScreenParticle::reason() function, expected prototype:\nproland::ScreenParticleLayer::status proland::ScreenParticleLayer::ScreenParticle::reason()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ScreenParticleLayer::status proland::ScreenParticleLayer::ScreenParticle::reason(). Got : '%s'\n%s",typeid(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ScreenParticleLayer::status lret = self->reason;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ScreenParticleLayer::ScreenParticle::screenPos(ork::vec2f value)
	static int _bind_setScreenPos(lua_State *L) {
		if (!_lg_typecheck_setScreenPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::ScreenParticle::screenPos(ork::vec2f value) function, expected prototype:\nvoid proland::ScreenParticleLayer::ScreenParticle::screenPos(ork::vec2f value)\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2f* value_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::ScreenParticleLayer::ScreenParticle::screenPos function");
		}
		ork::vec2f value=*value_ptr;

		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::ScreenParticle::screenPos(ork::vec2f). Got : '%s'\n%s",typeid(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->screenPos = value;

		return 0;
	}

	// void proland::ScreenParticleLayer::ScreenParticle::reason(proland::ScreenParticleLayer::status value)
	static int _bind_setReason(lua_State *L) {
		if (!_lg_typecheck_setReason(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::ScreenParticle::reason(proland::ScreenParticleLayer::status value) function, expected prototype:\nvoid proland::ScreenParticleLayer::ScreenParticle::reason(proland::ScreenParticleLayer::status value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ScreenParticleLayer::status value=(proland::ScreenParticleLayer::status)lua_tointeger(L,2);

		proland::ScreenParticleLayer::ScreenParticle* self=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::ScreenParticle::reason(proland::ScreenParticleLayer::status). Got : '%s'\n%s",typeid(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reason = value;

		return 0;
	}


	// Operator binds:

};

proland::ScreenParticleLayer::ScreenParticle* LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::_bind_dtor(proland::ScreenParticleLayer::ScreenParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::className[] = "ScreenParticleLayer_ScreenParticle";
const char LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::fullName[] = "proland::ScreenParticleLayer::ScreenParticle";
const char LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::parents[] = {0};
const int LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::hash = 15286603;
const int LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::uniqueIDs[] = {15286603,0};

luna_RegType LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::methods[] = {
	{"getScreenPos", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_getScreenPos},
	{"getReason", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_getReason},
	{"setScreenPos", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_setScreenPos},
	{"setReason", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_setReason},
	{"dynCast", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ScreenParticleLayer_ScreenParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ScreenParticleLayer::ScreenParticle >::enumValues[] = {
	{0,0}
};


