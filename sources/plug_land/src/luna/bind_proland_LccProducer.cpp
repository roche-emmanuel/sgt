#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LccProducer.h>

class luna_wrapper_proland_LccProducer {
public:
	typedef Luna< proland::LccProducer > luna_t;

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

		proland::LccProducer* self= (proland::LccProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LccProducer >::push(L,self,false);
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
		//proland::LccProducer* ptr= dynamic_cast< proland::LccProducer* >(Luna< ork::Object >::check(L,1));
		proland::LccProducer* ptr= luna_caster< ork::Object, proland::LccProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LccProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LccProducer::LccProducer(ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform)
	static proland::LccProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LccProducer::LccProducer(ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform) function, expected prototype:\nproland::LccProducer::LccProducer(ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > delegate = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,2);
		ork::ptr< ork::Texture2D > lccTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		ork::ptr< ork::Program > copy = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > dots = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		int maxLevel=(int)lua_tointeger(L,6);
		bool deform=(bool)(lua_toboolean(L,7)==1);

		return new proland::LccProducer(delegate, plants, lccTexture, copy, dots, maxLevel, deform);
	}

	// proland::LccProducer::LccProducer(lua_Table * data, ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform)
	static proland::LccProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LccProducer::LccProducer(lua_Table * data, ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform) function, expected prototype:\nproland::LccProducer::LccProducer(lua_Table * data, ork::ptr< proland::TileProducer > delegate, ork::ptr< proland::Plants > plants, ork::ptr< ork::Texture2D > lccTexture, ork::ptr< ork::Program > copy, ork::ptr< ork::Program > dots, int maxLevel, bool deform)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > delegate = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,3);
		ork::ptr< ork::Texture2D > lccTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Program > copy = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > dots = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		int maxLevel=(int)lua_tointeger(L,7);
		bool deform=(bool)(lua_toboolean(L,8)==1);

		return new wrapper_proland_LccProducer(L,NULL, delegate, plants, lccTexture, copy, dots, maxLevel, deform);
	}

	// Overload binder for proland::LccProducer::LccProducer
	static proland::LccProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LccProducer, cannot match any of the overloads for function LccProducer:\n  LccProducer(ork::ptr< proland::TileProducer >, ork::ptr< proland::Plants >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, int, bool)\n  LccProducer(lua_Table *, ork::ptr< proland::TileProducer >, ork::ptr< proland::Plants >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::LccProducer::setRootQuadSize(float size)
	static int _bind_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::setRootQuadSize(float size) function, expected prototype:\nvoid proland::LccProducer::setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootQuadSize(size);

		return 0;
	}

	// int proland::LccProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LccProducer::getBorder() function, expected prototype:\nint proland::LccProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LccProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::LccProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LccProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::LccProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LccProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::LccProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::LccProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::LccProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::LccProducer::findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::LccProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::LccProducer::getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::LccProducer::getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::LccProducer::getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::LccProducer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LccProducer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::LccProducer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LccProducer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::LccProducer::putTile(proland::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::LccProducer::putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putTile(t);

		return 0;
	}

	// void proland::LccProducer::invalidateTiles()
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::invalidateTiles() function, expected prototype:\nvoid proland::LccProducer::invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles();

		return 0;
	}

	// void proland::LccProducer::invalidateTile(int level, int tx, int ty)
	static int _bind_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::LccProducer::invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::LccProducer::update(ork::ptr< ork::SceneManager > scene)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::LccProducer::update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(scene);

		return 0;
	}

	// void proland::LccProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::LccProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::LccProducer::getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// const char * proland::LccProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LccProducer::base_toString() function, expected prototype:\nconst char * proland::LccProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LccProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LccProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileCache > proland::LccProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::LccProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::LccProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::LccProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->LccProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::LccProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::LccProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::setRootQuadSize(size);

		return 0;
	}

	// int proland::LccProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LccProducer::base_getBorder() function, expected prototype:\nint proland::LccProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LccProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LccProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::LccProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LccProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::LccProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LccProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LccProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::LccProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::LccProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::LccProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::LccProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->LccProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::LccProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::LccProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::LccProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::LccProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->LccProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::LccProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LccProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::LccProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LccProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LccProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::LccProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::LccProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::putTile(t);

		return 0;
	}

	// void proland::LccProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::LccProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::invalidateTiles();

		return 0;
	}

	// void proland::LccProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::LccProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::LccProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::LccProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::update(scene);

		return 0;
	}

	// void proland::LccProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LccProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::LccProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::LccProducer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::LccProducer* self=Luna< ork::Object >::checkSubType< proland::LccProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LccProducer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LccProducer::getReferencedProducers(producers);

		return 0;
	}


	// Operator binds:

};

proland::LccProducer* LunaTraits< proland::LccProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LccProducer::_bind_ctor(L);
}

void LunaTraits< proland::LccProducer >::_bind_dtor(proland::LccProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LccProducer >::className[] = "LccProducer";
const char LunaTraits< proland::LccProducer >::fullName[] = "proland::LccProducer";
const char LunaTraits< proland::LccProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::LccProducer >::parents[] = {"proland.TileProducer", 0};
const int LunaTraits< proland::LccProducer >::hash = 36330718;
const int LunaTraits< proland::LccProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LccProducer >::methods[] = {
	{"setRootQuadSize", &luna_wrapper_proland_LccProducer::_bind_setRootQuadSize},
	{"getBorder", &luna_wrapper_proland_LccProducer::_bind_getBorder},
	{"hasTile", &luna_wrapper_proland_LccProducer::_bind_hasTile},
	{"findTile", &luna_wrapper_proland_LccProducer::_bind_findTile},
	{"getTile", &luna_wrapper_proland_LccProducer::_bind_getTile},
	{"prefetchTile", &luna_wrapper_proland_LccProducer::_bind_prefetchTile},
	{"putTile", &luna_wrapper_proland_LccProducer::_bind_putTile},
	{"invalidateTiles", &luna_wrapper_proland_LccProducer::_bind_invalidateTiles},
	{"invalidateTile", &luna_wrapper_proland_LccProducer::_bind_invalidateTile},
	{"update", &luna_wrapper_proland_LccProducer::_bind_update},
	{"getReferencedProducers", &luna_wrapper_proland_LccProducer::_bind_getReferencedProducers},
	{"base_toString", &luna_wrapper_proland_LccProducer::_bind_base_toString},
	{"base_getCache", &luna_wrapper_proland_LccProducer::_bind_base_getCache},
	{"base_setRootQuadSize", &luna_wrapper_proland_LccProducer::_bind_base_setRootQuadSize},
	{"base_getBorder", &luna_wrapper_proland_LccProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_LccProducer::_bind_base_hasTile},
	{"base_findTile", &luna_wrapper_proland_LccProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_LccProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_proland_LccProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_proland_LccProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_LccProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_LccProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_LccProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_LccProducer::_bind_base_getReferencedProducers},
	{"fromVoid", &luna_wrapper_proland_LccProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LccProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LccProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LccProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LccProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LccProducer >::enumValues[] = {
	{0,0}
};


