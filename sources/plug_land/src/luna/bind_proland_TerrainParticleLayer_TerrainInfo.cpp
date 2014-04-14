#include <plug_common.h>

class luna_wrapper_proland_TerrainParticleLayer_TerrainInfo {
public:
	typedef Luna< proland::TerrainParticleLayer::TerrainInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29709589) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TerrainParticleLayer::TerrainInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainParticleLayer::TerrainInfo* rhs =(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,2));
		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
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

		proland::TerrainParticleLayer::TerrainInfo* self= (proland::TerrainParticleLayer::TerrainInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainParticleLayer::TerrainInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29709589) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
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

		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TerrainParticleLayer::TerrainInfo");
		
		return luna_dynamicCast(L,converters,"proland::TerrainParticleLayer::TerrainInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainParticleLayer::TerrainInfo::TerrainInfo(ork::ptr< ork::SceneNode > n, int id)
	static proland::TerrainParticleLayer::TerrainInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainParticleLayer::TerrainInfo::TerrainInfo(ork::ptr< ork::SceneNode > n, int id) function, expected prototype:\nproland::TerrainParticleLayer::TerrainInfo::TerrainInfo(ork::ptr< ork::SceneNode > n, int id)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > n = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		int id=(int)lua_tointeger(L,2);

		return new proland::TerrainParticleLayer::TerrainInfo(n, id);
	}


	// Function binds:
	// ork::ptr< ork::SceneNode > proland::TerrainParticleLayer::TerrainInfo::node()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > proland::TerrainParticleLayer::TerrainInfo::node() function, expected prototype:\nork::ptr< ork::SceneNode > proland::TerrainParticleLayer::TerrainInfo::node()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > proland::TerrainParticleLayer::TerrainInfo::node(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->node;
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainNode > proland::TerrainParticleLayer::TerrainInfo::terrain()
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainNode > proland::TerrainParticleLayer::TerrainInfo::terrain() function, expected prototype:\nork::ptr< proland::TerrainNode > proland::TerrainParticleLayer::TerrainInfo::terrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainNode > proland::TerrainParticleLayer::TerrainInfo::terrain(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainNode > lret = self->terrain;
		Luna< proland::TerrainNode >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TerrainParticleLayer::TerrainInfo::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainParticleLayer::TerrainInfo::id() function, expected prototype:\nint proland::TerrainParticleLayer::TerrainInfo::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainParticleLayer::TerrainInfo::id(). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainParticleLayer::TerrainInfo::node(ork::ptr< ork::SceneNode > value)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainInfo::node(ork::ptr< ork::SceneNode > value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainInfo::node(ork::ptr< ork::SceneNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > value = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainInfo::node(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->node = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainInfo::terrain(ork::ptr< proland::TerrainNode > value)
	static int _bind_setTerrain(lua_State *L) {
		if (!_lg_typecheck_setTerrain(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainInfo::terrain(ork::ptr< proland::TerrainNode > value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainInfo::terrain(ork::ptr< proland::TerrainNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainNode > value = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);

		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainInfo::terrain(ork::ptr< proland::TerrainNode >). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrain = value;

		return 0;
	}

	// void proland::TerrainParticleLayer::TerrainInfo::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::TerrainInfo::id(int value) function, expected prototype:\nvoid proland::TerrainParticleLayer::TerrainInfo::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TerrainParticleLayer::TerrainInfo* self=(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::TerrainInfo::id(int). Got : '%s'\n%s",typeid(Luna< proland::TerrainParticleLayer::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}


	// Operator binds:

};

proland::TerrainParticleLayer::TerrainInfo* LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_ctor(L);
}

void LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::_bind_dtor(proland::TerrainParticleLayer::TerrainInfo* obj) {
	delete obj;
}

const char LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::className[] = "TerrainParticleLayer_TerrainInfo";
const char LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::fullName[] = "proland::TerrainParticleLayer::TerrainInfo";
const char LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::parents[] = {0};
const int LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::hash = 29709589;
const int LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::uniqueIDs[] = {29709589,0};

luna_RegType LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::methods[] = {
	{"getNode", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_getNode},
	{"getTerrain", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_getTerrain},
	{"getId", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_getId},
	{"setNode", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_setNode},
	{"setTerrain", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_setTerrain},
	{"setId", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_setId},
	{"dynCast", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainParticleLayer_TerrainInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainParticleLayer::TerrainInfo >::enumValues[] = {
	{0,0}
};


