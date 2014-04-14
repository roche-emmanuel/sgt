#include <plug_common.h>

class luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle {
public:
	typedef Luna< proland::LifeCycleParticleLayer::LifeCycleParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49055864) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::LifeCycleParticleLayer::LifeCycleParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::LifeCycleParticleLayer::LifeCycleParticle* rhs =(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,2));
		proland::LifeCycleParticleLayer::LifeCycleParticle* self=(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1));
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

		proland::LifeCycleParticleLayer::LifeCycleParticle* self= (proland::LifeCycleParticleLayer::LifeCycleParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49055864) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1));
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

		proland::LifeCycleParticleLayer::LifeCycleParticle* self=(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::LifeCycleParticleLayer::LifeCycleParticle");
		
		return luna_dynamicCast(L,converters,"proland::LifeCycleParticleLayer::LifeCycleParticle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBirthDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBirthDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate()
	static int _bind_getBirthDate(lua_State *L) {
		if (!_lg_typecheck_getBirthDate(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate() function, expected prototype:\nfloat proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer::LifeCycleParticle* self=(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate(). Got : '%s'\n%s",typeid(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->birthDate;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate(float value)
	static int _bind_setBirthDate(lua_State *L) {
		if (!_lg_typecheck_setBirthDate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate(float value) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer::LifeCycleParticle* self=(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::LifeCycleParticle::birthDate(float). Got : '%s'\n%s",typeid(Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->birthDate = value;

		return 0;
	}


	// Operator binds:

};

proland::LifeCycleParticleLayer::LifeCycleParticle* LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::_bind_dtor(proland::LifeCycleParticleLayer::LifeCycleParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::className[] = "LifeCycleParticleLayer_LifeCycleParticle";
const char LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::fullName[] = "proland::LifeCycleParticleLayer::LifeCycleParticle";
const char LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::parents[] = {0};
const int LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::hash = 49055864;
const int LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::uniqueIDs[] = {49055864,0};

luna_RegType LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::methods[] = {
	{"getBirthDate", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind_getBirthDate},
	{"setBirthDate", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind_setBirthDate},
	{"dynCast", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LifeCycleParticleLayer_LifeCycleParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle >::enumValues[] = {
	{0,0}
};


