#include <plug_common.h>

class luna_wrapper_proland_RandomParticleLayer_RandomParticle {
public:
	typedef Luna< proland::RandomParticleLayer::RandomParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59029701) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::RandomParticleLayer::RandomParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::RandomParticleLayer::RandomParticle* rhs =(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,2));
		proland::RandomParticleLayer::RandomParticle* self=(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1));
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

		proland::RandomParticleLayer::RandomParticle* self= (proland::RandomParticleLayer::RandomParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::RandomParticleLayer::RandomParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59029701) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1));
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

		proland::RandomParticleLayer::RandomParticle* self=(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::RandomParticleLayer::RandomParticle");
		
		return luna_dynamicCast(L,converters,"proland::RandomParticleLayer::RandomParticle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRandomPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRandomPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::vec3f proland::RandomParticleLayer::RandomParticle::randomPos()
	static int _bind_getRandomPos(lua_State *L) {
		if (!_lg_typecheck_getRandomPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f proland::RandomParticleLayer::RandomParticle::randomPos() function, expected prototype:\nork::vec3f proland::RandomParticleLayer::RandomParticle::randomPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer::RandomParticle* self=(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f proland::RandomParticleLayer::RandomParticle::randomPos(). Got : '%s'\n%s",typeid(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3f* lret = &self->randomPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,false);

		return 1;
	}

	// void proland::RandomParticleLayer::RandomParticle::randomPos(ork::vec3f value)
	static int _bind_setRandomPos(lua_State *L) {
		if (!_lg_typecheck_setRandomPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::RandomParticle::randomPos(ork::vec3f value) function, expected prototype:\nvoid proland::RandomParticleLayer::RandomParticle::randomPos(ork::vec3f value)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* value_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::RandomParticleLayer::RandomParticle::randomPos function");
		}
		ork::vec3f value=*value_ptr;

		proland::RandomParticleLayer::RandomParticle* self=(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::RandomParticle::randomPos(ork::vec3f). Got : '%s'\n%s",typeid(Luna< proland::RandomParticleLayer::RandomParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->randomPos = value;

		return 0;
	}


	// Operator binds:

};

proland::RandomParticleLayer::RandomParticle* LunaTraits< proland::RandomParticleLayer::RandomParticle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::RandomParticleLayer::RandomParticle >::_bind_dtor(proland::RandomParticleLayer::RandomParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::RandomParticleLayer::RandomParticle >::className[] = "RandomParticleLayer_RandomParticle";
const char LunaTraits< proland::RandomParticleLayer::RandomParticle >::fullName[] = "proland::RandomParticleLayer::RandomParticle";
const char LunaTraits< proland::RandomParticleLayer::RandomParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::RandomParticleLayer::RandomParticle >::parents[] = {0};
const int LunaTraits< proland::RandomParticleLayer::RandomParticle >::hash = 59029701;
const int LunaTraits< proland::RandomParticleLayer::RandomParticle >::uniqueIDs[] = {59029701,0};

luna_RegType LunaTraits< proland::RandomParticleLayer::RandomParticle >::methods[] = {
	{"getRandomPos", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind_getRandomPos},
	{"setRandomPos", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind_setRandomPos},
	{"dynCast", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_RandomParticleLayer_RandomParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::RandomParticleLayer::RandomParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::RandomParticleLayer::RandomParticle >::enumValues[] = {
	{0,0}
};


