#include <plug_common.h>

class luna_wrapper_proland_WorldParticleLayer_WorldParticle {
public:
	typedef Luna< proland::WorldParticleLayer::WorldParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65640640) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::WorldParticleLayer::WorldParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::WorldParticleLayer::WorldParticle* rhs =(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,2));
		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
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

		proland::WorldParticleLayer::WorldParticle* self= (proland::WorldParticleLayer::WorldParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::WorldParticleLayer::WorldParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65640640) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
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

		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::WorldParticleLayer::WorldParticle");
		
		return luna_dynamicCast(L,converters,"proland::WorldParticleLayer::WorldParticle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getWorldPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWorldPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWorldVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::vec3d proland::WorldParticleLayer::WorldParticle::worldPos()
	static int _bind_getWorldPos(lua_State *L) {
		if (!_lg_typecheck_getWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::WorldParticleLayer::WorldParticle::worldPos() function, expected prototype:\nork::vec3d proland::WorldParticleLayer::WorldParticle::worldPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::WorldParticleLayer::WorldParticle::worldPos(). Got : '%s'\n%s",typeid(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->worldPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3f proland::WorldParticleLayer::WorldParticle::worldVelocity()
	static int _bind_getWorldVelocity(lua_State *L) {
		if (!_lg_typecheck_getWorldVelocity(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f proland::WorldParticleLayer::WorldParticle::worldVelocity() function, expected prototype:\nork::vec3f proland::WorldParticleLayer::WorldParticle::worldVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f proland::WorldParticleLayer::WorldParticle::worldVelocity(). Got : '%s'\n%s",typeid(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3f* lret = &self->worldVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,false);

		return 1;
	}

	// void proland::WorldParticleLayer::WorldParticle::worldPos(ork::vec3d value)
	static int _bind_setWorldPos(lua_State *L) {
		if (!_lg_typecheck_setWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::WorldParticle::worldPos(ork::vec3d value) function, expected prototype:\nvoid proland::WorldParticleLayer::WorldParticle::worldPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::WorldParticleLayer::WorldParticle::worldPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::WorldParticle::worldPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->worldPos = value;

		return 0;
	}

	// void proland::WorldParticleLayer::WorldParticle::worldVelocity(ork::vec3f value)
	static int _bind_setWorldVelocity(lua_State *L) {
		if (!_lg_typecheck_setWorldVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::WorldParticle::worldVelocity(ork::vec3f value) function, expected prototype:\nvoid proland::WorldParticleLayer::WorldParticle::worldVelocity(ork::vec3f value)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* value_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::WorldParticleLayer::WorldParticle::worldVelocity function");
		}
		ork::vec3f value=*value_ptr;

		proland::WorldParticleLayer::WorldParticle* self=(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::WorldParticle::worldVelocity(ork::vec3f). Got : '%s'\n%s",typeid(Luna< proland::WorldParticleLayer::WorldParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->worldVelocity = value;

		return 0;
	}


	// Operator binds:

};

proland::WorldParticleLayer::WorldParticle* LunaTraits< proland::WorldParticleLayer::WorldParticle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::WorldParticleLayer::WorldParticle >::_bind_dtor(proland::WorldParticleLayer::WorldParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::WorldParticleLayer::WorldParticle >::className[] = "WorldParticleLayer_WorldParticle";
const char LunaTraits< proland::WorldParticleLayer::WorldParticle >::fullName[] = "proland::WorldParticleLayer::WorldParticle";
const char LunaTraits< proland::WorldParticleLayer::WorldParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::WorldParticleLayer::WorldParticle >::parents[] = {0};
const int LunaTraits< proland::WorldParticleLayer::WorldParticle >::hash = 65640640;
const int LunaTraits< proland::WorldParticleLayer::WorldParticle >::uniqueIDs[] = {65640640,0};

luna_RegType LunaTraits< proland::WorldParticleLayer::WorldParticle >::methods[] = {
	{"getWorldPos", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_getWorldPos},
	{"getWorldVelocity", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_getWorldVelocity},
	{"setWorldPos", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_setWorldPos},
	{"setWorldVelocity", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_setWorldVelocity},
	{"dynCast", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_WorldParticleLayer_WorldParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::WorldParticleLayer::WorldParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::WorldParticleLayer::WorldParticle >::enumValues[] = {
	{0,0}
};


