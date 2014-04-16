#include <plug_common.h>

class luna_wrapper_proland_DrawRiversTask_TerrainInfo {
public:
	typedef Luna< proland::DrawRiversTask::TerrainInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10738453) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::DrawRiversTask::TerrainInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::DrawRiversTask::TerrainInfo* rhs =(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,2));
		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
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

		proland::DrawRiversTask::TerrainInfo* self= (proland::DrawRiversTask::TerrainInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawRiversTask::TerrainInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10738453) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
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

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::DrawRiversTask::TerrainInfo");
		
		return luna_dynamicCast(L,converters,"proland::DrawRiversTask::TerrainInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScreenToLocalU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScreenToLocalU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::UniformMatrix4f >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int proland::DrawRiversTask::TerrainInfo::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DrawRiversTask::TerrainInfo::id() function, expected prototype:\nint proland::DrawRiversTask::TerrainInfo::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DrawRiversTask::TerrainInfo::id(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::SceneNode > proland::DrawRiversTask::TerrainInfo::tn()
	static int _bind_getTn(lua_State *L) {
		if (!_lg_typecheck_getTn(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > proland::DrawRiversTask::TerrainInfo::tn() function, expected prototype:\nork::ptr< ork::SceneNode > proland::DrawRiversTask::TerrainInfo::tn()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > proland::DrawRiversTask::TerrainInfo::tn(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->tn;
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainNode > proland::DrawRiversTask::TerrainInfo::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainNode > proland::DrawRiversTask::TerrainInfo::t() function, expected prototype:\nork::ptr< proland::TerrainNode > proland::DrawRiversTask::TerrainInfo::t()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainNode > proland::DrawRiversTask::TerrainInfo::t(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainNode > lret = self->t;
		Luna< proland::TerrainNode >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TileProducer > proland::DrawRiversTask::TerrainInfo::flows()
	static int _bind_getFlows(lua_State *L) {
		if (!_lg_typecheck_getFlows(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileProducer > proland::DrawRiversTask::TerrainInfo::flows() function, expected prototype:\nork::ptr< proland::TileProducer > proland::DrawRiversTask::TerrainInfo::flows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileProducer > proland::DrawRiversTask::TerrainInfo::flows(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileProducer > lret = self->flows;
		Luna< proland::TileProducer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::UniformMatrix4f > proland::DrawRiversTask::TerrainInfo::screenToLocalU()
	static int _bind_getScreenToLocalU(lua_State *L) {
		if (!_lg_typecheck_getScreenToLocalU(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::UniformMatrix4f > proland::DrawRiversTask::TerrainInfo::screenToLocalU() function, expected prototype:\nork::ptr< ork::UniformMatrix4f > proland::DrawRiversTask::TerrainInfo::screenToLocalU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::UniformMatrix4f > proland::DrawRiversTask::TerrainInfo::screenToLocalU(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::UniformMatrix4f > lret = self->screenToLocalU;
		Luna< ork::UniformMatrix4f >::push(L,lret.get(),false);

		return 1;
	}

	// string proland::DrawRiversTask::TerrainInfo::name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in string proland::DrawRiversTask::TerrainInfo::name() function, expected prototype:\nstring proland::DrawRiversTask::TerrainInfo::name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call string proland::DrawRiversTask::TerrainInfo::name(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		string lret = self->name;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void proland::DrawRiversTask::TerrainInfo::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::id(int value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::id(int). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void proland::DrawRiversTask::TerrainInfo::tn(ork::ptr< ork::SceneNode > value)
	static int _bind_setTn(lua_State *L) {
		if (!_lg_typecheck_setTn(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::tn(ork::ptr< ork::SceneNode > value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::tn(ork::ptr< ork::SceneNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > value = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::tn(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tn = value;

		return 0;
	}

	// void proland::DrawRiversTask::TerrainInfo::t(ork::ptr< proland::TerrainNode > value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::t(ork::ptr< proland::TerrainNode > value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::t(ork::ptr< proland::TerrainNode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainNode > value = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::t(ork::ptr< proland::TerrainNode >). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->t = value;

		return 0;
	}

	// void proland::DrawRiversTask::TerrainInfo::flows(ork::ptr< proland::TileProducer > value)
	static int _bind_setFlows(lua_State *L) {
		if (!_lg_typecheck_setFlows(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::flows(ork::ptr< proland::TileProducer > value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::flows(ork::ptr< proland::TileProducer > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > value = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::flows(ork::ptr< proland::TileProducer >). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flows = value;

		return 0;
	}

	// void proland::DrawRiversTask::TerrainInfo::screenToLocalU(ork::ptr< ork::UniformMatrix4f > value)
	static int _bind_setScreenToLocalU(lua_State *L) {
		if (!_lg_typecheck_setScreenToLocalU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::screenToLocalU(ork::ptr< ork::UniformMatrix4f > value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::screenToLocalU(ork::ptr< ork::UniformMatrix4f > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::UniformMatrix4f > value = Luna< ork::Object >::checkSubType< ork::UniformMatrix4f >(L,2);

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::screenToLocalU(ork::ptr< ork::UniformMatrix4f >). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->screenToLocalU = value;

		return 0;
	}

	// void proland::DrawRiversTask::TerrainInfo::name(string value)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::TerrainInfo::name(string value) function, expected prototype:\nvoid proland::DrawRiversTask::TerrainInfo::name(string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		proland::DrawRiversTask::TerrainInfo* self=(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::TerrainInfo::name(string). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::TerrainInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->name = value;

		return 0;
	}


	// Operator binds:

};

proland::DrawRiversTask::TerrainInfo* LunaTraits< proland::DrawRiversTask::TerrainInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::DrawRiversTask::TerrainInfo >::_bind_dtor(proland::DrawRiversTask::TerrainInfo* obj) {
	delete obj;
}

const char LunaTraits< proland::DrawRiversTask::TerrainInfo >::className[] = "DrawRiversTask_TerrainInfo";
const char LunaTraits< proland::DrawRiversTask::TerrainInfo >::fullName[] = "proland::DrawRiversTask::TerrainInfo";
const char LunaTraits< proland::DrawRiversTask::TerrainInfo >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawRiversTask::TerrainInfo >::parents[] = {0};
const int LunaTraits< proland::DrawRiversTask::TerrainInfo >::hash = 10738453;
const int LunaTraits< proland::DrawRiversTask::TerrainInfo >::uniqueIDs[] = {10738453,0};

luna_RegType LunaTraits< proland::DrawRiversTask::TerrainInfo >::methods[] = {
	{"getId", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getId},
	{"getTn", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getTn},
	{"getT", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getT},
	{"getFlows", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getFlows},
	{"getScreenToLocalU", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getScreenToLocalU},
	{"getName", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_getName},
	{"setId", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setId},
	{"setTn", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setTn},
	{"setT", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setT},
	{"setFlows", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setFlows},
	{"setScreenToLocalU", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setScreenToLocalU},
	{"setName", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_setName},
	{"dynCast", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawRiversTask_TerrainInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawRiversTask::TerrainInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawRiversTask::TerrainInfo >::enumValues[] = {
	{0,0}
};


