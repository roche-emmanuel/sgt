#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DemTileCache.h>

class luna_wrapper_proland_DemTileCache {
public:
	typedef Luna< proland::DemTileCache > luna_t;

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

		proland::DemTileCache* self= (proland::DemTileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DemTileCache >::push(L,self,false);
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
		//proland::DemTileCache* ptr= dynamic_cast< proland::DemTileCache* >(Luna< proland::FloatTileCache >::check(L,1));
		proland::DemTileCache* ptr= luna_caster< proland::FloatTileCache, proland::DemTileCache >::cast(Luna< proland::FloatTileCache >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DemTileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTileId(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRootTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRootTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnalyzeLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffsets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompressedData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUncompressedData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRootLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRootTx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRootTy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAnalyzeLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffsets(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompressedData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUncompressedData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::DemTileCache::DemTileCache(const string & name, int capacity = 20)
	static proland::DemTileCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DemTileCache::DemTileCache(const string & name, int capacity = 20) function, expected prototype:\nproland::DemTileCache::DemTileCache(const string & name, int capacity = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,1),lua_objlen(L,1));
		int capacity=luatop>1 ? (int)lua_tointeger(L,2) : (int)20;

		return new proland::DemTileCache(name, capacity);
	}

	// proland::DemTileCache::DemTileCache(lua_Table * data, const string & name, int capacity = 20)
	static proland::DemTileCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DemTileCache::DemTileCache(lua_Table * data, const string & name, int capacity = 20) function, expected prototype:\nproland::DemTileCache::DemTileCache(lua_Table * data, const string & name, int capacity = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		int capacity=luatop>2 ? (int)lua_tointeger(L,3) : (int)20;

		return new wrapper_proland_DemTileCache(L,NULL, name, capacity);
	}

	// Overload binder for proland::DemTileCache::DemTileCache
	static proland::DemTileCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DemTileCache, cannot match any of the overloads for function DemTileCache:\n  DemTileCache(const string &, int)\n  DemTileCache(lua_Table *, const string &, int)\n");
		return NULL;
	}


	// Function binds:
	// int proland::DemTileCache::getTileId(int level, int tx, int ty)
	static int _bind_getTileId(lua_State *L) {
		if (!_lg_typecheck_getTileId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::getTileId(int level, int tx, int ty) function, expected prototype:\nint proland::DemTileCache::getTileId(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::getTileId(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileId(level, tx, ty);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::getTileSize(int level)
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::getTileSize(int level) function, expected prototype:\nint proland::DemTileCache::getTileSize(int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::getTileSize(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize(level);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::rootLevel()
	static int _bind_getRootLevel(lua_State *L) {
		if (!_lg_typecheck_getRootLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::rootLevel() function, expected prototype:\nint proland::DemTileCache::rootLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::rootLevel(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->rootLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::deltaLevel()
	static int _bind_getDeltaLevel(lua_State *L) {
		if (!_lg_typecheck_getDeltaLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::deltaLevel() function, expected prototype:\nint proland::DemTileCache::deltaLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::deltaLevel(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->deltaLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::rootTx()
	static int _bind_getRootTx(lua_State *L) {
		if (!_lg_typecheck_getRootTx(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::rootTx() function, expected prototype:\nint proland::DemTileCache::rootTx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::rootTx(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->rootTx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::rootTy()
	static int _bind_getRootTy(lua_State *L) {
		if (!_lg_typecheck_getRootTy(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::rootTy() function, expected prototype:\nint proland::DemTileCache::rootTy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::rootTy(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->rootTy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::minLevel()
	static int _bind_getMinLevel(lua_State *L) {
		if (!_lg_typecheck_getMinLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::minLevel() function, expected prototype:\nint proland::DemTileCache::minLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::minLevel(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->minLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::maxLevel()
	static int _bind_getMaxLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::maxLevel() function, expected prototype:\nint proland::DemTileCache::maxLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::maxLevel(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->maxLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::DemTileCache::analyzeLevel()
	static int _bind_getAnalyzeLevel(lua_State *L) {
		if (!_lg_typecheck_getAnalyzeLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::DemTileCache::analyzeLevel() function, expected prototype:\nint proland::DemTileCache::analyzeLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::DemTileCache::analyzeLevel(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->analyzeLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DemTileCache::scale()
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DemTileCache::scale() function, expected prototype:\nfloat proland::DemTileCache::scale()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DemTileCache::scale(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->scale;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int proland::DemTileCache::header()
	static int _bind_getHeader(lua_State *L) {
		if (!_lg_typecheck_getHeader(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int proland::DemTileCache::header() function, expected prototype:\nunsigned int proland::DemTileCache::header()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int proland::DemTileCache::header(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->header;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int * proland::DemTileCache::offsets()
	static int _bind_getOffsets(lua_State *L) {
		if (!_lg_typecheck_getOffsets(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int * proland::DemTileCache::offsets() function, expected prototype:\nunsigned int * proland::DemTileCache::offsets()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int * proland::DemTileCache::offsets(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int * lret = self->offsets;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// unsigned char * proland::DemTileCache::compressedData()
	static int _bind_getCompressedData(lua_State *L) {
		if (!_lg_typecheck_getCompressedData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * proland::DemTileCache::compressedData() function, expected prototype:\nunsigned char * proland::DemTileCache::compressedData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * proland::DemTileCache::compressedData(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->compressedData;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned char * proland::DemTileCache::uncompressedData()
	static int _bind_getUncompressedData(lua_State *L) {
		if (!_lg_typecheck_getUncompressedData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * proland::DemTileCache::uncompressedData() function, expected prototype:\nunsigned char * proland::DemTileCache::uncompressedData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * proland::DemTileCache::uncompressedData(). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->uncompressedData;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void proland::DemTileCache::tileSize(int value)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::tileSize(int value) function, expected prototype:\nvoid proland::DemTileCache::tileSize(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::tileSize(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tileSize = value;

		return 0;
	}

	// void proland::DemTileCache::rootLevel(int value)
	static int _bind_setRootLevel(lua_State *L) {
		if (!_lg_typecheck_setRootLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::rootLevel(int value) function, expected prototype:\nvoid proland::DemTileCache::rootLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::rootLevel(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rootLevel = value;

		return 0;
	}

	// void proland::DemTileCache::deltaLevel(int value)
	static int _bind_setDeltaLevel(lua_State *L) {
		if (!_lg_typecheck_setDeltaLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::deltaLevel(int value) function, expected prototype:\nvoid proland::DemTileCache::deltaLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::deltaLevel(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deltaLevel = value;

		return 0;
	}

	// void proland::DemTileCache::rootTx(int value)
	static int _bind_setRootTx(lua_State *L) {
		if (!_lg_typecheck_setRootTx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::rootTx(int value) function, expected prototype:\nvoid proland::DemTileCache::rootTx(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::rootTx(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rootTx = value;

		return 0;
	}

	// void proland::DemTileCache::rootTy(int value)
	static int _bind_setRootTy(lua_State *L) {
		if (!_lg_typecheck_setRootTy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::rootTy(int value) function, expected prototype:\nvoid proland::DemTileCache::rootTy(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::rootTy(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rootTy = value;

		return 0;
	}

	// void proland::DemTileCache::minLevel(int value)
	static int _bind_setMinLevel(lua_State *L) {
		if (!_lg_typecheck_setMinLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::minLevel(int value) function, expected prototype:\nvoid proland::DemTileCache::minLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::minLevel(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->minLevel = value;

		return 0;
	}

	// void proland::DemTileCache::maxLevel(int value)
	static int _bind_setMaxLevel(lua_State *L) {
		if (!_lg_typecheck_setMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::maxLevel(int value) function, expected prototype:\nvoid proland::DemTileCache::maxLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::maxLevel(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxLevel = value;

		return 0;
	}

	// void proland::DemTileCache::analyzeLevel(int value)
	static int _bind_setAnalyzeLevel(lua_State *L) {
		if (!_lg_typecheck_setAnalyzeLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::analyzeLevel(int value) function, expected prototype:\nvoid proland::DemTileCache::analyzeLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::analyzeLevel(int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->analyzeLevel = value;

		return 0;
	}

	// void proland::DemTileCache::scale(float value)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::scale(float value) function, expected prototype:\nvoid proland::DemTileCache::scale(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::scale(float). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scale = value;

		return 0;
	}

	// void proland::DemTileCache::header(unsigned int value)
	static int _bind_setHeader(lua_State *L) {
		if (!_lg_typecheck_setHeader(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::header(unsigned int value) function, expected prototype:\nvoid proland::DemTileCache::header(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::header(unsigned int). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->header = value;

		return 0;
	}

	// void proland::DemTileCache::offsets(unsigned int * value)
	static int _bind_setOffsets(lua_State *L) {
		if (!_lg_typecheck_setOffsets(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::offsets(unsigned int * value) function, expected prototype:\nvoid proland::DemTileCache::offsets(unsigned int * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int* value=(unsigned int*)Luna< void >::check(L,2);

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::offsets(unsigned int *). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsets = value;

		return 0;
	}

	// void proland::DemTileCache::compressedData(unsigned char * value)
	static int _bind_setCompressedData(lua_State *L) {
		if (!_lg_typecheck_setCompressedData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::compressedData(unsigned char * value) function, expected prototype:\nvoid proland::DemTileCache::compressedData(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::compressedData(unsigned char *). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compressedData = &value;

		return 0;
	}

	// void proland::DemTileCache::uncompressedData(unsigned char * value)
	static int _bind_setUncompressedData(lua_State *L) {
		if (!_lg_typecheck_setUncompressedData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DemTileCache::uncompressedData(unsigned char * value) function, expected prototype:\nvoid proland::DemTileCache::uncompressedData(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		proland::DemTileCache* self=Luna< proland::FloatTileCache >::checkSubType< proland::DemTileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DemTileCache::uncompressedData(unsigned char *). Got : '%s'\n%s",typeid(Luna< proland::FloatTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->uncompressedData = &value;

		return 0;
	}


	// Operator binds:

};

proland::DemTileCache* LunaTraits< proland::DemTileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DemTileCache::_bind_ctor(L);
}

void LunaTraits< proland::DemTileCache >::_bind_dtor(proland::DemTileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::DemTileCache >::className[] = "DemTileCache";
const char LunaTraits< proland::DemTileCache >::fullName[] = "proland::DemTileCache";
const char LunaTraits< proland::DemTileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::DemTileCache >::parents[] = {"proland.FloatTileCache", 0};
const int LunaTraits< proland::DemTileCache >::hash = 57609853;
const int LunaTraits< proland::DemTileCache >::uniqueIDs[] = {69405840,0};

luna_RegType LunaTraits< proland::DemTileCache >::methods[] = {
	{"getTileId", &luna_wrapper_proland_DemTileCache::_bind_getTileId},
	{"getTileSize", &luna_wrapper_proland_DemTileCache::_bind_getTileSize},
	{"getRootLevel", &luna_wrapper_proland_DemTileCache::_bind_getRootLevel},
	{"getDeltaLevel", &luna_wrapper_proland_DemTileCache::_bind_getDeltaLevel},
	{"getRootTx", &luna_wrapper_proland_DemTileCache::_bind_getRootTx},
	{"getRootTy", &luna_wrapper_proland_DemTileCache::_bind_getRootTy},
	{"getMinLevel", &luna_wrapper_proland_DemTileCache::_bind_getMinLevel},
	{"getMaxLevel", &luna_wrapper_proland_DemTileCache::_bind_getMaxLevel},
	{"getAnalyzeLevel", &luna_wrapper_proland_DemTileCache::_bind_getAnalyzeLevel},
	{"getScale", &luna_wrapper_proland_DemTileCache::_bind_getScale},
	{"getHeader", &luna_wrapper_proland_DemTileCache::_bind_getHeader},
	{"getOffsets", &luna_wrapper_proland_DemTileCache::_bind_getOffsets},
	{"getCompressedData", &luna_wrapper_proland_DemTileCache::_bind_getCompressedData},
	{"getUncompressedData", &luna_wrapper_proland_DemTileCache::_bind_getUncompressedData},
	{"setTileSize", &luna_wrapper_proland_DemTileCache::_bind_setTileSize},
	{"setRootLevel", &luna_wrapper_proland_DemTileCache::_bind_setRootLevel},
	{"setDeltaLevel", &luna_wrapper_proland_DemTileCache::_bind_setDeltaLevel},
	{"setRootTx", &luna_wrapper_proland_DemTileCache::_bind_setRootTx},
	{"setRootTy", &luna_wrapper_proland_DemTileCache::_bind_setRootTy},
	{"setMinLevel", &luna_wrapper_proland_DemTileCache::_bind_setMinLevel},
	{"setMaxLevel", &luna_wrapper_proland_DemTileCache::_bind_setMaxLevel},
	{"setAnalyzeLevel", &luna_wrapper_proland_DemTileCache::_bind_setAnalyzeLevel},
	{"setScale", &luna_wrapper_proland_DemTileCache::_bind_setScale},
	{"setHeader", &luna_wrapper_proland_DemTileCache::_bind_setHeader},
	{"setOffsets", &luna_wrapper_proland_DemTileCache::_bind_setOffsets},
	{"setCompressedData", &luna_wrapper_proland_DemTileCache::_bind_setCompressedData},
	{"setUncompressedData", &luna_wrapper_proland_DemTileCache::_bind_setUncompressedData},
	{"fromVoid", &luna_wrapper_proland_DemTileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DemTileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DemTileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DemTileCache >::converters[] = {
	{"proland::FloatTileCache", &luna_wrapper_proland_DemTileCache::_cast_from_FloatTileCache},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DemTileCache >::enumValues[] = {
	{0,0}
};


