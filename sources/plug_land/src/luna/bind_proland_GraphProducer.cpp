#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GraphProducer.h>

class luna_wrapper_proland_GraphProducer {
public:
	typedef Luna< proland::GraphProducer > luna_t;

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

		proland::GraphProducer* self= (proland::GraphProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GraphProducer >::push(L,self,false);
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
		//proland::GraphProducer* ptr= dynamic_cast< proland::GraphProducer* >(Luna< ork::Object >::check(L,1));
		proland::GraphProducer* ptr= luna_caster< ork::Object, proland::GraphProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GraphProducer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::GraphProducer* ptr= dynamic_cast< proland::GraphProducer* >(Luna< proland::GraphListener >::check(L,1));
		proland::GraphProducer* ptr= luna_caster< proland::GraphListener, proland::GraphProducer >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GraphProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
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

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstPrecomputedLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPrecomputedLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFlattenCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putFlattenCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
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

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
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

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// proland::GraphPtr proland::GraphProducer::getRoot()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphPtr proland::GraphProducer::getRoot() function, expected prototype:\nproland::GraphPtr proland::GraphProducer::getRoot()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::GraphPtr proland::GraphProducer::getRoot(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::GraphPtr stack_lret = self->getRoot();
		proland::GraphPtr* lret = new proland::GraphPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::GraphPtr >::push(L,lret,true);

		return 1;
	}

	// int proland::GraphProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GraphProducer::getBorder() function, expected prototype:\nint proland::GraphProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GraphProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::GraphProducer::setTileSize(int tileSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::setTileSize(int tileSize) function, expected prototype:\nvoid proland::GraphProducer::setTileSize(int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::setTileSize(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize);

		return 0;
	}

	// void proland::GraphProducer::addMargin(proland::Margin * m)
	static int _bind_addMargin(lua_State *L) {
		if (!_lg_typecheck_addMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::addMargin(proland::Margin * m) function, expected prototype:\nvoid proland::GraphProducer::addMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::addMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMargin(m);

		return 0;
	}

	// void proland::GraphProducer::removeMargin(proland::Margin * m)
	static int _bind_removeMargin(lua_State *L) {
		if (!_lg_typecheck_removeMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::removeMargin(proland::Margin * m) function, expected prototype:\nvoid proland::GraphProducer::removeMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::removeMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeMargin(m);

		return 0;
	}

	// proland::TileCache::Tile * proland::GraphProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::GraphProducer::getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::GraphProducer::getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::GraphProducer::getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::GraphProducer::putTile(proland::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::GraphProducer::putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putTile(t);

		return 0;
	}

	// void proland::GraphProducer::graphChanged()
	static int _bind_graphChanged(lua_State *L) {
		if (!_lg_typecheck_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::graphChanged() function, expected prototype:\nvoid proland::GraphProducer::graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->graphChanged();

		return 0;
	}

	// int proland::GraphProducer::getFirstPrecomputedLevel()
	static int _bind_getFirstPrecomputedLevel(lua_State *L) {
		if (!_lg_typecheck_getFirstPrecomputedLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GraphProducer::getFirstPrecomputedLevel() function, expected prototype:\nint proland::GraphProducer::getFirstPrecomputedLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GraphProducer::getFirstPrecomputedLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFirstPrecomputedLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::GraphProducer::isPrecomputedLevel(int level)
	static int _bind_isPrecomputedLevel(lua_State *L) {
		if (!_lg_typecheck_isPrecomputedLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::GraphProducer::isPrecomputedLevel(int level) function, expected prototype:\nbool proland::GraphProducer::isPrecomputedLevel(int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::GraphProducer::isPrecomputedLevel(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isPrecomputedLevel(level);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurvePtr proland::GraphProducer::getFlattenCurve(proland::CurvePtr c)
	static int _bind_getFlattenCurve(lua_State *L) {
		if (!_lg_typecheck_getFlattenCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::GraphProducer::getFlattenCurve(proland::CurvePtr c) function, expected prototype:\nproland::CurvePtr proland::GraphProducer::getFlattenCurve(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::GraphProducer::getFlattenCurve function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::GraphProducer::getFlattenCurve(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getFlattenCurve(c);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::GraphProducer::putFlattenCurve(proland::CurveId id)
	static int _bind_putFlattenCurve(lua_State *L) {
		if (!_lg_typecheck_putFlattenCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::putFlattenCurve(proland::CurveId id) function, expected prototype:\nvoid proland::GraphProducer::putFlattenCurve(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::GraphProducer::putFlattenCurve function");
		}
		proland::CurveId id=*id_ptr;

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::putFlattenCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putFlattenCurve(id);

		return 0;
	}

	// string proland::GraphProducer::getName()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in string proland::GraphProducer::getName() function, expected prototype:\nstring proland::GraphProducer::getName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call string proland::GraphProducer::getName(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const char * proland::GraphProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::GraphProducer::base_toString() function, expected prototype:\nconst char * proland::GraphProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::GraphProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::GraphProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::GraphProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::setRootQuadSize(size);

		return 0;
	}

	// ork::ptr< proland::TileCache > proland::GraphProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::GraphProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::GraphProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::GraphProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->GraphProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::GraphProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::GraphProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::GraphProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::GraphProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::TileCache::Tile * proland::GraphProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::GraphProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::GraphProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::GraphProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->GraphProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool proland::GraphProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::GraphProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::GraphProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::GraphProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::GraphProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::GraphProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::invalidateTiles();

		return 0;
	}

	// void proland::GraphProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::GraphProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::GraphProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::GraphProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::update(scene);

		return 0;
	}

	// void proland::GraphProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::GraphProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::GraphProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::getReferencedProducers(producers);

		return 0;
	}

	// int proland::GraphProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GraphProducer::base_getBorder() function, expected prototype:\nint proland::GraphProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GraphProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GraphProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::GraphProducer::base_addMargin(proland::Margin * m)
	static int _bind_base_addMargin(lua_State *L) {
		if (!_lg_typecheck_base_addMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_addMargin(proland::Margin * m) function, expected prototype:\nvoid proland::GraphProducer::base_addMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_addMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::addMargin(m);

		return 0;
	}

	// void proland::GraphProducer::base_removeMargin(proland::Margin * m)
	static int _bind_base_removeMargin(lua_State *L) {
		if (!_lg_typecheck_base_removeMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_removeMargin(proland::Margin * m) function, expected prototype:\nvoid proland::GraphProducer::base_removeMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_removeMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::removeMargin(m);

		return 0;
	}

	// proland::TileCache::Tile * proland::GraphProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::GraphProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::GraphProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::GraphProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->GraphProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::GraphProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::GraphProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::putTile(t);

		return 0;
	}

	// void proland::GraphProducer::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphProducer::base_graphChanged() function, expected prototype:\nvoid proland::GraphProducer::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphProducer* self=Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphProducer::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphProducer::graphChanged();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_proland_GraphListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_proland_GraphListener(lua_State *L) {
		if (!_lg_typecheck_baseCast_proland_GraphListener(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_proland_GraphListener function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		proland::GraphListener* res = luna_caster<ork::Object,proland::GraphListener>::cast(self); // dynamic_cast<proland::GraphListener*>(self);
		if(!res)
			return 0;
			
		Luna< proland::GraphListener >::push(L,res,false);
		return 1;

	}

};

proland::GraphProducer* LunaTraits< proland::GraphProducer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::GraphProducer >::_bind_dtor(proland::GraphProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::GraphProducer >::className[] = "GraphProducer";
const char LunaTraits< proland::GraphProducer >::fullName[] = "proland::GraphProducer";
const char LunaTraits< proland::GraphProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::GraphProducer >::parents[] = {"proland.TileProducer", "proland.GraphListener", 0};
const int LunaTraits< proland::GraphProducer >::hash = 32483643;
const int LunaTraits< proland::GraphProducer >::uniqueIDs[] = {1381405, 23314933,0};

luna_RegType LunaTraits< proland::GraphProducer >::methods[] = {
	{"getRoot", &luna_wrapper_proland_GraphProducer::_bind_getRoot},
	{"getBorder", &luna_wrapper_proland_GraphProducer::_bind_getBorder},
	{"setTileSize", &luna_wrapper_proland_GraphProducer::_bind_setTileSize},
	{"addMargin", &luna_wrapper_proland_GraphProducer::_bind_addMargin},
	{"removeMargin", &luna_wrapper_proland_GraphProducer::_bind_removeMargin},
	{"getTile", &luna_wrapper_proland_GraphProducer::_bind_getTile},
	{"putTile", &luna_wrapper_proland_GraphProducer::_bind_putTile},
	{"graphChanged", &luna_wrapper_proland_GraphProducer::_bind_graphChanged},
	{"getFirstPrecomputedLevel", &luna_wrapper_proland_GraphProducer::_bind_getFirstPrecomputedLevel},
	{"isPrecomputedLevel", &luna_wrapper_proland_GraphProducer::_bind_isPrecomputedLevel},
	{"getFlattenCurve", &luna_wrapper_proland_GraphProducer::_bind_getFlattenCurve},
	{"putFlattenCurve", &luna_wrapper_proland_GraphProducer::_bind_putFlattenCurve},
	{"getName", &luna_wrapper_proland_GraphProducer::_bind_getName},
	{"base_toString", &luna_wrapper_proland_GraphProducer::_bind_base_toString},
	{"base_setRootQuadSize", &luna_wrapper_proland_GraphProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_proland_GraphProducer::_bind_base_getCache},
	{"base_hasTile", &luna_wrapper_proland_GraphProducer::_bind_base_hasTile},
	{"base_findTile", &luna_wrapper_proland_GraphProducer::_bind_base_findTile},
	{"base_prefetchTile", &luna_wrapper_proland_GraphProducer::_bind_base_prefetchTile},
	{"base_invalidateTiles", &luna_wrapper_proland_GraphProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_GraphProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_GraphProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_GraphProducer::_bind_base_getReferencedProducers},
	{"base_getBorder", &luna_wrapper_proland_GraphProducer::_bind_base_getBorder},
	{"base_addMargin", &luna_wrapper_proland_GraphProducer::_bind_base_addMargin},
	{"base_removeMargin", &luna_wrapper_proland_GraphProducer::_bind_base_removeMargin},
	{"base_getTile", &luna_wrapper_proland_GraphProducer::_bind_base_getTile},
	{"base_putTile", &luna_wrapper_proland_GraphProducer::_bind_base_putTile},
	{"base_graphChanged", &luna_wrapper_proland_GraphProducer::_bind_base_graphChanged},
	{"fromVoid", &luna_wrapper_proland_GraphProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GraphProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GraphProducer::_bind_getTable},
	{"asGraphListener", &luna_wrapper_proland_GraphProducer::_bind_baseCast_proland_GraphListener},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GraphProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_GraphProducer::_cast_from_Object},
	{"proland::GraphListener", &luna_wrapper_proland_GraphProducer::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GraphProducer >::enumValues[] = {
	{0,0}
};


