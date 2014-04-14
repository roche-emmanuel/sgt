#include <plug_common.h>

class luna_wrapper_proland_TweakBarManager_BarData {
public:
	typedef Luna< proland::TweakBarManager::BarData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,491757) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TweakBarManager::BarData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakBarManager::BarData* rhs =(Luna< proland::TweakBarManager::BarData >::check(L,2));
		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
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

		proland::TweakBarManager::BarData* self= (proland::TweakBarManager::BarData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakBarManager::BarData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,491757) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TweakBarManager::BarData >::check(L,1));
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

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TweakBarManager::BarData");
		
		return luna_dynamicCast(L,converters,"proland::TweakBarManager::BarData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExclusive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPermanent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getK(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExclusive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPermanent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setK(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakBarManager::BarData::BarData(proland::TweakBarManager * owner, ork::ptr< proland::TweakBarHandler > bar, bool exclusive, bool permanent, char k)
	static proland::TweakBarManager::BarData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakBarManager::BarData::BarData(proland::TweakBarManager * owner, ork::ptr< proland::TweakBarHandler > bar, bool exclusive, bool permanent, char k) function, expected prototype:\nproland::TweakBarManager::BarData::BarData(proland::TweakBarManager * owner, ork::ptr< proland::TweakBarHandler > bar, bool exclusive, bool permanent, char k)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakBarManager* owner=(Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1));
		ork::ptr< proland::TweakBarHandler > bar = Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2);
		bool exclusive=(bool)(lua_toboolean(L,3)==1);
		bool permanent=(bool)(lua_toboolean(L,4)==1);
		char k=(char)lua_tointeger(L,5);

		return new proland::TweakBarManager::BarData(owner, bar, exclusive, permanent, k);
	}


	// Function binds:
	// void proland::TweakBarManager::BarData::setActive(bool active)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::setActive(bool active) function, expected prototype:\nvoid proland::TweakBarManager::BarData::setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::setActive(bool). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActive(active);

		return 0;
	}

	// proland::TweakBarManager * proland::TweakBarManager::BarData::owner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakBarManager * proland::TweakBarManager::BarData::owner() function, expected prototype:\nproland::TweakBarManager * proland::TweakBarManager::BarData::owner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TweakBarManager * proland::TweakBarManager::BarData::owner(). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TweakBarManager * lret = self->owner;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TweakBarManager >::push(L,lret,false);

		return 1;
	}

	// ork::ptr< proland::TweakBarHandler > proland::TweakBarManager::BarData::bar()
	static int _bind_getBar(lua_State *L) {
		if (!_lg_typecheck_getBar(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TweakBarHandler > proland::TweakBarManager::BarData::bar() function, expected prototype:\nork::ptr< proland::TweakBarHandler > proland::TweakBarManager::BarData::bar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TweakBarHandler > proland::TweakBarManager::BarData::bar(). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TweakBarHandler > lret = self->bar;
		Luna< proland::TweakBarHandler >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::TweakBarManager::BarData::exclusive()
	static int _bind_getExclusive(lua_State *L) {
		if (!_lg_typecheck_getExclusive(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::BarData::exclusive() function, expected prototype:\nbool proland::TweakBarManager::BarData::exclusive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::BarData::exclusive(). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->exclusive;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::BarData::permanent()
	static int _bind_getPermanent(lua_State *L) {
		if (!_lg_typecheck_getPermanent(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::BarData::permanent() function, expected prototype:\nbool proland::TweakBarManager::BarData::permanent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::BarData::permanent(). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->permanent;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// char proland::TweakBarManager::BarData::k()
	static int _bind_getK(lua_State *L) {
		if (!_lg_typecheck_getK(L)) {
			luaL_error(L, "luna typecheck failed in char proland::TweakBarManager::BarData::k() function, expected prototype:\nchar proland::TweakBarManager::BarData::k()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call char proland::TweakBarManager::BarData::k(). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->k;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TweakBarManager::BarData::owner(proland::TweakBarManager * value)
	static int _bind_setOwner(lua_State *L) {
		if (!_lg_typecheck_setOwner(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::owner(proland::TweakBarManager * value) function, expected prototype:\nvoid proland::TweakBarManager::BarData::owner(proland::TweakBarManager * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakBarManager* value=(Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,2));

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::owner(proland::TweakBarManager *). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->owner = value;

		return 0;
	}

	// void proland::TweakBarManager::BarData::bar(ork::ptr< proland::TweakBarHandler > value)
	static int _bind_setBar(lua_State *L) {
		if (!_lg_typecheck_setBar(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::bar(ork::ptr< proland::TweakBarHandler > value) function, expected prototype:\nvoid proland::TweakBarManager::BarData::bar(ork::ptr< proland::TweakBarHandler > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakBarHandler > value = Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2);

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::bar(ork::ptr< proland::TweakBarHandler >). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bar = value;

		return 0;
	}

	// void proland::TweakBarManager::BarData::exclusive(bool value)
	static int _bind_setExclusive(lua_State *L) {
		if (!_lg_typecheck_setExclusive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::exclusive(bool value) function, expected prototype:\nvoid proland::TweakBarManager::BarData::exclusive(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::exclusive(bool). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->exclusive = value;

		return 0;
	}

	// void proland::TweakBarManager::BarData::permanent(bool value)
	static int _bind_setPermanent(lua_State *L) {
		if (!_lg_typecheck_setPermanent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::permanent(bool value) function, expected prototype:\nvoid proland::TweakBarManager::BarData::permanent(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::permanent(bool). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->permanent = value;

		return 0;
	}

	// void proland::TweakBarManager::BarData::k(char value)
	static int _bind_setK(lua_State *L) {
		if (!_lg_typecheck_setK(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::BarData::k(char value) function, expected prototype:\nvoid proland::TweakBarManager::BarData::k(char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char value=(char)lua_tointeger(L,2);

		proland::TweakBarManager::BarData* self=(Luna< proland::TweakBarManager::BarData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::BarData::k(char). Got : '%s'\n%s",typeid(Luna< proland::TweakBarManager::BarData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->k = value;

		return 0;
	}


	// Operator binds:

};

proland::TweakBarManager::BarData* LunaTraits< proland::TweakBarManager::BarData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakBarManager_BarData::_bind_ctor(L);
}

void LunaTraits< proland::TweakBarManager::BarData >::_bind_dtor(proland::TweakBarManager::BarData* obj) {
	delete obj;
}

const char LunaTraits< proland::TweakBarManager::BarData >::className[] = "TweakBarManager_BarData";
const char LunaTraits< proland::TweakBarManager::BarData >::fullName[] = "proland::TweakBarManager::BarData";
const char LunaTraits< proland::TweakBarManager::BarData >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakBarManager::BarData >::parents[] = {0};
const int LunaTraits< proland::TweakBarManager::BarData >::hash = 491757;
const int LunaTraits< proland::TweakBarManager::BarData >::uniqueIDs[] = {491757,0};

luna_RegType LunaTraits< proland::TweakBarManager::BarData >::methods[] = {
	{"setActive", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setActive},
	{"getOwner", &luna_wrapper_proland_TweakBarManager_BarData::_bind_getOwner},
	{"getBar", &luna_wrapper_proland_TweakBarManager_BarData::_bind_getBar},
	{"getExclusive", &luna_wrapper_proland_TweakBarManager_BarData::_bind_getExclusive},
	{"getPermanent", &luna_wrapper_proland_TweakBarManager_BarData::_bind_getPermanent},
	{"getK", &luna_wrapper_proland_TweakBarManager_BarData::_bind_getK},
	{"setOwner", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setOwner},
	{"setBar", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setBar},
	{"setExclusive", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setExclusive},
	{"setPermanent", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setPermanent},
	{"setK", &luna_wrapper_proland_TweakBarManager_BarData::_bind_setK},
	{"dynCast", &luna_wrapper_proland_TweakBarManager_BarData::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TweakBarManager_BarData::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TweakBarManager_BarData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakBarManager_BarData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakBarManager::BarData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakBarManager::BarData >::enumValues[] = {
	{0,0}
};


