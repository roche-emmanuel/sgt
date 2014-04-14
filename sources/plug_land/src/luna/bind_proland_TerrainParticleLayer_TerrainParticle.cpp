#include <plug_common.h>

class luna_wrapper_proland_TerrainParticleLayer_TerrainParticle {
public:
	typedef Luna< proland::TerrainParticleLayer::TerrainParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19603310) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TerrainParticleLayer::TerrainParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainParticleLayer::TerrainParticle* rhs =(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,2));
		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
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

		proland::TerrainParticleLayer::TerrainParticle* self= (proland::TerrainParticleLayer::TerrainParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainParticleLayer::TerrainParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19603310) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
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

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TerrainParticleLayer::TerrainParticle");
		
		return luna_dynamicCast(L,converters,"proland::TerrainParticleLayer::TerrainParticle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getTerrainPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrainVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProducer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrainId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstVelocityQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTerrainPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrainVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProducer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrainId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFirstVelocityQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::vec3d proland::TerrainParticleLayer::TerrainParticle::terrainPos()
	static int _bind_getTerrainPos(lua_State *L) {
		if (!_lg_typecheck_getTerrainPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainParticleLayer::TerrainParticle::terrainPos() function, expected prototype:\nork::vec3d proland::TerrainParticleLayer::TerrainParticle::terrainPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainParticleLayer::TerrainParticle::terrainPos(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->terrainPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec2d proland::TerrainParticleLayer::TerrainParticle::terrainVelocity()
	static int _bind_getTerrainVelocity(lua_State *L) {
		if (!_lg_typecheck_getTerrainVelocity(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::TerrainParticleLayer::TerrainParticle::terrainVelocity() function, expected prototype:\nork::vec2d proland::TerrainParticleLayer::TerrainParticle::terrainVelocity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::TerrainParticleLayer::TerrainParticle::terrainVelocity(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec2d* lret = &self->terrainVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,false);

		return 1;
	}

	// proland::TileProducer * proland::TerrainParticleLayer::TerrainParticle::producer()
	static int _bind_getProducer(lua_State *L) {
		if (!_lg_typecheck_getProducer(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileProducer * proland::TerrainParticleLayer::TerrainParticle::producer() function, expected prototype:\nproland::TileProducer * proland::TerrainParticleLayer::TerrainParticle::producer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileProducer * proland::TerrainParticleLayer::TerrainParticle::producer(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileProducer * lret = self->producer;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileProducer >::push(L,lret,false);

		return 1;
	}

	// int proland::TerrainParticleLayer::TerrainParticle::status()
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainParticleLayer::TerrainParticle::status() function, expected prototype:\nint proland::TerrainParticleLayer::TerrainParticle::status()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainParticleLayer::TerrainParticle::status(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->status;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TerrainParticleLayer::TerrainParticle::terrainId()
	static int _bind_getTerrainId(lua_State *L) {
		if (!_lg_typecheck_getTerrainId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainParticleLayer::TerrainParticle::terrainId() function, expected prototype:\nint proland::TerrainParticleLayer::TerrainParticle::terrainId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainParticleLayer::TerrainParticle::terrainId(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->terrainId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery()
	static int _bind_getFirstVelocityQuery(lua_State *L) {
		if (!_lg_typecheck_getFirstVelocityQuery(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery() function, expected prototype:\nbool proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->firstVelocityQuery;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::terrainPos(ork::vec3d value)
	static int _bind_setTerrainPos(lua_State *L) {
		if (!_lg_typecheck_setTerrainPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::terrainPos(ork::vec3d value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::terrainPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainParticleLayer::TerrainParticle::terrainPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::terrainPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrainPos = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::terrainVelocity(ork::vec2d value)
	static int _bind_setTerrainVelocity(lua_State *L) {
		if (!_lg_typecheck_setTerrainVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::terrainVelocity(ork::vec2d value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::terrainVelocity(ork::vec2d value)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* value_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainParticleLayer::TerrainParticle::terrainVelocity function");
		}
		ork::vec2d value=*value_ptr;

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::terrainVelocity(ork::vec2d). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrainVelocity = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::producer(proland::TileProducer * value)
	static int _bind_setProducer(lua_State *L) {
		if (!_lg_typecheck_setProducer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::producer(proland::TileProducer * value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::producer(proland::TileProducer * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileProducer* value=(Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2));

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::producer(proland::TileProducer *). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->producer = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::status(int value)
	static int _bind_setStatus(lua_State *L) {
		if (!_lg_typecheck_setStatus(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::status(int value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::status(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::status(int). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->status = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::terrainId(int value)
	static int _bind_setTerrainId(lua_State *L) {
		if (!_lg_typecheck_setTerrainId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::terrainId(int value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::terrainId(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::terrainId(int). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrainId = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery(bool value)
	static int _bind_setFirstVelocityQuery(lua_State *L) {
		if (!_lg_typecheck_setFirstVelocityQuery(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery(bool value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainParticleLayer::TerrainParticle* self=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainParticle::firstVelocityQuery(bool). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->firstVelocityQuery = value;

		return 0;
	}


	// Operator binds:

};

proland::TerrainParticleLayer::TerrainParticle* LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::_bind_dtor(proland::TerrainParticleLayer::TerrainParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::className[] = "TerrainParticleLayer_TerrainParticle";
const char LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::fullName[] = "proland::TerrainParticleLayer::TerrainParticle";
const char LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::parents[] = {0};
const int LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::hash = 19603310;
const int LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::uniqueIDs[] = {19603310,0};

luna_RegType LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::methods[] = {
	{"getTerrainPos", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getTerrainPos},
	{"getTerrainVelocity", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getTerrainVelocity},
	{"getProducer", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getProducer},
	{"getStatus", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getStatus},
	{"getTerrainId", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getTerrainId},
	{"getFirstVelocityQuery", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_getFirstVelocityQuery},
	{"setTerrainPos", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setTerrainPos},
	{"setTerrainVelocity", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setTerrainVelocity},
	{"setProducer", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setProducer},
	{"setStatus", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setStatus},
	{"setTerrainId", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setTerrainId},
	{"setFirstVelocityQuery", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_setFirstVelocityQuery},
	{"dynCast", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainParticleLayer_TerrainParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainParticleLayer::TerrainParticle >::enumValues[] = {
	{0,0}
};


