#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileLayer.h>

class luna_wrapper_proland_TileLayer {
public:
	typedef Luna< proland::TileLayer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::TileLayer* self= (proland::TileLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileLayer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TileLayer* ptr= dynamic_cast< proland::TileLayer* >(Luna< ork::Object >::check(L,1));
		proland::TileLayer* ptr= luna_caster< ork::Object, proland::TileLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProducerId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileCoords(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isDeformed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeformParameters(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false)
	static proland::TileLayer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false) function, expected prototype:\nproland::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * type=(const char *)lua_tostring(L,2);
		bool deform=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_proland_TileLayer(L,NULL, type, deform);
	}


	// Function binds:
	// ork::ptr< proland::TileCache > proland::TileLayer::getCache()
	static int _bind_getCache(lua_State *L) {
		if (!_lg_typecheck_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::TileLayer::getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::TileLayer::getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::TileLayer::getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TileLayer::getProducerId()
	static int _bind_getProducerId(lua_State *L) {
		if (!_lg_typecheck_getProducerId(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileLayer::getProducerId() function, expected prototype:\nint proland::TileLayer::getProducerId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileLayer::getProducerId(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getProducerId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TileLayer::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileLayer::getTileSize() function, expected prototype:\nint proland::TileLayer::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileLayer::getTileSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TileLayer::getTileBorder()
	static int _bind_getTileBorder(lua_State *L) {
		if (!_lg_typecheck_getTileBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TileLayer::getTileBorder() function, expected prototype:\nint proland::TileLayer::getTileBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TileLayer::getTileBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TileLayer::getRootQuadSize()
	static int _bind_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TileLayer::getRootQuadSize() function, expected prototype:\nfloat proland::TileLayer::getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TileLayer::getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3d proland::TileLayer::getTileCoords(int level, int tx, int ty)
	static int _bind_getTileCoords(lua_State *L) {
		if (!_lg_typecheck_getTileCoords(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TileLayer::getTileCoords(int level, int tx, int ty) function, expected prototype:\nork::vec3d proland::TileLayer::getTileCoords(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TileLayer::getTileCoords(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getTileCoords(level, tx, ty);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// bool proland::TileLayer::isDeformed()
	static int _bind_isDeformed(lua_State *L) {
		if (!_lg_typecheck_isDeformed(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileLayer::isDeformed() function, expected prototype:\nbool proland::TileLayer::isDeformed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileLayer::isDeformed(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDeformed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileLayer::getDeformParameters(ork::vec3d tileCoords, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)
	static int _bind_getDeformParameters(lua_State *L) {
		if (!_lg_typecheck_getDeformParameters(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::getDeformParameters(ork::vec3d tileCoords, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly) function, expected prototype:\nvoid proland::TileLayer::getDeformParameters(ork::vec3d tileCoords, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304238\narg 3 ID = 81304238\narg 4 ID = 81304238\narg 5 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::TileLayer::getDeformParameters function");
		}
		ork::vec3d tileCoords=*tileCoords_ptr;
		ork::vec2d* nx_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !nx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nx in proland::TileLayer::getDeformParameters function");
		}
		ork::vec2d & nx=*nx_ptr;
		ork::vec2d* ny_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !ny_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ny in proland::TileLayer::getDeformParameters function");
		}
		ork::vec2d & ny=*ny_ptr;
		ork::vec2d* lx_ptr=(Luna< ork::vec2d >::check(L,5));
		if( !lx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lx in proland::TileLayer::getDeformParameters function");
		}
		ork::vec2d & lx=*lx_ptr;
		ork::vec2d* ly_ptr=(Luna< ork::vec2d >::check(L,6));
		if( !ly_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ly in proland::TileLayer::getDeformParameters function");
		}
		ork::vec2d & ly=*ly_ptr;

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::getDeformParameters(ork::vec3d, ork::vec2d &, ork::vec2d &, ork::vec2d &, ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getDeformParameters(tileCoords, nx, ny, lx, ly);

		return 0;
	}

	// bool proland::TileLayer::isEnabled()
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileLayer::isEnabled() function, expected prototype:\nbool proland::TileLayer::isEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileLayer::isEnabled(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileLayer::setIsEnabled(bool enabled)
	static int _bind_setIsEnabled(lua_State *L) {
		if (!_lg_typecheck_setIsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::setIsEnabled(bool enabled) function, expected prototype:\nvoid proland::TileLayer::setIsEnabled(bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::setIsEnabled(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsEnabled(enabled);

		return 0;
	}

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_setCache(lua_State *L) {
		if (!_lg_typecheck_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCache(cache, producerId);

		return 0;
	}

	// void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TileLayer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_useTile(lua_State *L) {
		if (!_lg_typecheck_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::TileLayer::unuseTile(int level, int tx, int ty)
	static int _bind_unuseTile(lua_State *L) {
		if (!_lg_typecheck_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::TileLayer::beginCreateTile()
	static int _bind_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::beginCreateTile() function, expected prototype:\nvoid proland::TileLayer::beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginCreateTile();

		return 0;
	}

	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileLayer::endCreateTile()
	static int _bind_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::endCreateTile() function, expected prototype:\nvoid proland::TileLayer::endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endCreateTile();

		return 0;
	}

	// void proland::TileLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::invalidateTiles()
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::invalidateTiles() function, expected prototype:\nvoid proland::TileLayer::invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles();

		return 0;
	}

	// const char * proland::TileLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileLayer::base_toString() function, expected prototype:\nconst char * proland::TileLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TileLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::TileLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::TileLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TileLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TileLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::TileLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::TileLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::TileLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::beginCreateTile();

		return 0;
	}

	// void proland::TileLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_endCreateTile() function, expected prototype:\nvoid proland::TileLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::endCreateTile();

		return 0;
	}

	// void proland::TileLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::TileLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::TileLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileLayer* self=Luna< ork::Object >::checkSubType< proland::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::invalidateTiles();

		return 0;
	}


	// Operator binds:

};

proland::TileLayer* LunaTraits< proland::TileLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileLayer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
}

void LunaTraits< proland::TileLayer >::_bind_dtor(proland::TileLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileLayer >::className[] = "TileLayer";
const char LunaTraits< proland::TileLayer >::fullName[] = "proland::TileLayer";
const char LunaTraits< proland::TileLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::TileLayer >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileLayer >::hash = 13239385;
const int LunaTraits< proland::TileLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileLayer >::methods[] = {
	{"getCache", &luna_wrapper_proland_TileLayer::_bind_getCache},
	{"getProducerId", &luna_wrapper_proland_TileLayer::_bind_getProducerId},
	{"getTileSize", &luna_wrapper_proland_TileLayer::_bind_getTileSize},
	{"getTileBorder", &luna_wrapper_proland_TileLayer::_bind_getTileBorder},
	{"getRootQuadSize", &luna_wrapper_proland_TileLayer::_bind_getRootQuadSize},
	{"getTileCoords", &luna_wrapper_proland_TileLayer::_bind_getTileCoords},
	{"isDeformed", &luna_wrapper_proland_TileLayer::_bind_isDeformed},
	{"getDeformParameters", &luna_wrapper_proland_TileLayer::_bind_getDeformParameters},
	{"isEnabled", &luna_wrapper_proland_TileLayer::_bind_isEnabled},
	{"setIsEnabled", &luna_wrapper_proland_TileLayer::_bind_setIsEnabled},
	{"setCache", &luna_wrapper_proland_TileLayer::_bind_setCache},
	{"getReferencedProducers", &luna_wrapper_proland_TileLayer::_bind_getReferencedProducers},
	{"setTileSize", &luna_wrapper_proland_TileLayer::_bind_setTileSize},
	{"useTile", &luna_wrapper_proland_TileLayer::_bind_useTile},
	{"unuseTile", &luna_wrapper_proland_TileLayer::_bind_unuseTile},
	{"prefetchTile", &luna_wrapper_proland_TileLayer::_bind_prefetchTile},
	{"startCreateTile", &luna_wrapper_proland_TileLayer::_bind_startCreateTile},
	{"beginCreateTile", &luna_wrapper_proland_TileLayer::_bind_beginCreateTile},
	{"doCreateTile", &luna_wrapper_proland_TileLayer::_bind_doCreateTile},
	{"endCreateTile", &luna_wrapper_proland_TileLayer::_bind_endCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_TileLayer::_bind_stopCreateTile},
	{"invalidateTiles", &luna_wrapper_proland_TileLayer::_bind_invalidateTiles},
	{"base_toString", &luna_wrapper_proland_TileLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_TileLayer::_bind_base_setCache},
	{"base_getReferencedProducers", &luna_wrapper_proland_TileLayer::_bind_base_getReferencedProducers},
	{"base_setTileSize", &luna_wrapper_proland_TileLayer::_bind_base_setTileSize},
	{"base_useTile", &luna_wrapper_proland_TileLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_TileLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_proland_TileLayer::_bind_base_prefetchTile},
	{"base_startCreateTile", &luna_wrapper_proland_TileLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_TileLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_TileLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_TileLayer::_bind_base_stopCreateTile},
	{"base_invalidateTiles", &luna_wrapper_proland_TileLayer::_bind_base_invalidateTiles},
	{"fromVoid", &luna_wrapper_proland_TileLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileLayer >::enumValues[] = {
	{0,0}
};


