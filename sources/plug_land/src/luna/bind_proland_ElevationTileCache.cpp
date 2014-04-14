#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ElevationTileCache.h>

class luna_wrapper_proland_ElevationTileCache {
public:
	typedef Luna< proland::ElevationTileCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FloatTileCache* self=(Luna< proland::FloatTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::FloatTileCache,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::ElevationTileCache* self= (proland::ElevationTileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ElevationTileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69405840) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::FloatTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_FloatTileCache(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::ElevationTileCache* ptr= dynamic_cast< proland::ElevationTileCache* >(Luna< proland::FloatTileCache >::check(L,1));
		proland::ElevationTileCache* ptr= luna_caster< proland::FloatTileCache, proland::ElevationTileCache >::cast(Luna< proland::FloatTileCache >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ElevationTileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,69405840)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,69405840)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHeight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,69405840)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ElevationTileCache::ElevationTileCache(proland::DemTileCache * residuals, int capacity = 20)
	static proland::ElevationTileCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ElevationTileCache::ElevationTileCache(proland::DemTileCache * residuals, int capacity = 20) function, expected prototype:\nproland::ElevationTileCache::ElevationTileCache(proland::DemTileCache * residuals, int capacity = 20)\nClass arguments details:\narg 1 ID = 69405840\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::DemTileCache* residuals=(Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1));
		int capacity=luatop>1 ? (int)lua_tointeger(L,2) : (int)20;

		return new proland::ElevationTileCache(residuals, capacity);
	}

	// proland::ElevationTileCache::ElevationTileCache(lua_Table * data, proland::DemTileCache * residuals, int capacity = 20)
	static proland::ElevationTileCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ElevationTileCache::ElevationTileCache(lua_Table * data, proland::DemTileCache * residuals, int capacity = 20) function, expected prototype:\nproland::ElevationTileCache::ElevationTileCache(lua_Table * data, proland::DemTileCache * residuals, int capacity = 20)\nClass arguments details:\narg 2 ID = 69405840\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::DemTileCache* residuals=(Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,2));
		int capacity=luatop>2 ? (int)lua_tointeger(L,3) : (int)20;

		return new wrapper_proland_ElevationTileCache(L,NULL, residuals, capacity);
	}

	// Overload binder for proland::ElevationTileCache::ElevationTileCache
	static proland::ElevationTileCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ElevationTileCache, cannot match any of the overloads for function ElevationTileCache:\n  ElevationTileCache(proland::DemTileCache *, int)\n  ElevationTileCache(lua_Table *, proland::DemTileCache *, int)\n");
		return NULL;
	}


	// Function binds:
	// float proland::ElevationTileCache::getHeight(int level, int x, int y)
	static int _bind_getHeight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHeight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationTileCache::getHeight(int level, int x, int y) function, expected prototype:\nfloat proland::ElevationTileCache::getHeight(int level, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		proland::ElevationTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::ElevationTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationTileCache::getHeight(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHeight(level, x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::ElevationTileCache::getHeight(int level, int x, int y, float dx, float dy)
	static int _bind_getHeight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHeight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationTileCache::getHeight(int level, int x, int y, float dx, float dy) function, expected prototype:\nfloat proland::ElevationTileCache::getHeight(int level, int x, int y, float dx, float dy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		float dx=(float)lua_tonumber(L,5);
		float dy=(float)lua_tonumber(L,6);

		proland::ElevationTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::ElevationTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationTileCache::getHeight(int, int, int, float, float). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHeight(level, x, y, dx, dy);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::ElevationTileCache::getHeight
	static int _bind_getHeight(lua_State *L) {
		if (_lg_typecheck_getHeight_overload_1(L)) return _bind_getHeight_overload_1(L);
		if (_lg_typecheck_getHeight_overload_2(L)) return _bind_getHeight_overload_2(L);

		luaL_error(L, "error in function getHeight, cannot match any of the overloads for function getHeight:\n  getHeight(int, int, int)\n  getHeight(int, int, int, float, float)\n");
		return 0;
	}

	// proland::DemTileCache * proland::ElevationTileCache::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in proland::DemTileCache * proland::ElevationTileCache::r() function, expected prototype:\nproland::DemTileCache * proland::ElevationTileCache::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::ElevationTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::DemTileCache * proland::ElevationTileCache::r(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::DemTileCache * lret = self->r;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::DemTileCache >::push(L,lret,false);

		return 1;
	}

	// void proland::ElevationTileCache::r(proland::DemTileCache * value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationTileCache::r(proland::DemTileCache * value) function, expected prototype:\nvoid proland::ElevationTileCache::r(proland::DemTileCache * value)\nClass arguments details:\narg 1 ID = 69405840\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::DemTileCache* value=(Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,2));

		proland::ElevationTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::ElevationTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationTileCache::r(proland::DemTileCache *). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r = value;

		return 0;
	}


	// Operator binds:

};

proland::ElevationTileCache* LunaTraits< proland::ElevationTileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ElevationTileCache::_bind_ctor(L);
}

void LunaTraits< proland::ElevationTileCache >::_bind_dtor(proland::ElevationTileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::ElevationTileCache >::className[] = "ElevationTileCache";
const char LunaTraits< proland::ElevationTileCache >::fullName[] = "proland::ElevationTileCache";
const char LunaTraits< proland::ElevationTileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::ElevationTileCache >::parents[] = {"proland.FloatTileCache", 0};
const int LunaTraits< proland::ElevationTileCache >::hash = 70303365;
const int LunaTraits< proland::ElevationTileCache >::uniqueIDs[] = {69405840,0};

luna_RegType LunaTraits< proland::ElevationTileCache >::methods[] = {
	{"getHeight", &luna_wrapper_proland_ElevationTileCache::_bind_getHeight},
	{"getR", &luna_wrapper_proland_ElevationTileCache::_bind_getR},
	{"setR", &luna_wrapper_proland_ElevationTileCache::_bind_setR},
	{"fromVoid", &luna_wrapper_proland_ElevationTileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ElevationTileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ElevationTileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ElevationTileCache >::converters[] = {
	{"proland::FloatTileCache", &luna_wrapper_proland_ElevationTileCache::_cast_from_FloatTileCache},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ElevationTileCache >::enumValues[] = {
	{0,0}
};


